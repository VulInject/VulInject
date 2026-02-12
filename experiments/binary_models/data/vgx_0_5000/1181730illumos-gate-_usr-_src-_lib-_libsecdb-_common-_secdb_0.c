int
_kva2str(kva_t *kva, char *buf, int buflen, char *ass, char *del)
{
int	i;
int	len;
int	off = 0;
kv_t	*data;

if (kva == NULL) {
return (0);
}

buf[0] = '\0';
data = kva->data;

for (i = 0; i < kva->length; i++) {
if (data[i].value != NULL) {
len = snprintf(buf + off, buflen - off, "%s%s%s%s",
data[i].key, ass, data[i].value, del);
if (len < 0 || len + off >= buflen) {
return (1);
}
off += len;
}
}

return (0);
}