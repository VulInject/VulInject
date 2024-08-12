void
FUN1(const char *VAR1, ...)
{
size_t	 VAR2;
va_list	 VAR3;
int	 VAR4;

if (VAR5) {
VAR4 = VAR6;
FUN2(VAR3, VAR1);
if (VAR7 < VAR8 - 1) {
VAR2 = vsnprintf(VAR9 + VAR7,
VAR8 - VAR7, VAR1, VAR3);
if (VAR2 < VAR8 - VAR7)
VAR7 += VAR2;
else
VAR7 = VAR8 - 1;
}
FUN3(VAR3);
VAR6 = VAR4;
}
}