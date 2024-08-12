int
FUN1(VAR1 *VAR2, char *VAR3)
{
int VAR4;
wchar_t VAR5 = 0;

VAR4 = FUN2(VAR2, &VAR5);
*VAR3 = '';
if (VAR4 <= 0)
return VAR4;
VAR4 = FUN3(VAR5);
if (VAR4 == VAR6) {
VAR7 = VAR8;
return -1;
} else {
*VAR3 = VAR4;
return 1;
}
}