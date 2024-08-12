void FUN1(const char *VAR1, bool VAR2, bool VAR3, bool VAR4, bool VAR5, bool VAR6, bool VAR7, VAR8 **VAR9)
{
    VAR8 *VAR10 = NULL;
    VAR11 *VAR12 = FUN2();
    MigrationParams VAR13;
    const char *VAR14;
    VAR13.VAR3 = VAR2 && VAR3;
    VAR13.VAR15 = VAR4 && VAR5;
    if (VAR12->VAR16 == VAR17 || VAR12->VAR16 == VAR18 || VAR12->VAR16 == VAR19)
    {
        FUN3(VAR9, VAR20);
        if (FUN4(VAR9))
        {
            if (VAR21)
            {
                *VAR9 = FUN5(VAR21->VAR22);
                VAR12 = FUN6(&VAR13);
                if (FUN7(VAR1, "", &VAR14))
                {
                    FUN8(VAR12, VAR14, &VAR10);
                }
                else if (FUN7(VAR1, "", &VAR14))
                {
                    FUN9(VAR12, VAR14, &VAR10);
                }
                else if (FUN7(VAR1, "", &VAR14))
                {
                    FUN10(VAR12, VAR14, &VAR10);
                }
                else if (FUN7(VAR1, "", &VAR14))
                {
                    FUN11(VAR12, VAR14, &VAR10);
                }
                else if (FUN7(VAR1, "", &VAR14))
                {
                    FUN12(VAR12, VAR14, &VAR10);
                }
                else
                {
                    FUN3(VAR9, VAR23, "", "");
                    VAR12->VAR16 = VAR24;
                    if (VAR10)
                    {
                        FUN13(VAR12);
                        FUN14(VAR9, VAR10)