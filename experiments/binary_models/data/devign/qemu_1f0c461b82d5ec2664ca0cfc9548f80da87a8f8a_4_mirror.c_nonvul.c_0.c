static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR6);
    VAR7 *VAR8 = VAR3;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = VAR5->VAR6.VAR13;
    FUN3(VAR12);
    if (VAR5->VAR14)
    {
        VAR10 = FUN4(VAR5->VAR14);
        FUN5(VAR10);
    }
    if (VAR5->VAR15 && VAR8->VAR16 == 0)
    {
        VAR11 *VAR14 = VAR5->VAR6.VAR13;
        if (VAR5->VAR14)
        {
            VAR14 = VAR5->VAR14;
        }
        if (FUN6(VAR14) && FUN6(VAR5->VAR17))
        {
            FUN7("");
            VAR8->VAR16 = -VAR18;
            goto VAR19;
        }
        if (FUN8(VAR5->VAR17) != FUN8(VAR14))
        {
            FUN9(VAR5->VAR17, FUN8(VAR14), NULL);
        }
        FUN10(VAR14, VAR5->VAR17);
    }
VAR19:
    if (VAR5->VAR14)
    {
        FUN11(VAR5->VAR14, VAR5->VAR20);
        FUN12(VAR5->VAR20);
        FUN13(VAR5->VAR14);
    }
    if (VAR10)
    {
        FUN14(VAR10);
    }
    FUN15(VAR5->VAR21);
    FUN11(VAR5->VAR17, VAR5->VAR6.VAR22);
    FUN13(VAR5->VAR17);
    FUN16(&VAR5->VAR6, VAR8->VAR16);
    FUN15(VAR8);
    FUN17(VAR12);
    if (FUN18() == FUN4(VAR12))
    {
        FUN19(FUN20());
    }
    FUN13(VAR12);
}