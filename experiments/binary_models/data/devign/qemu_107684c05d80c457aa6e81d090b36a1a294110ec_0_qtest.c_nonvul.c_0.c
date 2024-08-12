void FUN1(const char *VAR1, const char *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2("", VAR1, NULL);
    if (VAR6 == NULL)
    {
        FUN3(VAR4, ""%VAR7\"", VAR1);
        return;
    }
    if (VAR2)
    {
        if (strcmp(VAR2, "") != 0)
        {
            VAR8 = fopen(VAR2, "");
        }
    }
    else
    {
        VAR8 = VAR9;
    }
    FUN4(VAR6, VAR10, VAR11, VAR12, VAR6);
    FUN5(VAR6, true);
    VAR13 = FUN6("");
    VAR14 = VAR6;
}