void
s_pass_peer_connection(char *m, MESG *md)
{
short	status = MTRANSMITERR;
char	*dest;
struct strrecvfd recv_fd;

(void) getmessage(m, S_PASS_PEER_CONNECTION);
syslog(LOG_DEBUG, "s_pass_peer_connection()");

memset(&recv_fd, 0, sizeof (recv_fd));
if (ioctl(md->readfd, I_RECVFD, &recv_fd) == 0) {
int fd = recv_fd.fd;

if (get_peer_label(fd, &md->slabel) == 0) {
if (md->admin == 1)
md->admin = -1; 
status = MOK;
}

close(fd);
}

mputm(md, R_PASS_PEER_CONNECTION, status);
}