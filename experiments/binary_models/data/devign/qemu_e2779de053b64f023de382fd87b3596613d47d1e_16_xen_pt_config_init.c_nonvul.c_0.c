static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint16_t VAR7, uint16_t VAR8)
{
    VAR9 *VAR10 = VAR4->VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    uint16_t VAR13 = 0;
    uint16_t VAR14 = FUN2(VAR2, VAR10, VAR8);
    VAR5 *VAR15 = VAR4->VAR16.VAR17;
    if (*VAR6 & VAR18)
    {
        FUN3(&VAR2->VAR19, "", *VAR6);
    }
    VAR13 = VAR10->VAR20 & ~VAR10->VAR21 & VAR8;
    *VAR15 = FUN4(*VAR6, *VAR15, VAR13);
    VAR12->VAR22 |= *VAR15 & ~VAR23;
    *VAR6 = FUN4(*VAR6, VAR7, VAR14);
    if (*VAR6 & VAR23)
    {
        if (!VAR12->VAR24)
        {
            FUN5(&VAR2->VAR19, "", *VAR6);
            if (FUN6(VAR2))
            {
                *VAR6 &= ~VAR23;
                FUN3(&VAR2->VAR19, "", *VAR6);
                return 0;
            }
            if (FUN7(VAR2))
            {
                *VAR6 &= ~VAR23;
                FUN3(&VAR2->VAR19, "", *VAR6);
                return 0;
            }
            VAR12->VAR24 = true;
            VAR12->VAR25 = true;
        }
        VAR12->VAR22 |= VAR23;
    }
    else if (VAR12->VAR25)
    {
        FUN8(VAR2);
    }
    return 0;
}