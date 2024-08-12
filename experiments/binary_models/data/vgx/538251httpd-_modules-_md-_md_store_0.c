static VAR1 FUN1(void *VAR2, VAR3 *VAR4, VAR3 *VAR5, va_list VAR6)
{
VAR7 *VAR8 = VAR2;
const char *VAR9;
int VAR10;

(void)VAR4;
VAR9 = FUN2(VAR6, const char *);
VAR10 = FUN2(VAR6, int);

assert(VAR9);
return FUN3(VAR8->VAR11, VAR8->VAR12, VAR9, VAR13, VAR5, VAR10);
}