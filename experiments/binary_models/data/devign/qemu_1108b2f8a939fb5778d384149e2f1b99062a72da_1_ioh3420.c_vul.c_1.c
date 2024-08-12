static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    int VAR7;
    FUN4(VAR2, VAR8);
    FUN5(VAR2);
    VAR7 = FUN6(VAR2, VAR9, VAR10, VAR11);
    if (VAR7 < 0)
    {
        goto VAR12;
    }
    VAR7 = FUN7(VAR2, VAR13, VAR14, VAR15 & VAR16, VAR15 & VAR17);
    if (VAR7 < 0)
    {
        goto VAR12;
    }
    VAR7 = FUN8(VAR2, VAR18, VAR19, VAR4->VAR20);
    if (VAR7 < 0)
    {
        goto VAR21;
    }
    FUN9(VAR2);
    FUN10(VAR2);
    FUN11(VAR2, VAR6->VAR22);
    FUN12(VAR2);
    FUN13(VAR6->VAR23);
    VAR7 = FUN14(VAR6);
    if (VAR7 < 0)
    {
        goto VAR24;
    }
    VAR7 = FUN15(VAR2, VAR25, VAR26);
    if (VAR7 < 0)
    {
        goto VAR27;
    }
    FUN16(VAR2);
    FUN17(VAR2);
    return 0;
VAR27:
    FUN18(VAR6);
VAR24:
    FUN19(VAR2);
VAR21:
    FUN20(VAR2);
VAR12:
    FUN21(VAR2);
    return VAR7;
}