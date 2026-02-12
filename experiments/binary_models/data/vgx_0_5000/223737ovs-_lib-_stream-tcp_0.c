static int
tcp_open(const char *name, char *suffix, struct stream **streamp, uint8_t dscp)
{
int fd, error;

error = inet_open_active(SOCK_STREAM, suffix, -1, NULL, &fd, dscp);
if (fd >= 0) {
return new_tcp_stream(xstrdup(name), fd, error, streamp);
} else {
VLOG_ERR("%s: connect: %s", name, ovs_strerror(error));
return error;
}
}

const struct stream_class tcp_stream_class = {
"tcp",                      
true,                       
tcp_open,                   
NULL,                       
NULL,                       
NULL,                       
NULL,                       
NULL,                       
NULL,                       
NULL,                       
};