BOOL FUN1 (wchar_t *VAR1, wchar_t *VAR2, wchar_t *VAR3, VAR4 *VAR5)
{
HKEY VAR6 = 0;
DWORD VAR7;

if (FUN2 (VAR8, VAR1, 0, VAR9, &VAR6) != VAR10)
return VAR11;

if (RegQueryValueEx (VAR6, VAR2, NULL, &VAR7, (VAR12 *) VAR3, VAR5) != VAR10)
{
FUN3 (VAR6);
return VAR11;
}

FUN3 (VAR6);
return VAR7 == VAR13;
}