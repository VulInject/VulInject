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
    int VAR24;
    if (VAR9 < 4)
        return 0;
    VAR15 = (FUN2(VAR8) & 0xfff) * 2;
    if (VAR15 < 4 || VAR15 > VAR9)
        return VAR25;
    FUN3(&VAR14, (VAR8 + 4), (VAR15 - 4) * 8);
    VAR12->VAR26 = 0;
    if (FUN4(&VAR14, 31) == (0xf8726fba >> 1))
    {
        if (FUN5(VAR12, &VAR14) < 0)
            goto VAR27;
        VAR12->VAR26 = 1;
        VAR18 += 28;
    }
    if (!VAR12->VAR28)
    {
        FUN6(VAR12->VAR2, VAR29, "");
        *VAR4 = 0;
        return VAR15;
    }
    VAR17 = 0;
    for (VAR16 = 0; VAR16 < VAR12->VAR30; VAR16++)
    {
        int VAR31, VAR32, VAR33, VAR34;
        VAR31 = FUN7(&VAR14);
        VAR34 = FUN7(&VAR14);
        VAR32 = FUN7(&VAR14);
        FUN8(&VAR14);
        VAR33 = FUN9(&VAR14, 12) * 2;
        VAR19 += 2;
        if (VAR31)
        {
            if (VAR12->VAR2->VAR35 == VAR36)
            {
                FUN6(VAR12->VAR2, VAR37, "");
                goto VAR27;
            }
            FUN10(&VAR14, 16);
            VAR19 += 2;
        }
        if (!(VAR34 ^ VAR12->VAR26))
        {
            FUN6(VAR12->VAR2, VAR37, "");
            goto VAR27;
        }
        if (VAR33 + VAR18 + VAR19 > VAR15)
        {
            FUN6(VAR12->VAR2, VAR37, ""
                                           "",
                   VAR16);
            VAR33 = VAR15 - VAR18 - VAR19;
        }
        if (VAR33 < VAR17)
        {
            FUN6(VAR2, VAR37, ""
                                        "",
                   VAR16);
            goto VAR27;
        }
        if (VAR16 > VAR12->VAR38)
            continue;
        VAR20[VAR16] = VAR32;
        VAR22[VAR16] = VAR33 - VAR17;
        VAR17 = VAR33;
    }
    VAR23 = FUN11(VAR8, 4);
    VAR23 ^= FUN11(VAR8 + VAR18, VAR19);
    if ((((VAR23 >> 4) ^ VAR23) & 0xF) != 0xF)
    {
        FUN6(VAR2, VAR37, "");
        goto VAR27;
    }
    VAR8 += VAR18 + VAR19;
    for (VAR16 = 0; VAR16 <= VAR12->VAR38; VAR16++)
    {
        VAR39 *VAR40 = &VAR12->VAR41[VAR16];
        FUN3(&VAR14, VAR8, VAR22[VAR16] * 8);
        VAR12->VAR42 = 0;
        memset(VAR12->VAR43, 0, sizeof(VAR12->VAR43));
        VAR40->VAR44 = 0;
        do
        {
            if (FUN7(&VAR14))
            {
                if (FUN7(&VAR14))
                {
                    if (FUN12(VAR12, &VAR14, VAR8, VAR16) < 0)
                        goto VAR45;
                    VAR40->VAR46 = 1;
                }
                if (!VAR40->VAR46)
                    goto VAR45;
                if (FUN13(VAR12, &VAR14, VAR16) < 0)
                    goto VAR45;
            }
            if (!VAR40->VAR46)
                goto VAR45;
            if ((VAR24 = FUN14(VAR12, &VAR14, VAR16)) < 0)
                return VAR24;
            if (FUN15(&VAR14) >= VAR22[VAR16] * 8)
                goto VAR47;
        } while (!FUN7(&VAR14));
        FUN10(&VAR14, (-FUN15(&VAR14)) & 15);
        if (VAR22[VAR16] * 8 - FUN15(&VAR14) >= 32)
        {
            int VAR48;
            if (FUN9(&VAR14, 16) != 0xD234)
                return VAR25;
            VAR48 = FUN9(&VAR14, 16);
            if (VAR12->VAR2->VAR35 == VAR49 && VAR48 & 0x2000)
                VAR40->VAR44 -= FUN16(VAR48 & 0x1FFF, VAR40->VAR44);
            else if (VAR12->VAR2->VAR35 == VAR36 && VAR48 != 0xD234)
                return VAR25;
            if (VAR16 == VAR12->VAR38)
                FUN6(VAR12->VAR2, VAR50, "");
        }
        if (VAR20[VAR16])
        {
            uint8_t VAR51, VAR52;
            if (VAR22[VAR16] * 8 - FUN15(&VAR14) != 16)
                goto VAR47;
            VAR51 = FUN11(VAR8, VAR22[VAR16] - 2);
            VAR52 = FUN17(VAR8, VAR22[VAR16] - 2);
            if ((FUN9(&VAR14, 8) ^ VAR51) != 0xa9)
                FUN6(VAR12->VAR2, VAR37, "", VAR16);
            if (FUN9(&VAR14, 8) != VAR52)
                FUN6(VAR12->VAR2, VAR37, "", VAR16);
        }
        if (VAR22[VAR16] * 8 != FUN15(&VAR14))
            goto VAR47;
    VAR45:
        if (!VAR40->VAR46)
            FUN6(VAR12->VAR2, VAR37, "", VAR16);
        VAR8 += VAR22[VAR16];
    }
    FUN18(VAR12, VAR12->VAR38);
    if ((VAR24 = FUN19(VAR12, VAR12->VAR38, VAR3, VAR4)) < 0)
        return VAR24;
    return VAR15;
VAR47:
    FUN6(VAR12->VAR2, VAR37, "", VAR16);
    return VAR25;
VAR27:
    VAR12->VAR28 = 0;
    return VAR25;
}