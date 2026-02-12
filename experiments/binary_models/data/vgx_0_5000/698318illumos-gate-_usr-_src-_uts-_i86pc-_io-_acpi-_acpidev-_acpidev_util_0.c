static char *
acpidev_gen_unitaddr(char *uid, char *fmt, char *buf, size_t len)
{
size_t i, cnt;
uint_t id1, id2;

ASSERT(len >= 64);
if (fmt == NULL || strlen(fmt) == 0) {
return (NULL);
}


for (cnt = 0, i = 0; fmt[i] != 0 && cnt <= 2; i++) {
if (fmt[i] != '%') {
continue;
} else if (fmt[i + 1] == 'u' || fmt[i + 1] == 'x') {

i++;
cnt++;
} else {

cnt = SIZE_MAX;
}
}
if (cnt != 1 && cnt != 2) {
ACPIDEV_DEBUG(CE_WARN,
"!acpidev: invalid uid format string '%s'.", fmt);
return (NULL);
}


if (sscanf(uid, fmt, &id1, &id2) != cnt) {
return (NULL);
}

if (cnt == 2 && snprintf(buf, len, "%u,%u", id2, id1) >= len) {
ACPIDEV_DEBUG(CE_WARN,
"!acpidev: generated unitaddr is too long.");
return (NULL);
} else if (cnt == 1 && snprintf(buf, len, "%u", id1) >= len) {
ACPIDEV_DEBUG(CE_WARN,
"!acpidev: generated unitaddr is too long.");
return (NULL);
}

return (buf);
}