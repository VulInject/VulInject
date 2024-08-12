static char *
FUN1(const char *VAR1)
{
size_t VAR2;
char *VAR3;

VAR2 = strlen(VAR1) + 1;
VAR3 = (char *)malloc(VAR2);

if (VAR3 == NULL) {
FUN2("", (unsigned)VAR2);
}

memcpy(VAR3, VAR1, VAR2);
return VAR3;
}