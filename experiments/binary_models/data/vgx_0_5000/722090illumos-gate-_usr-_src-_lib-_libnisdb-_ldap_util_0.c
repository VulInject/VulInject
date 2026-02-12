char *
scat(const char *msg, int deallocate, char *s1, char *s2) {
char	*n;
int	l1 = 0, l2 = 0;

if (s1 == 0) {
n = sdup(msg, T, s2);
if (deallocate)
sfree(s2);
return (n);
} else if (s2 == 0) {
n = sdup(msg, T, s1);
if (deallocate)
free(s1);
return (n);
}

l1 = strlen(s1);
l2 = strlen(s2);

n = malloc(l1+l2+1);
if (n != 0) {
memcpy(n, s1, l1);
memcpy(&n[l1], s2, l2);
n[l1+l2] = '\0';
} else {
logmsg(MSG_NOMEM, LOG_ERR, "%s: malloc(%d) => NULL\n",
(msg != 0) ? msg : "<unknown>", l1+l2+1);
}

if (deallocate) {
free(s1);
free(s2);
}

return (n);
}