static void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 &= ~(0xf << 12);
    VAR2->VAR3 &= ~(0xf << 8);
    VAR2->VAR3 &= ~VAR4;
    VAR2->VAR3 &= ~VAR5;
    if (VAR2->VAR6)
    {
        VAR2->VAR3 |= ((VAR2->VAR7 - 1) & 0xf) << 12;
        if (VAR2->VAR7 >= FUN2(VAR2->VAR8[1]))
            VAR2->VAR3 |= VAR9;
        else
            VAR2->VAR3 &= ~VAR9;
        if (VAR2->VAR7)
            VAR2->VAR3 |= VAR10;
        else
            VAR2->VAR3 &= ~VAR10;
        VAR2->VAR3 |= VAR4;
        VAR2->VAR3 |= VAR5;
    }
    FUN3(VAR2);
}