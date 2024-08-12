int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = NULL;
    const char *VAR9;
    int VAR10 = FUN2(VAR4, "", 0);
    int VAR11 = FUN2(VAR4, "", 0);
    int VAR12 = FUN2(VAR4, "", 0);
    const char *VAR13 = FUN3(VAR4, "");
    if (VAR14 && VAR14->FUN4(VAR14) == VAR15)
    {
        FUN5(VAR2, "");
        if (FUN6(VAR13, "", &VAR9))
        {
            VAR8 = FUN7(VAR2, VAR9, VAR16, VAR10, VAR11, VAR12);
        }
        else if (FUN6(VAR13, "", &VAR9))
        {
            VAR8 = FUN8(VAR2, VAR9, VAR16, VAR10, VAR11, VAR12);
        }
        else if (FUN6(VAR13, "", &VAR9))
        {
            VAR8 = FUN9(VAR2, VAR9, VAR16, VAR10, VAR11, VAR12);
        }
        else if (FUN6(VAR13, "", &VAR9))
        {
            VAR8 = FUN10(VAR2, VAR9, VAR16, VAR10, VAR11, VAR12);
        }
        else
        {
            FUN5(VAR2, "", VAR13);
            if (VAR8 == NULL)
            {
                FUN5(VAR2, "");
                if (VAR14)
                {
                    VAR14->FUN11(VAR14);
                    VAR14 = VAR8;
                    return 0