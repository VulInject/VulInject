static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7;
    if (!FUN3(&VAR6->VAR8))
    {
        FUN4(VAR4, VAR9, "");
        return;
    }
    if (VAR6->VAR10)
    {
        VAR7 = FUN5(VAR6->VAR10, "", "", &VAR6->VAR11, &VAR6->VAR12);
        if (VAR7)
        {
            FUN4(VAR4, VAR13, "", "");
            return;
        }
    }
    VAR6->VAR14 = FUN6(VAR15, VAR6);
    VAR6->VAR16 = FUN6(VAR17, VAR6);
    VAR6->VAR18 = FUN7(VAR19, VAR20, VAR6);
    FUN8(&VAR6->VAR21, VAR6, "");
    FUN8(&VAR6->VAR22, VAR6, "");
    FUN9(VAR6);
    VAR2->VAR23 = 0;
    VAR6->VAR24 = VAR25 | VAR26;
    FUN10(&VAR6->VAR8, VAR27, VAR28, VAR29, VAR6, NULL, true);
    FUN11(VAR30, VAR6);
}