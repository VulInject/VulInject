static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5, VAR2);
    VAR6 *VAR7 = FUN2(VAR6, VAR4, VAR4);
    int VAR8;
    int VAR9;
    VAR8 = FUN3(VAR2);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    FUN4(VAR2);
    VAR8 = FUN5(VAR2, VAR10, VAR11, VAR12 & VAR13, VAR12 & VAR14);
    if (VAR8 < 0)
    {
        goto VAR15;
    }
    VAR8 = FUN6(VAR2, VAR16, VAR17, VAR18);
    if (VAR8 < 0)
    {
        goto VAR15;
    }
    VAR8 = FUN7(VAR2, VAR19, VAR20, VAR7->VAR21);
    if (VAR8 < 0)
    {
        goto VAR22;
    }
    FUN8(VAR2);
    FUN9(VAR2);
    VAR8 = FUN10(VAR2, VAR23);
    if (VAR8 < 0)
    {
        goto VAR24;
    }
    return 0;
VAR24:
    FUN11(VAR2);
VAR22:
    FUN12(VAR2);
VAR15:
    VAR9 = FUN13(VAR2);
    assert(!VAR9);
    return VAR8;
}