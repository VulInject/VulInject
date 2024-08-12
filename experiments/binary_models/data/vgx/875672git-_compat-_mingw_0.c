int FUN1(char *VAR1, const wchar_t *VAR2, size_t VAR3)
{
if (!VAR2 || !VAR1 || VAR3 < 1) {
VAR4 = VAR5;
return -1;
}
VAR3 = FUN2(VAR6, 0, VAR2, -1, VAR1, VAR3, NULL, NULL);
if (VAR3)
return VAR3 - 1;
VAR4 = VAR7;
return -1;
}