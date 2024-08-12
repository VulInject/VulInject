int
FUN1(const char *VAR1, const char *VAR2, __va_list VAR3)
{
FILE VAR4;
struct __sfileext VAR5;

FUN2(&VAR4, &VAR5);
VAR4.VAR6 = VAR7;
VAR4.VAR8.VAR9 = VAR4.VAR10 = (unsigned char *)VAR1;
VAR4.VAR8.VAR11 = VAR4.VAR12 = strlen(VAR1);
VAR4.VAR13 = VAR14;
VAR4.VAR15.VAR9 = NULL;
return (FUN3(&VAR4, VAR2, VAR3));
}