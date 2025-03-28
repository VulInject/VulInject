



#include "vim.h"
#include "version.h"

#ifdef Window
# undef Window	
#endif

#undef TRUE		
#undef FALSE


#ifndef PROTO

#ifndef LATTICE
# include <exec/exec.h>
# include <intuition/intuition.h>
#endif









#include <exec/memory.h>

#include <dos/dostags.h>	    
#include <dos/dosasl.h>



#ifdef __amigaos4__
# include <dos/anchorpath.h>
# define	free_fib(x) FreeDosObject(DOS_FIB, x)
#else
# define	free_fib(x) vim_free(fib)
#endif

#if defined(LATTICE) && !defined(SASC) && defined(FEAT_ARP)
# include <libraries/arp_pragmas.h>
#endif

#endif 


#if defined(__amigaos4__)
static const char* __attribute__((used)) stackcookie = "$STACK: 1048576";
#elif defined(__AROS__) || defined(__MORPHOS__)
unsigned int __stack = 1048576;
#endif


#undef	TRUE
#define TRUE (1)
#undef	FALSE
#define FALSE (0)

#ifdef __amigaos4__
# define	dos_packet(a, b, c)   DoPkt(a, b, c, 0, 0, 0, 0)
#elif !defined(AZTEC_C) && !defined(__AROS__)
static int dos_packet(struct MsgPort *, int, int);
#endif
static int lock2name(BPTR lock, char_u *buf, int   len);
static void out_num(int n);
static struct FileInfoBlock *get_fib(char_u *);
static int sortcmp(const void *a, const void *b);

static BPTR		raw_in = (BPTR)NULL;
static BPTR		raw_out = (BPTR)NULL;
static int		close_win = FALSE;  


#if !defined(__amigaos4__) && !defined(__AROS__) && !defined(__MORPHOS__)
struct IntuitionBase	*IntuitionBase = NULL;
#endif
#ifdef FEAT_ARP
struct ArpBase		*ArpBase = NULL;
#endif

static struct Window	*wb_window;
static char_u		*oldwindowtitle = NULL;

#ifdef FEAT_ARP
int			dos2 = FALSE;	    
#endif
int			size_set = FALSE;   

#ifdef __GNUC__
static char version[] __attribute__((used)) =
    "\0$VER: Vim "
    VIM_VERSION_MAJOR_STR "."
    VIM_VERSION_MINOR_STR
# ifdef PATCHLEVEL
    "." PATCHLEVEL
# endif
# ifdef BUILDDATE
    " (" BUILDDATE ")"
# endif
    ;
#endif

    void
win_resize_on(void)
{
    OUT_STR_NF("\033[12{");
}

    void
win_resize_off(void)
{
    OUT_STR_NF("\033[12}");
}

    void
mch_write(char_u *p, int len)
{
    Write(raw_out, (char *)p, (int)len);
}


    int
mch_inchar(
    char_u  *buf,
    int	    maxlen,
    int    time,		
    int	    tb_change_cnt UNUSED)
{
    int	    len;
    int    utime;

    if (time >= 0)
    {
	if (time == 0)
	    utime = 100L;	    
	else
	    utime = time * 1000L;   
	if (WaitForChar(raw_in, utime) == 0)	
	    return 0;
    }
    else    
    {
	
	if (WaitForChar(raw_in, p_ut * 1000L) == 0)
	{
	    if (trigger_cursorhold() && maxlen >= 3)
	    {
		buf[0] = K_SPECIAL;
		buf[1] = KS_EXTRA;
		buf[2] = (int)KE_CURSORHOLD;
		return 3;
	    }
	    before_blocking();
	}
    }

    for (;;)	    
    {
	len = Read(raw_in, (char *)buf, (int)maxlen / input_conv.vc_factor);
	if (len > 0)
	{
	    
	    if (input_conv.vc_type != CONV_NONE)
		len = convert_input(buf, len, maxlen);
	    return len;
	}
    }
}


    int
mch_char_avail(void)
{
    return (WaitForChar(raw_in, 100L) != 0);
}


    long_u
mch_avail_mem(int special)
{
#if defined(__amigaos4__) || defined(__AROS__) || defined(__MORPHOS__)
    return (long_u)AvailMem(MEMF_ANY) >> 10;
#else
    return (long_u)(AvailMem(special ? (int)MEMF_CHIP : (int)MEMF_ANY)) >> 10;
#endif
}


    void
mch_delay(int msec, int flags)
{
#ifndef LATTICE		
    void	    Delay(int);
#endif

    if (msec <= 0)
	return;

    if (flags & MCH_DELAY_IGNOREINPUT)
	Delay(msec / 20L);	    
    else
	WaitForChar(raw_in, msec * 1000L);
}


    void
mch_suspend(void)
{
    suspend_shell();
}

#ifndef DOS_LIBRARY
# define DOS_LIBRARY	((UBYTE *)"dos.library")
#endif

    void
mch_init(void)
{
#if !defined(__amigaos4__) && !defined(__AROS__) && !defined(__MORPHOS__)
    static char	    intlibname[] = "intuition.library";
#endif

#ifdef AZTEC_C
    Enable_Abort = 0;		
#endif
    Columns = 80;
    Rows = 24;

    
    if (raw_in == (BPTR)NULL)
    {
	raw_in = Input();
	raw_out = Output();
	
	if (!IsInteractive(raw_in))
	    raw_in = raw_out;
	else if (!IsInteractive(raw_out))
	    raw_out = raw_in;
    }

    out_flush();

    wb_window = NULL;
#if !defined(__amigaos4__) && !defined(__AROS__) && !defined(__MORPHOS__)
    if ((IntuitionBase = (struct IntuitionBase *)
				OpenLibrary((UBYTE *)intlibname, 0L)) == NULL)
    {
	mch_errmsg(_("cannot open "));
	mch_errmsg(intlibname);
	mch_errmsg("!?\n");
	mch_exit(3);
    }
#endif
}

#ifndef PROTO
# include <workbench/startup.h>
#endif


#define BUF2SIZE 320	    

    int
mch_check_win(int argc, char **argv)
{
    int		    i;
    BPTR	    nilfh, fh;
    char_u	    buf1[24];
    char_u	    buf2[BUF2SIZE];
    static char_u   *(constrings[3]) = {(char_u *)"con:0/0/662/210/",
					(char_u *)"con:0/0/640/200/",
					(char_u *)"con:0/0/320/200/"};
    static char_u   *winerr = (char_u *)N_("VIM: Can't open window!\n");
    struct WBArg    *argp;
    int		    ac;
    char	    *av;
    char_u	    *device = NULL;
    int		    exitval = 4;
#if !defined(__amigaos4__) && !defined(__AROS__) && !defined(__MORPHOS__)
    struct Library  *DosBase;
#endif
    int		    usewin = FALSE;


#if !defined(__amigaos4__) && !defined(__AROS__) && !defined(__MORPHOS__)
    DosBase = OpenLibrary(DOS_LIBRARY, 37L);
    if (DosBase != NULL)
    
    {
	CloseLibrary(DosBase);
# ifdef FEAT_ARP
	dos2 = TRUE;
# endif
    }
    else	    
    {
# ifndef FEAT_ARP
	mch_errmsg(_("Need Amigados version 2.04 or later\n"));
	exit(3);
# else
		    
	if (!(ArpBase = (struct ArpBase *) OpenLibrary((UBYTE *)ArpName, ArpVersion)))
	{
	    fprintf(stderr, _("Need %s version %ld\n"), ArpName, ArpVersion);
	    exit(3);
	}
# endif
    }
#endif	

    
    for (i = 1; i < argc; ++i)
	if (argv[i][0] == '-')
	{
	    switch (argv[i][1])
	    {
	    case 'f':
		usewin = TRUE;
		break;

	    case 'd':
		if (i < argc - 1
#ifdef FEAT_DIFF
			
			&& argv[i][2] == 'e' && argv[i][3] == 'v'
#endif
		   )
		    device = (char_u *)argv[i + 1];
		break;
	    }
	}


    if (argc != 0
	    && device == NULL
	    && (IsInteractive(Input()) || IsInteractive(Output())))
	return OK;


    if (usewin)
    {
	
	for (i = -1; i < 3; ++i)
	{
	    if (i >= 0)
		device = constrings[i];
	    if (device != NULL && (raw_in = Open((UBYTE *)device,
					   (int)MODE_NEWFILE)) != (BPTR)NULL)
		break;
	}
	if (raw_in == (BPTR)NULL)	
	{
	    mch_errmsg(_(winerr));
	    goto exit;
	}
	raw_out = raw_in;
	close_win = TRUE;
	return OK;
    }

    if ((nilfh = Open((UBYTE *)"NIL:", (int)MODE_NEWFILE)) == (BPTR)NULL)
    {
	mch_errmsg(_("Cannot open NIL:\n"));
	goto exit;
    }

    
#if !defined(__amigaos4__) && !defined(__AROS__) && !defined(__MORPHOS__)
    sprintf((char *)buf1, "t:nc%p", FindTask(0));
#else
    sprintf((char *)buf1, "t:nc%ld", (int)buf1);
#endif
    if ((fh = Open((UBYTE *)buf1, (int)MODE_NEWFILE)) == (BPTR)NULL)
    {
	mch_errmsg(_("Cannot create "));
	mch_errmsg((char *)buf1);
	mch_errmsg("\n");
	goto exit;
    }
    
    if (argc == 0)	
	ac = ((struct WBStartup *)argv)->sm_NumArgs;
    else
	ac = argc;
    for (i = 0; i < ac; ++i)
    {
	if (argc == 0)
	{
	    *buf2 = NUL;
	    argp = &(((struct WBStartup *)argv)->sm_ArgList[i]);
	    if (argp->wa_Lock)
		(void)lock2name(argp->wa_Lock, buf2, (int)(BUF2SIZE - 1));
#ifdef FEAT_ARP
	    if (dos2)	    
#endif
		AddPart((UBYTE *)buf2, (UBYTE *)argp->wa_Name, (int)(BUF2SIZE - 1));
#ifdef FEAT_ARP
	    else	    
		TackOn((char *)buf2, argp->wa_Name);
#endif
	    av = (char *)buf2;
	}
	else
	    av = argv[i];

	
	if (av[0] == '-' && av[1] == 'd'
#ifdef FEAT_DIFF
		&& av[2] == 'e' && av[3] == 'v'
#endif
		)
	{
	    ++i;
	    continue;
	}
	if (vim_strchr((char_u *)av, ' '))
	    Write(fh, "\"", 1L);
	Write(fh, av, (int)strlen(av));
	if (vim_strchr((char_u *)av, ' '))
	    Write(fh, "\"", 1L);
	Write(fh, " ", 1L);
    }
    Write(fh, "\nendcli\n", 8L);
    Close(fh);


    for (i = -1; i < 3; ++i)
    {
	if (i >= 0)
	    device = constrings[i];
	else if (device == NULL)
	    continue;
	sprintf((char *)buf2, "newcli <nil: >nil: %s from %s", (char *)device, (char *)buf1);
#ifdef FEAT_ARP
	if (dos2)
	{
#endif
	    if (!SystemTags((UBYTE *)buf2, SYS_UserShell, TRUE, TAG_DONE))
		break;
#ifdef FEAT_ARP
	}
	else
	{
	    if (Execute((UBYTE *)buf2, nilfh, nilfh))
		break;
	}
#endif
    }
    if (i == 3)	    
    {
	DeleteFile((UBYTE *)buf1);
	mch_errmsg(_(winerr));
	goto exit;
    }
    exitval = 0;    

exit:
#ifdef FEAT_ARP
    if (ArpBase)
	CloseLibrary((struct Library *) ArpBase);
#endif
    exit(exitval);
    
    return FAIL;
}


    int
mch_input_isatty(void)
{
    return TRUE;
}



    void
fname_case(
    char_u	*name,
    int		len UNUSED)		
{
    struct FileInfoBlock    *fib;
    size_t		    flen;

    fib = get_fib(name);
    if (fib == NULL)
	return;

    flen = STRLEN(name);
    
#ifdef __amigaos4__
    if (fib->fib_DirEntryType == ST_ROOT)
	strcat(fib->fib_FileName, ":");
#endif
    if (flen == strlen(fib->fib_FileName))	
	mch_memmove(name, fib->fib_FileName, flen);
    free_fib(fib);
}


    static struct FileInfoBlock *
get_fib(char_u *fname)
{
    BPTR		    flock;
    struct FileInfoBlock    *fib;

    if (fname == NULL)	    
	return NULL;
#ifdef __amigaos4__
    fib = AllocDosObject(DOS_FIB,0);
#else
    fib = ALLOC_ONE(struct FileInfoBlock);
#endif
    if (fib == NULL)
	return;

    flock = Lock((UBYTE *)fname, (int)ACCESS_READ);
    if (flock == (BPTR)NULL || !Examine(flock, fib))
    {
	free_fib(fib);  
	fib = NULL;
    }
    if (flock)
	UnLock(flock);
    return fib;
}


    void
mch_settitle(char_u *title, char_u *icon)
{
    if (wb_window != NULL && title != NULL)
	SetWindowTitles(wb_window, (UBYTE *)title, (UBYTE *)-1L);
}


    void
mch_restore_title(int which)
{
    if (which & SAVE_RESTORE_TITLE)
	mch_settitle(oldwindowtitle, NULL);
}

    int
mch_can_restore_title(void)
{
    return (wb_window != NULL);
}

    int
mch_can_restore_icon(void)
{
    return FALSE;
}

    void
mch_setmouse(int on UNUSED)
{
    
}


    int
mch_get_user_name(char_u *s, int len)
{
#if defined(__amigaos4__) || defined(__AROS__) || defined(__MORPHOS__)
    struct passwd   *pwd = getpwuid(getuid());

    if (pwd != NULL && pwd->pw_name && len > 0)
    {
	vim_strncpy(s, (char_u *)pwd->pw_name, len - 1);
	return OK;
    }
#endif
    *s = NUL;
    return FAIL;
}


    void
mch_get_host_name(char_u *s, int len)
{
#if !defined(__AROS__)
    gethostname(s, len);
#else
    vim_strncpy(s, "Amiga", len - 1);
#endif
}


    int
mch_get_pid(void)
{
#if defined(__amigaos4__)
    return (int) getpid();
#elif defined(__AROS__) || defined(__MORPHOS__)
    
    
    return((int)FindTask(0));
#else
    return (int)0;
#endif
}


    int
mch_dirname(char_u *buf, int len)
{
    return mch_FullName((char_u *)"", buf, len, FALSE);
}


    int
mch_FullName(
    char_u	*fname,
    char_u	*buf,
    int		len,
    int		force)
{
    BPTR	l;
    int		retval = FAIL;
    int		i;

    
    if ((l = Lock((UBYTE *)fname, (int)ACCESS_READ)) != (BPTR)0)
    {
	retval = lock2name(l, buf, (int)len - 1);
	UnLock(l);
    }
    else if (force || !mch_isFullName(fname))	    
    {
	
	if ((l = Lock((UBYTE *)"", (int)ACCESS_READ)) != (BPTR)NULL)
	{
	    retval = lock2name(l, buf, (int)len);
	    UnLock(l);
	    if (retval == OK)
	    {
		i = STRLEN(buf);
		
		
		if (i == 0 || *fname != NUL)
		{
		    if (i < len - 1 && (i == 0 || buf[i - 1] != ':'))
			buf[i++] = '/';
		    vim_strncpy(buf + i, fname, len - i - 1);
		}
	    }
	}
    }
    if (*buf == 0 || *buf == ':')
	retval = FAIL;	
    return retval;
}


    int
mch_isFullName(char_u *fname)
{
    return (vim_strchr(fname, ':') != NULL && *fname != ':');
}


    static int
lock2name(BPTR lock, char_u *buf, int len)
{
#ifdef FEAT_ARP
    if (dos2)		    
#endif
	return ((int)NameFromLock(lock, (UBYTE *)buf, len) ? OK : FAIL);
#ifdef FEAT_ARP
    else		
	return ((int)PathName(lock, (char *)buf, (int)(len/32)) ? OK : FAIL);
#endif
}


    int
mch_getperm(char_u *name)
{
    struct FileInfoBlock    *fib;
    int		    retval = -1;

    fib = get_fib(name);
    if (fib == NULL)
	return -1;

    retval = fib->fib_Protection;
    free_fib(fib);
    return retval;
}


    int
mch_setperm(char_u *name, int perm)
{
    perm &= ~FIBF_ARCHIVE;		
    return (SetProtection((UBYTE *)name, (int)perm) ? OK : FAIL);
}


    void
mch_hide(char_u *name UNUSED)
{
    
}


    int
mch_isdir(char_u *name)
{
    struct FileInfoBlock    *fib;
    int			    retval = FALSE;

    fib = get_fib(name);
    if (fib == NULL)
	return FALSE;

#ifdef __amigaos4__
    retval = (FIB_IS_DRAWER(fib)) ? TRUE : FALSE;
#else
    retval = ((fib->fib_DirEntryType >= 0) ? TRUE : FALSE);
#endif
    free_fib(fib);
    return retval;
}


    int
mch_mkdir(char_u *name)
{
    BPTR	lock;

    lock = CreateDir(name);
    if (lock == NULL)
	return -1;

    UnLock(lock);
    return 0;
}


    int
mch_can_exe(char_u *name, char_u **path UNUSED, int use_path)
{
    int exe = -1;
#ifdef __amigaos4__
    
    BPTR seg = LoadSeg(name);

    if (seg && GetSegListInfoTags(seg, GSLI_Native, NULL, TAG_DONE) !=
	    GetSegListInfoTags(seg, GSLI_68KHUNK, NULL, TAG_DONE))
    {
	
	struct ExamineData *exd = ExamineObjectTags(EX_StringNameInput, name);

	exe = (exd && !(exd->Protection & EXDF_NO_EXECUTE)) ? 1 : 0;
	FreeDosObject(DOS_EXAMINEDATA, exd);
    }
    else
    {
	exe = 0;
    }

    UnLoadSeg(seg);

    
    if (!exe && use_path)
    {
	
	BPTR cwd = GetCurrentDir();
	struct PathNode *head = DupCmdPathList(NULL);

	
	for (struct PathNode *tail = head; !exe && tail;
			       tail = (struct PathNode *) BADDR(tail->pn_Next))
	{
	    SetCurrentDir(tail->pn_Lock);
	    exe = mch_can_exe(name, path, 0);
	}

	
	FreeCmdPathList(head);
	SetCurrentDir(cwd);
    }
#endif
    return exe;
}


    int
mch_nodetype(char_u *name UNUSED)
{
    
    return NODE_NORMAL;
}

    void
mch_early_init(void)
{
}


    void
mch_exit(int r)
{
    exiting = TRUE;

    if (raw_in)			    
    {
	settmode(TMODE_COOK);
	stoptermcap();
    }
    out_char('\n');
    if (raw_out)
    {
	if (term_console)
	{
	    win_resize_off();	    
	    if (size_set)
		OUT_STR("\233t\233u");	
	}
	out_flush();
    }

    mch_restore_title(SAVE_RESTORE_BOTH);    

    ml_close_all(TRUE);		    

#ifdef FEAT_ARP
    if (ArpBase)
	CloseLibrary((struct Library *) ArpBase);
#endif
    if (close_win)
	Close(raw_in);
    if (r)
	printf(_("Vim exiting with %d\n"), r); 
    exit(r);
}



#define MP(xx)	((struct MsgPort *)((struct FileHandle *) (BADDR(xx)))->fh_Type)


    void
mch_settmode(tmode_T tmode)
{
#if defined(__AROS__) || defined(__amigaos4__) || defined(__MORPHOS__)
    if (!SetMode(raw_in, tmode == TMODE_RAW ? 1 : 0))
#else
    if (dos_packet(MP(raw_in), (int)ACTION_SCREEN_MODE,
					  tmode == TMODE_RAW ? -1L : 0L) == 0)
#endif
	mch_errmsg(_("cannot change console mode ?!\n"));
}



#ifndef PROTO
# include <devices/conunit.h>
#endif


#if defined(__AROS__) || defined(__MORPHOS__)
    int
mch_get_shellsize(void)
{
    if (!term_console)
	return FAIL;

    if (raw_in && raw_out)
    {
	
	int old_tmode = cur_tmode;
	char ctrl[] = "\x9b""0 q";

	
	mch_settmode(TMODE_RAW);

	
	if (Write(raw_out, ctrl, sizeof(ctrl)) == sizeof(ctrl))
	{
	    char scan[] = "\x9b""1;1;%d;%d r",
		 answ[sizeof(scan) + 8] = { '\0' };

	    
	    if (Read(raw_in, answ, sizeof(answ) - 1) > 0)
	    {
		
		if (sscanf(answ, scan, &Rows, &Columns) == 2)
		{
		    
		    mch_settmode(old_tmode);
		    return OK;
		}
	    }
	}

	
	mch_settmode(old_tmode);
    }

    
    term_console = FALSE;
    Columns = 80;
    Rows = 24;

    return FAIL;
}
#else

    int
mch_get_shellsize(void)
{
    struct ConUnit  *conUnit;
#ifndef __amigaos4__
    char	    id_a[sizeof(struct InfoData) + 3];
#endif
    struct InfoData *id=0;

    if (!term_console)	
	goto out;

    
#ifdef __amigaos4__
    if (!(id = AllocDosObject(DOS_INFODATA, 0)))
	goto out;
#else
    id = (struct InfoData *)(((int)id_a + 3L) & ~3L);
#endif

    
    if (size_set)
	OUT_STR("\233t\233u");	
    out_flush();

    if (dos_packet(MP(raw_out), (int)ACTION_DISK_INFO, ((ULONG) id) >> 2) == 0
	    || (wb_window = (struct Window *)id->id_VolumeNode) == NULL)
    {
	
	
	term_console = FALSE;
	goto out;
    }
    if (oldwindowtitle == NULL)
	oldwindowtitle = (char_u *)wb_window->Title;
    if (id->id_InUse == (BPTR)NULL)
    {
	mch_errmsg(_("mch_get_shellsize: not a console??\n"));
	return FAIL;
    }
    conUnit = (struct ConUnit *) ((struct IOStdReq *) id->id_InUse)->io_Unit;

    
    Rows = conUnit->cu_YMax + 1;
    Columns = conUnit->cu_XMax + 1;
    if (Rows < 0 || Rows > 200)	    
    {
	Columns = 80;
	Rows = 24;
	term_console = FALSE;
	return FAIL;
    }

    return OK;
out:
#ifdef __amigaos4__
    FreeDosObject(DOS_INFODATA, id); 
#endif

    return FAIL;
}
#endif


    void
mch_set_shellsize(void)
{
    if (!term_console)
	return;

    size_set = TRUE;
    out_char(CSI);
    out_num((int)Rows);
    out_char('t');
    out_char(CSI);
    out_num((int)Columns);
    out_char('u');
    out_flush();
}


    void
mch_new_shellsize(void)
{
    
}


    static void
out_num(int n)
{
    OUT_STR_NF(tltoa((unsigned int)n));
}

#if !defined(AZTEC_C) && !defined(__AROS__) && !defined(__amigaos4__)


#ifndef PROTO


# include <exec/memory.h>
#endif



    static int
dos_packet(
    struct MsgPort *pid,    
    int	    action, 
    int	    arg)    
{
# ifdef FEAT_ARP
    struct MsgPort	    *replyport;
    struct StandardPacket   *packet;
    int		    res1;

    if (dos2)
# endif
	return DoPkt(pid, action, arg, 0L, 0L, 0L, 0L);	
# ifdef FEAT_ARP

    replyport = (struct MsgPort *) CreatePort(NULL, 0);	
    if (!replyport)
	return (0);

    
    packet = (struct StandardPacket *)
	AllocMem((int) sizeof(struct StandardPacket), MEMF_PUBLIC | MEMF_CLEAR);
    if (!packet)
    {
	DeletePort(replyport);
	return (0);
    }
    packet->sp_Msg.mn_Node.ln_Name = (char *) &(packet->sp_Pkt);
    packet->sp_Pkt.dp_Link = &(packet->sp_Msg);
    packet->sp_Pkt.dp_Port = replyport;
    packet->sp_Pkt.dp_Type = action;
    packet->sp_Pkt.dp_Arg1 = arg;

    PutMsg(pid, (struct Message *)packet);	

    WaitPort(replyport);
    GetMsg(replyport);

    res1 = packet->sp_Pkt.dp_Res1;

    FreeMem(packet, (int) sizeof(struct StandardPacket));
    DeletePort(replyport);

    return (res1);
# endif
}
#endif 


    int
mch_call_shell(
    char_u	*cmd,
    int		options)	
{
    BPTR	mydir;
    int		x;
    int		tmode = cur_tmode;
#ifdef AZTEC_C
    int		use_execute;
    char_u	*shellcmd = NULL;
    char_u	*shellarg;
#endif
    int		retval = 0;

    if (close_win)
    {
	
	emsg(_(e_cannot_execute_shell_with_f_option));
	return -1;
    }

    if (term_console)
	win_resize_off();	    
    out_flush();

    if (options & SHELL_COOKED)
	settmode(TMODE_COOK);	    
    mydir = Lock((UBYTE *)"", (int)ACCESS_READ);   

#if !defined(AZTEC_C)		    
    if (cmd == NULL)
    {
# ifdef FEAT_ARP
	if (dos2)
# endif
	    x = SystemTags(p_sh, SYS_UserShell, TRUE, TAG_DONE);
# ifdef FEAT_ARP
	else
	    x = Execute(p_sh, raw_in, raw_out);
# endif
    }
    else
    {
# ifdef FEAT_ARP
	if (dos2)
# endif
	    x = SystemTags((char *)cmd, SYS_UserShell, TRUE, TAG_DONE);
# ifdef FEAT_ARP
	else
	    x = Execute((char *)cmd, 0L, raw_out);
# endif
    }
# ifdef FEAT_ARP
    if ((dos2 && x < 0) || (!dos2 && !x))
# else
    if (x < 0)
# endif
    {
	msg_puts(_("Cannot execute "));
	if (cmd == NULL)
	{
	    msg_puts(_("shell "));
	    msg_outtrans(p_sh);
	}
	else
	    msg_outtrans(cmd);
	msg_putchar('\n');
	retval = -1;
    }
# ifdef FEAT_ARP
    else if (!dos2 || x)
# else
    else if (x)
# endif
    {
	if ((x = IoErr()) != 0)
	{
	    if (!(options & SHELL_SILENT))
	    {
		msg_putchar('\n');
		msg_outnum((int)x);
		msg_puts(_(" returned\n"));
	    }
	    retval = x;
	}
    }
#else	
    if (p_st >= 4 || (p_st >= 2 && !(options & SHELL_FILTER)))
	use_execute = 1;
    else
	use_execute = 0;
    if (!use_execute)
    {
	
	shellcmd = vim_strsave(p_sh);
	if (shellcmd == NULL)	    
	    use_execute = 1;
	else
	{
	    shellarg = skiptowhite(shellcmd);	
	    if (*shellarg != NUL)
	    {
		*shellarg++ = NUL;
		shellarg = skipwhite(shellarg);
	    }
	}
    }
    if (cmd == NULL)
    {
	if (use_execute)
	{
# ifdef FEAT_ARP
	    if (dos2)
# endif
		x = SystemTags((UBYTE *)p_sh, SYS_UserShell, TRUE, TAG_DONE);
# ifdef FEAT_ARP
	    else
		x = !Execute((UBYTE *)p_sh, raw_in, raw_out);
# endif
	}
	else
	    x = fexecl((char *)shellcmd, (char *)shellcmd, (char *)shellarg, NULL);
    }
    else if (use_execute)
    {
# ifdef FEAT_ARP
	if (dos2)
# endif
	    x = SystemTags((UBYTE *)cmd, SYS_UserShell, TRUE, TAG_DONE);
# ifdef FEAT_ARP
	else
	    x = !Execute((UBYTE *)cmd, 0L, raw_out);
# endif
    }
    else if (p_st & 1)
	x = fexecl((char *)shellcmd, (char *)shellcmd, (char *)shellarg,
							   (char *)cmd, NULL);
    else
	x = fexecl((char *)shellcmd, (char *)shellcmd, (char *)shellarg,
					   (char *)p_shcf, (char *)cmd, NULL);
# ifdef FEAT_ARP
    if ((dos2 && x < 0) || (!dos2 && x))
# else
    if (x < 0)
# endif
    {
	msg_puts(_("Cannot execute "));
	if (use_execute)
	{
	    if (cmd == NULL)
		msg_outtrans(p_sh);
	    else
		msg_outtrans(cmd);
	}
	else
	{
	    msg_puts(_("shell "));
	    msg_outtrans(shellcmd);
	}
	msg_putchar('\n');
	retval = -1;
    }
    else
    {
	if (use_execute)
	{
# ifdef FEAT_ARP
	    if (!dos2 || x)
# else
	    if (x)
# endif
		x = IoErr();
	}
	else
	    x = wait();
	if (x)
	{
	    if (!(options & SHELL_SILENT) && !emsg_silent)
	    {
		msg_putchar('\n');
		msg_outnum((int)x);
		msg_puts(_(" returned\n"));
	    }
	    retval = x;
	}
    }
    vim_free(shellcmd);
#endif	

    if ((mydir = CurrentDir(mydir)) != 0) 
	UnLock(mydir);
    if (tmode == TMODE_RAW)
    {
	
	cur_tmode = TMODE_UNKNOWN;
	settmode(TMODE_RAW);		
    }
    resettitle();
    if (term_console)
	win_resize_on();		
    return retval;
}


    void
mch_breakcheck(int force UNUSED)
{
   if (SetSignal(0L, (int)(SIGBREAKF_CTRL_C|SIGBREAKF_CTRL_D|SIGBREAKF_CTRL_E|SIGBREAKF_CTRL_F)) & SIGBREAKF_CTRL_C)
	got_int = TRUE;
}





#ifdef _DCC
#define Chk_Abort chkabort
#endif

#ifdef LATTICE
void __regargs __chkabort(void);

void __regargs __chkabort(void)
{}

#else
    int
Chk_Abort(void)
{
    return(0L);
}
#endif



#ifdef __amigaos4__
# define	ANCHOR_BUF_SIZE	1024
#else
# define ANCHOR_BUF_SIZE (512)
# define ANCHOR_SIZE (sizeof(struct AnchorPath) + ANCHOR_BUF_SIZE)
#endif

    int
mch_expandpath(
    garray_T	*gap,
    char_u	*pat,
    int		flags)		
{
    struct AnchorPath	*Anchor;
    LONG		Result;
    char_u		*starbuf, *sp, *dp;
    int			start_len;
    int			matches;
#ifdef __amigaos4__
    struct TagItem	AnchorTags[] = {
	{ADO_Strlen, ANCHOR_BUF_SIZE},
	{ADO_Flags, APF_DODOT|APF_DOWILD|APF_MultiAssigns},
	{TAG_DONE, 0L}
    };
#endif

    start_len = gap->ga_len;

    
#ifdef __amigaos4__
    Anchor = AllocDosObject(DOS_ANCHORPATH, AnchorTags);
#else
    Anchor = alloc_clear(ANCHOR_SIZE);
#endif
    if (Anchor == NULL)
	return 0;

#ifndef __amigaos4__
    Anchor->ap_Strlen = ANCHOR_BUF_SIZE;  
# ifdef APF_DODOT
    Anchor->ap_Flags = APF_DODOT | APF_DOWILD;	
# else
    Anchor->ap_Flags = APF_DoDot | APF_DoWild;	
# endif
#endif

#ifdef FEAT_ARP
    if (dos2)
    {
#endif
	
	starbuf = alloc(2 * STRLEN(pat) + 1);
	if (starbuf == NULL)
	    goto Return;
	for (sp = pat, dp = starbuf; *sp; ++sp)
	{
	    if (*sp == '*')
	    {
		*dp++ = '#';
		*dp++ = '?';
	    }
	    else
		*dp++ = *sp;
	}
	*dp = NUL;
	Result = MatchFirst((UBYTE *)starbuf, Anchor);
	vim_free(starbuf);
#ifdef FEAT_ARP
    }
    else
	Result = FindFirst((char *)pat, Anchor);
#endif

    
    while (Result == 0)
    {
#ifdef __amigaos4__
	addfile(gap, (char_u *)Anchor->ap_Buffer, flags);
#else
	addfile(gap, (char_u *)Anchor->ap_Buf, flags);
#endif
#ifdef FEAT_ARP
	if (dos2)
#endif
	    Result = MatchNext(Anchor);
#ifdef FEAT_ARP
	else
	    Result = FindNext(Anchor);
#endif
    }
    matches = gap->ga_len - start_len;

    if (Result == ERROR_BUFFER_OVERFLOW)
	emsg(_("ANCHOR_BUF_SIZE too small."));
    else if (matches == 0 && Result != ERROR_OBJECT_NOT_FOUND
			  && Result != ERROR_DEVICE_NOT_MOUNTED
			  && Result != ERROR_NO_MORE_ENTRIES)
	emsg(_("I/O ERROR"));

    
    if (matches)
	qsort((void *)(((char_u **)gap->ga_data) + start_len),
				  (size_t)matches, sizeof(char_u *), sortcmp);

    
#ifdef FEAT_ARP
    if (dos2)
#endif
	MatchEnd(Anchor);
#ifdef FEAT_ARP
    else
	FreeAnchorChain(Anchor);
#endif

Return:
#ifdef __amigaos4__
    FreeDosObject(DOS_ANCHORPATH, Anchor);
#else
    vim_free(Anchor);
#endif

    return matches;
}

    static int
sortcmp(const void *a, const void *b)
{
    char *s = *(char **)a;
    char *t = *(char **)b;

    return pathcmp(s, t, -1);
}


    int
mch_has_exp_wildcard(char_u *p)
{
    for ( ; *p; MB_PTR_ADV(p))
    {
	if (*p == '\\' && p[1] != NUL)
	    ++p;
	else if (vim_strchr((char_u *)"*?[(#", *p) != NULL)
	    return TRUE;
    }
    return FALSE;
}

    int
mch_has_wildcard(char_u *p)
{
    for ( ; *p; MB_PTR_ADV(p))
    {
	if (*p == '\\' && p[1] != NUL)
	    ++p;
	else
	    if (vim_strchr((char_u *)
#  ifdef VIM_BACKTICK
				    "*?[(#$`"
#  else
				    "*?[(#$"
#  endif
						, *p) != NULL
		    || (*p == '~' && p[1] != NUL))
		return TRUE;
    }
    return FALSE;
}


    char_u *
mch_getenv(char_u *var)
{
    int		    len;
    UBYTE	    *buf;		
    char_u	    *retval;		
    static char_u   *alloced = NULL;	

#ifdef FEAT_ARP
    if (!dos2)
	retval = (char_u *)getenv((char *)var);
    else
#endif
    {
	VIM_CLEAR(alloced);
	retval = NULL;

	buf = alloc(IOSIZE);
	if (buf == NULL)
	    return NULL;

	len = GetVar((UBYTE *)var, buf, (int)(IOSIZE - 1), (int)0);
	if (len >= 0)
	{
	    retval = vim_strsave((char_u *)buf);
	    alloced = retval;
	}

	vim_free(buf);
    }

    
    if (retval == NULL && STRCMP(var, "VIM") == 0)
	retval = (char_u *)"vim:";

    return retval;
}



    int
mch_setenv(char *var, char *value, int x UNUSED)
{
#ifdef FEAT_ARP
    if (!dos2)
	return setenv(var, value);
#endif

    if (SetVar((UBYTE *)var, (UBYTE *)value, (LONG)-1, (ULONG)GVF_LOCAL_ONLY))
	return 0;   
    return -1;	    
}
