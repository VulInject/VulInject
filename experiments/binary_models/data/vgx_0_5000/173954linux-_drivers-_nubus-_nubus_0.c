}
EXPORT_SYMBOL(nubus_get_rsrc_mem);

unsigned int nubus_get_rsrc_str(char *dest, const struct nubus_dirent *dirent,
unsigned int len)
{
char *t = dest;
unsigned char *p = nubus_dirptr(dirent);

while (len > 1) {
unsigned char c = nubus_get_rom(&p, 1, dirent->mask);

if (!c)
break;
*t++ = c;
len--;
}
if (len > 0)
*t = '\0';
return t - dest;
}