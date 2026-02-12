static void uping_echo_callback(struct Event* ev)
{
struct Socket      *sock;
struct irc_sockaddr from;
unsigned int       len = 0;
static time_t      last = 0;
static int         counter = 0;
char               buf[BUFSIZE + 1];

assert(ev_type(ev) == ET_READ || ev_type(ev) == ET_ERROR);
sock = ev_socket(ev);
assert(sock == &upingSock_v4 || sock == &upingSock_v6);

Debug((DEBUG_DEBUG, "UPING: uping_echo"));

if (IO_SUCCESS != os_recvfrom_nonb(s_fd(sock), buf, BUFSIZE, &len, &from))
return;

++ServerStats->uping_recv;
if (len < 19)
return;
else if (CurrentTime != last) {
counter = 0;
last = CurrentTime;
} else if (++counter > 10)
return;
os_sendto_nonb(s_fd(sock), buf, len, NULL, 0, &from);
}