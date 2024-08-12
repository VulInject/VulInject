static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    VAR3 *VAR9 = NULL;
    int VAR10;
    VAR6->VAR11 = FUN3(FUN4(0));
    assert(VAR6->VAR11);
    if (VAR6->VAR12 > VAR13)
    {
        FUN5(VAR4, "", VAR6->VAR12);
        return;
    }
    FUN6(VAR2, VAR14, VAR6->VAR12);
    VAR6->VAR12 += VAR15;
    FUN7(FUN8(&VAR6->VAR16), true, "", &VAR9);
    if (VAR9 != NULL)
    {
        FUN9(VAR4, VAR9);
        return;
    }
    VAR8 = FUN10(&VAR6->VAR16);
    FUN11(VAR8, 0, FUN12(VAR2, "", 0));
    VAR10 = FUN13(&VAR6->VAR11->VAR17, VAR18) ? 0x21000 : 0x1000;
    FUN14(&VAR6->VAR19, FUN8(VAR6), "", VAR10);
    FUN15(&VAR6->VAR20, FUN8(VAR6), &VAR21, VAR6, "", 0x1000);
    FUN16(&VAR6->VAR19, 0, &VAR6->VAR20);
    FUN17(&VAR6->VAR19, 0x10, FUN18(VAR8, 0), 1);
    if (FUN13(&VAR6->VAR11->VAR17, VAR18))
    {
        FUN15(&VAR6->VAR22, FUN8(VAR6), &VAR23, VAR6, "", 0x1000);
        FUN16(&VAR6->VAR19, 0x20000, &VAR6->VAR22);
    }
    FUN19(FUN10(VAR2), &VAR6->VAR19);
}