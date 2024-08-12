static VAR1 FUN1(char *VAR2, wchar_t VAR3)
{
wchar_t VAR4[] = { VAR3, 0 };
size_t VAR5 = FUN2(NULL, VAR4, 0);
if (VAR5 != (VAR1) - 1)
VAR5 = FUN2(VAR2, VAR4, VAR5 + 1);
return VAR5;
}