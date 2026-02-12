static enum roff_tok
roff_parse(struct roff *r, char *buf, int *pos, int ln, int ppos)
{
char		*cp;
const char	*mac;
size_t		 maclen;
int		 deftype;
enum roff_tok	 t;

cp = buf + *pos;

if ('\0' == *cp || '"' == *cp || '\t' == *cp || ' ' == *cp)
return TOKEN_NONE;

mac = cp;
maclen = roff_getname(r, &cp, ln, ppos);

deftype = ROFFDEF_USER | ROFFDEF_REN;
r->current_string = roff_getstrn(r, mac, maclen, &deftype);
switch (deftype) {
case ROFFDEF_USER:
t = ROFF_USERDEF;
break;
case ROFFDEF_REN:
t = ROFF_RENAMED;
break;
default:
t = roffhash_find(r->reqtab, mac, maclen);
break;
}
if (t != TOKEN_NONE)
*pos = cp - buf;
else if (deftype == ROFFDEF_UNDEF) {

roff_setstrn(&r->strtab, mac, maclen, "", 0, 0);
roff_setstrn(&r->rentab, mac, maclen, NULL, 0, 0);
}
return t;
}