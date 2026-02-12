char *
get_sbuf_line(line_t *lp)
{
static char *sfbuf = NULL;	
static int sfbufsz = 0;		
int len;

if (lp == &buffer_head)
return NULL;
seek_write = 1;				

if (sfseek != lp->seek) {
sfseek = lp->seek;
if (fseeko(sfp, sfseek, SEEK_SET) == -1) {
perror(NULL);
seterrmsg("cannot seek temp file");
return NULL;
}
}
len = lp->len;
REALLOC(sfbuf, sfbufsz, len + 1, NULL);
if (fread(sfbuf, sizeof(char), len, sfp) != len) {
perror(NULL);
seterrmsg("cannot read temp file");
return NULL;
}
sfseek += len;				
sfbuf[len] = '\0';
return sfbuf;
}