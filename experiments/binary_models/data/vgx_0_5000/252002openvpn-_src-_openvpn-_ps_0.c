static int
proxy_connection_io_recv(struct proxy_connection *pc)
{

const int status = recv(pc->sd, BPTR(&pc->buf), BCAP(&pc->buf), MSG_NOSIGNAL);
if (status < 0)
{
return (errno == EAGAIN) ? IOSTAT_EAGAIN_ON_READ : IOSTAT_READ_ERROR;
}
else
{
if (!status)
{
return IOSTAT_READ_ERROR;
}
dmsg(D_PS_PROXY_DEBUG, "PORT SHARE PROXY: read[%d] %d", (int)pc->sd, status);
pc->buf.len = status;
}
return IOSTAT_GOOD;
}