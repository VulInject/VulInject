void FUN1(const char *VAR1, const char *VAR2, bool VAR3, VAR4 **VAR5)
{
    NET_API_STATUS VAR6;
    char *VAR7 = NULL;
    size_t VAR8;
    wchar_t *VAR9, *VAR10;
    USER_INFO_1003 VAR11 = {
        0,
    };
    if (VAR3)
    {
        FUN2(VAR5, VAR12);
        return;
    }
    VAR7 = (char *)FUN3(VAR2, -1, &VAR8, VAR5);
    if (!VAR7)
    {
        return;
    }
    VAR7 = FUN4(char, VAR7, VAR8 + 1);
    VAR7[VAR8] = '';
    VAR9 = FUN5(VAR1, -1, NULL, NULL, NULL);
    VAR10 = FUN5(VAR7, -1, NULL, NULL, NULL);
    VAR11.VAR13 = VAR10;
    VAR6 = FUN6(NULL, VAR9, 1003, (VAR14)&VAR11, NULL);
    if (VAR6 != VAR15)
    {
        VAR16 *VAR17 = FUN7(VAR6);
        FUN2(VAR5, "", VAR17);
        FUN8(VAR17);
    }
    FUN8(VAR9);
    FUN8(VAR10);
    FUN8(VAR7);
}