static void
pickout(PGconn *conn, Oid lobjId, int start, int len)
{
int			lobj_fd;
char	   *buf;
int			nbytes;
int			nread;

lobj_fd = lo_open(conn, lobjId, INV_READ);
if (lobj_fd < 0)
fprintf(stderr, "cannot open large object %u", lobjId);

lo_lseek(conn, lobj_fd, start, SEEK_SET);
buf = malloc(len + 1);

nread = 0;
while (len - nread > 0)
{
nbytes = lo_read(conn, lobj_fd, buf, len - nread);
buf[nbytes] = '\0';
fprintf(stderr, ">>> %s", buf);
nread += nbytes;
if (nbytes <= 0)
break;				
}
free(buf);
fprintf(stderr, "\n");
lo_close(conn, lobj_fd);
}