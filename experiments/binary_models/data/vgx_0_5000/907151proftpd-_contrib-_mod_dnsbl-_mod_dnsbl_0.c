static const char *reverse_ip_addr(pool *p, const char *ip_addr) {
char *addr2, *res, *tmp;
size_t addrlen;

if (p == NULL ||
ip_addr == NULL) {
errno = EINVAL;
return NULL;
}

addrlen = strlen(ip_addr) +1;

res = pcalloc(p, addrlen);
addr2 = pstrdup(p, ip_addr);

tmp = strrchr(addr2, '.');
sstrcat(res, tmp+1, addrlen);
sstrcat(res, ".", addrlen);
*tmp = '\0';

tmp = strrchr(addr2, '.');
sstrcat(res, tmp+1, addrlen);
sstrcat(res, ".", addrlen);
*tmp = '\0';

tmp = strrchr(addr2, '.');
sstrcat(res, tmp+1, addrlen);
sstrcat(res, ".", addrlen);
*tmp = '\0';

sstrcat(res, addr2, addrlen);
return res;
}