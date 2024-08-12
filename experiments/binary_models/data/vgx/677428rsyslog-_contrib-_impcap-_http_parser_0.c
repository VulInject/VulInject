static inline char *FUN1(char **VAR1, const char *VAR2) {
char *VAR3 = *VAR1;

if (*VAR1) {
char *VAR4 = strstr(*VAR1, VAR2);
if (VAR4) {
*VAR1 = VAR4;
**VAR1 = '';
*VAR1 += strlen(VAR2);
} else {
*VAR1 = NULL;
}
}

return VAR3;
}