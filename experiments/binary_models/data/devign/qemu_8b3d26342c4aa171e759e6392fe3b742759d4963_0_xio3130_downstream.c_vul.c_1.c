static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    int VAR9;
    FUN4(VAR2, VAR10);
    FUN5(VAR2);
    VAR9 = FUN6(VAR2, VAR11, VAR12, VAR13 & VAR14, VAR13 & VAR15, VAR4);
    if (VAR9 < 0)
    {
        assert(VAR9 == -VAR16);
        goto VAR17;
    }
    VAR9 = FUN7(VAR2, VAR18, VAR19, VAR20, VAR4);
    if (VAR9 < 0)
    {
        goto VAR17;
    }
    VAR9 = FUN8(VAR2, VAR21, VAR22, VAR6->VAR23, VAR4);
    if (VAR9 < 0)
    {
        goto VAR24;
    }
    FUN9(VAR2);
    FUN10(VAR2);
    FUN11(VAR2, VAR8->VAR25);
    FUN12(VAR2);
    FUN13(VAR8->VAR26);
    VAR9 = FUN14(VAR8);
    if (VAR9 < 0)
    {
        goto VAR27;
    }
    VAR9 = FUN15(VAR2, VAR28, VAR29, VAR30, VAR4);
    if (VAR9 < 0)
    {
        goto VAR31;
    }
    return;
VAR31:
    FUN16(VAR8);
VAR27:
    FUN17(VAR2);
VAR24:
    FUN18(VAR2);
VAR17:
    FUN19(VAR2);