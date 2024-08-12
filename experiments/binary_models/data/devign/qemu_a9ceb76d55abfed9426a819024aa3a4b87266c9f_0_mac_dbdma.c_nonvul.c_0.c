FUN1(VAR1 *VAR2)
{
    uint16_t VAR3, VAR4;
    uint32_t VAR5;
    VAR3 = (VAR2->VAR6[VAR7] >> 16) & 0xffff;
    VAR4 = VAR2->VAR6[VAR7] & 0xffff;
    VAR4 &= (VAR8 | VAR9 | VAR10 | VAR11 | VAR12);
    VAR5 = VAR2->VAR6[VAR13];
    VAR5 = (VAR4 & VAR3) | (VAR5 & ~VAR3);
    if (VAR5 & VAR11)
        VAR5 |= VAR14;
    if (VAR5 & VAR8)
    {
        VAR5 |= VAR14;
        VAR5 &= ~VAR15;
    }
    if (VAR5 & VAR9)
        VAR5 &= ~VAR14;
    if ((VAR2->VAR6[VAR13] & VAR8) && !(VAR5 & VAR8))
    {
        VAR5 &= ~(VAR14 | VAR15);
    }
    FUN2("", VAR5);
    VAR2->VAR6[VAR13] = VAR5;
    if (VAR5 & VAR14)
        FUN3(VAR16);
    if ((VAR5 & VAR10) && VAR2->VAR17)
        VAR2->FUN4(&VAR2->VAR18);
}