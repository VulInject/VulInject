FUN1(gint VAR1)
{
    HMODULE VAR2 = NULL;
    VAR3 *VAR4 = NULL;
    wchar_t *VAR5 = NULL;
    int VAR6;
    size_t VAR7;
    VAR6 = VAR8 | VAR9 | VAR10;
    if (VAR1 >= VAR11 && VAR1 <= VAR12)
    {
        VAR2 = LoadLibraryExW(VAR13"", NULL, VAR14);
        if (VAR2 != NULL)
        {
            VAR6 |= VAR15;
        }
    }
    FUN2(VAR6, VAR2, VAR1, 0, (VAR16)&VAR5, 0, NULL);
    if (VAR5 != NULL)
    {
        VAR7 = wcslen(VAR5);
        if (VAR7 > 2 && VAR5[VAR7 - 1] == VAR13'' && VAR5[VAR7 - 2] == VAR13'')
        {
            VAR5[VAR7 - 2] = VAR13'';
        }
        VAR4 = FUN3(VAR5, -1, NULL, NULL, NULL);
        FUN4(VAR5);
    }
    if (VAR2 != NULL)
    {
        FUN5(VAR2);
    }
    return VAR4;
}