static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    int VAR7;
    FUN4(VAR2, VAR8);
    FUN5(VAR2);
    VAR7 = FUN6(VAR2, VAR9, VAR10, VAR11 & VAR12, VAR11 & VAR13);
    if (VAR7 < 0)
    {
        goto VAR14;
    }
    VAR7 = FUN7(VAR2, VAR15, VAR16, VAR17);
    if (VAR7 < 0)
    {
        goto VAR14;
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
    return 0;
VAR27:
    FUN16(VAR6);
VAR24:
    FUN17(VAR2);
VAR21:
    FUN18(VAR2);
VAR14:
    FUN19(VAR2);
    return VAR7;
}