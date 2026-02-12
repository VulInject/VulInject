print_addrs (void)
{
size_t i;
int err;

printf("%d servers:\n", (int)sl.nservers);
for (i = 0; i < sl.nservers; i++) {
struct server_entry *entry = &sl.servers[i];
char hostbuf[NI_MAXHOST], srvbuf[NI_MAXSERV];

if (entry->hostname != NULL) {
printf("%d: h:%s t:%s p:%d m:%d P:%s\n", (int)i,
entry->hostname, ttypename(entry->transport),
entry->port, entry->primary,
entry->uri_path ? entry->uri_path : "");
continue;
}
err = getnameinfo((struct sockaddr *)&entry->addr, entry->addrlen,
hostbuf, sizeof(hostbuf), srvbuf, sizeof(srvbuf),
NI_NUMERICHOST | NI_NUMERICSERV);
if (err) {
printf("%2d: getnameinfo returns error %d=%s\n", (int)i, err,
gai_strerror(err));
} else {
printf("%2d: address %s\t%s\tport %s\n", (int)i, hostbuf,
ttypename(entry->transport), srvbuf);
}
}
}