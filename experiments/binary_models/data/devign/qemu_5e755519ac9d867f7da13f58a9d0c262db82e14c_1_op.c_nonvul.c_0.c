void FUN1(void)
{
    uint32_t VAR1, VAR2;
    uint32_t VAR3 = VAR4->VAR5;
    VAR1 = VAR6 & VAR3;
    VAR2 = VAR4->VAR7;
    if (!(VAR1 & (1 << VAR8)) && !(VAR1 & (1 << VAR9)) && !(VAR4->VAR10 & VAR11) && (VAR1 & (1 << VAR12)))
        VAR4->VAR10 |= VAR13;
    if ((VAR4->VAR10 & VAR13) && !(VAR1 & (1 << VAR14)) && !(VAR1 & (1 << VAR15)))
        VAR4->VAR10 &= ~VAR16;
    if (VAR1 & (1 << VAR17))
        VAR4->VAR10 |= VAR18;
    else
        VAR4->VAR10 &= ~VAR18;
    if (VAR1 & (1 << VAR19))
        VAR4->VAR10 |= VAR20;
    else
        VAR4->VAR10 &= ~VAR20;
    VAR4->VAR7 = (VAR4->VAR7 & ~VAR3) | VAR1;
    if (VAR21 & VAR22)
        FUN2(VAR23, VAR2, VAR1);
    FUN3(VAR24, VAR4);
    FUN4();
}