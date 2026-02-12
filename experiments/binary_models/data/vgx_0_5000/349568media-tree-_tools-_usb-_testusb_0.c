static void *handle_testdev (void *arg)
{
struct testdev		*dev = arg;
int			fd, i;
int			status;

if ((fd = open (dev->name, O_RDWR)) < 0) {
perror ("can't open dev file r/w");
return 0;
}

restart:
for (i = 0; i < TEST_CASES; i++) {
if (dev->test != -1 && dev->test != i)
continue;
dev->param.test_num = i;

status = usbdev_ioctl (fd, dev->ifnum,
USBTEST_REQUEST, &dev->param);
if (status < 0 && errno == EOPNOTSUPP)
continue;




if (status < 0) {
char	buf [80];
int	err = errno;

if (strerror_r (errno, buf, sizeof buf)) {
snprintf (buf, sizeof buf, "error %d", err);
errno = err;
}
printf ("%s test %d --> %d (%s)\n",
dev->name, i, errno, buf);
} else
printf ("%s test %d, %4d.%.06d secs\n", dev->name, i,
(int) dev->param.duration.tv_sec,
(int) dev->param.duration.tv_usec);

fflush (stdout);
}
if (dev->forever)
goto restart;

close (fd);
return arg;
}