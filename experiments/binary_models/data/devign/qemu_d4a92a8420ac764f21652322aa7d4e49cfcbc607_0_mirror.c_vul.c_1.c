static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR6);
    VAR7 *VAR8 = VAR3;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = FUN3(VAR5->VAR6.VAR13);
    VAR11 *VAR14 = FUN3(VAR5->VAR15);
    FUN4(VAR12);
    if (VAR5->VAR16)
    {
        VAR10 = FUN5(VAR5->VAR16);
        FUN6(VAR10);
    }
    if (VAR5->VAR17 && VAR8->VAR18 == 0)
    {
        VAR11 *VAR16 = VAR12;
        if (VAR5->VAR16)
        {
            VAR16 = VAR5->VAR16;
        }
        if (FUN7(VAR14) != FUN7(VAR16))
        {
            FUN8(VAR14, FUN7(VAR16), NULL);
        }
        FUN9(VAR14);
        FUN10(VAR16, VAR14);
        FUN11(VAR14);
        FUN12(VAR2->VAR13);
        FUN13(VAR2->VAR13, VAR12);
    }
    if (VAR5->VAR16)
    {
        FUN14(VAR5->VAR16, VAR5->VAR19);
        FUN15(VAR5->VAR19);
        FUN16(VAR5->VAR16);
    }
    if (VAR10)
    {
        FUN17(VAR10);
    }
    FUN18(VAR5->VAR20);
    FUN14(VAR14, VAR5->VAR6.VAR21);
    FUN19(VAR5->VAR15);
    FUN20(&VAR5->VAR6, VAR8->VAR18);
    FUN18(VAR8);
    FUN11(VAR12);
    if (FUN21() == FUN5(VAR12))
    {
        FUN22(FUN23());
    }
    FUN16(VAR12);
}