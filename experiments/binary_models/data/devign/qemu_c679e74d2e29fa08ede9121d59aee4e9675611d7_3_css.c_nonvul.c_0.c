int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR6;
    VAR7 *VAR8 = &VAR2->VAR5.VAR9;
    int VAR10;
    if (~(VAR8->VAR11) & (VAR12 | VAR13))
    {
        VAR10 = -VAR14;
        goto VAR15;
    }
    if (((VAR4->VAR16 & VAR17) == VAR18) || (VAR4->VAR16 & (VAR19 | VAR20 | VAR21)))
    {
        VAR10 = -VAR22;
        goto VAR15;
    }
    if (VAR4->VAR16 & (VAR23 | VAR24))
    {
        VAR10 = -VAR25;
        goto VAR15;
    }
    VAR4->VAR16 |= VAR23;
    VAR4->VAR16 &= ~VAR26;
    if (((VAR4->VAR16 & VAR27) == (VAR28 | VAR29)) && ((VAR4->VAR16 & VAR17) == VAR30))
    {
        VAR4->VAR16 &= ~VAR18;
    }
    VAR4->VAR16 |= VAR31;
    FUN2(VAR2, NULL);
    VAR10 = 0;
VAR15:
    return VAR10;
}