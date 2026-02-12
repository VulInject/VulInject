int
pfAddMulti(int s, char *interface, char *addr)
{
struct ifreq	ifr;
int		fd;

strncpy(ifr.ifr_name, interface, sizeof(ifr.ifr_name) - 1);
ifr.ifr_name[sizeof(ifr.ifr_name) - 1] = 0;

ifr.ifr_addr.sa_family = AF_UNSPEC;
bcopy(addr, ifr.ifr_addr.sa_data, 6);


if ((fd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
syslog(LOG_ERR, "pfAddMulti: socket: %m");
return (-1);
}
if (ioctl(fd, SIOCADDMULTI, &ifr) < 0) {
syslog(LOG_ERR, "pfAddMulti: SIOCADDMULTI: %m");
close(fd);
return (-1);
}
close(fd);

return (0);
}