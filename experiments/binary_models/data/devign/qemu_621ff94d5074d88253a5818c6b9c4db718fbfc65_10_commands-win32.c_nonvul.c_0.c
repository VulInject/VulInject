static void FUN1(const char *VAR1, VAR2 **VAR3)
{
    HANDLE VAR4 = NULL;
    TOKEN_PRIVILEGES VAR5;
    VAR2 *VAR6 = NULL;
    if (FUN2(FUN3(), VAR7 | VAR8, &VAR4))
    {
        if (!FUN4(NULL, VAR1, &VAR5.VAR9[0].VAR10))
        {
            FUN5(&VAR6, VAR11, "");
            goto VAR12;
        }
        VAR5.VAR13 = 1;
        VAR5.VAR9[0].VAR14 = VAR15;
        if (!FUN6(VAR4, VAR16, &VAR5, 0, NULL, 0))
        {
            FUN5(&VAR6, VAR11, "");
            goto VAR12;
        }
    }
    else
    {
        FUN5(&VAR6, VAR11, "");
    }
VAR12:
    if (VAR4)
    {
        FUN7(VAR4);
    }
    FUN8(VAR3, VAR6);
}