int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7.VAR8;
    VAR9 *VAR10 = &VAR2->VAR7.VAR11;
    int VAR12;
    if (~(VAR10->VAR13) & (VAR14 | VAR15))
    {
        VAR12 = -VAR16;
        goto VAR17;
    }
    if (VAR6->VAR18 & VAR19)
    {
        VAR12 = -VAR20;
        goto VAR17;
    }
    if (VAR6->VAR18 & (VAR21 | VAR22 | VAR23))
    {
        VAR12 = -VAR24;
        goto VAR17;
    }
    if (VAR25.VAR26)
    {
        FUN2(VAR2);
    }
    VAR2->VAR27 = VAR4->VAR28;
    VAR6->VAR18 |= (VAR21 | VAR29);
    VAR6->VAR13 &= ~VAR30;
    FUN3(VAR2, VAR4);
    VAR12 = 0;
VAR17:
    return VAR12;
}