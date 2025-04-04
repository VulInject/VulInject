



#include "vim.h"

#if defined(FEAT_JOB_CHANNEL) || defined(PROTO)


#ifdef FEAT_GUI
# define CH_HAS_GUI (gui.in_use || gui.starting)
#endif


#ifdef MSWIN


# define SOCK_ERRNO errno = WSAGetLastError()
# undef ECONNREFUSED
# define ECONNREFUSED WSAECONNREFUSED
# undef EWOULDBLOCK
# define EWOULDBLOCK WSAEWOULDBLOCK
# undef EINPROGRESS
# define EINPROGRESS WSAEINPROGRESS
# ifdef EINTR
#  undef EINTR
# endif
# define EINTR WSAEINTR
# define sock_write(sd, buf, len) send((SOCKET)sd, buf, len, 0)
# define sock_read(sd, buf, len) recv((SOCKET)sd, buf, len, 0)
# define sock_close(sd) closesocket((SOCKET)sd)

# define UNIX_PATH_MAX 108
typedef struct sockaddr_un {
    ADDRESS_FAMILY sun_family;
    char sun_path[UNIX_PATH_MAX];
} SOCKADDR_UN, *PSOCKADDR_UN;
#else
# include <netdb.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <sys/socket.h>
# include <sys/un.h>
# ifdef HAVE_LIBGEN_H
#  include <libgen.h>
# endif
# define SOCK_ERRNO
# define sock_write(sd, buf, len) write(sd, buf, len)
# define sock_read(sd, buf, len) read(sd, buf, len)
# define sock_close(sd) close(sd)
# define fd_read(fd, buf, len) read(fd, buf, len)
# define fd_write(sd, buf, len) write(sd, buf, len)
# define fd_close(sd) close(sd)
#endif

static void channel_read(channel_T *channel, ch_part_T part, char *func);
static ch_mode_T channel_get_mode(channel_T *channel, ch_part_T part);
static int channel_get_timeout(channel_T *channel, ch_part_T part);
static ch_part_T channel_part_send(channel_T *channel);
static ch_part_T channel_part_read(channel_T *channel);

#define FOR_ALL_CHANNELS(ch) \
    for ((ch) = first_channel; (ch) != NULL; (ch) = (ch)->ch_next)



static int safe_to_invoke_callback = 0;

#ifdef MSWIN
    static int
fd_read(sock_T fd, char *buf, size_t len)
{
    HANDLE h = (HANDLE)fd;
    DWORD nread;

    if (!ReadFile(h, buf, (DWORD)len, &nread, NULL))
	return -1;
    return (int)nread;
}

    static int
fd_write(sock_T fd, char *buf, size_t len)
{
    size_t	todo = len;
    HANDLE	h = (HANDLE)fd;
    DWORD	nwrite, size, done = 0;
    OVERLAPPED	ov;

    while (todo > 0)
    {
	if (todo > MAX_NAMED_PIPE_SIZE)
	    size = MAX_NAMED_PIPE_SIZE;
	else
	    size = (DWORD)todo;
	
	
	CLEAR_FIELD(ov);
	nwrite = 0;
	if (!WriteFile(h, buf + done, size, &nwrite, &ov))
	{
	    DWORD err = GetLastError();

	    if (err != ERROR_IO_PENDING)
		return -1;
	    if (!GetOverlappedResult(h, &ov, &nwrite, FALSE))
		return -1;
	    FlushFileBuffers(h);
	}
	else if (nwrite == 0)
	    
	    
	    break;
	todo -= nwrite;
	done += nwrite;
    }
    return (int)done;
}

    static void
fd_close(sock_T fd)
{
    HANDLE h = (HANDLE)fd;

    CloseHandle(h);
}
#endif

#ifdef MSWIN
# undef PERROR
# define PERROR(msg) (void)semsg("%s: %s", msg, strerror_win32(errno))

    static char *
strerror_win32(int eno)
{
    static LPVOID msgbuf = NULL;
    char_u *ptr;

    if (msgbuf)
    {
	LocalFree(msgbuf);
	msgbuf = NULL;
    }
    FormatMessage(
	FORMAT_MESSAGE_ALLOCATE_BUFFER |
	FORMAT_MESSAGE_FROM_SYSTEM |
	FORMAT_MESSAGE_IGNORE_INSERTS,
	NULL,
	eno,
	MAKELANGID(LANG_ENGLISH, SUBLANG_DEFAULT),
	(LPTSTR) &msgbuf,
	0,
	NULL);
    if (msgbuf != NULL)
	
	for (ptr = (char_u *)msgbuf; *ptr; ptr++)
	    switch (*ptr)
	    {
		case '\r':
		    STRMOVE(ptr, ptr + 1);
		    ptr--;
		    break;
		case '\n':
		    if (*(ptr + 1) == '\0')
			*ptr = '\0';
		    else
			*ptr = ' ';
		    break;
	    }
    return msgbuf;
}
#endif


static channel_T *first_channel = NULL;
static int next_ch_id = 0;


    channel_T *
add_channel(void)
{
    ch_part_T	part;
    channel_T	*channel = ALLOC_CLEAR_ONE(channel_T);

    if (channel == NULL)
	return NULL;

    channel->ch_id = next_ch_id++;
    ch_log(channel, "Created channel");

    for (part = PART_SOCK; part < PART_COUNT; ++part)
    {
	channel->ch_part[part].ch_fd = INVALID_FD;
#ifdef FEAT_GUI_X11
	channel->ch_part[part].ch_inputHandler = (XtInputId)NULL;
#endif
#ifdef FEAT_GUI_GTK
	channel->ch_part[part].ch_inputHandler = 0;
#endif
	channel->ch_part[part].ch_timeout = 2000;
    }

    if (first_channel != NULL)
    {
	first_channel->ch_prev = channel;
	channel->ch_next = first_channel;
    }
    first_channel = channel;

    channel->ch_refcount = 1;
    return channel;
}

    int
has_any_channel(void)
{
    return first_channel != NULL;
}


    int
channel_still_useful(channel_T *channel)
{
    int has_sock_msg;
    int	has_out_msg;
    int	has_err_msg;

    
    if (channel->ch_job_killed && channel->ch_job == NULL)
	return FALSE;

    
    if (channel->ch_close_cb.cb_name != NULL)
	return TRUE;

    
    if (channel->ch_part[PART_IN].ch_bufref.br_buf != NULL)
	return TRUE;

    
    
    has_sock_msg = channel->ch_part[PART_SOCK].ch_fd != INVALID_FD
		|| channel->ch_part[PART_SOCK].ch_head.rq_next != NULL
		|| channel->ch_part[PART_SOCK].ch_json_head.jq_next != NULL;
    has_out_msg = channel->ch_part[PART_OUT].ch_fd != INVALID_FD
		  || channel->ch_part[PART_OUT].ch_head.rq_next != NULL
		  || channel->ch_part[PART_OUT].ch_json_head.jq_next != NULL;
    has_err_msg = channel->ch_part[PART_ERR].ch_fd != INVALID_FD
		  || channel->ch_part[PART_ERR].ch_head.rq_next != NULL
		  || channel->ch_part[PART_ERR].ch_json_head.jq_next != NULL;
    return (channel->ch_callback.cb_name != NULL && (has_sock_msg
		|| has_out_msg || has_err_msg))
	    || ((channel->ch_part[PART_OUT].ch_callback.cb_name != NULL
		       || channel->ch_part[PART_OUT].ch_bufref.br_buf != NULL)
		    && has_out_msg)
	    || ((channel->ch_part[PART_ERR].ch_callback.cb_name != NULL
		       || channel->ch_part[PART_ERR].ch_bufref.br_buf != NULL)
		    && has_err_msg);
}


    int
channel_can_close(channel_T *channel)
{
    return channel->ch_to_be_closed == 0;
}


    static void
channel_free_contents(channel_T *channel)
{
    channel_close(channel, TRUE);
    channel_clear(channel);
    ch_log(channel, "Freeing channel");
}


    static void
channel_free_channel(channel_T *channel)
{
    if (channel->ch_next != NULL)
	channel->ch_next->ch_prev = channel->ch_prev;
    if (channel->ch_prev == NULL)
	first_channel = channel->ch_next;
    else
	channel->ch_prev->ch_next = channel->ch_next;
    vim_free(channel);
}

    static void
channel_free(channel_T *channel)
{
    if (in_free_unref_items)
	return;

    if (safe_to_invoke_callback == 0)
	channel->ch_to_be_freed = TRUE;
    else
    {
	channel_free_contents(channel);
	channel_free_channel(channel);
    }
}


    static int
channel_may_free(channel_T *channel)
{
    if (!channel_still_useful(channel))
    {
	channel_free(channel);
	return TRUE;
    }
    return FALSE;
}


    int
channel_unref(channel_T *channel)
{
    if (channel != NULL && --channel->ch_refcount <= 0)
	return channel_may_free(channel);
    return FALSE;
}

    int
free_unused_channels_contents(int copyID, int mask)
{
    int		did_free = FALSE;
    channel_T	*ch;

    
    
    ++safe_to_invoke_callback;

    FOR_ALL_CHANNELS(ch)
	if (!channel_still_useful(ch)
				 && (ch->ch_copyID & mask) != (copyID & mask))
	{
	    
	    
	    channel_free_contents(ch);
	    did_free = TRUE;
	}

    --safe_to_invoke_callback;
    return did_free;
}

    void
free_unused_channels(int copyID, int mask)
{
    channel_T	*ch;
    channel_T	*ch_next;

    for (ch = first_channel; ch != NULL; ch = ch_next)
    {
	ch_next = ch->ch_next;
	if (!channel_still_useful(ch)
				 && (ch->ch_copyID & mask) != (copyID & mask))
	    
	    channel_free_channel(ch);
    }
}

#if defined(FEAT_GUI) || defined(PROTO)

# if defined(FEAT_GUI_X11) || defined(FEAT_GUI_GTK)

    static channel_T *
channel_fd2channel(sock_T fd, ch_part_T *partp)
{
    channel_T	*channel;
    ch_part_T	part;

    if (fd == INVALID_FD)
	return NULL;

    FOR_ALL_CHANNELS(channel)
    {
	for (part = PART_SOCK; part < PART_IN; ++part)
	    if (channel->ch_part[part].ch_fd == fd)
	    {
		*partp = part;
		return channel;
	    }
    }
    return NULL;
}

    static void
channel_read_fd(int fd)
{
    channel_T	*channel;
    ch_part_T	part;

    channel = channel_fd2channel(fd, &part);
    if (channel == NULL)
	ch_error(NULL, "Channel for fd %d not found", fd);
    else
	channel_read(channel, part, "channel_read_fd");
}
# endif


# ifdef FEAT_GUI_X11
    static void
messageFromServerX11(XtPointer clientData,
		  int *unused1 UNUSED,
		  XtInputId *unused2 UNUSED)
{
    channel_read_fd((int)(int)clientData);
}
# endif

# ifdef FEAT_GUI_GTK
#  if GTK_CHECK_VERSION(3,0,0)
    static gboolean
messageFromServerGtk3(GIOChannel *unused1 UNUSED,
		  GIOCondition unused2 UNUSED,
		  gpointer clientData)
{
    channel_read_fd(GPOINTER_TO_INT(clientData));
    return TRUE; 
		 
}
#  else
    static void
messageFromServerGtk2(gpointer clientData,
		  gint unused1 UNUSED,
		  GdkInputCondition unused2 UNUSED)
{
    channel_read_fd((int)(int)clientData);
}
#  endif
# endif

    static void
channel_gui_register_one(channel_T *channel, ch_part_T part UNUSED)
{
    if (!CH_HAS_GUI)
	return;

    
    if (channel->ch_keep_open)
	return;

# ifdef FEAT_GUI_X11
    
    
    if (channel->ch_part[part].ch_inputHandler == (XtInputId)NULL)
    {
	ch_log(channel, "Registering part %s with fd %d",
		ch_part_names[part], channel->ch_part[part].ch_fd);

	channel->ch_part[part].ch_inputHandler = XtAppAddInput(
		(XtAppContext)app_context,
		channel->ch_part[part].ch_fd,
		(XtPointer)(XtInputReadMask + XtInputExceptMask),
		messageFromServerX11,
		(XtPointer)(int)channel->ch_part[part].ch_fd);
    }
# else
#  ifdef FEAT_GUI_GTK
    
    
    if (channel->ch_part[part].ch_inputHandler == 0)
    {
	ch_log(channel, "Registering part %s with fd %d",
		ch_part_names[part], channel->ch_part[part].ch_fd);
#   if GTK_CHECK_VERSION(3,0,0)
	GIOChannel *chnnl = g_io_channel_unix_new(
		(gint)channel->ch_part[part].ch_fd);

	channel->ch_part[part].ch_inputHandler = g_io_add_watch(
		chnnl,
		G_IO_IN|G_IO_HUP|G_IO_ERR|G_IO_PRI,
		messageFromServerGtk3,
		GINT_TO_POINTER(channel->ch_part[part].ch_fd));

	g_io_channel_unref(chnnl);
#   else
	channel->ch_part[part].ch_inputHandler = gdk_input_add(
		(gint)channel->ch_part[part].ch_fd,
		(GdkInputCondition)
			     ((int)GDK_INPUT_READ + (int)GDK_INPUT_EXCEPTION),
		messageFromServerGtk2,
		(gpointer)(int)channel->ch_part[part].ch_fd);
#   endif
    }
#  endif
# endif
}

    static void
channel_gui_register(channel_T *channel)
{
    if (channel->CH_SOCK_FD != INVALID_FD)
	channel_gui_register_one(channel, PART_SOCK);
    if (channel->CH_OUT_FD != INVALID_FD
	    && channel->CH_OUT_FD != channel->CH_SOCK_FD)
	channel_gui_register_one(channel, PART_OUT);
    if (channel->CH_ERR_FD != INVALID_FD
	    && channel->CH_ERR_FD != channel->CH_SOCK_FD
	    && channel->CH_ERR_FD != channel->CH_OUT_FD)
	channel_gui_register_one(channel, PART_ERR);
}


    void
channel_gui_register_all(void)
{
    channel_T *channel;

    FOR_ALL_CHANNELS(channel)
	channel_gui_register(channel);
}

    static void
channel_gui_unregister_one(channel_T *channel UNUSED, ch_part_T part UNUSED)
{
# ifdef FEAT_GUI_X11
    if (channel->ch_part[part].ch_inputHandler != (XtInputId)NULL)
    {
	ch_log(channel, "Unregistering part %s", ch_part_names[part]);
	XtRemoveInput(channel->ch_part[part].ch_inputHandler);
	channel->ch_part[part].ch_inputHandler = (XtInputId)NULL;
    }
# else
#  ifdef FEAT_GUI_GTK
    if (channel->ch_part[part].ch_inputHandler != 0)
    {
	ch_log(channel, "Unregistering part %s", ch_part_names[part]);
#   if GTK_CHECK_VERSION(3,0,0)
	g_source_remove(channel->ch_part[part].ch_inputHandler);
#   else
	gdk_input_remove(channel->ch_part[part].ch_inputHandler);
#   endif
	channel->ch_part[part].ch_inputHandler = 0;
    }
#  endif
# endif
}

    static void
channel_gui_unregister(channel_T *channel)
{
    ch_part_T	part;

    for (part = PART_SOCK; part < PART_IN; ++part)
	channel_gui_unregister_one(channel, part);
}

#endif  


    static int
channel_connect(
	channel_T *channel,
	const struct sockaddr *server_addr,
	int server_addrlen,
	int *waittime)
{
    int		sd = -1;
#ifdef MSWIN
    u_long	val = 1;
#endif

    while (TRUE)
    {
	int	elapsed_msec = 0;
	int	waitnow;
	int	ret;

	if (sd >= 0)
	    sock_close(sd);
	sd = socket(server_addr->sa_family, SOCK_STREAM, 0);
	if (sd == -1)
	{
	    ch_error(channel, "in socket() in channel_connect().");
	    PERROR(_(e_socket_in_channel_connect));
	    return -1;
	}

	if (*waittime >= 0)
	{
	    
	    if (
#ifdef MSWIN
		ioctlsocket(sd, FIONBIO, &val) < 0
#else
		fcntl(sd, F_SETFL, O_NONBLOCK) < 0
#endif
	       )
	    {
		SOCK_ERRNO;
		ch_error(channel,
		      "channel_connect: Connect failed with errno %d", errno);
		sock_close(sd);
		return -1;
	    }
	}

	
	ch_log(channel, "Connecting...");

	ret = connect(sd, server_addr, server_addrlen);
	if (ret == 0)
	    
	    break;

	SOCK_ERRNO;
	if (*waittime < 0 || (errno != EWOULDBLOCK
		&& errno != ECONNREFUSED
#ifdef EINPROGRESS
		&& errno != EINPROGRESS
#endif
		))
	{
	    ch_error(channel,
		      "channel_connect: Connect failed with errno %d", errno);
	    PERROR(_(e_cannot_connect_to_port));
	    sock_close(sd);
	    return -1;
	}
	else if (errno == ECONNREFUSED)
	{
	    ch_error(channel, "channel_connect: Connection refused");
	    sock_close(sd);
	    return -1;
	}

	
	
	waitnow = *waittime > 50 ? 50 : *waittime;

	
	
	{
	    struct timeval	tv;
	    fd_set		rfds;
	    fd_set		wfds;
#ifndef MSWIN
	    int			so_error = 0;
	    socklen_t		so_error_len = sizeof(so_error);
	    struct timeval	start_tv;
	    struct timeval	end_tv;
#endif
	    FD_ZERO(&rfds);
	    FD_SET(sd, &rfds);
	    FD_ZERO(&wfds);
	    FD_SET(sd, &wfds);

	    tv.tv_sec = waitnow / 1000;
	    tv.tv_usec = (waitnow % 1000) * 1000;
#ifndef MSWIN
	    gettimeofday(&start_tv, NULL);
#endif
	    ch_log(channel,
		      "Waiting for connection (waiting %d msec)...", waitnow);

	    ret = select(sd + 1, &rfds, &wfds, NULL, &tv);
	    if (ret < 0)
	    {
		SOCK_ERRNO;
		ch_error(channel,
		      "channel_connect: Connect failed with errno %d", errno);
		PERROR(_(e_cannot_connect_to_port));
		sock_close(sd);
		return -1;
	    }

#ifdef MSWIN
	    
	    
	    if (FD_ISSET(sd, &wfds))
		break;
	    elapsed_msec = waitnow;
	    if (*waittime > 1 && elapsed_msec < *waittime)
	    {
		*waittime -= elapsed_msec;
		continue;
	    }
#else
	    
	    
	    
	    
	    
	    
	    
	    if (FD_ISSET(sd, &rfds) || FD_ISSET(sd, &wfds))
	    {
		ret = getsockopt(sd,
			      SOL_SOCKET, SO_ERROR, &so_error, &so_error_len);
		if (ret < 0 || (so_error != 0
			&& so_error != EWOULDBLOCK
			&& so_error != ECONNREFUSED
# ifdef EINPROGRESS
			&& so_error != EINPROGRESS
# endif
			))
		{
		    ch_error(channel,
			    "channel_connect: Connect failed with errno %d",
			    so_error);
		    PERROR(_(e_cannot_connect_to_port));
		    sock_close(sd);
		    return -1;
		}
		else if (errno == ECONNREFUSED)
		{
		    ch_error(channel, "channel_connect: Connection refused");
		    sock_close(sd);
		    return -1;
		}
	    }

	    if (FD_ISSET(sd, &wfds) && so_error == 0)
		
		break;

	    gettimeofday(&end_tv, NULL);
	    elapsed_msec = (end_tv.tv_sec - start_tv.tv_sec) * 1000
				 + (end_tv.tv_usec - start_tv.tv_usec) / 1000;
#endif
	}

#ifndef MSWIN
	if (*waittime > 1 && elapsed_msec < *waittime)
	{
	    
	    
	    
	    
	    waitnow -= elapsed_msec;
	    *waittime -= elapsed_msec;
	    if (waitnow > 0)
	    {
		mch_delay((int)waitnow, MCH_DELAY_IGNOREINPUT);
		ui_breakcheck();
		*waittime -= waitnow;
	    }
	    if (!got_int)
	    {
		if (*waittime <= 0)
		    
		    *waittime = 1;
		continue;
	    }
	    
	}
#endif

	
	ch_error(channel, "Connection timed out");
	sock_close(sd);
	return -1;
    }

    if (*waittime >= 0)
    {
#ifdef MSWIN
	val = 0;
	ioctlsocket(sd, FIONBIO, &val);
#else
	(void)fcntl(sd, F_SETFL, 0);
#endif
    }

    return sd;
}


    static channel_T *
channel_open_unix(
	const char *path,
	void (*nb_close_cb)(void))
{
    channel_T		*channel = NULL;
    int			sd = -1;
    size_t		path_len = STRLEN(path);
    struct sockaddr_un	server;
    size_t		server_len;
    int			waittime = -1;

    if (*path == NUL || path_len >= sizeof(server.sun_path))
    {
	semsg(_(e_invalid_argument_str), path);
	return NULL;
    }

    channel = add_channel();
    if (channel == NULL)
    {
	ch_error(NULL, "Cannot allocate channel.");
	return NULL;
    }

    CLEAR_FIELD(server);
    server.sun_family = AF_UNIX;
    STRNCPY(server.sun_path, path, sizeof(server.sun_path) - 1);

    ch_log(channel, "Trying to connect to %s", path);

    server_len = offsetof(struct sockaddr_un, sun_path) + path_len + 1;
    sd = channel_connect(channel, (struct sockaddr *)&server, (int)server_len,
								   &waittime);

    if (sd < 0)
    {
	channel_free(channel);
	return NULL;
    }

    ch_log(channel, "Connection made");

    channel->CH_SOCK_FD = (sock_T)sd;
    channel->ch_nb_close_cb = nb_close_cb;
    channel->ch_hostname = (char *)vim_strsave((char_u *)path);
    channel->ch_port = 0;
    channel->ch_to_be_closed |= (1U << PART_SOCK);

#ifdef FEAT_GUI
    channel_gui_register_one(channel, PART_SOCK);
#endif

    return channel;
}


    channel_T *
channel_open(
	const char *hostname,
	int port,
	int waittime,
	void (*nb_close_cb)(void))
{
    int			sd = -1;
    channel_T		*channel = NULL;
#ifdef FEAT_IPV6
    int			err;
    struct addrinfo	hints;
    struct addrinfo	*res = NULL;
    struct addrinfo	*addr = NULL;
#else
    struct sockaddr_in	server;
    struct hostent	*host = NULL;
#endif

#ifdef MSWIN
    channel_init_winsock();
#endif

    channel = add_channel();
    if (channel == NULL)
    {
	ch_error(NULL, "Cannot allocate channel.");
	return NULL;
    }

    
    
#ifdef FEAT_IPV6
    CLEAR_FIELD(hints);
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
# if defined(__ANDROID__)
    hints.ai_flags = AI_ADDRCONFIG;
# elif defined(AI_ADDRCONFIG) && defined(AI_V4MAPPED)
    hints.ai_flags = AI_ADDRCONFIG | AI_V4MAPPED;
# endif
    
    
    
    if ((err = getaddrinfo(hostname, NULL, &hints, &res)) != 0)
    {
	ch_error(channel, "in getaddrinfo() in channel_open()");
	semsg(_(e_getaddrinfo_in_channel_open_str), gai_strerror(err));
	channel_free(channel);
	return NULL;
    }

    for (addr = res; addr != NULL; addr = addr->ai_next)
    {
	const char  *dst = hostname;
# ifdef HAVE_INET_NTOP
	const void  *src = NULL;
	char	    buf[NUMBUFLEN];
# endif

	if (addr->ai_family == AF_INET6)
	{
	    struct sockaddr_in6 *sai = (struct sockaddr_in6 *)addr->ai_addr;

	    sai->sin6_port = htons(port);
# ifdef HAVE_INET_NTOP
	    src = &sai->sin6_addr;
# endif
	}
	else if (addr->ai_family == AF_INET)
	{
	    struct sockaddr_in *sai = (struct sockaddr_in *)addr->ai_addr;

	    sai->sin_port = htons(port);
# ifdef HAVE_INET_NTOP
	    src = &sai->sin_addr;
#endif
	}
# ifdef HAVE_INET_NTOP
	if (src != NULL)
	{
	    dst = inet_ntop(addr->ai_family, src, buf, sizeof(buf));
	    if (dst == NULL)
		dst = hostname;
	    else if (STRCMP(hostname, dst) != 0)
		ch_log(channel, "Resolved %s to %s", hostname, dst);
	}
# endif

	ch_log(channel, "Trying to connect to %s port %d", dst, port);

	
	
	
	
	
	if (waittime == 0)
	    waittime = 15;

	sd = channel_connect(channel, addr->ai_addr, (int)addr->ai_addrlen,
								   &waittime);
	if (sd >= 0)
	    break;
    }

    freeaddrinfo(res);
#else
    CLEAR_FIELD(server);
    server.sin_family = AF_INET;
    server.sin_port = htons(port);
    if ((host = gethostbyname(hostname)) == NULL)
    {
	ch_error(channel, "in gethostbyname() in channel_open()");
	PERROR(_(e_gethostbyname_in_channel_open));
	channel_free(channel);
	return NULL;
    }
    {
	char *p;

	
	
	memcpy(&p, &host->h_addr_list[0], sizeof(p));
	memcpy((char *)&server.sin_addr, p, host->h_length);
    }

    ch_log(channel, "Trying to connect to %s port %d", hostname, port);

    
    
    
    if (waittime == 0)
	waittime = 1;

    sd = channel_connect(channel, (struct sockaddr *)&server, sizeof(server),
								   &waittime);
#endif

    if (sd < 0)
    {
	channel_free(channel);
	return NULL;
    }

    ch_log(channel, "Connection made");

    channel->CH_SOCK_FD = (sock_T)sd;
    channel->ch_nb_close_cb = nb_close_cb;
    channel->ch_hostname = (char *)vim_strsave((char_u *)hostname);
    channel->ch_port = port;
    channel->ch_to_be_closed |= (1U << PART_SOCK);

#ifdef FEAT_GUI
    channel_gui_register_one(channel, PART_SOCK);
#endif

    return channel;
}

    static void
free_set_callback(callback_T *cbp, callback_T *callback)
{
    free_callback(cbp);

    if (callback->cb_name != NULL && *callback->cb_name != NUL)
	copy_callback(cbp, callback);
    else
	cbp->cb_name = NULL;
}


	static void
prepare_buffer(buf_T *buf)
{
    buf_T *save_curbuf = curbuf;

    buf_copy_options(buf, BCO_ENTER);
    curbuf = buf;
#ifdef FEAT_QUICKFIX
    set_option_value_give_err((char_u *)"bt",
					    0L, (char_u *)"nofile", OPT_LOCAL);
    set_option_value_give_err((char_u *)"bh", 0L, (char_u *)"hide", OPT_LOCAL);
#endif
    if (curbuf->b_ml.ml_mfp == NULL)
	ml_open(curbuf);
    curbuf = save_curbuf;
}


    static buf_T *
channel_find_buffer(char_u *name, int err, int msg)
{
    buf_T *buf = NULL;
    buf_T *save_curbuf = curbuf;

    if (name != NULL && *name != NUL)
    {
	buf = buflist_findname(name);
	if (buf == NULL)
	    buf = buflist_findname_exp(name);
    }

    if (buf != NULL)
	return buf;

    buf = buflist_new(name == NULL || *name == NUL ? NULL : name,
	    NULL, (linenr_T)0, BLN_LISTED | BLN_NEW);
    if (buf == NULL)
	return NULL;
    prepare_buffer(buf);

    curbuf = buf;
    if (msg)
	ml_replace(1, (char_u *)(err ? "Reading from channel error..."
		    : "Reading from channel output..."), TRUE);
    changed_bytes(1, 0);
    curbuf = save_curbuf;

    return buf;
}


    static void
channel_set_options(channel_T *channel, jobopt_T *opt)
{
    ch_part_T	part;

    if (opt->jo_set & JO_MODE)
	for (part = PART_SOCK; part < PART_COUNT; ++part)
	    channel->ch_part[part].ch_mode = opt->jo_mode;
    if (opt->jo_set & JO_IN_MODE)
	channel->ch_part[PART_IN].ch_mode = opt->jo_in_mode;
    if (opt->jo_set & JO_OUT_MODE)
	channel->ch_part[PART_OUT].ch_mode = opt->jo_out_mode;
    if (opt->jo_set & JO_ERR_MODE)
	channel->ch_part[PART_ERR].ch_mode = opt->jo_err_mode;
    channel->ch_nonblock = opt->jo_noblock;

    if (opt->jo_set & JO_TIMEOUT)
	for (part = PART_SOCK; part < PART_COUNT; ++part)
	    channel->ch_part[part].ch_timeout = opt->jo_timeout;
    if (opt->jo_set & JO_OUT_TIMEOUT)
	channel->ch_part[PART_OUT].ch_timeout = opt->jo_out_timeout;
    if (opt->jo_set & JO_ERR_TIMEOUT)
	channel->ch_part[PART_ERR].ch_timeout = opt->jo_err_timeout;
    if (opt->jo_set & JO_BLOCK_WRITE)
	channel->ch_part[PART_IN].ch_block_write = 1;

    if (opt->jo_set & JO_CALLBACK)
	free_set_callback(&channel->ch_callback, &opt->jo_callback);
    if (opt->jo_set & JO_OUT_CALLBACK)
	free_set_callback(&channel->ch_part[PART_OUT].ch_callback,
							      &opt->jo_out_cb);
    if (opt->jo_set & JO_ERR_CALLBACK)
	free_set_callback(&channel->ch_part[PART_ERR].ch_callback,
							      &opt->jo_err_cb);
    if (opt->jo_set & JO_CLOSE_CALLBACK)
	free_set_callback(&channel->ch_close_cb, &opt->jo_close_cb);
    channel->ch_drop_never = opt->jo_drop_never;

    if ((opt->jo_set & JO_OUT_IO) && opt->jo_io[PART_OUT] == JIO_BUFFER)
    {
	buf_T *buf;

	
	if (!(opt->jo_set & JO_OUT_MODE))
	    channel->ch_part[PART_OUT].ch_mode = CH_MODE_NL;
	if (opt->jo_set & JO_OUT_BUF)
	{
	    buf = buflist_findnr(opt->jo_io_buf[PART_OUT]);
	    if (buf == NULL)
		semsg(_(e_buffer_nr_does_not_exist),
					       (int)opt->jo_io_buf[PART_OUT]);
	}
	else
	{
	    int msg = TRUE;

	    if (opt->jo_set2 & JO2_OUT_MSG)
		msg = opt->jo_message[PART_OUT];
	    buf = channel_find_buffer(opt->jo_io_name[PART_OUT], FALSE, msg);
	}
	if (buf != NULL)
	{
	    if (opt->jo_set & JO_OUT_MODIFIABLE)
		channel->ch_part[PART_OUT].ch_nomodifiable =
						!opt->jo_modifiable[PART_OUT];

	    if (!buf->b_p_ma && !channel->ch_part[PART_OUT].ch_nomodifiable)
	    {
		emsg(_(e_cannot_make_changes_modifiable_is_off));
	    }
	    else
	    {
		ch_log(channel, "writing out to buffer '%s'",
						       (char *)buf->b_ffname);
		set_bufref(&channel->ch_part[PART_OUT].ch_bufref, buf);
		
		if (buf->b_ml.ml_mfp == NULL)
		    prepare_buffer(buf);
	    }
	}
    }

    if ((opt->jo_set & JO_ERR_IO) && (opt->jo_io[PART_ERR] == JIO_BUFFER
	 || (opt->jo_io[PART_ERR] == JIO_OUT && (opt->jo_set & JO_OUT_IO)
				       && opt->jo_io[PART_OUT] == JIO_BUFFER)))
    {
	buf_T *buf;

	
	if (!(opt->jo_set & JO_ERR_MODE))
	    channel->ch_part[PART_ERR].ch_mode = CH_MODE_NL;
	if (opt->jo_io[PART_ERR] == JIO_OUT)
	    buf = channel->ch_part[PART_OUT].ch_bufref.br_buf;
	else if (opt->jo_set & JO_ERR_BUF)
	{
	    buf = buflist_findnr(opt->jo_io_buf[PART_ERR]);
	    if (buf == NULL)
		semsg(_(e_buffer_nr_does_not_exist),
					       (int)opt->jo_io_buf[PART_ERR]);
	}
	else
	{
	    int msg = TRUE;

	    if (opt->jo_set2 & JO2_ERR_MSG)
		msg = opt->jo_message[PART_ERR];
	    buf = channel_find_buffer(opt->jo_io_name[PART_ERR], TRUE, msg);
	}
	if (buf != NULL)
	{
	    if (opt->jo_set & JO_ERR_MODIFIABLE)
		channel->ch_part[PART_ERR].ch_nomodifiable =
						!opt->jo_modifiable[PART_ERR];
	    if (!buf->b_p_ma && !channel->ch_part[PART_ERR].ch_nomodifiable)
	    {
		emsg(_(e_cannot_make_changes_modifiable_is_off));
	    }
	    else
	    {
		ch_log(channel, "writing err to buffer '%s'",
						       (char *)buf->b_ffname);
		set_bufref(&channel->ch_part[PART_ERR].ch_bufref, buf);
		
		if (buf->b_ml.ml_mfp == NULL)
		    prepare_buffer(buf);
	    }
	}
    }

    channel->ch_part[PART_OUT].ch_io = opt->jo_io[PART_OUT];
    channel->ch_part[PART_ERR].ch_io = opt->jo_io[PART_ERR];
    channel->ch_part[PART_IN].ch_io = opt->jo_io[PART_IN];
}


    static channel_T *
channel_open_func(typval_T *argvars)
{
    char_u	*address;
    char_u	*p;
    char	*rest;
    int		port = 0;
    int		is_ipv6 = FALSE;
    int		is_unix = FALSE;
    jobopt_T    opt;
    channel_T	*channel = NULL;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_opt_dict_arg(argvars, 1) == FAIL))
	return NULL;

    address = tv_get_string(&argvars[0]);
    if (argvars[1].v_type != VAR_UNKNOWN
	    && check_for_nonnull_dict_arg(argvars, 1) == FAIL)
	return NULL;

    if (*address == NUL)
    {
	semsg(_(e_invalid_argument_str), address);
	return NULL;
    }

    if (!STRNCMP(address, "unix:", 5))
    {
	is_unix = TRUE;
	address += 5;
    }
    else if (*address == '[')
    {
	
	is_ipv6 = TRUE;
	p = vim_strchr(address + 1, ']');
	if (p == NULL || *++p != ':')
	{
	    semsg(_(e_invalid_argument_str), address);
	    return NULL;
	}
    }
    else
    {
	
	p = vim_strchr(address, ':');
	if (p == NULL)
	{
	    semsg(_(e_invalid_argument_str), address);
	    return NULL;
	}
    }

    if (!is_unix)
    {
	port = strtol((char *)(p + 1), &rest, 10);
	if (port <= 0 || port >= 65536 || *rest != NUL)
	{
	    semsg(_(e_invalid_argument_str), address);
	    return NULL;
	}
	if (is_ipv6)
	{
	    
	    ++address;
	    *(p - 1) = NUL;
	}
	else
	    *p = NUL;
    }

    
    clear_job_options(&opt);
    opt.jo_mode = CH_MODE_JSON;
    opt.jo_timeout = 2000;
    if (get_job_options(&argvars[1], &opt,
	    JO_MODE_ALL + JO_CB_ALL + JO_TIMEOUT_ALL
		+ (is_unix? 0 : JO_WAITTIME), 0) == FAIL)
	goto theend;
    if (opt.jo_timeout < 0)
    {
	emsg(_(e_invalid_argument));
	goto theend;
    }

    if (is_unix)
	channel = channel_open_unix((char *)address, NULL);
    else
	channel = channel_open((char *)address, port, opt.jo_waittime, NULL);
    if (channel != NULL)
    {
	opt.jo_set = JO_ALL;
	channel_set_options(channel, &opt);
    }
theend:
    free_job_options(&opt);
    return channel;
}

    void
ch_close_part(channel_T *channel, ch_part_T part)
{
    sock_T *fd = &channel->ch_part[part].ch_fd;

    if (*fd == INVALID_FD)
	return;

    if (part == PART_SOCK)
	sock_close(*fd);
    else
    {
	
	
	if ((part == PART_IN || channel->CH_IN_FD != *fd)
		&& (part == PART_OUT || channel->CH_OUT_FD != *fd)
		&& (part == PART_ERR || channel->CH_ERR_FD != *fd))
	{
#ifdef MSWIN
	    if (channel->ch_named_pipe)
		DisconnectNamedPipe((HANDLE)fd);
#endif
	    fd_close(*fd);
	}
    }
    *fd = INVALID_FD;

    
    channel->ch_to_be_closed &= ~(1U << part);
}

    void
channel_set_pipes(channel_T *channel, sock_T in, sock_T out, sock_T err)
{
    if (in != INVALID_FD)
    {
	ch_close_part(channel, PART_IN);
	channel->CH_IN_FD = in;
# if defined(UNIX)
	
	
	if (mch_isatty(in))
	    channel->ch_to_be_closed |= (1U << PART_IN);
# endif
    }
    if (out != INVALID_FD)
    {
# if defined(FEAT_GUI)
	channel_gui_unregister_one(channel, PART_OUT);
# endif
	ch_close_part(channel, PART_OUT);
	channel->CH_OUT_FD = out;
	channel->ch_to_be_closed |= (1U << PART_OUT);
# if defined(FEAT_GUI)
	channel_gui_register_one(channel, PART_OUT);
# endif
    }
    if (err != INVALID_FD)
    {
# if defined(FEAT_GUI)
	channel_gui_unregister_one(channel, PART_ERR);
# endif
	ch_close_part(channel, PART_ERR);
	channel->CH_ERR_FD = err;
	channel->ch_to_be_closed |= (1U << PART_ERR);
# if defined(FEAT_GUI)
	channel_gui_register_one(channel, PART_ERR);
# endif
    }
}


    void
channel_set_job(channel_T *channel, job_T *job, jobopt_T *options)
{
    channel->ch_job = job;

    channel_set_options(channel, options);

    if (job->jv_in_buf == NULL)
	return;

    chanpart_T *in_part = &channel->ch_part[PART_IN];

    set_bufref(&in_part->ch_bufref, job->jv_in_buf);
    ch_log(channel, "reading from buffer '%s'",
	    (char *)in_part->ch_bufref.br_buf->b_ffname);
    if (options->jo_set & JO_IN_TOP)
    {
	if (options->jo_in_top == 0 && !(options->jo_set & JO_IN_BOT))
	{
	    
	    
	    in_part->ch_bufref.br_buf->b_write_to_channel = TRUE;
	    in_part->ch_buf_append = TRUE;
	    in_part->ch_buf_top =
		in_part->ch_bufref.br_buf->b_ml.ml_line_count + 1;
	}
	else
	    in_part->ch_buf_top = options->jo_in_top;
    }
    else
	in_part->ch_buf_top = 1;
    if (options->jo_set & JO_IN_BOT)
	in_part->ch_buf_bot = options->jo_in_bot;
    else
	in_part->ch_buf_bot = in_part->ch_bufref.br_buf->b_ml.ml_line_count;
}


    static void
channel_set_req_callback(
	channel_T   *channel,
	ch_part_T   part,
	callback_T  *callback,
	int	    id)
{
    cbq_T *head = &channel->ch_part[part].ch_cb_head;
    cbq_T *item = ALLOC_ONE(cbq_T);

    if (item == NULL)
	return;

    copy_callback(&item->cq_callback, callback);
    item->cq_seq_nr = id;
    item->cq_prev = head->cq_prev;
    head->cq_prev = item;
    item->cq_next = NULL;
    if (item->cq_prev == NULL)
	head->cq_next = item;
    else
	item->cq_prev->cq_next = item;
}

    static void
write_buf_line(buf_T *buf, linenr_T lnum, channel_T *channel)
{
    char_u  *line = ml_get_buf(buf, lnum, FALSE);
    int	    len = ml_get_buf_len(buf, lnum);
    char_u  *p;
    int	    i;

    
    if ((p = alloc(len + 2)) == NULL)
	return;
    memcpy((char *)p, (char *)line, len);

    if (channel->ch_write_text_mode)
	p[len] = CAR;
    else
    {
	for (i = 0; i < len; ++i)
	    if (p[i] == NL)
		p[i] = NUL;

	p[len] = NL;
    }
    p[len + 1] = NUL;
    channel_send(channel, PART_IN, p, len + 1, "write_buf_line");
    vim_free(p);
}


    static int
can_write_buf_line(channel_T *channel)
{
    chanpart_T *in_part = &channel->ch_part[PART_IN];

    if (in_part->ch_fd == INVALID_FD)
	return FALSE;  

    
    if (in_part->ch_block_write == 1)
	in_part->ch_block_write = -1;
    else if (in_part->ch_block_write == -1)
	in_part->ch_block_write = 1;

    
#ifndef MSWIN
    {
# if defined(HAVE_SELECT)
	struct timeval	tval;
	fd_set		wfds;
	int		ret;

	FD_ZERO(&wfds);
	FD_SET((int)in_part->ch_fd, &wfds);
	tval.tv_sec = 0;
	tval.tv_usec = 0;
	for (;;)
	{
	    ret = select((int)in_part->ch_fd + 1, NULL, &wfds, NULL, &tval);
#  ifdef EINTR
	    SOCK_ERRNO;
	    if (ret == -1 && errno == EINTR)
		continue;
#  endif
	    if (ret <= 0 || in_part->ch_block_write == 1)
	    {
		if (ret > 0)
		    ch_log(channel, "FAKED Input not ready for writing");
		else
		    ch_log(channel, "Input not ready for writing");
		return FALSE;
	    }
	    break;
	}
# else
	struct pollfd	fds;

	fds.fd = in_part->ch_fd;
	fds.events = POLLOUT;
	if (poll(&fds, 1, 0) <= 0)
	{
	    ch_log(channel, "Input not ready for writing");
	    return FALSE;
	}
	if (in_part->ch_block_write == 1)
	{
	    ch_log(channel, "FAKED Input not ready for writing");
	    return FALSE;
	}
# endif
    }
#endif
    return TRUE;
}


    void
channel_write_in(channel_T *channel)
{
    chanpart_T *in_part = &channel->ch_part[PART_IN];
    linenr_T    lnum;
    buf_T	*buf = in_part->ch_bufref.br_buf;
    int		written = 0;

    if (buf == NULL || in_part->ch_buf_append)
	return;  
    if (!bufref_valid(&in_part->ch_bufref) || buf->b_ml.ml_mfp == NULL)
    {
	
	ch_log(channel, "input buffer has been wiped out");
	in_part->ch_bufref.br_buf = NULL;
	return;
    }

    for (lnum = in_part->ch_buf_top; lnum <= in_part->ch_buf_bot
				   && lnum <= buf->b_ml.ml_line_count; ++lnum)
    {
	if (!can_write_buf_line(channel))
	    break;
	write_buf_line(buf, lnum, channel);
	++written;
    }

    if (written == 1)
	ch_log(channel, "written line %d to channel", (int)lnum - 1);
    else if (written > 1)
	ch_log(channel, "written %d lines to channel", written);

    in_part->ch_buf_top = lnum;
    if (lnum > buf->b_ml.ml_line_count || lnum > in_part->ch_buf_bot)
    {
#if defined(FEAT_TERMINAL)
	
	if (channel->ch_job != NULL)
	    term_send_eof(channel);
#endif

	
	in_part->ch_bufref.br_buf = NULL;
	ch_log(channel, "Finished writing all lines to channel");

	
	ch_close_part(channel, PART_IN);
    }
    else
	ch_log(channel, "Still %ld more lines to write",
				   (int)(buf->b_ml.ml_line_count - lnum + 1));
}


    void
channel_buffer_free(buf_T *buf)
{
    channel_T	*channel;
    ch_part_T	part;

    FOR_ALL_CHANNELS(channel)
	for (part = PART_SOCK; part < PART_COUNT; ++part)
	{
	    chanpart_T  *ch_part = &channel->ch_part[part];

	    if (ch_part->ch_bufref.br_buf == buf)
	    {
		ch_log(channel, "%s buffer has been wiped out",
							  ch_part_names[part]);
		ch_part->ch_bufref.br_buf = NULL;
	    }
	}
}


    static void
channel_write_input(channel_T *channel)
{
    chanpart_T	*in_part = &channel->ch_part[PART_IN];

    if (in_part->ch_writeque.wq_next != NULL)
	channel_send(channel, PART_IN, (char_u *)"", 0, "channel_write_input");
    else if (in_part->ch_bufref.br_buf != NULL)
    {
	if (in_part->ch_buf_append)
	    channel_write_new_lines(in_part->ch_bufref.br_buf);
	else
	    channel_write_in(channel);
    }
}


    void
channel_write_any_lines(void)
{
    channel_T	*channel;

    FOR_ALL_CHANNELS(channel)
	channel_write_input(channel);
}


    void
channel_write_new_lines(buf_T *buf)
{
    channel_T	*channel;
    int		found_one = FALSE;

    
    
    FOR_ALL_CHANNELS(channel)
    {
	chanpart_T  *in_part = &channel->ch_part[PART_IN];
	linenr_T    lnum;
	int	    written = 0;

	if (in_part->ch_bufref.br_buf == buf && in_part->ch_buf_append)
	{
	    if (in_part->ch_fd == INVALID_FD)
		continue;  
	    found_one = TRUE;
	    for (lnum = in_part->ch_buf_bot; lnum < buf->b_ml.ml_line_count;
								       ++lnum)
	    {
		if (!can_write_buf_line(channel))
		    break;
		write_buf_line(buf, lnum, channel);
		++written;
	    }

	    if (written == 1)
		ch_log(channel, "written line %d to channel", (int)lnum - 1);
	    else if (written > 1)
		ch_log(channel, "written %d lines to channel", written);
	    if (lnum < buf->b_ml.ml_line_count)
		ch_log(channel, "Still %ld more lines to write",
				       (int)(buf->b_ml.ml_line_count - lnum));

	    in_part->ch_buf_bot = lnum;
	}
    }
    if (!found_one)
	buf->b_write_to_channel = FALSE;
}


    static void
invoke_callback(channel_T *channel, callback_T *callback, typval_T *argv)
{
    typval_T	rettv;

    if (safe_to_invoke_callback == 0)
	iemsg("Invoking callback when it is not safe");

    argv[0].v_type = VAR_CHANNEL;
    argv[0].vval.v_channel = channel;

    call_callback(callback, -1, &rettv, 2, argv);
    clear_tv(&rettv);
    channel_need_redraw = TRUE;
}


    readq_T *
channel_peek(channel_T *channel, ch_part_T part)
{
    readq_T *head = &channel->ch_part[part].ch_head;

    return head->rq_next;
}


    char_u *
channel_first_nl(readq_T *node)
{
    char_u  *buffer = node->rq_buffer;
    long_u  i;

    for (i = 0; i < node->rq_buflen; ++i)
	if (buffer[i] == NL)
	    return buffer + i;
    return NULL;
}


    char_u *
channel_get(channel_T *channel, ch_part_T part, int *outlen)
{
    readq_T *head = &channel->ch_part[part].ch_head;
    readq_T *node = head->rq_next;
    char_u *p;

    if (node == NULL)
	return NULL;
    if (outlen != NULL)
	*outlen += node->rq_buflen;
    
    p = node->rq_buffer;
    head->rq_next = node->rq_next;
    if (node->rq_next == NULL)
	head->rq_prev = NULL;
    else
	node->rq_next->rq_prev = NULL;
    vim_free(node);
    return p;
}


    static char_u *
channel_get_all(channel_T *channel, ch_part_T part, int *outlen)
{
    readq_T *head = &channel->ch_part[part].ch_head;
    readq_T *node;
    long_u  len = 0;
    char_u  *res;
    char_u  *p;

    
    for (node = head->rq_next; node != NULL; node = node->rq_next)
	len += node->rq_buflen;
    res = alloc(len + 1);
    if (res == NULL)
	return NULL;
    p = res;
    for (node = head->rq_next; node != NULL; node = node->rq_next)
    {
	mch_memmove(p, node->rq_buffer, node->rq_buflen);
	p += node->rq_buflen;
    }
    *p = NUL;

    
    do
    {
	p = channel_get(channel, part, NULL);
	vim_free(p);
    } while (p != NULL);

    if (outlen != NULL)
    {
	
	*outlen += len;
	return res;
    }

    
    p = res;
    while (p < res + len)
    {
	if (*p == NUL)
	    *p = NL;
#ifdef MSWIN
	else if (*p == 0x1b)
	{
	    
	    if (p + 3 < res + len
		    && p[1] == ']'
		    && (p[2] == '0' || p[2] == '1' || p[2] == '2')
		    && p[3] == ';')
	    {
		
		while (p < res + (len - 1) && *p != '\a')
		    ++p;
		
		
		if (p[-1] == NUL)
		    p[-1] = 0x07;
	    }
	}
#endif
	++p;
    }

    return res;
}


    void
channel_consume(channel_T *channel, ch_part_T part, int len)
{
    readq_T *head = &channel->ch_part[part].ch_head;
    readq_T *node = head->rq_next;
    char_u *buf = node->rq_buffer;

    mch_memmove(buf, buf + len, node->rq_buflen - len);
    node->rq_buflen -= len;
    node->rq_buffer[node->rq_buflen] = NUL;
}


    int
channel_collapse(channel_T *channel, ch_part_T part, int want_nl)
{
    ch_mode_T	mode = channel->ch_part[part].ch_mode;
    readq_T	*head = &channel->ch_part[part].ch_head;
    readq_T	*node = head->rq_next;
    readq_T	*last_node;
    readq_T	*n;
    char_u	*newbuf;
    char_u	*p;
    long_u	len;

    if (node == NULL || node->rq_next == NULL)
	return FAIL;

    last_node = node->rq_next;
    len = node->rq_buflen + last_node->rq_buflen;
    if (want_nl || mode == CH_MODE_LSP)
	while (last_node->rq_next != NULL
		&& (mode == CH_MODE_LSP
		    || channel_first_nl(last_node) == NULL))
	{
	    last_node = last_node->rq_next;
	    len += last_node->rq_buflen;
	}

    p = newbuf = alloc(len + 1);
    if (newbuf == NULL)
	return FAIL;	    
    mch_memmove(p, node->rq_buffer, node->rq_buflen);
    p += node->rq_buflen;
    vim_free(node->rq_buffer);
    node->rq_buffer = newbuf;
    for (n = node; n != last_node; )
    {
	n = n->rq_next;
	mch_memmove(p, n->rq_buffer, n->rq_buflen);
	p += n->rq_buflen;
	vim_free(n->rq_buffer);
    }
    *p = NUL;
    node->rq_buflen = (long_u)(p - newbuf);

    
    for (n = node->rq_next; n != last_node; )
    {
	n = n->rq_next;
	vim_free(n->rq_prev);
    }
    node->rq_next = last_node->rq_next;
    if (last_node->rq_next == NULL)
	head->rq_prev = node;
    else
	last_node->rq_next->rq_prev = node;
    vim_free(last_node);
    return OK;
}


    static int
channel_save(channel_T *channel, ch_part_T part, char_u *buf, int len,
						      int prepend, char *lead)
{
    readq_T *node;
    readq_T *head = &channel->ch_part[part].ch_head;
    char_u  *p;
    int	    i;

    node = ALLOC_ONE(readq_T);
    if (node == NULL)
	return FAIL;	    
    
    
    node->rq_buffer = alloc(len + 1);
    if (node->rq_buffer == NULL)
    {
	vim_free(node);
	return FAIL;	    
    }

    if (channel->ch_part[part].ch_mode == CH_MODE_NL)
    {
	
	p = node->rq_buffer;
	for (i = 0; i < len; ++i)
	    if (buf[i] != CAR || i + 1 >= len || buf[i + 1] != NL)
		*p++ = buf[i];
	*p = NUL;
	node->rq_buflen = (long_u)(p - node->rq_buffer);
    }
    else
    {
	mch_memmove(node->rq_buffer, buf, len);
	node->rq_buffer[len] = NUL;
	node->rq_buflen = (long_u)len;
    }

    if (prepend)
    {
	
	node->rq_next = head->rq_next;
	node->rq_prev = NULL;
	if (head->rq_next == NULL)
	    head->rq_prev = node;
	else
	    head->rq_next->rq_prev = node;
	head->rq_next = node;
    }
    else
    {
	
	node->rq_next = NULL;
	node->rq_prev = head->rq_prev;
	if (head->rq_prev == NULL)
	    head->rq_next = node;
	else
	    head->rq_prev->rq_next = node;
	head->rq_prev = node;
    }

    if (ch_log_active() && lead != NULL)
	ch_log_literal(lead, channel, part, buf, len);

    return OK;
}


    static int
channel_fill(js_read_T *reader)
{
    channel_T	*channel = (channel_T *)reader->js_cookie;
    ch_part_T	part = reader->js_cookie_arg;
    char_u	*next = channel_get(channel, part, NULL);
    int		keeplen;
    int		addlen;
    char_u	*p;

    if (next == NULL)
	return FALSE;

    keeplen = reader->js_end - reader->js_buf;
    if (keeplen > 0)
    {
	
	addlen = (int)STRLEN(next);
	p = alloc(keeplen + addlen + 1);
	if (p == NULL)
	{
	    vim_free(next);
	    return FALSE;
	}
	mch_memmove(p, reader->js_buf, keeplen);
	mch_memmove(p + keeplen, next, addlen + 1);
	vim_free(next);
	next = p;
    }

    vim_free(reader->js_buf);
    reader->js_buf = next;
    return TRUE;
}


    static int
channel_process_lsp_http_hdr(js_read_T *reader)
{
    char_u	*line_start;
    char_u	*p;
    int_u	hdr_len;
    int		payload_len = -1;
    int_u	jsbuf_len;

    
    jsbuf_len = (int_u)STRLEN(reader->js_buf);
    reader->js_end = reader->js_buf + jsbuf_len;

    p = reader->js_buf;

    
    
    while (TRUE)
    {
	line_start = p;
	while (*p != NUL && *p != '\n')
	    p++;
	if (*p == NUL)			
	    return MAYBE;
	p++;

	
	if ((p - line_start > 16)
		&& STRNICMP(line_start, "Content-Length: ", 16) == 0)
	{
	    errno = 0;
	    payload_len = strtol((char *)line_start + 16, NULL, 10);
	    if (errno == ERANGE || payload_len < 0)
		
		return FAIL;
	}

	if ((p - line_start) == 2 && line_start[0] == '\r' &&
		line_start[1] == '\n')
	    
	    break;
    }

    if (payload_len == -1)
	
	return FAIL;

    hdr_len = p - reader->js_buf;

    
    if (jsbuf_len < hdr_len + payload_len)
	return MAYBE;

    reader->js_used += hdr_len;
    
    reader->js_end = reader->js_buf + hdr_len + payload_len;

    return OK;
}


    static int
channel_parse_json(channel_T *channel, ch_part_T part)
{
    js_read_T	reader;
    typval_T	listtv;
    jsonq_T	*item;
    chanpart_T	*chanpart = &channel->ch_part[part];
    jsonq_T	*head = &chanpart->ch_json_head;
    int		status = OK;
    int		ret;

    if (channel_peek(channel, part) == NULL)
	return FALSE;

    reader.js_buf = channel_get(channel, part, NULL);
    reader.js_used = 0;
    reader.js_fill = channel_fill;
    reader.js_cookie = channel;
    reader.js_cookie_arg = part;

    if (chanpart->ch_mode == CH_MODE_LSP)
	status = channel_process_lsp_http_hdr(&reader);

    
    
    
    
    if (status == OK)
    {
	++emsg_silent;
	status = json_decode(&reader, &listtv,
				chanpart->ch_mode == CH_MODE_JS ? JSON_JS : 0);
	--emsg_silent;
    }
    if (status == OK)
    {
	
	
	if (chanpart->ch_mode == CH_MODE_LSP && listtv.v_type != VAR_DICT)
	{
	    ch_error(channel, "Did not receive a LSP dict, discarding");
	    clear_tv(&listtv);
	}
	else if (chanpart->ch_mode != CH_MODE_LSP
	      && (listtv.v_type != VAR_LIST || listtv.vval.v_list->lv_len < 2))
	{
	    if (listtv.v_type != VAR_LIST)
		ch_error(channel, "Did not receive a list, discarding");
	    else
		ch_error(channel, "Expected list with two items, got %d",
						  listtv.vval.v_list->lv_len);
	    clear_tv(&listtv);
	}
	else
	{
	    item = ALLOC_ONE(jsonq_T);
	    if (item == NULL)
		clear_tv(&listtv);
	    else
	    {
		item->jq_no_callback = FALSE;
		item->jq_value = alloc_tv();
		if (item->jq_value == NULL)
		{
		    vim_free(item);
		    clear_tv(&listtv);
		}
		else
		{
		    *item->jq_value = listtv;
		    item->jq_prev = head->jq_prev;
		    head->jq_prev = item;
		    item->jq_next = NULL;
		    if (item->jq_prev == NULL)
			head->jq_next = item;
		    else
			item->jq_prev->jq_next = item;
		}
	    }
	}
    }

    if (status == OK)
	chanpart->ch_wait_len = 0;
    else if (status == MAYBE)
    {
	size_t buflen = STRLEN(reader.js_buf);

	if (chanpart->ch_wait_len < buflen)
	{
	    
	    
	    ch_log(channel,
		    "Incomplete message (%d bytes) - wait 100 msec for more",
		    (int)buflen);
	    reader.js_used = 0;
	    chanpart->ch_wait_len = buflen;
#ifdef MSWIN
	    chanpart->ch_deadline = GetTickCount() + 100L;
#else
	    gettimeofday(&chanpart->ch_deadline, NULL);
	    chanpart->ch_deadline.tv_usec += 100 * 1000;
	    if (chanpart->ch_deadline.tv_usec > 1000 * 1000)
	    {
		chanpart->ch_deadline.tv_usec -= 1000 * 1000;
		++chanpart->ch_deadline.tv_sec;
	    }
#endif
	}
	else
	{
	    int timeout;
#ifdef MSWIN
	    timeout = (int)(GetTickCount() - chanpart->ch_deadline) > 0;
#else
	    {
		struct timeval now_tv;

		gettimeofday(&now_tv, NULL);
		timeout = now_tv.tv_sec > chanpart->ch_deadline.tv_sec
		      || (now_tv.tv_sec == chanpart->ch_deadline.tv_sec
			   && now_tv.tv_usec > chanpart->ch_deadline.tv_usec);
	    }
#endif
	    if (timeout)
	    {
		status = FAIL;
		chanpart->ch_wait_len = 0;
		ch_log(channel, "timed out");
	    }
	    else
	    {
		reader.js_used = 0;
		ch_log(channel, "still waiting on incomplete message");
	    }
	}
    }

    if (status == FAIL)
    {
	ch_error(channel, "Decoding failed - discarding input");
	ret = FALSE;
	chanpart->ch_wait_len = 0;
    }
    else if (reader.js_buf[reader.js_used] != NUL)
    {
	
	channel_save(channel, part, reader.js_buf + reader.js_used,
			(int)(reader.js_end - reader.js_buf) - reader.js_used,
								  TRUE, NULL);
	ret = status == MAYBE ? FALSE: TRUE;
    }
    else
	ret = FALSE;

    vim_free(reader.js_buf);
    return ret;
}


    static void
remove_cb_node(cbq_T *head, cbq_T *node)
{
    if (node->cq_prev == NULL)
	head->cq_next = node->cq_next;
    else
	node->cq_prev->cq_next = node->cq_next;
    if (node->cq_next == NULL)
	head->cq_prev = node->cq_prev;
    else
	node->cq_next->cq_prev = node->cq_prev;
}


    static void
remove_json_node(jsonq_T *head, jsonq_T *node)
{
    if (node->jq_prev == NULL)
	head->jq_next = node->jq_next;
    else
	node->jq_prev->jq_next = node->jq_next;
    if (node->jq_next == NULL)
	head->jq_prev = node->jq_prev;
    else
	node->jq_next->jq_prev = node->jq_prev;
    vim_free(node);
}


    static void
channel_add_block_id(chanpart_T *chanpart, int id)
{
    garray_T *gap = &chanpart->ch_block_ids;

    if (gap->ga_growsize == 0)
	ga_init2(gap, sizeof(int), 10);
    if (ga_grow(gap, 1) == OK)
    {
	((int *)gap->ga_data)[gap->ga_len] = id;
	++gap->ga_len;
    }
}


    static void
channel_remove_block_id(chanpart_T *chanpart, int id)
{
    garray_T	*gap = &chanpart->ch_block_ids;
    int		i;

    for (i = 0; i < gap->ga_len; ++i)
	if (((int *)gap->ga_data)[i] == id)
	{
	    --gap->ga_len;
	    if (i < gap->ga_len)
	    {
		int *p = ((int *)gap->ga_data) + i;

		mch_memmove(p, p + 1, (gap->ga_len - i) * sizeof(int));
	    }
	    return;
	}
    siemsg("channel_remove_block_id(): cannot find id %d", id);
}


    static int
channel_has_block_id(chanpart_T *chanpart, int id)
{
    garray_T	*gap = &chanpart->ch_block_ids;
    int		i;

    for (i = 0; i < gap->ga_len; ++i)
	if (((int *)gap->ga_data)[i] == id)
	    return TRUE;
    return FALSE;
}


    static int
channel_get_json(
	channel_T   *channel,
	ch_part_T   part,
	int	    id,
	int	    without_callback,
	typval_T    **rettv)
{
    jsonq_T   *head = &channel->ch_part[part].ch_json_head;
    jsonq_T   *item = head->jq_next;

    while (item != NULL)
    {
	list_T	    *l;
	typval_T    *tv;

	if (channel->ch_part[part].ch_mode != CH_MODE_LSP)
	{
	    l = item->jq_value->vval.v_list;
	    CHECK_LIST_MATERIALIZE(l);
	    tv = &l->lv_first->li_tv;
	}
	else
	{
	    dict_T	*d;
	    dictitem_T	*di;

	    
	    
	    
	    if (id > 0)
	    {
		if (item->jq_value->v_type != VAR_DICT)
		    goto nextitem;
		d = item->jq_value->vval.v_dict;
		if (d == NULL)
		    goto nextitem;
		
		
		
		
		if (dict_has_key(d, "method"))
		    goto nextitem;
		di = dict_find(d, (char_u *)"id", -1);
		if (di == NULL)
		    goto nextitem;
		tv = &di->di_tv;
	    }
	    else
		tv = item->jq_value;
	}

	if ((without_callback || !item->jq_no_callback)
	    && ((id > 0 && tv->v_type == VAR_NUMBER && tv->vval.v_number == id)
	      || (id <= 0 && (tv->v_type != VAR_NUMBER
		 || tv->vval.v_number == 0
		 || !channel_has_block_id(
				&channel->ch_part[part], tv->vval.v_number)))))
	{
	    *rettv = item->jq_value;
	    if (tv->v_type == VAR_NUMBER)
		ch_log(channel, "Getting JSON message %ld",
						      (int)tv->vval.v_number);
	    remove_json_node(head, item);
	    return OK;
	}
nextitem:
	item = item->jq_next;
    }
    return FAIL;
}


    static void
channel_push_json(channel_T *channel, ch_part_T part, typval_T *rettv)
{
    jsonq_T   *head = &channel->ch_part[part].ch_json_head;
    jsonq_T   *item = head->jq_next;
    jsonq_T   *newitem;

    if (head->jq_prev != NULL && head->jq_prev->jq_no_callback)
	
	item = NULL;
    else while (item != NULL && item->jq_no_callback)
	
	item = item->jq_next;

    newitem = ALLOC_ONE(jsonq_T);
    if (newitem == NULL)
    {
	clear_tv(rettv);
	return;
    }

    newitem->jq_value = alloc_tv();
    if (newitem->jq_value == NULL)
    {
	vim_free(newitem);
	clear_tv(rettv);
	return;
    }

    newitem->jq_no_callback = FALSE;
    *newitem->jq_value = *rettv;
    if (item == NULL)
    {
	
	newitem->jq_prev = head->jq_prev;
	head->jq_prev = newitem;
	newitem->jq_next = NULL;
	if (newitem->jq_prev == NULL)
	    head->jq_next = newitem;
	else
	    newitem->jq_prev->jq_next = newitem;
    }
    else
    {
	
	newitem->jq_prev = item;
	newitem->jq_next = item->jq_next;
	item->jq_next = newitem;
	if (newitem->jq_next == NULL)
	    head->jq_prev = newitem;
	else
	    newitem->jq_next->jq_prev = newitem;
    }
}

#define CH_JSON_MAX_ARGS 4


    static void
channel_exe_cmd(channel_T *channel, ch_part_T part, typval_T *argv)
{
    char_u  *cmd = argv[0].vval.v_string;
    char_u  *arg;
    int	    options = channel->ch_part[part].ch_mode == CH_MODE_JS
								 ? JSON_JS : 0;

    if (argv[1].v_type != VAR_STRING)
    {
	ch_error(channel, "received command with non-string argument");
	if (p_verbose > 2)
	    emsg(_(e_received_command_with_non_string_argument));
	return;
    }
    arg = argv[1].vval.v_string;
    if (arg == NULL)
	arg = (char_u *)"";

    if (STRCMP(cmd, "ex") == 0)
    {
	int	called_emsg_before = called_emsg;
	char_u	*p = arg;
	int	do_emsg_silent;

	ch_log(channel, "Executing ex command '%s'", (char *)arg);
	do_emsg_silent = !checkforcmd(&p, "echoerr", 5);
	if (do_emsg_silent)
	    ++emsg_silent;
	do_cmdline_cmd(arg);
	if (do_emsg_silent)
	    --emsg_silent;
	if (called_emsg > called_emsg_before)
	    ch_log(channel, "Ex command error: '%s'",
					  (char *)get_vim_var_str(VV_ERRMSG));
    }
    else if (STRCMP(cmd, "normal") == 0)
    {
	exarg_T ea;

	ch_log(channel, "Executing normal command '%s'", (char *)arg);
	CLEAR_FIELD(ea);
	ea.arg = arg;
	ea.addr_count = 0;
	ea.forceit = TRUE; 
	ex_normal(&ea);
    }
    else if (STRCMP(cmd, "redraw") == 0)
    {
	ch_log(channel, "redraw");
	redraw_cmd(*arg != NUL);
	showruler(FALSE);
	setcursor();
	out_flush_cursor(TRUE, FALSE);
    }
    else if (STRCMP(cmd, "expr") == 0 || STRCMP(cmd, "call") == 0)
    {
	int is_call = cmd[0] == 'c';
	int id_idx = is_call ? 3 : 2;

	if (argv[id_idx].v_type != VAR_UNKNOWN
					 && argv[id_idx].v_type != VAR_NUMBER)
	{
	    ch_error(channel, "last argument for expr/call must be a number");
	    if (p_verbose > 2)
		emsg(_(e_last_argument_for_expr_call_must_be_number));
	}
	else if (is_call && argv[2].v_type != VAR_LIST)
	{
	    ch_error(channel, "third argument for call must be a list");
	    if (p_verbose > 2)
		emsg(_(e_third_argument_for_call_must_be_list));
	}
	else
	{
	    typval_T	*tv = NULL;
	    typval_T	res_tv;
	    typval_T	err_tv;
	    char_u	*json = NULL;

	    
	    
	    ++emsg_silent;
	    if (!is_call)
	    {
		ch_log(channel, "Evaluating expression '%s'", (char *)arg);
		tv = eval_expr(arg, NULL);
	    }
	    else
	    {
		ch_log(channel, "Calling '%s'", (char *)arg);
		if (func_call(arg, &argv[2], NULL, NULL, &res_tv) == OK)
		    tv = &res_tv;
	    }

	    if (argv[id_idx].v_type == VAR_NUMBER)
	    {
		int id = argv[id_idx].vval.v_number;

		if (tv != NULL)
		    json = json_encode_nr_expr(id, tv, options | JSON_NL);
		if (tv == NULL || (json != NULL && *json == NUL))
		{
		    
		    
		    vim_free(json);
		    err_tv.v_type = VAR_STRING;
		    err_tv.vval.v_string = (char_u *)"ERROR";
		    json = json_encode_nr_expr(id, &err_tv, options | JSON_NL);
		}
		if (json != NULL)
		{
		    channel_send(channel,
				 part == PART_SOCK ? PART_SOCK : PART_IN,
				 json, (int)STRLEN(json), (char *)cmd);
		    vim_free(json);
		}
	    }
	    --emsg_silent;
	    if (tv == &res_tv)
		clear_tv(tv);
	    else
		free_tv(tv);
	}
    }
    else if (p_verbose > 2)
    {
	ch_error(channel, "Received unknown command: %s", (char *)cmd);
	semsg(_(e_received_unknown_command_str), cmd);
    }
}


    static void
invoke_one_time_callback(
	channel_T   *channel,
	cbq_T	    *cbhead,
	cbq_T	    *item,
	typval_T    *argv)
{
    ch_log(channel, "Invoking one-time callback %s",
					    (char *)item->cq_callback.cb_name);
    
    
    remove_cb_node(cbhead, item);
    invoke_callback(channel, &item->cq_callback, argv);
    free_callback(&item->cq_callback);
    vim_free(item);
}

    static void
append_to_buffer(buf_T *buffer, char_u *msg, channel_T *channel, ch_part_T part)
{
    aco_save_T	aco;
    linenr_T    lnum = buffer->b_ml.ml_line_count;
    int		save_write_to = buffer->b_write_to_channel;
    chanpart_T  *ch_part = &channel->ch_part[part];
    int		save_p_ma = buffer->b_p_ma;
    int		empty = (buffer->b_ml.ml_flags & ML_EMPTY) ? 1 : 0;

    if (!buffer->b_p_ma && !ch_part->ch_nomodifiable)
    {
	if (!ch_part->ch_nomod_error)
	{
	    ch_error(channel, "Buffer is not modifiable, cannot append");
	    ch_part->ch_nomod_error = TRUE;
	}
	return;
    }

    
    
    if (save_write_to)
    {
	--lnum;
	buffer->b_write_to_channel = FALSE;
    }

    
    ch_log(channel, "appending line %d to buffer %s",
				       (int)lnum + 1 - empty, buffer->b_fname);

    buffer->b_p_ma = TRUE;

    
    aucmd_prepbuf(&aco, buffer);
    if (curbuf != buffer)
    {
	
	
	return;
    }

    u_sync(TRUE);
    
    vim_ignored = u_save(lnum - empty, lnum + 1);

    if (empty)
    {
	
	ml_replace(lnum, msg, TRUE);
	lnum = 0;
    }
    else
	ml_append(lnum, msg, 0, FALSE);
    appended_lines_mark(lnum, 1L);

    
    aucmd_restbuf(&aco);

    if (ch_part->ch_nomodifiable)
	buffer->b_p_ma = FALSE;
    else
	buffer->b_p_ma = save_p_ma;

    if (buffer->b_nwindows > 0)
    {
	win_T	*wp;

	FOR_ALL_WINDOWS(wp)
	{
	    if (wp->w_buffer == buffer)
	    {
		int move_cursor = save_write_to
			    ? wp->w_cursor.lnum == lnum + 1
			    : (wp->w_cursor.lnum == lnum
				&& wp->w_cursor.col == 0);

		
		
		if (move_cursor || wp->w_topline > buffer->b_ml.ml_line_count)
		{
		    win_T *save_curwin = curwin;

		    if (move_cursor)
			++wp->w_cursor.lnum;
		    curwin = wp;
		    curbuf = curwin->w_buffer;
		    scroll_cursor_bot(0, FALSE);
		    curwin = save_curwin;
		    curbuf = curwin->w_buffer;
		}
	    }
	}
	redraw_buf_and_status_later(buffer, UPD_VALID);
	channel_need_redraw = TRUE;
    }

    if (save_write_to)
    {
	channel_T *ch;

	
	
	buffer->b_write_to_channel = TRUE;
	FOR_ALL_CHANNELS(ch)
	{
	    chanpart_T  *in_part = &ch->ch_part[PART_IN];

	    if (in_part->ch_bufref.br_buf == buffer)
		in_part->ch_buf_bot = buffer->b_ml.ml_line_count;
	}
    }
}

    static void
drop_messages(channel_T *channel, ch_part_T part)
{
    char_u *msg;

    while ((msg = channel_get(channel, part, NULL)) != NULL)
    {
	ch_log(channel, "Dropping message '%s'", (char *)msg);
	vim_free(msg);
    }
}


    static int
channel_use_json_head(channel_T *channel, ch_part_T part)
{
    ch_mode_T	ch_mode = channel->ch_part[part].ch_mode;

    return ch_mode == CH_MODE_JSON || ch_mode == CH_MODE_JS
						     || ch_mode == CH_MODE_LSP;
}


    static int
may_invoke_callback(channel_T *channel, ch_part_T part)
{
    char_u	*msg = NULL;
    typval_T	*listtv = NULL;
    typval_T	argv[CH_JSON_MAX_ARGS];
    int		seq_nr = -1;
    chanpart_T	*ch_part = &channel->ch_part[part];
    ch_mode_T	ch_mode = ch_part->ch_mode;
    cbq_T	*cbhead = &ch_part->ch_cb_head;
    cbq_T	*cbitem;
    callback_T	*callback = NULL;
    buf_T	*buffer = NULL;
    char_u	*p;
    int		called_otc;		

    if (channel->ch_nb_close_cb != NULL)
	
	return FALSE;

    
    for (cbitem = cbhead->cq_next; cbitem != NULL; cbitem = cbitem->cq_next)
	if (cbitem->cq_seq_nr == 0)
	    break;
    if (cbitem != NULL)
	callback = &cbitem->cq_callback;
    else if (ch_part->ch_callback.cb_name != NULL)
	callback = &ch_part->ch_callback;
    else if (channel->ch_callback.cb_name != NULL)
	callback = &channel->ch_callback;

    buffer = ch_part->ch_bufref.br_buf;
    if (buffer != NULL && (!bufref_valid(&ch_part->ch_bufref)
					       || buffer->b_ml.ml_mfp == NULL))
    {
	
	ch_log(channel, "%s buffer has been wiped out", ch_part_names[part]);
	ch_part->ch_bufref.br_buf = NULL;
	buffer = NULL;
    }

    if (channel_use_json_head(channel, part))
    {
	listitem_T	*item;
	int		argc = 0;

	
	if (channel_get_json(channel, part, -1, FALSE, &listtv) == FAIL)
	{
	    if (ch_mode == CH_MODE_LSP)
		
		
		
		(void)channel_collapse(channel, part, FALSE);

	    
	    channel_parse_json(channel, part);
	    if (channel_get_json(channel, part, -1, FALSE, &listtv) == FAIL)
		return FALSE;
	}

	if (ch_mode == CH_MODE_LSP)
	{
	    dict_T	*d = listtv->vval.v_dict;
	    dictitem_T	*di;

	    seq_nr = 0;
	    if (d != NULL)
	    {
		di = dict_find(d, (char_u *)"id", -1);
		if (di != NULL && di->di_tv.v_type == VAR_NUMBER)
		    seq_nr = di->di_tv.vval.v_number;
	    }

	    argv[1] = *listtv;
	}
	else
	{
	    for (item = listtv->vval.v_list->lv_first;
		    item != NULL && argc < CH_JSON_MAX_ARGS;
		    item = item->li_next)
		argv[argc++] = item->li_tv;
	    while (argc < CH_JSON_MAX_ARGS)
		argv[argc++].v_type = VAR_UNKNOWN;

	    if (argv[0].v_type == VAR_STRING)
	    {
		
		channel_exe_cmd(channel, part, argv);
		free_tv(listtv);
		return TRUE;
	    }

	    if (argv[0].v_type != VAR_NUMBER)
	    {
		ch_error(channel,
			"Dropping message with invalid sequence number type");
		free_tv(listtv);
		return FALSE;
	    }
	    seq_nr = argv[0].vval.v_number;
	}
    }
    else if (channel_peek(channel, part) == NULL)
    {
	
	return FALSE;
    }
    else
    {
	
	if (callback == NULL && buffer == NULL)
	{
	    
	    
	    if (channel->ch_close_cb.cb_name == NULL && !channel->ch_drop_never)
		drop_messages(channel, part);
	    return FALSE;
	}

	if (ch_mode == CH_MODE_NL)
	{
	    char_u  *nl = NULL;
	    char_u  *buf;
	    readq_T *node;

	    
	    
	    while (TRUE)
	    {
		node = channel_peek(channel, part);
		nl = channel_first_nl(node);
		if (nl != NULL)
		    break;
		if (channel_collapse(channel, part, TRUE) == FAIL)
		{
		    if (ch_part->ch_fd == INVALID_FD && node->rq_buflen > 0)
			break;
		    return FALSE; 
		}
	    }
	    buf = node->rq_buffer;

	    
	    for (p = buf; (nl == NULL || p < nl)
					    && p < buf + node->rq_buflen; ++p)
		if (*p == NUL)
		    *p = NL;

	    if (nl == NULL)
	    {
		
		msg = channel_get(channel, part, NULL);
	    }
	    else if (nl + 1 == buf + node->rq_buflen)
	    {
		
		msg = channel_get(channel, part, NULL);
		*nl = NUL;
	    }
	    else
	    {
		
		
		msg = vim_strnsave(buf, nl - buf);
		channel_consume(channel, part, (int)(nl - buf) + 1);
	    }
	}
	else
	{
	    
	    
	    
	    msg = channel_get_all(channel, part, NULL);
	}

	if (msg == NULL)
	    return FALSE; 

	argv[1].v_type = VAR_STRING;
	argv[1].vval.v_string = msg;
    }

    called_otc = FALSE;
    if (seq_nr > 0)
    {
	
	
	int lsp_req_msg = FALSE;

	
	
	if (ch_mode == CH_MODE_LSP && argv[1].v_type == VAR_DICT
		&& dict_has_key(argv[1].vval.v_dict, "method"))
	    lsp_req_msg = TRUE;

	if (!lsp_req_msg)
	{
	    for (cbitem = cbhead->cq_next; cbitem != NULL;
		    cbitem = cbitem->cq_next)
	    {
		if (cbitem->cq_seq_nr == seq_nr)
		{
		    invoke_one_time_callback(channel, cbhead, cbitem, argv);
		    called_otc = TRUE;
		    break;
		}
	    }
	}
    }

    if (seq_nr > 0 && (ch_mode != CH_MODE_LSP || called_otc))
    {
	if (!called_otc)
	{
	    
	    
	    
	    if (channel->ch_drop_never)
	    {
		
		channel_push_json(channel, part, listtv);

		
		listtv->v_type = VAR_NUMBER;
		free_tv(listtv);
		listtv = NULL;
	    }
	    else
		ch_log(channel, "Dropping message %d without callback",
								       seq_nr);
	}
    }
    else if (callback != NULL || buffer != NULL)
    {
	if (buffer != NULL)
	{
	    if (msg == NULL)
		
		msg = json_encode(listtv, ch_mode);
	    if (msg != NULL)
	    {
#ifdef FEAT_TERMINAL
		if (buffer->b_term != NULL)
		    write_to_term(buffer, msg, channel);
		else
#endif
		    append_to_buffer(buffer, msg, channel, part);
	    }
	}

	if (callback != NULL)
	{
	    if (cbitem != NULL)
		invoke_one_time_callback(channel, cbhead, cbitem, argv);
	    else
	    {
		
		ch_log(channel, "Invoking channel callback %s",
						    (char *)callback->cb_name);
		invoke_callback(channel, callback, argv);
	    }
	}
    }
    else
	ch_log(channel, "Dropping message %d", seq_nr);

    if (listtv != NULL)
	free_tv(listtv);
    vim_free(msg);

    return TRUE;
}

#if defined(FEAT_NETBEANS_INTG) || defined(PROTO)

    int
channel_can_write_to(channel_T *channel)
{
    return channel != NULL && (channel->CH_SOCK_FD != INVALID_FD
			  || channel->CH_IN_FD != INVALID_FD);
}
#endif


    int
channel_is_open(channel_T *channel)
{
    return channel != NULL && (channel->CH_SOCK_FD != INVALID_FD
			  || channel->CH_IN_FD != INVALID_FD
			  || channel->CH_OUT_FD != INVALID_FD
			  || channel->CH_ERR_FD != INVALID_FD);
}


    static void *
channel_readahead_pointer(channel_T *channel, ch_part_T part)
{
    if (channel_use_json_head(channel, part))
    {
	jsonq_T   *head = &channel->ch_part[part].ch_json_head;

	if (head->jq_next == NULL)
	    
	    
	    channel_parse_json(channel, part);

	return head->jq_next;
    }
    return channel_peek(channel, part);
}


    static int
channel_has_readahead(channel_T *channel, ch_part_T part)
{
    return channel_readahead_pointer(channel, part) != NULL;
}


    static char *
channel_status(channel_T *channel, int req_part)
{
    ch_part_T part;
    int has_readahead = FALSE;

    if (channel == NULL)
	 return "fail";
    if (req_part == PART_OUT)
    {
	if (channel->CH_OUT_FD != INVALID_FD)
	    return "open";
	if (channel_has_readahead(channel, PART_OUT))
	    has_readahead = TRUE;
    }
    else if (req_part == PART_ERR)
    {
	if (channel->CH_ERR_FD != INVALID_FD)
	    return "open";
	if (channel_has_readahead(channel, PART_ERR))
	    has_readahead = TRUE;
    }
    else
    {
	if (channel_is_open(channel))
	    return "open";
	for (part = PART_SOCK; part < PART_IN; ++part)
	    if (channel_has_readahead(channel, part))
	    {
		has_readahead = TRUE;
		break;
	    }
    }

    if (has_readahead)
	return "buffered";
    return "closed";
}

    static void
channel_part_info(channel_T *channel, dict_T *dict, char *name, ch_part_T part)
{
    chanpart_T *chanpart = &channel->ch_part[part];
    char	namebuf[20];  
    size_t	tail;
    char	*status;
    char	*s = "";

    vim_strncpy((char_u *)namebuf, (char_u *)name, 4);
    STRCAT(namebuf, "_");
    tail = STRLEN(namebuf);

    STRCPY(namebuf + tail, "status");
    if (chanpart->ch_fd != INVALID_FD)
	status = "open";
    else if (channel_has_readahead(channel, part))
	status = "buffered";
    else
	status = "closed";
    dict_add_string(dict, namebuf, (char_u *)status);

    STRCPY(namebuf + tail, "mode");
    switch (chanpart->ch_mode)
    {
	case CH_MODE_NL: s = "NL"; break;
	case CH_MODE_RAW: s = "RAW"; break;
	case CH_MODE_JSON: s = "JSON"; break;
	case CH_MODE_JS: s = "JS"; break;
	case CH_MODE_LSP: s = "LSP"; break;
    }
    dict_add_string(dict, namebuf, (char_u *)s);

    STRCPY(namebuf + tail, "io");
    if (part == PART_SOCK)
	s = "socket";
    else switch (chanpart->ch_io)
    {
	case JIO_NULL: s = "null"; break;
	case JIO_PIPE: s = "pipe"; break;
	case JIO_FILE: s = "file"; break;
	case JIO_BUFFER: s = "buffer"; break;
	case JIO_OUT: s = "out"; break;
    }
    dict_add_string(dict, namebuf, (char_u *)s);

    STRCPY(namebuf + tail, "timeout");
    dict_add_number(dict, namebuf, chanpart->ch_timeout);
}

    static void
channel_info(channel_T *channel, dict_T *dict)
{
    dict_add_number(dict, "id", channel->ch_id);
    dict_add_string(dict, "status", (char_u *)channel_status(channel, -1));

    if (channel->ch_hostname != NULL)
    {
	if (channel->ch_port)
	{
	    dict_add_string(dict, "hostname", (char_u *)channel->ch_hostname);
	    dict_add_number(dict, "port", channel->ch_port);
	}
	else
	    
	    dict_add_string(dict, "path", (char_u *)channel->ch_hostname);
	channel_part_info(channel, dict, "sock", PART_SOCK);
    }
    else
    {
	channel_part_info(channel, dict, "out", PART_OUT);
	channel_part_info(channel, dict, "err", PART_ERR);
	channel_part_info(channel, dict, "in", PART_IN);
    }
}


    void
channel_close(channel_T *channel, int invoke_close_cb)
{
    ch_log(channel, "Closing channel");

#ifdef FEAT_GUI
    channel_gui_unregister(channel);
#endif

    ch_close_part(channel, PART_SOCK);
    ch_close_part(channel, PART_IN);
    ch_close_part(channel, PART_OUT);
    ch_close_part(channel, PART_ERR);

    if (invoke_close_cb)
    {
	ch_part_T	part;

#ifdef FEAT_TERMINAL
	
	term_channel_closing(channel);
#endif
	
	if (channel->ch_close_cb.cb_name != NULL)
	    ch_log(channel,
		     "Invoking callbacks and flushing buffers before closing");
	for (part = PART_SOCK; part < PART_IN; ++part)
	{
	    if (channel->ch_close_cb.cb_name != NULL
			    || channel->ch_part[part].ch_bufref.br_buf != NULL)
	    {
		
		
		++channel->ch_refcount;
		if (channel->ch_close_cb.cb_name == NULL)
		    ch_log(channel, "flushing %s buffers before closing",
							  ch_part_names[part]);
		while (may_invoke_callback(channel, part))
		    ;
		--channel->ch_refcount;
	    }
	}

	if (channel->ch_close_cb.cb_name != NULL)
	{
	      typval_T	argv[1];
	      typval_T	rettv;

	      
	      
	      ++channel->ch_refcount;
	      ch_log(channel, "Invoking close callback %s",
					 (char *)channel->ch_close_cb.cb_name);
	      argv[0].v_type = VAR_CHANNEL;
	      argv[0].vval.v_channel = channel;
	      call_callback(&channel->ch_close_cb, -1, &rettv, 1, argv);
	      clear_tv(&rettv);
	      channel_need_redraw = TRUE;

	      
	      free_callback(&channel->ch_close_cb);

	      if (channel_need_redraw)
	      {
		  channel_need_redraw = FALSE;
		  redraw_after_callback(TRUE, FALSE);
	      }

	      if (!channel->ch_drop_never)
		  
		  for (part = PART_SOCK; part < PART_IN; ++part)
		      drop_messages(channel, part);

	      --channel->ch_refcount;
	}
    }

    channel->ch_nb_close_cb = NULL;

#ifdef FEAT_TERMINAL
    term_channel_closed(channel);
#endif
}


    static void
channel_close_in(channel_T *channel)
{
    ch_close_part(channel, PART_IN);
}

    static void
remove_from_writeque(writeq_T *wq, writeq_T *entry)
{
    ga_clear(&entry->wq_ga);
    wq->wq_next = entry->wq_next;
    if (wq->wq_next == NULL)
	wq->wq_prev = NULL;
    else
	wq->wq_next->wq_prev = NULL;
    vim_free(entry);
}


    static void
channel_clear_one(channel_T *channel, ch_part_T part)
{
    chanpart_T *ch_part = &channel->ch_part[part];
    jsonq_T *json_head = &ch_part->ch_json_head;
    cbq_T   *cb_head = &ch_part->ch_cb_head;

    while (channel_peek(channel, part) != NULL)
	vim_free(channel_get(channel, part, NULL));

    while (cb_head->cq_next != NULL)
    {
	cbq_T *node = cb_head->cq_next;

	remove_cb_node(cb_head, node);
	free_callback(&node->cq_callback);
	vim_free(node);
    }

    while (json_head->jq_next != NULL)
    {
	free_tv(json_head->jq_next->jq_value);
	remove_json_node(json_head, json_head->jq_next);
    }

    free_callback(&ch_part->ch_callback);
    ga_clear(&ch_part->ch_block_ids);

    while (ch_part->ch_writeque.wq_next != NULL)
	remove_from_writeque(&ch_part->ch_writeque,
						 ch_part->ch_writeque.wq_next);
}


    void
channel_clear(channel_T *channel)
{
    ch_log(channel, "Clearing channel");
    VIM_CLEAR(channel->ch_hostname);
    channel_clear_one(channel, PART_SOCK);
    channel_clear_one(channel, PART_OUT);
    channel_clear_one(channel, PART_ERR);
    channel_clear_one(channel, PART_IN);
    free_callback(&channel->ch_callback);
    free_callback(&channel->ch_close_cb);
}

#if defined(EXITFREE) || defined(PROTO)
    void
channel_free_all(void)
{
    channel_T *channel;

    ch_log(NULL, "channel_free_all()");
    FOR_ALL_CHANNELS(channel)
	channel_clear(channel);
}
#endif



#define DETACH_MSG_RAW "DETACH\n"


#define MAXMSGSIZE 4096


    static int
is_channel_write_remaining(chanpart_T *in_part)
{
    buf_T *buf = in_part->ch_bufref.br_buf;

    if (in_part->ch_writeque.wq_next != NULL)
	return TRUE;
    if (buf == NULL)
	return FALSE;
    return in_part->ch_buf_append
	    ? (in_part->ch_buf_bot < buf->b_ml.ml_line_count)
	    : (in_part->ch_buf_top <= in_part->ch_buf_bot
			    && in_part->ch_buf_top <= buf->b_ml.ml_line_count);
}

#if defined(HAVE_SELECT)

    static int
channel_fill_wfds(int maxfd_arg, fd_set *wfds)
{
    int		maxfd = maxfd_arg;
    channel_T	*ch;

    FOR_ALL_CHANNELS(ch)
    {
	chanpart_T  *in_part = &ch->ch_part[PART_IN];

	if (in_part->ch_fd != INVALID_FD
		&& is_channel_write_remaining(in_part))
	{
	    FD_SET((int)in_part->ch_fd, wfds);
	    if ((int)in_part->ch_fd >= maxfd)
		maxfd = (int)in_part->ch_fd + 1;
	}
    }
    return maxfd;
}
#else

    static int
channel_fill_poll_write(int nfd_in, struct pollfd *fds)
{
    int		nfd = nfd_in;
    channel_T	*ch;

    FOR_ALL_CHANNELS(ch)
    {
	chanpart_T  *in_part = &ch->ch_part[PART_IN];

	if (in_part->ch_fd != INVALID_FD
		&& is_channel_write_remaining(in_part))
	{
	    in_part->ch_poll_idx = nfd;
	    fds[nfd].fd = in_part->ch_fd;
	    fds[nfd].events = POLLOUT;
	    ++nfd;
	}
	else
	    in_part->ch_poll_idx = -1;
    }
    return nfd;
}
#endif

typedef enum {
    CW_READY,
    CW_NOT_READY,
    CW_ERROR
} channel_wait_result;


    static channel_wait_result
channel_wait(channel_T *channel, sock_T fd, int timeout)
{
    if (timeout > 0)
	ch_log(channel, "Waiting for up to %d msec", timeout);

# ifdef MSWIN
    if (fd != channel->CH_SOCK_FD)
    {
	DWORD	nread;
	int	sleep_time;
	DWORD	deadline = GetTickCount() + timeout;
	int	delay = 1;

	
	while (TRUE)
	{
	    int r = PeekNamedPipe((HANDLE)fd, NULL, 0, NULL, &nread, NULL);

	    if (r && nread > 0)
		return CW_READY;

	    if (channel->ch_named_pipe)
	    {
		DisconnectNamedPipe((HANDLE)fd);
		ConnectNamedPipe((HANDLE)fd, NULL);
	    }
	    else if (r == 0)
		return CW_ERROR;

	    
	    channel_write_any_lines();

	    sleep_time = deadline - GetTickCount();
	    if (sleep_time <= 0)
		break;
	    
	    
	    if (sleep_time > delay)
		sleep_time = delay;
	    Sleep(sleep_time);
	    delay = delay * 2;
	    if (delay > 10)
		delay = 10;
	}
    }
    else
#endif
    {
#if defined(HAVE_SELECT)
	struct timeval	tval;
	fd_set		rfds;
	fd_set		wfds;
	int		ret;
	int		maxfd;

	tval.tv_sec = timeout / 1000;
	tval.tv_usec = (timeout % 1000) * 1000;
	for (;;)
	{
	    FD_ZERO(&rfds);
	    FD_SET((int)fd, &rfds);

	    
	    
	    maxfd = (int)fd + 1;
	    FD_ZERO(&wfds);
	    maxfd = channel_fill_wfds(maxfd, &wfds);

	    ret = select(maxfd, &rfds, &wfds, NULL, &tval);
# ifdef EINTR
	    SOCK_ERRNO;
	    if (ret == -1 && errno == EINTR)
		continue;
# endif
	    if (ret > 0)
	    {
		if (FD_ISSET(fd, &rfds))
		    return CW_READY;
		channel_write_any_lines();
		continue;
	    }
	    break;
	}
#else
	for (;;)
	{
	    struct pollfd   fds[MAX_OPEN_CHANNELS + 1];
	    int		    nfd = 1;

	    fds[0].fd = fd;
	    fds[0].events = POLLIN;
	    nfd = channel_fill_poll_write(nfd, fds);
	    if (poll(fds, nfd, timeout) > 0)
	    {
		if (fds[0].revents & POLLIN)
		    return CW_READY;
		channel_write_any_lines();
		continue;
	    }
	    break;
	}
#endif
    }
    return CW_NOT_READY;
}

    static void
ch_close_part_on_error(
	channel_T *channel, ch_part_T part, int is_err, char *func)
{
    char	msg[] = "%s(): Read %s from ch_part[%d], closing";

    if (is_err)
	
	ch_error(channel, msg, func, "error", part);
    else
	ch_log(channel, msg, func, "EOF", part);

    
    
    
    
    
    
    
    
    
    
    if (channel->ch_nb_close_cb != NULL)
	channel_save(channel, PART_SOCK, (char_u *)DETACH_MSG_RAW,
			      (int)STRLEN(DETACH_MSG_RAW), FALSE, "PUT ");

    
    
    
    
    if (part == PART_OUT || part == PART_ERR)
    {
	ch_part_T other = part == PART_OUT ? PART_ERR : PART_OUT;

	if (channel->ch_part[part].ch_fd == channel->ch_part[other].ch_fd)
	    ch_close_part(channel, other);
    }
    ch_close_part(channel, part);

#ifdef FEAT_GUI
    
    channel_gui_unregister_one(channel, part);
#endif
}

    static void
channel_close_now(channel_T *channel)
{
    ch_log(channel, "Closing channel because all readable fds are closed");
    if (channel->ch_nb_close_cb != NULL)
	(*channel->ch_nb_close_cb)();
    channel_close(channel, TRUE);
}


    static void
channel_read(channel_T *channel, ch_part_T part, char *func)
{
    static char_u	*buf = NULL;
    int			len = 0;
    int			readlen = 0;
    sock_T		fd;
    int			use_socket = FALSE;

    fd = channel->ch_part[part].ch_fd;
    if (fd == INVALID_FD)
    {
	ch_error(channel, "channel_read() called while %s part is closed",
							  ch_part_names[part]);
	return;
    }
    use_socket = fd == channel->CH_SOCK_FD;

    
    if (buf == NULL)
    {
	buf = alloc(MAXMSGSIZE);
	if (buf == NULL)
	    return;	
    }

    
    
    
    for (;;)
    {
	if (channel_wait(channel, fd, 0) != CW_READY)
	    break;
	if (use_socket)
	    len = sock_read(fd, (char *)buf, MAXMSGSIZE);
	else
	    len = fd_read(fd, (char *)buf, MAXMSGSIZE);
	if (len <= 0)
	    break;	

	
	channel_save(channel, part, buf, len, FALSE, "RECV ");
	readlen += len;
    }

    
    if (readlen <= 0)
    {
	if (!channel->ch_keep_open)
	    ch_close_part_on_error(channel, part, (len < 0), func);
    }
#if defined(CH_HAS_GUI) && defined(FEAT_GUI_GTK)
    else if (CH_HAS_GUI && gtk_main_level() > 0)
	
	gtk_main_quit();
#endif
}


    static char_u *
channel_read_block(
	channel_T *channel, ch_part_T part, int timeout, int raw, int *outlen)
{
    char_u	*buf;
    char_u	*msg;
    ch_mode_T	mode = channel->ch_part[part].ch_mode;
    sock_T	fd = channel->ch_part[part].ch_fd;
    char_u	*nl;
    readq_T	*node;

    ch_log(channel, "Blocking %s read, timeout: %d msec",
				  mode == CH_MODE_RAW ? "RAW" : "NL", timeout);

    while (TRUE)
    {
	node = channel_peek(channel, part);
	if (node != NULL)
	{
	    if (mode == CH_MODE_RAW || (mode == CH_MODE_NL
					   && channel_first_nl(node) != NULL))
		
		break;
	    if (channel_collapse(channel, part, mode == CH_MODE_NL) == OK)
		continue;
	    
	    
	    if (raw || fd == INVALID_FD)
		break;
	}

	
	if (fd == INVALID_FD)
	    return NULL;
	if (channel_wait(channel, fd, timeout) != CW_READY)
	{
	    ch_log(channel, "Timed out");
	    return NULL;
	}
	channel_read(channel, part, "channel_read_block");
    }

    
    if (mode == CH_MODE_RAW || outlen != NULL)
    {
	msg = channel_get_all(channel, part, outlen);
    }
    else
    {
	char_u *p;

	buf = node->rq_buffer;
	nl = channel_first_nl(node);

	
	for (p = buf; (nl == NULL || p < nl) && p < buf + node->rq_buflen; ++p)
	    if (*p == NUL)
		*p = NL;

	if (nl == NULL)
	{
	    
	    msg = channel_get(channel, part, NULL);
	}
	else if (nl + 1 == buf + node->rq_buflen)
	{
	    
	    msg = channel_get(channel, part, NULL);
	    *nl = NUL;
	}
	else
	{
	    
	    
	    msg = vim_strnsave(buf, nl - buf);
	    channel_consume(channel, part, (int)(nl - buf) + 1);
	}
    }
    if (ch_log_active())
	ch_log(channel, "Returning %d bytes", (int)STRLEN(msg));
    return msg;
}

static int channel_blocking_wait = 0;


    int
channel_in_blocking_wait(void)
{
    return channel_blocking_wait > 0;
}


    static int
channel_read_json_block(
	channel_T   *channel,
	ch_part_T   part,
	int	    timeout_arg,
	int	    id,
	typval_T    **rettv)
{
    int		more;
    sock_T	fd;
    int		timeout;
    chanpart_T	*chanpart = &channel->ch_part[part];
    ch_mode_T	mode = channel->ch_part[part].ch_mode;
    int		retval = FAIL;

    ch_log(channel, "Blocking read JSON for id %d", id);
    ++channel_blocking_wait;

    if (id >= 0)
	channel_add_block_id(chanpart, id);

    for (;;)
    {
	if (mode == CH_MODE_LSP)
	    
	    
	    
	    (void)channel_collapse(channel, part, FALSE);

	more = channel_parse_json(channel, part);

	
	if (channel_get_json(channel, part, id, TRUE, rettv) == OK)
	{
	    ch_log(channel, "Received JSON for id %d", id);
	    retval = OK;
	    break;
	}

	if (!more)
	{
	    void *prev_readahead_ptr = channel_readahead_pointer(channel, part);
	    void *readahead_ptr;

	    
	    
	    if (channel_parse_messages())
		continue;

	    
	    
	    
	    readahead_ptr = channel_readahead_pointer(channel, part);
	    if (readahead_ptr != NULL && readahead_ptr != prev_readahead_ptr)
		continue;

	    
	    
	    timeout = timeout_arg;
	    if (chanpart->ch_wait_len > 0)
	    {
#ifdef MSWIN
		timeout = chanpart->ch_deadline - GetTickCount() + 1;
#else
		{
		    struct timeval now_tv;

		    gettimeofday(&now_tv, NULL);
		    timeout = (chanpart->ch_deadline.tv_sec
						       - now_tv.tv_sec) * 1000
			+ (chanpart->ch_deadline.tv_usec
						     - now_tv.tv_usec) / 1000
			+ 1;
		}
#endif
		if (timeout < 0)
		{
		    
		    
		    chanpart->ch_wait_len = 0;
		    timeout = timeout_arg;
		}
		else if (timeout > timeout_arg)
		    timeout = timeout_arg;
	    }
	    fd = chanpart->ch_fd;
	    if (fd == INVALID_FD
			    || channel_wait(channel, fd, timeout) != CW_READY)
	    {
		if (timeout == timeout_arg)
		{
		    if (fd != INVALID_FD)
			ch_log(channel, "Timed out on id %d", id);
		    break;
		}
	    }
	    else
		channel_read(channel, part, "channel_read_json_block");
	}
    }
    if (id >= 0)
	channel_remove_block_id(chanpart, id);
    --channel_blocking_wait;

    return retval;
}


    channel_T *
get_channel_arg(typval_T *tv, int check_open, int reading, ch_part_T part)
{
    channel_T	*channel = NULL;
    int		has_readahead = FALSE;

    if (tv->v_type == VAR_JOB)
    {
	if (tv->vval.v_job != NULL)
	    channel = tv->vval.v_job->jv_channel;
    }
    else if (tv->v_type == VAR_CHANNEL)
    {
	channel = tv->vval.v_channel;
    }
    else
    {
	semsg(_(e_invalid_argument_str), tv_get_string(tv));
	return NULL;
    }
    if (channel != NULL && reading)
	has_readahead = channel_has_readahead(channel,
		       part != PART_COUNT ? part : channel_part_read(channel));

    if (check_open && (channel == NULL || (!channel_is_open(channel)
					     && !(reading && has_readahead))))
    {
	emsg(_(e_not_an_open_channel));
	return NULL;
    }
    return channel;
}


    static void
common_channel_read(typval_T *argvars, typval_T *rettv, int raw, int blob)
{
    channel_T	*channel;
    ch_part_T	part = PART_COUNT;
    jobopt_T	opt;
    int		mode;
    int		timeout;
    int		id = -1;
    typval_T	*listtv = NULL;

    
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;

    if (in_vim9script()
	    && (check_for_chan_or_job_arg(argvars, 0) == FAIL
		|| check_for_opt_dict_arg(argvars, 1) == FAIL))
	return;

    clear_job_options(&opt);
    if (get_job_options(&argvars[1], &opt, JO_TIMEOUT + JO_PART + JO_ID, 0)
								      == FAIL)
	goto theend;

    if (opt.jo_set & JO_PART)
	part = opt.jo_part;
    channel = get_channel_arg(&argvars[0], TRUE, TRUE, part);
    if (channel == NULL)
	goto theend;

    if (part == PART_COUNT)
	part = channel_part_read(channel);
    mode = channel_get_mode(channel, part);
    timeout = channel_get_timeout(channel, part);
    if (opt.jo_set & JO_TIMEOUT)
	timeout = opt.jo_timeout;

    if (blob)
    {
	int	    outlen = 0;
	char_u  *p = channel_read_block(channel, part,
		timeout, TRUE, &outlen);
	if (p != NULL)
	{
	    blob_T	*b = blob_alloc();

	    if (b != NULL)
	    {
		b->bv_ga.ga_len = outlen;
		if (ga_grow(&b->bv_ga, outlen) == FAIL)
		    blob_free(b);
		else
		{
		    memcpy(b->bv_ga.ga_data, p, outlen);
		    rettv_blob_set(rettv, b);
		}
	    }
	    vim_free(p);
	}
    }
    else if (raw || mode == CH_MODE_RAW || mode == CH_MODE_NL)
	rettv->vval.v_string = channel_read_block(channel, part,
		timeout, raw, NULL);
    else
    {
	if (opt.jo_set & JO_ID)
	    id = opt.jo_id;
	channel_read_json_block(channel, part, timeout, id, &listtv);
	if (listtv != NULL)
	{
	    *rettv = *listtv;
	    vim_free(listtv);
	}
	else
	{
	    rettv->v_type = VAR_SPECIAL;
	    rettv->vval.v_number = VVAL_NONE;
	}
    }

theend:
    free_job_options(&opt);
}

#if defined(MSWIN) || defined(__HAIKU__) || defined(FEAT_GUI) || defined(PROTO)

    void
channel_handle_events(int only_keep_open)
{
    channel_T	*channel;
    ch_part_T	part;
    sock_T	fd;

    FOR_ALL_CHANNELS(channel)
    {
	if (only_keep_open && !channel->ch_keep_open)
	    continue;

	
	for (part = PART_SOCK; part < PART_IN; ++part)
	{
	    fd = channel->ch_part[part].ch_fd;
	    if (fd == INVALID_FD)
		continue;

	    int r = channel_wait(channel, fd, 0);

	    if (r == CW_READY)
		channel_read(channel, part, "channel_handle_events");
	    else if (r == CW_ERROR)
		ch_close_part_on_error(channel, part, TRUE,
			"channel_handle_events");
	}

# ifdef __HAIKU__
	
	
	
	if (channel->ch_job != NULL)
	{
	    job_T *job = channel->ch_job;

	    if (job->jv_tty_out != NULL && job->jv_status == JOB_FINISHED)
		for (part = PART_SOCK; part < PART_COUNT; ++part)
		    ch_close_part(channel, part);
	}
# endif
    }
}
#endif

# if defined(FEAT_GUI) || defined(PROTO)

    int
channel_any_keep_open(void)
{
    channel_T	*channel;

    FOR_ALL_CHANNELS(channel)
	if (channel->ch_keep_open)
	    return TRUE;
    return FALSE;
}
# endif


    void
channel_set_nonblock(channel_T *channel, ch_part_T part)
{
    chanpart_T *ch_part = &channel->ch_part[part];
    int		fd = ch_part->ch_fd;

    if (fd == INVALID_FD)
	return;

#ifdef MSWIN
    u_long	val = 1;

    ioctlsocket(fd, FIONBIO, &val);
#else
    (void)fcntl(fd, F_SETFL, O_NONBLOCK);
#endif
    ch_part->ch_nonblocking = TRUE;
}


    int
channel_send(
	channel_T *channel,
	ch_part_T part,
	char_u	  *buf_arg,
	int	  len_arg,
	char	  *fun)
{
    int		res;
    sock_T	fd;
    chanpart_T	*ch_part = &channel->ch_part[part];
    int		did_use_queue = FALSE;

    fd = ch_part->ch_fd;
    if (fd == INVALID_FD)
    {
	if (!channel->ch_error && fun != NULL)
	{
	    ch_error(channel, "%s(): write while not connected", fun);
	    semsg(_(e_str_write_while_not_connected), fun);
	}
	channel->ch_error = TRUE;
	return FAIL;
    }

    if (channel->ch_nonblock && !ch_part->ch_nonblocking)
	channel_set_nonblock(channel, part);

    if (ch_log_active())
    {
	ch_log_literal("SEND ", channel, part, buf_arg, len_arg);
	did_repeated_msg = 0;
    }

    for (;;)
    {
	writeq_T    *wq = &ch_part->ch_writeque;
	char_u	    *buf;
	int	    len;

	if (wq->wq_next != NULL)
	{
	    
	    buf = wq->wq_next->wq_ga.ga_data;
	    len = wq->wq_next->wq_ga.ga_len;
	    did_use_queue = TRUE;
	}
	else
	{
	    if (len_arg == 0)
		
		return OK;
	    buf = buf_arg;
	    len = len_arg;
	}

	if (part == PART_SOCK)
	    res = sock_write(fd, (char *)buf, len);
	else
	{
	    res = fd_write(fd, (char *)buf, len);
#ifdef MSWIN
	    if (channel->ch_named_pipe && res < 0)
	    {
		DisconnectNamedPipe((HANDLE)fd);
		ConnectNamedPipe((HANDLE)fd, NULL);
	    }
#endif
	}
	if (res < 0 && (errno == EWOULDBLOCK
#ifdef EAGAIN
			|| errno == EAGAIN
#endif
		    ))
	    res = 0; 

	if (res >= 0 && ch_part->ch_nonblocking)
	{
	    writeq_T *entry = wq->wq_next;

	    if (did_use_queue)
		ch_log(channel, "Sent %d bytes now", res);
	    if (res == len)
	    {
		
		if (entry != NULL)
		{
		    
		    remove_from_writeque(wq, entry);
		    continue;
		}
		if (did_use_queue)
		    ch_log(channel, "Write queue empty");
	    }
	    else
	    {
		
		if (entry != NULL)
		{
		    if (res > 0)
		    {
			
			mch_memmove(entry->wq_ga.ga_data,
				    (char *)entry->wq_ga.ga_data + res,
				    len - res);
			entry->wq_ga.ga_len -= res;
		    }
		    buf = buf_arg;
		    len = len_arg;
		}
		else
		{
		    buf += res;
		    len -= res;
		}
		ch_log(channel, "Adding %d bytes to the write queue", len);

		
		
		if (wq->wq_prev != NULL
			&& wq->wq_prev->wq_ga.ga_len + len < 4000)
		{
		    writeq_T *last = wq->wq_prev;

		    
		    if (len > 0 && ga_grow(&last->wq_ga, len) == OK)
		    {
			mch_memmove((char *)last->wq_ga.ga_data
							  + last->wq_ga.ga_len,
				    buf, len);
			last->wq_ga.ga_len += len;
		    }
		}
		else
		{
		    writeq_T *last = ALLOC_ONE(writeq_T);

		    if (last != NULL)
		    {
			last->wq_prev = wq->wq_prev;
			last->wq_next = NULL;
			if (wq->wq_prev == NULL)
			    wq->wq_next = last;
			else
			    wq->wq_prev->wq_next = last;
			wq->wq_prev = last;
			ga_init2(&last->wq_ga, 1, 1000);
			if (len > 0 && ga_grow(&last->wq_ga, len) == OK)
			{
			    mch_memmove(last->wq_ga.ga_data, buf, len);
			    last->wq_ga.ga_len = len;
			}
		    }
		}
	    }
	}
	else if (res != len)
	{
	    if (!channel->ch_error && fun != NULL)
	    {
		ch_error(channel, "%s(): write failed", fun);
		semsg(_(e_str_write_failed), fun);
	    }
	    channel->ch_error = TRUE;
	    return FAIL;
	}

	channel->ch_error = FALSE;
	return OK;
    }
}


    static channel_T *
send_common(
	typval_T    *argvars,
	char_u	    *text,
	int	    len,
	int	    id,
	int	    eval,
	jobopt_T    *opt,
	char	    *fun,
	ch_part_T   *part_read)
{
    channel_T	*channel;
    ch_part_T	part_send;

    clear_job_options(opt);
    channel = get_channel_arg(&argvars[0], TRUE, FALSE, 0);
    if (channel == NULL)
	return NULL;
    part_send = channel_part_send(channel);
    *part_read = channel_part_read(channel);

    if (get_job_options(&argvars[2], opt, JO_CALLBACK + JO_TIMEOUT, 0) == FAIL)
	return NULL;

    
    
    
    if (opt->jo_callback.cb_name != NULL && *opt->jo_callback.cb_name != NUL)
    {
	if (eval)
	{
	    semsg(_(e_cannot_use_callback_with_str), fun);
	    return NULL;
	}
	channel_set_req_callback(channel, *part_read, &opt->jo_callback, id);
    }

    if (channel_send(channel, part_send, text, len, fun) == OK
					   && opt->jo_callback.cb_name == NULL)
	return channel;
    return NULL;
}


    static void
ch_expr_common(typval_T *argvars, typval_T *rettv, int eval)
{
    char_u	*text;
    typval_T	*listtv;
    channel_T	*channel;
    int		id;
    ch_mode_T	ch_mode;
    ch_part_T	part_send;
    ch_part_T	part_read;
    jobopt_T    opt;
    int		timeout;
    int		callback_present = FALSE;

    
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;

    if (in_vim9script()
	    && (check_for_chan_or_job_arg(argvars, 0) == FAIL
		|| check_for_opt_dict_arg(argvars, 2) == FAIL))
	return;

    channel = get_channel_arg(&argvars[0], TRUE, FALSE, 0);
    if (channel == NULL)
	return;
    part_send = channel_part_send(channel);

    ch_mode = channel_get_mode(channel, part_send);
    if (ch_mode == CH_MODE_RAW || ch_mode == CH_MODE_NL)
    {
	emsg(_(e_cannot_use_evalexpr_sendexpr_with_raw_or_nl_channel));
	return;
    }

    if (ch_mode == CH_MODE_LSP)
    {
	dict_T		*d;
	dictitem_T	*di;

	
	if (rettv_dict_alloc(rettv) == FAIL)
	    return;

	if (check_for_dict_arg(argvars, 1) == FAIL)
	    return;

	d = argvars[1].vval.v_dict;
	di = dict_find(d, (char_u *)"id", -1);
	if (di != NULL && di->di_tv.v_type != VAR_NUMBER)
	{
	    
	    semsg(_(e_invalid_value_for_argument_str), "id");
	    return;
	}

	if (argvars[2].v_type == VAR_DICT)
	    if (dict_has_key(argvars[2].vval.v_dict, "callback"))
		callback_present = TRUE;

	if (eval || callback_present)
	{
	    
	    
	    id = ++channel->ch_last_msg_id;
	    if (di == NULL)
		dict_add_number(d, "id", id);
	    else
		di->di_tv.vval.v_number = id;
	}
	else
	{
	    
	    
	    id = 0;
	    if (di != NULL)
		id = di->di_tv.vval.v_number;
	}
	if (!dict_has_key(d, "jsonrpc"))
	    dict_add_string(d, "jsonrpc", (char_u *)"2.0");
	text = json_encode_lsp_msg(&argvars[1]);
    }
    else
    {
	id = ++channel->ch_last_msg_id;
	text = json_encode_nr_expr(id, &argvars[1],
			      (ch_mode == CH_MODE_JS ? JSON_JS : 0) | JSON_NL);
    }
    if (text == NULL)
	return;

    channel = send_common(argvars, text, (int)STRLEN(text), id, eval, &opt,
			    eval ? "ch_evalexpr" : "ch_sendexpr", &part_read);
    vim_free(text);
    if (channel != NULL && eval)
    {
	if (opt.jo_set & JO_TIMEOUT)
	    timeout = opt.jo_timeout;
	else
	    timeout = channel_get_timeout(channel, part_read);
	if (channel_read_json_block(channel, part_read, timeout, id, &listtv)
									== OK)
	{
	    if (ch_mode == CH_MODE_LSP)
	    {
		*rettv = *listtv;
		
		listtv->v_type = VAR_NUMBER;
		free_tv(listtv);
	    }
	    else
	    {
		list_T *list = listtv->vval.v_list;

		
		
		*rettv = list->lv_u.mat.lv_last->li_tv;
		list->lv_u.mat.lv_last->li_tv.v_type = VAR_NUMBER;
		free_tv(listtv);
	    }
	}
    }
    free_job_options(&opt);
    if (ch_mode == CH_MODE_LSP && !eval && callback_present)
    {
	
	
	
	if (rettv->vval.v_dict != NULL)
	    dict_add_number(rettv->vval.v_dict, "id", id);
    }
}


    static void
ch_raw_common(typval_T *argvars, typval_T *rettv, int eval)
{
    char_u	buf[NUMBUFLEN];
    char_u	*text;
    int		len;
    channel_T	*channel;
    ch_part_T	part_read;
    jobopt_T    opt;
    int		timeout;

    
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;

    if (in_vim9script()
	    && (check_for_chan_or_job_arg(argvars, 0) == FAIL
		|| check_for_string_or_blob_arg(argvars, 1) == FAIL
		|| check_for_opt_dict_arg(argvars, 2) == FAIL))
	return;

    if (argvars[1].v_type == VAR_BLOB)
    {
	text = argvars[1].vval.v_blob->bv_ga.ga_data;
	len = argvars[1].vval.v_blob->bv_ga.ga_len;
    }
    else
    {
	text = tv_get_string_buf(&argvars[1], buf);
	len = (int)STRLEN(text);
    }
    channel = send_common(argvars, text, len, 0, eval, &opt,
			      eval ? "ch_evalraw" : "ch_sendraw", &part_read);
    if (channel != NULL && eval)
    {
	if (opt.jo_set & JO_TIMEOUT)
	    timeout = opt.jo_timeout;
	else
	    timeout = channel_get_timeout(channel, part_read);
	rettv->vval.v_string = channel_read_block(channel, part_read,
							timeout, TRUE, NULL);
    }
    free_job_options(&opt);
}

#define KEEP_OPEN_TIME 20  

#if (defined(UNIX) && !defined(HAVE_SELECT)) || defined(PROTO)

    int
channel_poll_setup(int nfd_in, void *fds_in, int *towait)
{
    int		nfd = nfd_in;
    channel_T	*channel;
    struct	pollfd *fds = fds_in;
    ch_part_T	part;

    FOR_ALL_CHANNELS(channel)
    {
	for (part = PART_SOCK; part < PART_IN; ++part)
	{
	    chanpart_T	*ch_part = &channel->ch_part[part];

	    if (ch_part->ch_fd != INVALID_FD)
	    {
		if (channel->ch_keep_open)
		{
		    
		    
		    
		    if (*towait < 0 || *towait > KEEP_OPEN_TIME)
			*towait = KEEP_OPEN_TIME;
		}
		else
		{
		    ch_part->ch_poll_idx = nfd;
		    fds[nfd].fd = ch_part->ch_fd;
		    fds[nfd].events = POLLIN;
		    nfd++;
		}
	    }
	    else
		channel->ch_part[part].ch_poll_idx = -1;
	}
    }

    nfd = channel_fill_poll_write(nfd, fds);

    return nfd;
}


    int
channel_poll_check(int ret_in, void *fds_in)
{
    int		ret = ret_in;
    channel_T	*channel;
    struct	pollfd *fds = fds_in;
    ch_part_T	part;
    int		idx;
    chanpart_T	*in_part;

    FOR_ALL_CHANNELS(channel)
    {
	for (part = PART_SOCK; part < PART_IN; ++part)
	{
	    idx = channel->ch_part[part].ch_poll_idx;

	    if (ret > 0 && idx != -1 && (fds[idx].revents & POLLIN))
	    {
		channel_read(channel, part, "channel_poll_check");
		--ret;
	    }
	    else if (channel->ch_part[part].ch_fd != INVALID_FD
						      && channel->ch_keep_open)
	    {
		
		channel_read(channel, part, "channel_poll_check_keep_open");
	    }
	}

	in_part = &channel->ch_part[PART_IN];
	idx = in_part->ch_poll_idx;
	if (ret > 0 && idx != -1 && (fds[idx].revents & POLLOUT))
	{
	    channel_write_input(channel);
	    --ret;
	}
    }

    return ret;
}
#endif 

#if (!defined(MSWIN) && defined(HAVE_SELECT)) || defined(PROTO)


    int
channel_select_setup(
	int maxfd_in,
	void *rfds_in,
	void *wfds_in,
	struct timeval *tv,
	struct timeval **tvp)
{
    int		maxfd = maxfd_in;
    channel_T	*channel;
    fd_set	*rfds = rfds_in;
    fd_set	*wfds = wfds_in;
    ch_part_T	part;

    FOR_ALL_CHANNELS(channel)
    {
	for (part = PART_SOCK; part < PART_IN; ++part)
	{
	    sock_T fd = channel->ch_part[part].ch_fd;

	    if (fd != INVALID_FD)
	    {
		if (channel->ch_keep_open)
		{
		    
		    
		    
		    if (*tvp == NULL || tv->tv_sec > 0
					|| tv->tv_usec > KEEP_OPEN_TIME * 1000)
		    {
			*tvp = tv;
			tv->tv_sec = 0;
			tv->tv_usec = KEEP_OPEN_TIME * 1000;
		    }
		}
		else
		{
		    FD_SET((int)fd, rfds);
		    if (maxfd < (int)fd)
			maxfd = (int)fd;
		}
	    }
	}
    }

    maxfd = channel_fill_wfds(maxfd, wfds);

    return maxfd;
}


    int
channel_select_check(int ret_in, void *rfds_in, void *wfds_in)
{
    int		ret = ret_in;
    channel_T	*channel;
    fd_set	*rfds = rfds_in;
    fd_set	*wfds = wfds_in;
    ch_part_T	part;
    chanpart_T	*in_part;

    FOR_ALL_CHANNELS(channel)
    {
	for (part = PART_SOCK; part < PART_IN; ++part)
	{
	    sock_T fd = channel->ch_part[part].ch_fd;

	    if (ret > 0 && fd != INVALID_FD && FD_ISSET(fd, rfds))
	    {
		channel_read(channel, part, "channel_select_check");
		FD_CLR(fd, rfds);
		--ret;
	    }
	    else if (fd != INVALID_FD && channel->ch_keep_open)
	    {
		
		channel_read(channel, part, "channel_select_check_keep_open");
	    }
	}

	in_part = &channel->ch_part[PART_IN];
	if (ret > 0 && in_part->ch_fd != INVALID_FD
					    && FD_ISSET(in_part->ch_fd, wfds))
	{
	    
	    FD_CLR(in_part->ch_fd, wfds);
	    channel_write_input(channel);
	    --ret;
	}

# ifdef __HAIKU__
	
	
	
	if (channel->ch_job != NULL)
	{
	    job_T *job = channel->ch_job;

	    if (job->jv_tty_out != NULL && job->jv_status == JOB_FINISHED)
		for (part = PART_SOCK; part < PART_COUNT; ++part)
		    ch_close_part(channel, part);
	}
# endif
    }

    return ret;
}
#endif 


    int
channel_parse_messages(void)
{
    channel_T	*channel = first_channel;
    int		ret = FALSE;
    int		r;
    ch_part_T	part = PART_SOCK;
    static int	recursive = 0;
#ifdef ELAPSED_FUNC
    elapsed_T	start_tv;
#endif

    
    
    ++recursive;
    ++safe_to_invoke_callback;

#ifdef ELAPSED_FUNC
    ELAPSED_INIT(start_tv);
#endif

    
    
    if ((did_repeated_msg & REPEATED_MSG_LOOKING) == 0)
    {
	ch_log(NULL, "looking for messages on channels");
	
	did_repeated_msg = REPEATED_MSG_LOOKING;
    }
    while (channel != NULL)
    {
	if (recursive == 1)
	{
	    if (channel_can_close(channel))
	    {
		channel->ch_to_be_closed = (1U << PART_COUNT);
		channel_close_now(channel);
		
		channel = first_channel;
		continue;
	    }
	    if (channel->ch_to_be_freed || channel->ch_killing)
	    {
		channel_free_contents(channel);
		if (channel->ch_job != NULL)
		    channel->ch_job->jv_channel = NULL;

		
		channel_free_channel(channel);
		channel = first_channel;
		continue;
	    }
	    if (channel->ch_refcount == 0 && !channel_still_useful(channel))
	    {
		
		channel_free(channel);
		channel = first_channel;
		part = PART_SOCK;
		continue;
	    }
	}

	if (channel->ch_part[part].ch_fd != INVALID_FD
				      || channel_has_readahead(channel, part))
	{
	    
	    
	    ++channel->ch_refcount;
	    r = may_invoke_callback(channel, part);
	    if (r == OK)
		ret = TRUE;
	    if (channel_unref(channel) || (r == OK
#ifdef ELAPSED_FUNC
			
			
			
			&& ELAPSED_FUNC(start_tv) < 100L
#endif
			))
	    {
		
		channel = first_channel;
		part = PART_SOCK;
		continue;
	    }
	}
	if (part < PART_ERR)
	    ++part;
	else
	{
	    channel = channel->ch_next;
	    part = PART_SOCK;
	}
    }

    if (channel_need_redraw)
    {
	channel_need_redraw = FALSE;
	redraw_after_callback(TRUE, FALSE);
    }

    --safe_to_invoke_callback;
    --recursive;

    return ret;
}


    int
channel_any_readahead(void)
{
    channel_T	*channel = first_channel;
    ch_part_T	part = PART_SOCK;

    while (channel != NULL)
    {
	if (channel_has_readahead(channel, part))
	    return TRUE;
	if (part < PART_ERR)
	    ++part;
	else
	{
	    channel = channel->ch_next;
	    part = PART_SOCK;
	}
    }
    return FALSE;
}


    int
set_ref_in_channel(int copyID)
{
    int		abort = FALSE;
    channel_T	*channel;
    typval_T	tv;

    for (channel = first_channel; !abort && channel != NULL;
						   channel = channel->ch_next)
	if (channel_still_useful(channel))
	{
	    tv.v_type = VAR_CHANNEL;
	    tv.vval.v_channel = channel;
	    abort = abort || set_ref_in_item(&tv, copyID, NULL, NULL);
	}
    return abort;
}


    static ch_part_T
channel_part_send(channel_T *channel)
{
    if (channel->CH_SOCK_FD == INVALID_FD)
	return PART_IN;
    return PART_SOCK;
}


    static ch_part_T
channel_part_read(channel_T *channel)
{
    if (channel->CH_SOCK_FD == INVALID_FD)
	return PART_OUT;
    return PART_SOCK;
}


    static ch_mode_T
channel_get_mode(channel_T *channel, ch_part_T part)
{
    if (channel == NULL)
	return CH_MODE_JSON;
    return channel->ch_part[part].ch_mode;
}


    static int
channel_get_timeout(channel_T *channel, ch_part_T part)
{
    return channel->ch_part[part].ch_timeout;
}


    void
f_ch_canread(typval_T *argvars, typval_T *rettv)
{
    channel_T *channel;

    rettv->vval.v_number = 0;
    if (in_vim9script() && check_for_chan_or_job_arg(argvars, 0) == FAIL)
	return;

    channel = get_channel_arg(&argvars[0], FALSE, FALSE, 0);
    if (channel != NULL)
	rettv->vval.v_number = channel_has_readahead(channel, PART_SOCK)
			    || channel_has_readahead(channel, PART_OUT)
			    || channel_has_readahead(channel, PART_ERR);
}


    void
f_ch_close(typval_T *argvars, typval_T *rettv UNUSED)
{
    channel_T *channel;

    if (in_vim9script() && check_for_chan_or_job_arg(argvars, 0) == FAIL)
	return;

    channel = get_channel_arg(&argvars[0], TRUE, FALSE, 0);
    if (channel != NULL)
    {
	channel_close(channel, FALSE);
	channel_clear(channel);
    }
}


    void
f_ch_close_in(typval_T *argvars, typval_T *rettv UNUSED)
{
    channel_T *channel;

    if (in_vim9script() && check_for_chan_or_job_arg(argvars, 0) == FAIL)
	return;

    channel = get_channel_arg(&argvars[0], TRUE, FALSE, 0);
    if (channel != NULL)
	channel_close_in(channel);
}


    void
f_ch_getbufnr(typval_T *argvars, typval_T *rettv)
{
    channel_T	*channel;

    rettv->vval.v_number = -1;

    if (in_vim9script()
	    && (check_for_chan_or_job_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL))
	return;

    channel = get_channel_arg(&argvars[0], FALSE, FALSE, 0);
    if (channel == NULL)
	return;

    char_u	*what = tv_get_string(&argvars[1]);
    int		part;
    if (STRCMP(what, "err") == 0)
	part = PART_ERR;
    else if (STRCMP(what, "out") == 0)
	part = PART_OUT;
    else if (STRCMP(what, "in") == 0)
	part = PART_IN;
    else
	part = PART_SOCK;
    if (channel->ch_part[part].ch_bufref.br_buf != NULL)
	rettv->vval.v_number =
	    channel->ch_part[part].ch_bufref.br_buf->b_fnum;
}


    void
f_ch_getjob(typval_T *argvars, typval_T *rettv)
{
    channel_T *channel;

    if (in_vim9script() && check_for_chan_or_job_arg(argvars, 0) == FAIL)
	return;

    channel = get_channel_arg(&argvars[0], FALSE, FALSE, 0);
    if (channel == NULL)
	return;

    rettv->v_type = VAR_JOB;
    rettv->vval.v_job = channel->ch_job;
    if (channel->ch_job != NULL)
	++channel->ch_job->jv_refcount;
}


    void
f_ch_info(typval_T *argvars, typval_T *rettv UNUSED)
{
    channel_T *channel;

    if (in_vim9script() && check_for_chan_or_job_arg(argvars, 0) == FAIL)
	return;

    channel = get_channel_arg(&argvars[0], FALSE, FALSE, 0);
    if (channel != NULL && rettv_dict_alloc(rettv) == OK)
	channel_info(channel, rettv->vval.v_dict);
}


    void
f_ch_open(typval_T *argvars, typval_T *rettv)
{
    rettv->v_type = VAR_CHANNEL;
    if (check_restricted() || check_secure())
	return;
    rettv->vval.v_channel = channel_open_func(argvars);
}


    void
f_ch_read(typval_T *argvars, typval_T *rettv)
{
    common_channel_read(argvars, rettv, FALSE, FALSE);
}


    void
f_ch_readblob(typval_T *argvars, typval_T *rettv)
{
    common_channel_read(argvars, rettv, TRUE, TRUE);
}


    void
f_ch_readraw(typval_T *argvars, typval_T *rettv)
{
    common_channel_read(argvars, rettv, TRUE, FALSE);
}


    void
f_ch_evalexpr(typval_T *argvars, typval_T *rettv)
{
    ch_expr_common(argvars, rettv, TRUE);
}


    void
f_ch_sendexpr(typval_T *argvars, typval_T *rettv)
{
    ch_expr_common(argvars, rettv, FALSE);
}


    void
f_ch_evalraw(typval_T *argvars, typval_T *rettv)
{
    ch_raw_common(argvars, rettv, TRUE);
}


    void
f_ch_sendraw(typval_T *argvars, typval_T *rettv)
{
    ch_raw_common(argvars, rettv, FALSE);
}


    void
f_ch_setoptions(typval_T *argvars, typval_T *rettv UNUSED)
{
    channel_T	*channel;
    jobopt_T	opt;

    if (in_vim9script()
	    && (check_for_chan_or_job_arg(argvars, 0) == FAIL
		|| check_for_dict_arg(argvars, 1) == FAIL))
	return;

    channel = get_channel_arg(&argvars[0], FALSE, FALSE, 0);
    if (channel == NULL)
	return;
    clear_job_options(&opt);
    if (get_job_options(&argvars[1], &opt,
			    JO_CB_ALL + JO_TIMEOUT_ALL + JO_MODE_ALL, 0) == OK)
	channel_set_options(channel, &opt);
    free_job_options(&opt);
}


    void
f_ch_status(typval_T *argvars, typval_T *rettv)
{
    channel_T	*channel;
    jobopt_T	opt;
    int		part = -1;

    
    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;

    if (in_vim9script()
	    && (check_for_chan_or_job_arg(argvars, 0) == FAIL
		|| check_for_opt_dict_arg(argvars, 1) == FAIL))
	return;

    channel = get_channel_arg(&argvars[0], FALSE, FALSE, 0);

    if (argvars[1].v_type != VAR_UNKNOWN)
    {
	clear_job_options(&opt);
	if (get_job_options(&argvars[1], &opt, JO_PART, 0) == OK
						     && (opt.jo_set & JO_PART))
	    part = opt.jo_part;
    }

    rettv->vval.v_string = vim_strsave((char_u *)channel_status(channel, part));
}


    char_u *
channel_to_string_buf(typval_T *varp, char_u *buf)
{
    channel_T *channel = varp->vval.v_channel;
    char      *status = channel_status(channel, -1);

    if (channel == NULL)
	vim_snprintf((char *)buf, NUMBUFLEN, "channel %s", status);
    else
	vim_snprintf((char *)buf, NUMBUFLEN,
				      "channel %d %s", channel->ch_id, status);
    return buf;
}

#endif 
