static VAR1
FUN1(VAR2 *VAR3, wchar_t *VAR4, wchar_t *VAR5,
int VAR6)
{
VARIANT VAR7;
HRESULT VAR8 = FUN2(VAR3, VAR4, &VAR7);

if (wcscpy_s(VAR5, VAR6, VAR7.VAR9)) {
FUN3(&VAR7);
FUN4("", FUN5(VAR10));
return VAR11;
}

FUN3(&VAR7);
return VAR12;
}