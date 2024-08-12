static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    FUN4("");
    FUN5(&VAR8->VAR9, FUN6(VAR8), &VAR10, VAR8, "", VAR11);
    FUN7(VAR2, VAR12, VAR13, &VAR8->VAR9);
    FUN5(&VAR8->VAR14, FUN6(VAR8), &VAR15, VAR8, "", VAR16);
    FUN7(VAR2, VAR17, VAR13, &VAR8->VAR14);
    FUN8(&VAR8->VAR18, FUN6(VAR8), "", VAR19);
    FUN7(VAR2, VAR20, VAR13, &VAR8->VAR18);
    FUN9(VAR8);
    VAR2->VAR21[VAR22] = 0x01;
    if (!FUN10(VAR8))
    {
        FUN11("");
    }
    if (!FUN12(VAR8))
    {
        FUN11("");
    }
    FUN13(VAR8);
    if (FUN14(VAR2))
    {
        if (FUN15(VAR2->VAR23))
        {
            FUN16(VAR2, VAR24);
        }
        FUN17(VAR2, VAR25, FUN18(VAR8));
    }
    FUN19(VAR6, "", -1, 1, VAR26, VAR27, VAR8);
}