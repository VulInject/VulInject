void uwsgi_add_safe_fd(int fd) {

if (uwsgi_fd_is_safe(fd)) return;

size_t len = sizeof(int) * (uwsgi.safe_fds_cnt+1);
int *tmp = realloc(uwsgi.safe_fds, len);
if (!tmp) {
uwsgi_error("uwsgi_add_safe_fd()/realloc()");
exit(1);
}
uwsgi.safe_fds = tmp;	
uwsgi.safe_fds[uwsgi.safe_fds_cnt] = fd;	
uwsgi.safe_fds_cnt++;
}