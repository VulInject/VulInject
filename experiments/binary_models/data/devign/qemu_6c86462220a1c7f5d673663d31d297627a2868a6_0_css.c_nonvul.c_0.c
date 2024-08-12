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
    if (VAR4->VAR16 & VAR17)
    {
        VAR10 = -VAR18;
        goto VAR15;
    }
    if (!(VAR4->VAR16 & VAR19) || ((VAR4->VAR16 & VAR19) != VAR20) || (!(VAR4->VAR16 & (VAR21 | VAR22 | VAR23))) || (VAR4->VAR16 & VAR24))
    {
        VAR10 = -VAR25;
        goto VAR15;
    }
    VAR4->VAR16 &= ~(VAR20 | VAR21 | VAR22 | VAR23);
    VAR2->VAR26 = 0x0;
    VAR2->VAR27 = false;
    VAR4->VAR28 = 0;
    VAR4->VAR29 = 0;
    VAR10 = 0;
VAR15:
    return VAR10;
}