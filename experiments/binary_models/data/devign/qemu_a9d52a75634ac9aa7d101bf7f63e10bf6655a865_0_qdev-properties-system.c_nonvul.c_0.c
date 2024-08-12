static void FUN1(VAR1 *VAR2, const char *VAR3, void **VAR4, const char *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    VAR9 = FUN2(VAR3);
    if (!VAR9)
    {
        FUN3(VAR7, "", FUN4(FUN5(VAR2)), VAR5, VAR3);
        return;
    }
    if (FUN6(VAR9, VAR2) < 0)
    {
        VAR10 *VAR11 = FUN7(VAR9);
        if (VAR11 && VAR11->VAR12 != VAR13)
        {
            FUN3(VAR7, ""
                             ""
                             "",
                       VAR3);
        }
        else
        {
            FUN3(VAR7, "", VAR3);
        }
        return;
    }
    *VAR4 = VAR9;
}