FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    FUN3("");
    if (FUN4(VAR6))
    {
        FUN5(VAR2->VAR7 + VAR8, 0x1000);
    }
    else
    {
        FUN5(VAR2->VAR7 + VAR9, VAR10);
        FUN5(VAR2->VAR7 + VAR8, VAR11);
        FUN6(VAR2->VAR7, 0x2);
    }
    VAR2->VAR7[VAR12] = 0xff;
    FUN7(VAR2->VAR7, 1);
    FUN8(&VAR6->VAR13, FUN9(VAR6), &VAR14, VAR6, "", VAR15);
    FUN10(VAR2, 0, VAR16, &VAR6->VAR13);
    FUN11(VAR6);
    if (FUN12(VAR2) && FUN13(FUN14(VAR2)))
    {
        FUN15(VAR2, VAR17);
    }
    VAR6->VAR18 = FUN16(VAR19, VAR6);
    FUN17(&VAR6->VAR20, sizeof(VAR6->VAR20), FUN18(VAR2), &VAR21, NULL);
    FUN19(FUN20(&VAR6->VAR20), FUN18(VAR6), &VAR22);
    FUN21(VAR6);
}