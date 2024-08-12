static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint16_t VAR7, uint16_t VAR8)
{
    VAR9 *VAR10 = VAR4->VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    uint16_t VAR13 = 0;
    uint16_t VAR14 = 0;
    uint16_t VAR15;
    if (*VAR6 & VAR16)
    {
        FUN2(&VAR2->VAR17, "", *VAR6);
    }
    VAR13 = VAR10->VAR18 & ~VAR10->VAR19 & VAR8;
    VAR4->VAR20 = FUN3(*VAR6, VAR4->VAR20, VAR13);
    VAR12->VAR21 |= VAR4->VAR20 & ~VAR22;
    VAR15 = *VAR6;
    VAR14 = ~VAR10->VAR18 & VAR8;
    *VAR6 = FUN3(*VAR6, VAR7, VAR14);
    if (VAR15 & VAR22)
    {
        if (!VAR12->VAR23)
        {
            FUN4(&VAR2->VAR17, "");
            if (FUN5(VAR2))
            {
                *VAR6 &= ~VAR22;
                FUN2(&VAR2->VAR17, "");
                return 0;
            }
            if (FUN6(VAR2))
            {
                *VAR6 &= ~VAR22;
                FUN2(&VAR2->VAR17, "");
                return 0;
            }
            VAR12->VAR23 = true;
            VAR12->VAR24 = true;
        }
        VAR12->VAR21 |= VAR22;
    }
    else
    {
        VAR12->VAR21 &= ~VAR22;
    }
    *VAR6 &= ~VAR22;
    *VAR6 |= VAR15 & VAR22;
    return 0;
}