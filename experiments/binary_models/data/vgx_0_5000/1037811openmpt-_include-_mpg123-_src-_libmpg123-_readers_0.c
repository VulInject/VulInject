static ssize_t timeout_read(mpg123_handle *fr, void *buf, size_t count)
{
struct timeval tv;
ssize_t ret = 0;
fd_set fds;
tv.tv_sec = fr->rdat.timeout_sec;
tv.tv_usec = 0;
FD_ZERO(&fds);
FD_SET(fr->rdat.filept, &fds);
ret = select(fr->rdat.filept+1, &fds, NULL, NULL, &tv);

if(ret > 0) ret = read(fr->rdat.filept, buf, count);
else
{
ret=-1; 
if(NOQUIET) error("stream timed out");
}
return ret;
}