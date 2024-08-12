int FUN1(const char *VAR1, const char *VAR2)
{
    SC_HANDLE VAR3;
    SC_HANDLE VAR4;
    TCHAR VAR5[VAR6];
    if (FUN2(NULL, VAR5, VAR6) == 0)
    {
        FUN3("");
        return VAR7;
    }
    _snprintf(VAR5, VAR6 - strlen(VAR5), "", VAR5);
    if (VAR1)
    {
        _snprintf(VAR5, VAR6 - strlen(VAR5), "", VAR5, VAR1);
    }
    if (VAR2)
    {
        _snprintf(VAR5, VAR6 - strlen(VAR5), "", VAR5, VAR2);
    }
    FUN4("", VAR5);
    VAR3 = FUN5(NULL, NULL, VAR8);
    if (VAR3 == NULL)
    {
        FUN3("");
        return VAR7;
    }
    VAR4 = FUN6(VAR3, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR5, NULL, NULL, NULL, NULL, NULL);
    if (VAR4)
    {
        SERVICE_DESCRIPTION VAR15 = {(char *)VAR16};
        FUN7(VAR4, VAR17, &VAR15);
        FUN8("");
    }
    else
    {
        FUN3("");
    }
    FUN9(VAR4);
    FUN9(VAR3);
    return (VAR4 == NULL);
}