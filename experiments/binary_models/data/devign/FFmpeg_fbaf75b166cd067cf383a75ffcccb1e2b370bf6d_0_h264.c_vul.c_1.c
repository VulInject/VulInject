static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16 = 0;
    VAR17 *VAR18;
    int VAR19, VAR20;
    int VAR21;
    VAR12->VAR22 = VAR2->VAR22;
    if (VAR9 == 0)
    {
    VAR18:
        VAR12->VAR23 = NULL;
        VAR12->VAR24 = 0;
        VAR18 = VAR12->VAR25[0];
        VAR20 = 0;
        for (VAR19 = 1; VAR12->VAR25[VAR19] && !VAR12->VAR25[VAR19]->VAR26.VAR27 && !VAR12->VAR25[VAR19]->VAR28; VAR19++)
            if (VAR12->VAR25[VAR19]->VAR29 < VAR18->VAR29)
            {
                VAR18 = VAR12->VAR25[VAR19];
                VAR20 = VAR19;
            }
        for (VAR19 = VAR20; VAR12->VAR25[VAR19]; VAR19++)
            VAR12->VAR25[VAR19] = VAR12->VAR25[VAR19 + 1];
        if (VAR18)
        {
            VAR18->VAR30 &= ~VAR31;
            VAR21 = FUN2(VAR12, VAR15, &VAR18->VAR26);
            if (VAR21 < 0)
                return VAR21;
            *VAR4 = 1;
        }
        return VAR16;
    }
    if (VAR12->VAR32 && VAR9 >= 9 && VAR8[0] == 1 && VAR8[2] == 0 && (VAR8[4] & 0xFC) == 0xFC && (VAR8[5] & 0x1F) && VAR8[8] == 0x67)
    {
        int VAR33 = VAR8[5] & 0x1f;
        const VAR7 *VAR34 = VAR8 + 6;
        while (VAR33--)
        {
            int VAR35 = FUN3(VAR34) + 2;
            if (VAR35 > VAR9 - (VAR34 - VAR8) || VAR34[2] != 0x67)
                goto VAR36;
            VAR34 += VAR35;
        }
        VAR33 = *(VAR34++);
        if (!VAR33)
            goto VAR36;
        while (VAR33--)
        {
            int VAR35 = FUN3(VAR34) + 2;
            if (VAR35 > VAR9 - (VAR34 - VAR8) || VAR34[2] != 0x68)
                goto VAR36;
            VAR34 += VAR35;
        }
        return FUN4(VAR12, VAR8, VAR9);
    }
VAR36:
    VAR16 = FUN5(VAR12, VAR8, VAR9, 0);
    if (VAR16 < 0)
        return -1;
    if (!VAR12->VAR23 && VAR12->VAR37 == VAR38)
    {
        FUN6(VAR16 <= VAR9);
        goto VAR18;
    }
    if (!(VAR2->VAR39 & VAR40) && !VAR12->VAR23)
    {
        if (VAR2->VAR41 >= VAR42 || VAR9 >= 4 && !memcmp("", VAR8, 4))
            return VAR9;
        FUN7(VAR2, VAR43, "");
        return -1;
    }
    if (!(VAR2->VAR39 & VAR40) || (VAR12->VAR44 >= VAR12->VAR45 && VAR12->VAR45))
    {
        if (VAR2->VAR39 & VAR40)
            FUN8(VAR12, 1);
        FUN9(VAR12, 0);
        *VAR4 = 0;
        if (VAR12->VAR46 && (VAR12->VAR46->VAR47 || VAR12->VAR47 > 1))
        {
            VAR21 = FUN2(VAR12, VAR15, &VAR12->VAR46->VAR26);
            if (VAR21 < 0)
                return VAR21;
            *VAR4 = 1;
            if (VAR48)
            {
                FUN10(VAR12->VAR2, VAR12->VAR46, VAR15, VAR12->VAR49.VAR50, &VAR12->VAR51, VAR12->VAR52, VAR12->VAR45, VAR12->VAR53, 1);
            }
        }
    }
    assert(VAR15->VAR3[0] || !*VAR4);
    return FUN11(VAR16, VAR9);
}