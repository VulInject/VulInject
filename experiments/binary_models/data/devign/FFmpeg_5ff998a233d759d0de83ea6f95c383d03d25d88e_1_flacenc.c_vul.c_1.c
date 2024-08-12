static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    int VAR6, VAR7, VAR8, VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    int32_t VAR14[VAR15][VAR15];
    int VAR16[VAR15];
    VAR17 *VAR18, *VAR19;
    VAR11 = &VAR2->VAR11;
    VAR13 = &VAR11->VAR20[VAR3];
    VAR18 = VAR13->VAR21;
    VAR19 = VAR13->VAR22;
    VAR5 = VAR11->VAR23;
    for (VAR4 = 1; VAR4 < VAR5; VAR4++)
        if (VAR19[VAR4] != VAR19[0])
            break;
    if (VAR4 == VAR5)
    {
        VAR13->VAR24 = VAR13->VAR25 = VAR26;
        VAR18[0] = VAR19[0];
        return FUN2(VAR2, VAR13, 0);
    }
    if (VAR11->VAR27 || VAR5 < 5)
    {
        VAR13->VAR24 = VAR13->VAR25 = VAR28;
        memcpy(VAR18, VAR19, VAR5 * sizeof(VAR17));
        return FUN2(VAR2, VAR13, 0);
    }
    VAR6 = VAR2->VAR29.VAR30;
    VAR7 = VAR2->VAR29.VAR31;
    VAR9 = VAR2->VAR29.VAR32;
    VAR13->VAR24 = VAR33;
    if (VAR2->VAR29.VAR34 == VAR35 || VAR2->VAR29.VAR34 == VAR36 || VAR5 <= VAR7)
    {
        uint32_t VAR37[VAR38 + 1];
        if (VAR7 > VAR38)
            VAR7 = VAR38;
        VAR8 = 0;
        VAR37[0] = VAR39;
        for (VAR4 = VAR6; VAR4 <= VAR7; VAR4++)
        {
            FUN3(VAR18, VAR19, VAR5, VAR4);
            VAR37[VAR4] = FUN4(VAR2, VAR13, VAR4);
            if (VAR37[VAR4] < VAR37[VAR8])
                VAR8 = VAR4;
        }
        VAR13->VAR40 = VAR8;
        VAR13->VAR25 = VAR13->VAR24 | VAR13->VAR40;
        if (VAR13->VAR40 != VAR7)
        {
            FUN3(VAR18, VAR19, VAR5, VAR13->VAR40);
            FUN4(VAR2, VAR13, VAR13->VAR40);
        }
        return FUN2(VAR2, VAR13, VAR13->VAR40);
    }
    VAR13->VAR24 = VAR41;
    VAR8 = FUN5(&VAR2->VAR42, VAR19, VAR5, VAR6, VAR7, VAR2->VAR29.VAR43, VAR14, VAR16, VAR2->VAR29.VAR34, VAR2->VAR29.VAR44, VAR9, VAR45, 0);
    if (VAR9 == VAR46 || VAR9 == VAR47 || VAR9 == VAR48)
    {
        int VAR49 = 1 << VAR9;
        uint32_t VAR37[1 << VAR48];
        int VAR40;
        int VAR50 = VAR49 - 1;
        VAR8 = VAR7 - 1;
        VAR37[VAR50] = VAR39;
        for (VAR4 = VAR49 - 1; VAR4 >= 0; VAR4--)
        {
            VAR40 = VAR6 + (((VAR7 - VAR6 + 1) * (VAR4 + 1)) / VAR49) - 1;
            if (VAR40 < 0)
                VAR40 = 0;
            FUN6(VAR18, VAR19, VAR5, VAR40 + 1, VAR14[VAR40], VAR16[VAR40]);
            VAR37[VAR4] = FUN4(VAR2, VAR13, VAR40 + 1);
            if (VAR37[VAR4] < VAR37[VAR50])
            {
                VAR50 = VAR4;
                VAR8 = VAR40;
            }
        }
        VAR8++;
    }
    else if (VAR9 == VAR51)
    {
        uint32_t VAR37[VAR15];
        VAR8 = 0;
        VAR37[0] = VAR39;
        for (VAR4 = VAR6 - 1; VAR4 < VAR7; VAR4++)
        {
            FUN6(VAR18, VAR19, VAR5, VAR4 + 1, VAR14[VAR4], VAR16[VAR4]);
            VAR37[VAR4] = FUN4(VAR2, VAR13, VAR4 + 1);
            if (VAR37[VAR4] < VAR37[VAR8])
                VAR8 = VAR4;
        }
        VAR8++;
    }
    else if (VAR9 == VAR52)
    {
        uint32_t VAR37[VAR15];
        int VAR53;
        VAR8 = VAR6 - 1 + (VAR7 - VAR6) / 3;
        memset(VAR37, -1, sizeof(VAR37));
        for (VAR53 = 16; VAR53; VAR53 >>= 1)
        {
            int VAR54 = VAR8;
            for (VAR4 = VAR54 - VAR53; VAR4 <= VAR54 + VAR53; VAR4 += VAR53)
            {
                if (VAR4 < VAR6 - 1 || VAR4 >= VAR7 || VAR37[VAR4] < VAR39)
                    continue;
                FUN6(VAR18, VAR19, VAR5, VAR4 + 1, VAR14[VAR4], VAR16[VAR4]);
                VAR37[VAR4] = FUN4(VAR2, VAR13, VAR4 + 1);
                if (VAR37[VAR4] < VAR37[VAR8])
                    VAR8 = VAR4;
            }
        }
        VAR8++;
    }
    VAR13->VAR40 = VAR8;
    VAR13->VAR25 = VAR13->VAR24 | (VAR13->VAR40 - 1);
    VAR13->VAR16 = VAR16[VAR13->VAR40 - 1];
    for (VAR4 = 0; VAR4 < VAR13->VAR40; VAR4++)
        VAR13->VAR14[VAR4] = VAR14[VAR13->VAR40 - 1][VAR4];
    FUN6(VAR18, VAR19, VAR5, VAR13->VAR40, VAR13->VAR14, VAR13->VAR16);
    FUN4(VAR2, VAR13, VAR13->VAR40);
    return FUN2(VAR2, VAR13, VAR13->VAR40);
}