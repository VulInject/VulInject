static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    int VAR9;
    FUN4("");
    FUN5(&VAR8->VAR10, FUN6(VAR8), &VAR11, VAR8, "", VAR12);
    FUN7(VAR2, VAR13, VAR14, &VAR8->VAR10);
    FUN5(&VAR8->VAR15, FUN6(VAR8), &VAR16, VAR8, "", VAR17);
    FUN7(VAR2, VAR18, VAR14, &VAR8->VAR15);
    FUN8(&VAR8->VAR19, FUN6(VAR8), "", VAR20);
    FUN7(VAR2, VAR21, VAR14, &VAR8->VAR19);
    FUN9(VAR8);
    VAR2->VAR22[VAR23] = 0x01;
    VAR9 = FUN10(VAR2, FUN11(VAR8), VAR24, VAR25, VAR26, NULL);
    assert(!VAR9 || VAR9 == -VAR27);
    if (!FUN12(VAR8))
    {
        FUN13("");
    }
    FUN14(VAR8);
    if (FUN15(VAR2))
    {
        if (FUN16(FUN17(VAR2)))
        {
            FUN18(VAR2, VAR28);
        }
        FUN19(VAR2, VAR29, FUN20(VAR8));
    }
    FUN21(VAR6, "", -1, 1, &VAR30, VAR8);
}