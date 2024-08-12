char *
strrchr(const char *VAR1, int VAR2)
{
char *VAR3 = NULL;

do {
if (*VAR1 == (char)VAR2)
VAR3 = (char *)VAR1;
} while (*VAR1++);

return (VAR3);
}