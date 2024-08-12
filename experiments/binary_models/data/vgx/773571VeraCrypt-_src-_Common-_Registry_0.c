DWORD FUN1 (wchar_t *VAR1, wchar_t *VAR2, char *VAR3, int VAR4)
{
HKEY VAR5 = 0;
DWORD VAR6 = VAR4;
BOOL VAR7 = VAR8;

if (FUN2 (VAR9, VAR1, 0, VAR10, &VAR5) != VAR11)
return 0;

VAR7 = (RegQueryValueEx (VAR5, VAR2, 0,	0, (VAR12) VAR3,	&VAR6) == VAR11);
FUN3 (VAR5);

return VAR7 ? VAR6 : 0;
}