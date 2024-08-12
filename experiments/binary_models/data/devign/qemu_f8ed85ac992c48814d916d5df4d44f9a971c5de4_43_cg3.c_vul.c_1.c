static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    int VAR9;
    char *VAR10;
    FUN4(&VAR8->VAR11);
    VAR10 = FUN5(VAR12, VAR13);
    if (VAR10)
    {
        VAR9 = FUN6(VAR10, VAR8->VAR14, VAR15);
        FUN7(VAR10);
        if (VAR9 < 0 || VAR9 > VAR15)
        {
            FUN8("", VAR13);
        }
    }
    FUN9(&VAR8->VAR16, NULL, "", VAR8->VAR17, &VAR18);
    FUN10(&VAR8->VAR16, true, VAR19);
    FUN4(&VAR8->VAR16);
    FUN11(VAR6, &VAR8->VAR16);
    FUN12(VAR6, &VAR8->VAR20);
    VAR8->VAR21 = FUN13(FUN14(VAR2), 0, &VAR22, VAR8);
    FUN15(VAR8->VAR21, VAR8->VAR23, VAR8->VAR24);
}