const char *
sa_to_text(const struct sockaddr *sa)
{
static char	 buf[NI_MAXHOST + 5];
char		*p;

buf[0] = '\0';
p = buf;

if (sa->sa_family == AF_LOCAL)
(void)strlcpy(buf, "local", sizeof buf);
else if (sa->sa_family == AF_INET) {
in_addr_t addr;

addr = ((const struct sockaddr_in *)sa)->sin_addr.s_addr;
addr = ntohl(addr);
(void)bsnprintf(p, NI_MAXHOST, "%d.%d.%d.%d",
(addr >> 24) & 0xff, (addr >> 16) & 0xff,
(addr >> 8) & 0xff, addr & 0xff);
}
else if (sa->sa_family == AF_INET6) {
(void)bsnprintf(p, NI_MAXHOST, "[%s]", sockaddr_to_text(sa));
}

return (buf);
}