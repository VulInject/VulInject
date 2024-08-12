static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    GetBitContext VAR11;
    unsigned int VAR12, VAR13;
    unsigned int VAR14;
    unsigned int VAR15 = 4;
    unsigned int VAR16 = 0;
    uint8_t VAR17[VAR18];
    uint16_t VAR19[VAR18];
    uint8_t VAR20;
    if (VAR7 < 4)
        return 0;
    VAR12 = (FUN2(VAR6) & 0xfff) * 2;
    if (VAR12 > VAR7)
        return -1;
    FUN3(&VAR11, (VAR6 + 4), (VAR12 - 4) * 8);
    VAR9->VAR21 = 0;
    if (FUN4(&VAR11, 31) == (0xf8726fba >> 1))
    {
        if (FUN5(VAR9, &VAR11) < 0)
            goto VAR22;
        VAR9->VAR21 = 1;
        VAR15 += 28;
    }
    if (!VAR9->VAR23)
    {
        FUN6(VAR9->VAR2, VAR24, "");
        *VAR4 = 0;
        return VAR12;
    }
    VAR14 = 0;
    for (VAR13 = 0; VAR13 < VAR9->VAR25; VAR13++)
    {
        int VAR26, VAR27, VAR28, VAR29;
        VAR26 = FUN7(&VAR11);
        VAR29 = FUN7(&VAR11);
        VAR27 = FUN7(&VAR11);
        FUN8(&VAR11);
        VAR28 = FUN9(&VAR11, 12) * 2;
        VAR16 += 2;
        if (VAR26)
        {
            FUN10(&VAR11, 16);
            VAR16 += 2;
        }
        if (!(VAR29 ^ VAR9->VAR21))
        {
            FUN6(VAR9->VAR2, VAR30, "");
            goto VAR22;
        }
        if (VAR28 + VAR15 + VAR16 > VAR12)
        {
            FUN6(VAR9->VAR2, VAR30, ""
                                           "",
                   VAR13);
            VAR28 = VAR12 - VAR15 - VAR16;
        }
        if (VAR28 < VAR14)
        {
            FUN6(VAR2, VAR30, ""
                                        "",
                   VAR13);
            goto VAR22;
        }
        if (VAR13 > VAR9->VAR31)
            continue;
        VAR17[VAR13] = VAR27;
        VAR19[VAR13] = VAR28 - VAR14;
        VAR14 = VAR28;
    }
    VAR20 = FUN11(VAR6, 4);
    VAR20 ^= FUN11(VAR6 + VAR15, VAR16);
    if ((((VAR20 >> 4) ^ VAR20) & 0xF) != 0xF)
    {
        FUN6(VAR2, VAR30, "");
        goto VAR22;
    }
    VAR6 += VAR15 + VAR16;
    for (VAR13 = 0; VAR13 <= VAR9->VAR31; VAR13++)
    {
        VAR32 *VAR33 = &VAR9->VAR34[VAR13];
        FUN3(&VAR11, VAR6, VAR19[VAR13] * 8);
        VAR33->VAR35 = 0;
        do
        {
            if (FUN7(&VAR11))
            {
                if (FUN7(&VAR11))
                {
                    if (FUN12(VAR9, &VAR11, VAR6, VAR13) < 0)
                        goto VAR36;
                    VAR33->VAR37 = 1;
                }
                if (!VAR33->VAR37)
                {
                    goto VAR36;
                }
                if (FUN13(VAR9, &VAR11, VAR13) < 0)
                    goto VAR36;
            }
            if (!VAR33->VAR37)
            {
                goto VAR36;
            }
            if (FUN14(VAR9, &VAR11, VAR13) < 0)
                return -1;
            if (FUN15(&VAR11) >= VAR19[VAR13] * 8)
                goto VAR38;
        } while (!FUN7(&VAR11));
        FUN10(&VAR11, (-FUN15(&VAR11)) & 15);
        if (VAR19[VAR13] * 8 - FUN15(&VAR11) >= 32)
        {
            int VAR39;
            if (FUN9(&VAR11, 16) != 0xD234)
                return -1;
            VAR39 = FUN9(&VAR11, 16);
            if (VAR9->VAR2->VAR40 == VAR41 && VAR39 & 0x2000)
                VAR33->VAR35 -= FUN16(VAR39 & 0x1FFF, VAR33->VAR35);
            else if (VAR9->VAR2->VAR40 == VAR42 && VAR39 != 0xD234)
                return -1;
            if (VAR13 == VAR9->VAR31)
                FUN6(VAR9->VAR2, VAR43, "");
        }
        if (VAR17[VAR13])
        {
            uint8_t VAR44, VAR45;
            if (VAR19[VAR13] * 8 - FUN15(&VAR11) != 16)
                goto VAR38;
            VAR44 = FUN11(VAR6, VAR19[VAR13] - 2);
            VAR45 = FUN17(VAR6, VAR19[VAR13] - 2);
            if ((FUN9(&VAR11, 8) ^ VAR44) != 0xa9)
                FUN6(VAR9->VAR2, VAR30, "", VAR13);
            if (FUN9(&VAR11, 8) != VAR45)
                FUN6(VAR9->VAR2, VAR30, "", VAR13);
        }
        if (VAR19[VAR13] * 8 != FUN15(&VAR11))
        {
            goto VAR38;
        }
    VAR36:
        if (!VAR33->VAR37)
        {
            FUN6(VAR9->VAR2, VAR30, "", VAR13);
        }
        VAR6 += VAR19[VAR13];
    }
    FUN18(VAR9, VAR9->VAR31);
    if (FUN19(VAR9, VAR9->VAR31, VAR3, VAR4) < 0)
        return -1;
    return VAR12;
VAR38:
    FUN6(VAR9->VAR2, VAR30, "", VAR13);
    return -1;
VAR22:
    VAR9->VAR23 = 0;
    return -1;
}