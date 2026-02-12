static void
overwrite(PGconn *conn, Oid lobjId, int start, int len)
{
int			lobj_fd;
char	   *buf;
int			nbytes;
int			nwritten;
int			i;

lobj_fd = lo_open(conn, lobjId, INV_WRITE);
if (lobj_fd < 0)
fprintf(stderr, "cannot open large object %u", lobjId);

lo_lseek(conn, lobj_fd, start, SEEK_SET);
buf = malloc(len + 1);

for (i = 0; i < len; i++)
buf[i] = 'X';
buf[i] = '\0';

nwritten = 0;
while (len - nwritten > 0)
{
nbytes = lo_write(conn, lobj_fd, buf + nwritten, len - nwritten);
nwritten += nbytes;
if (nbytes <= 0)
{
fprintf(stderr, "\nWRITE FAILED!\n");
break;
}
}
free(buf);
fprintf(stderr, "\n");
lo_close(conn, lobj_fd);
}