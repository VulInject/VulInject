static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetBitContext VAR14;
    unsigned int VAR15, VAR16;
    unsigned int VAR17;
    unsigned int VAR18 = 4;
    unsigned int VAR19 = 0;
    uint8_t VAR20[VAR21];
    uint16_t VAR22[VAR21];
    uint8_t VAR23;
    if (VAR9 < 4)
        return 0;
    VAR15 = (FUN2(VAR8) & 0xfff) * 2;
    if (VAR15 > VAR9)
        return -1;
    FUN3(&VAR14, (VAR8 + 4), (VAR15 - 4) * 8);
    VAR12->VAR24 = 0;
    if (FUN4(&VAR14, 31) == (0xf8726fba >> 1))
    {
        if (FUN5(VAR12, &VAR14) < 0)
            goto VAR25;
        VAR12->VAR24 = 1;
        VAR18 += 28;
    }
    if (!VAR12->VAR26)
    {
        FUN6(VAR12->VAR2, VAR27, "");
        *VAR4 = 0;
        return VAR15;
    }
    VAR17 = 0;
    for (VAR16 = 0; VAR16 < VAR12->VAR28; VAR16++)
    {
        int VAR29, VAR30, VAR31, VAR32;
        VAR29 = FUN7(&VAR14);
        VAR32 = FUN7(&VAR14);
        VAR30 = FUN7(&VAR14);
        FUN8(&VAR14);
        VAR31 = FUN9(&VAR14, 12) * 2;
        VAR19 += 2;
        if (VAR29)
        {
            if (VAR12->VAR2->VAR33 == VAR34)
            {
                FUN6(VAR12->VAR2, VAR35, "");
                goto VAR25;
            }
            FUN10(&VAR14, 16);
            VAR19 += 2;
        }
        if (!(VAR32 ^ VAR12->VAR24))
        {
            FUN6(VAR12->VAR2, VAR35, "");
            goto VAR25;
        }
        if (VAR31 + VAR18 + VAR19 > VAR15)
        {
            FUN6(VAR12->VAR2, VAR35, ""
                                           "",
                   VAR16);
            VAR31 = VAR15 - VAR18 - VAR19;
        }
        if (VAR31 < VAR17)
        {
            FUN6(VAR2, VAR35, ""
                                        "",
                   VAR16);
            goto VAR25;
        }
        if (VAR16 > VAR12->VAR36)
            continue;
        VAR20[VAR16] = VAR30;
        VAR22[VAR16] = VAR31 - VAR17;
        VAR17 = VAR31;
    }
    VAR23 = FUN11(VAR8, 4);
    VAR23 ^= FUN11(VAR8 + VAR18, VAR19);
    if ((((VAR23 >> 4) ^ VAR23) & 0xF) != 0xF)
    {
        FUN6(VAR2, VAR35, "");
        goto VAR25;
    }
    VAR8 += VAR18 + VAR19;
    for (VAR16 = 0; VAR16 <= VAR12->VAR36; VAR16++)
    {
        VAR37 *VAR38 = &VAR12->VAR39[VAR16];
        FUN3(&VAR14, VAR8, VAR22[VAR16] * 8);
        VAR12->VAR40 = 0;
        memset(VAR12->VAR41, 0, sizeof(VAR12->VAR41));
        VAR38->VAR42 = 0;
        do
        {
            if (FUN7(&VAR14))
            {
                if (FUN7(&VAR14))
                {
                    if (FUN12(VAR12, &VAR14, VAR8, VAR16) < 0)
                        goto VAR43;
                    VAR38->VAR44 = 1;
                }
                if (!VAR38->VAR44)
                    goto VAR43;
                if (FUN13(VAR12, &VAR14, VAR16) < 0)
                    goto VAR43;
            }
            if (!VAR38->VAR44)
                goto VAR43;
            if (FUN14(VAR12, &VAR14, VAR16) < 0)
                return -1;
            if (FUN15(&VAR14) >= VAR22[VAR16] * 8)
                goto VAR45;
        } while (!FUN7(&VAR14));
        FUN10(&VAR14, (-FUN15(&VAR14)) & 15);
        if (VAR22[VAR16] * 8 - FUN15(&VAR14) >= 32)
        {
            int VAR46;
            if (FUN9(&VAR14, 16) != 0xD234)
                return -1;
            VAR46 = FUN9(&VAR14, 16);
            if (VAR12->VAR2->VAR33 == VAR47 && VAR46 & 0x2000)
                VAR38->VAR42 -= FUN16(VAR46 & 0x1FFF, VAR38->VAR42);
            else if (VAR12->VAR2->VAR33 == VAR34 && VAR46 != 0xD234)
                return -1;
            if (VAR16 == VAR12->VAR36)
                FUN6(VAR12->VAR2, VAR48, "");
        }
        if (VAR20[VAR16])
        {
            uint8_t VAR49, VAR50;
            if (VAR22[VAR16] * 8 - FUN15(&VAR14) != 16)
                goto VAR45;
            VAR49 = FUN11(VAR8, VAR22[VAR16] - 2);
            VAR50 = FUN17(VAR8, VAR22[VAR16] - 2);
            if ((FUN9(&VAR14, 8) ^ VAR49) != 0xa9)
                FUN6(VAR12->VAR2, VAR35, "", VAR16);
            if (FUN9(&VAR14, 8) != VAR50)
                FUN6(VAR12->VAR2, VAR35, "", VAR16);
        }
        if (VAR22[VAR16] * 8 != FUN15(&VAR14))
            goto VAR45;
    VAR43:
        if (!VAR38->VAR44)
            FUN6(VAR12->VAR2, VAR35, "", VAR16);
        VAR8 += VAR22[VAR16];
    }
    FUN18(VAR12, VAR12->VAR36);
    if (FUN19(VAR12, VAR12->VAR36, VAR3, VAR4) < 0)
        return -1;
    return VAR15;
VAR45:
    FUN6(VAR12->VAR2, VAR35, "", VAR16);
    return -1;
VAR25:
    VAR12->VAR26 = 0;
    return -1;
}