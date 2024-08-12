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
    VAR4->VAR16 &= ~(VAR17 | VAR18);
    VAR4->VAR16 |= VAR19 | VAR20;
    FUN2(VAR2, NULL);
    VAR10 = 0;
VAR15:
    return VAR10;
}