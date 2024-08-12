static bool FUN1(VAR1 *VAR2, uint32_t VAR3, MMUAccessType VAR4, ARMMMUIdx VAR5, VAR6 *VAR7, int *VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = FUN2(VAR2);
    bool VAR13 = FUN3(VAR2, VAR5);
    uint32_t VAR14 = FUN4(VAR2, VAR5);
    int VAR15;
    int VAR16 = -1;
    bool VAR17 = false;
    *VAR7 = VAR3;
    *VAR8 = 0;
    if (FUN5(VAR2, VAR5))
    {
        VAR17 = true;
    }
    else if (FUN6(VAR2, VAR3))
    {
        VAR17 = true;
    }
    else if (FUN7(VAR12, VAR5, VAR13))
    {
        VAR17 = true;
    }
    else
    {
        for (VAR15 = (int)VAR12->VAR18 - 1; VAR15 >= 0; VAR15--)
        {
            uint32_t VAR19 = VAR2->VAR20.VAR21[VAR14][VAR15] & ~0x1f;
            uint32_t VAR22 = VAR2->VAR20.VAR23[VAR14][VAR15] | 0x1f;
            if (!(VAR2->VAR20.VAR23[VAR14][VAR15] & 0x1))
            {
                continue;
            }
            if (VAR3 < VAR19 || VAR3 > VAR22)
            {
                continue;
            }
            if (VAR17)
            {
                *VAR10 = 0x00d;
                return true;
            }
            VAR16 = VAR15;
            VAR17 = true;
            if (VAR19 & ~VAR24)
            {
                FUN8(VAR25, ""
                                         "" VAR26 ""
                                         "",
                              VAR15, VAR19, VAR27);
                continue;
            }
            if ((VAR22 + 1) & ~VAR24)
            {
                FUN8(VAR25, ""
                                         "" VAR26 ""
                                         "",
                              VAR15, VAR22, VAR27);
                continue;
            }
        }
    }
    if (!VAR17)
    {
        *VAR10 = 0;
        return true;
    }
    if (VAR16 == -1)
    {
        FUN9(VAR2, VAR5, VAR3, VAR8);
    }
    else
    {
        uint32_t VAR28 = FUN10(VAR2->VAR20.VAR21[VAR14][VAR16], 1, 2);
        uint32_t VAR29 = FUN10(VAR2->VAR20.VAR21[VAR14][VAR16], 0, 1);
        if (FUN11(VAR2, VAR3))
        {
            VAR29 = 1;
        }
        *VAR8 = FUN12(VAR2, VAR5, VAR28);
        if (*VAR8 && !VAR29)
        {
            *VAR8 |= VAR30;
        }
    }
    *VAR10 = 0x00d;
    return !(*VAR8 & (1 << VAR4));
}