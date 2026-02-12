void
dump_iproute(FILE *fp, const ip_route_t *route)
{
char *buf = MALLOC(ROUTE_BUF_SIZE);
size_t len;
size_t i;

format_iproute(route, buf, ROUTE_BUF_SIZE);

if (fp)
conf_write(fp, "%*s%s", 5, "", buf);
else {
for (i = 0, len = strlen(buf); i < len; i += i ? MAX_LOG_MSG - 7 : MAX_LOG_MSG - 5)
conf_write(fp, "%*s%s", i ? 6 : 5, "", buf + i);
}

FREE(buf);
}