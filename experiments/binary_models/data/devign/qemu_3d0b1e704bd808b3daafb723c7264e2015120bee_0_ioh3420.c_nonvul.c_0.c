static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5, VAR2);
    VAR6 *VAR7 = FUN2(VAR6, VAR4, VAR4);
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR7);
    int VAR11;
    int VAR12;
    VAR11 = FUN3(VAR2);
    if (VAR11 < 0)
    {
        return VAR11;
    }
    FUN4(VAR2);
    VAR11 = FUN5(VAR2, VAR13, VAR14, VAR15);
    if (VAR11 < 0)
    {
        goto VAR16;
    }
    VAR11 = FUN6(VAR2, VAR17, VAR18, VAR19 & VAR20, VAR19 & VAR21);
    if (VAR11 < 0)
    {
        goto VAR16;
    }
    VAR11 = FUN7(VAR2, VAR22, VAR23, VAR7->VAR10);
    if (VAR11 < 0)
    {
        goto VAR24;
    }
    FUN8(VAR2);
    FUN9(VAR2, VAR9->VAR25);
    FUN10(VAR9->VAR26);
    VAR11 = FUN11(VAR9);
    if (VAR11 < 0)
    {
        goto VAR27;
        return VAR11;
    }
    FUN12(VAR2);
    VAR11 = FUN13(VAR2, VAR28);
    if (VAR11 < 0)
    {
        goto VAR29;
    }
    FUN14(VAR2);
    FUN15(VAR2);
    return 0;
VAR29:
    FUN16(VAR9);
VAR27:
    FUN17(VAR2);
VAR24:
    FUN18(VAR2);
VAR16:
    VAR12 = FUN19(VAR2);
    assert(!VAR12);
    return VAR11;
}