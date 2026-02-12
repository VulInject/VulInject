static int read_stream(struct receiver_state *r, char* buffer, size_t size) {
if(unlikely(!size)) {
internal_error(true, "%s() asked to read zero bytes", __FUNCTION__);
return 0;
}

if (r->ssl.conn && r->ssl.flags == NETDATA_SSL_HANDSHAKE_COMPLETE)
return (int)netdata_ssl_read(r->ssl.conn, buffer, size);

ssize_t bytes_read = read(r->fd, buffer, size);
if(bytes_read == 0 && (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINPROGRESS)) {
error("STREAM: %s(): timeout while waiting for data on socket!", __FUNCTION__);
bytes_read = -3;
}
else if (bytes_read == 0) {
error("STREAM: %s(): EOF while reading data from socket!", __FUNCTION__);
bytes_read = -1;
}
else if (bytes_read < 0) {
error("STREAM: %s() failed to read from socket!", __FUNCTION__);
bytes_read = -2;
}


















return (int)bytes_read;
}