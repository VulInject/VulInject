char *FUN1(const char *VAR1) {
char *VAR2, *VAR3;

VAR3 = getenv(VAR1);
if(VAR3 == NULL)
return NULL;

VAR2 = strchr(VAR3, '');
if(VAR2 != NULL) {
VAR2++;
VAR3 = VAR2;
}

return VAR3;
}