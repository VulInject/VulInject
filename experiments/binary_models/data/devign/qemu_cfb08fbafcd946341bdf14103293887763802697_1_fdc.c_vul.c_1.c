static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    if (VAR2->VAR4 && (VAR2->VAR5 & VAR6))
    {
        VAR2->VAR5 &= ~VAR6;
        VAR2->VAR5 |= VAR7 | VAR8;
        VAR2->VAR3 = VAR3;
        return;
    }
    if (!(VAR2->VAR9 & VAR10))
    {
        FUN2(VAR2->VAR11, 1);
        VAR2->VAR9 |= VAR10;
    }
    if (VAR3 & VAR12)
    {
        VAR13 *VAR14;
        VAR14 = FUN3(VAR2);
        if (VAR14->VAR15)
        {
            VAR14->VAR16 = 0;
        }
    }
    VAR2->VAR17 = 0;
    VAR2->VAR3 = VAR3;
    FUN4("", VAR2->VAR3);
}