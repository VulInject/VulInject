static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    VAR6 *VAR7 = NULL;
    FUN3(VAR2, VAR8);
    FUN4(VAR2);
    VAR5 = FUN5(VAR2, VAR9, VAR10, VAR11 & VAR12, VAR11 & VAR13, &VAR7);
    if (VAR5 < 0)
    {
        assert(VAR5 == -VAR14);
        FUN6(VAR7);
        goto VAR15;
    }
    VAR5 = FUN7(VAR2, VAR16, VAR17, VAR18);
    if (VAR5 < 0)
    {
        goto VAR15;
    }
    VAR5 = FUN8(VAR2, VAR19, VAR20, VAR4->VAR21);
    if (VAR5 < 0)
    {
        goto VAR22;
    }
    FUN9(VAR2);
    FUN10(VAR2);
    VAR5 = FUN11(VAR2, VAR23, VAR24);
    if (VAR5 < 0)
    {
        goto VAR7;
    }
    return 0;
VAR7:
    FUN12(VAR2);
VAR22:
    FUN13(VAR2);
VAR15:
    FUN14(VAR2);
    return VAR5;
}