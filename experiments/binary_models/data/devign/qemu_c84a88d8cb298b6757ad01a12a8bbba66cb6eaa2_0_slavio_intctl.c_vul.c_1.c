static void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4 = VAR2->VAR5, VAR6;
    unsigned int VAR7, VAR8;
    VAR4 &= ~VAR2->VAR9;
    FUN2(VAR4, VAR2->VAR9);
    for (VAR7 = 0; VAR7 < VAR10; VAR7++)
    {
        VAR6 = 0;
        if (VAR4 && !(VAR2->VAR9 & VAR11) && (VAR7 == VAR2->VAR12))
        {
            for (VAR8 = 0; VAR8 < 32; VAR8++)
            {
                if ((VAR4 & (1 << VAR8)) && VAR13[VAR8])
                {
                    VAR6 |= 1 << VAR13[VAR8];
                }
            }
        }
        VAR2->VAR14[VAR7].VAR15 &= VAR16 | VAR17 | VAR18;
        if (VAR7 == VAR2->VAR12)
        {
            for (VAR8 = 0; VAR8 < 32; VAR8++)
            {
                if ((VAR2->VAR5 & (1 << VAR8)) && VAR13[VAR8])
                {
                    VAR2->VAR14[VAR7].VAR15 |= 1 << VAR13[VAR8];
                }
            }
        }
        if (!(VAR2->VAR9 & VAR11))
        {
            VAR6 |= VAR2->VAR14[VAR7].VAR15 & (VAR17 | VAR18);
        }
        VAR6 |= (VAR2->VAR14[VAR7].VAR15 & VAR16) >> 16;
        if (VAR3)
        {
            for (VAR8 = VAR19; VAR8 > 0; VAR8--)
            {
                if (VAR6 & (1 << VAR8))
                {
                    if (!(VAR2->VAR14[VAR7].VAR20 & (1 << VAR8)))
                    {
                        FUN3(VAR2->VAR21[VAR7][VAR8]);
                    }
                }
                else
                {
                    if (VAR2->VAR14[VAR7].VAR20 & (1 << VAR8))
                    {
                        FUN4(VAR2->VAR21[VAR7][VAR8]);
                    }
                }
            }
        }
        VAR2->VAR14[VAR7].VAR20 = VAR6;
    }
}