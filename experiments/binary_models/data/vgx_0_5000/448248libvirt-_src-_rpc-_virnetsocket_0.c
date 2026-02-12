static ssize_t virNetSocketWriteWire(virNetSocket *sock, const char *buf, size_t len)
{
ssize_t ret;

if (sock->sshSession)
return virNetSocketLibSSH2Write(sock, buf, len);

if (sock->libsshSession)
return virNetSocketLibsshWrite(sock, buf, len);

rewrite:
if (sock->tlsSession &&
virNetTLSSessionGetHandshakeStatus(sock->tlsSession) ==
VIR_NET_TLS_HANDSHAKE_COMPLETE) {
ret = virNetTLSSessionWrite(sock->tlsSession, buf, len);
} else {
ret = write(sock->fd, buf, len); 
}

if (ret < 0) {
if (errno == EINTR)
goto rewrite;
if (errno == EAGAIN)
return 0;

virReportSystemError(errno, "%s",
_("Cannot write data"));
return -1;
}
if (ret == 0) {
virReportSystemError(EIO, "%s",
_("End of file while writing data"));
return -1;
}

return ret;
}