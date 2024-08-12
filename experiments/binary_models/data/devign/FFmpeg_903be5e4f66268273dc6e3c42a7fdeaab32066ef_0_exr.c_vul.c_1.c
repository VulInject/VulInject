static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *const VAR10 = VAR7->VAR11;
    VAR12 *VAR13 = &VAR7->VAR14[VAR5];
    const VAR15 *VAR16[4] = {0};
    const VAR15 *VAR17 = VAR7->VAR17;
    uint64_t VAR18, VAR19;
    VAR20 *VAR21;
    VAR15 *VAR22;
    uint32_t VAR23;
    uint64_t VAR24, VAR25 = 0;
    uint64_t VAR26, VAR27, VAR28, VAR29;
    const VAR15 *VAR30;
    int VAR31 = (VAR2->VAR32 - (VAR7->VAR33 + 1)) * 2 * VAR7->VAR34->VAR35;
    int VAR36 = VAR7->VAR37 * 2 * VAR7->VAR34->VAR35;
    int VAR38, VAR39, VAR40 = VAR7->VAR40;
    int VAR41, VAR42;
    float VAR43 = 1.0f / VAR7->VAR44;
    avpriv_trc_function VAR45 = FUN2(VAR7->VAR46);
    int VAR47;
    VAR18 = FUN3(VAR7->VAR48.VAR49 + VAR4 * 8);
    if (VAR7->VAR50)
    {
        if (VAR18 > VAR40 - 20)
            return VAR51;
        VAR30 = VAR17 + VAR18 + 20;
        VAR26 = FUN4(VAR30 - 20);
        VAR27 = FUN4(VAR30 - 16);
        VAR28 = FUN4(VAR30 - 12);
        VAR29 = FUN4(VAR30 - 8);
        VAR23 = FUN4(VAR30 - 4);
        if (VAR23 <= 0 || VAR23 > VAR40)
            return VAR51;
        if (VAR28 || VAR29)
        {
            FUN5(VAR7->VAR2, "");
            return VAR52;
        }
        if (VAR7->VAR37 || VAR7->VAR53)
        {
            FUN5(VAR7->VAR2, "");
            return VAR52;
        }
        VAR24 = VAR7->VAR54.VAR55 * VAR27;
        VAR25 = VAR7->VAR54.VAR56 * VAR26;
        if (VAR24 < VAR7->VAR53 || VAR24 > VAR7->VAR57 || VAR25 < VAR7->VAR37 || VAR25 > VAR7->VAR33)
            return VAR51;
        VAR13->VAR58 = FUN6(VAR7->VAR54.VAR55, VAR7->VAR59 - VAR27 * VAR7->VAR54.VAR55);
        VAR13->VAR60 = FUN6(VAR7->VAR54.VAR56, VAR7->VAR61 - VAR26 * VAR7->VAR54.VAR56);
        if (VAR25)
        {
            VAR36 = 0;
        }
        if ((VAR25 + VAR13->VAR60) != VAR7->VAR61)
            VAR31 = 0;
        VAR13->VAR62 = VAR13->VAR60 * VAR7->VAR63;
        VAR19 = VAR13->VAR62 * (VAR64)VAR13->VAR58;
    }
    else
    {
        if (VAR18 > VAR40 - 8)
            return VAR51;
        VAR30 = VAR17 + VAR18 + 8;
        VAR24 = FUN4(VAR30 - 8);
        if (VAR24 < VAR7->VAR53 || VAR24 > VAR7->VAR57)
            return VAR51;
        VAR23 = FUN4(VAR30 - 4);
        if (VAR23 <= 0 || VAR23 > VAR40)
            return VAR51;
        VAR13->VAR58 = FUN6(VAR7->VAR65, VAR7->VAR57 - VAR24 + 1);
        VAR13->VAR60 = VAR7->VAR61;
        VAR13->VAR62 = VAR13->VAR60 * VAR7->VAR63;
        VAR19 = VAR13->VAR62 * (VAR64)VAR13->VAR58;
        if ((VAR7->VAR66 == VAR67 && (VAR23 != VAR19 || VAR18 > VAR40 - VAR19)) || (VAR7->VAR66 != VAR67 && (VAR23 > VAR19 || VAR18 > VAR40 - VAR23)))
        {
            return VAR51;
        }
    }
    if (VAR23 < VAR19 || VAR7->VAR50)
    {
        FUN7(&VAR13->VAR68, &VAR13->VAR69, VAR19);
        if (!VAR13->VAR68)
            return FUN8(VAR70);
    }
    if (VAR23 < VAR19)
    {
        FUN7(&VAR13->VAR71, &VAR13->VAR19, VAR19 + 64);
        if (!VAR13->VAR71)
            return FUN8(VAR70);
        VAR47 = VAR51;
        switch (VAR7->VAR66)
        {
        case VAR72:
        case VAR73:
            VAR47 = FUN9(VAR7, VAR30, VAR23, VAR19, VAR13);
            break;
        case VAR74:
            VAR47 = FUN10(VAR7, VAR30, VAR23, VAR19, VAR13);
            break;
        case VAR75:
            VAR47 = FUN11(VAR7, VAR30, VAR23, VAR19, VAR13);
            break;
        case VAR76:
            VAR47 = FUN12(VAR7, VAR30, VAR23, VAR19, VAR13);
            break;
        case VAR77:
        case VAR78:
            VAR47 = FUN13(VAR7, VAR30, VAR23, VAR19, VAR13);
            break;
        }
        if (VAR47 < 0)
        {
            FUN14(VAR2, VAR79, "");
            return VAR47;
        }
        VAR30 = VAR13->VAR71;
    }
    if (!VAR7->VAR80)
    {
        VAR16[0] = VAR30 + VAR13->VAR60 * VAR7->VAR81[0];
        VAR16[1] = VAR30 + VAR13->VAR60 * VAR7->VAR81[1];
        VAR16[2] = VAR30 + VAR13->VAR60 * VAR7->VAR81[2];
        VAR42 = 3;
    }
    else
    {
        VAR16[0] = VAR30 + VAR13->VAR60 * VAR7->VAR81[1];
        VAR42 = 1;
    }
    if (VAR7->VAR81[3] >= 0)
        VAR16[3] = VAR30 + VAR13->VAR60 * VAR7->VAR81[3];
    VAR22 = VAR10->VAR82[0] + VAR24 * VAR10->VAR83[0] + (VAR25 * VAR7->VAR34->VAR35 * 2);
    for (VAR38 = 0; VAR38 < VAR13->VAR58; VAR38++, VAR22 += VAR10->VAR83[0])
    {
        const VAR15 *VAR84;
        const VAR15 *VAR85[3];
        for (VAR41 = 0; VAR41 < VAR42; VAR41++)
        {
            VAR85[VAR41] = VAR16[VAR41];
        }
        if (VAR16[3])
            VAR84 = VAR16[3];
        VAR21 = (VAR20 *)VAR22;
        memset(VAR21, 0, VAR36);
        VAR21 += VAR7->VAR37 * VAR7->VAR34->VAR35;
        if (VAR7->VAR86 == VAR87)
        {
            if (VAR45)
            {
                for (VAR39 = 0; VAR39 < VAR13->VAR60; VAR39++)
                {
                    union av_intfloat32 VAR88;
                    for (VAR41 = 0; VAR41 < VAR42; VAR41++)
                    {
                        VAR88.VAR38 = FUN15(&VAR85[VAR41]);
                        VAR88.VAR89 = FUN16(VAR88.VAR89);
                        *VAR21++ = FUN17(VAR88.VAR38);
                    }
                    if (VAR16[3])
                        *VAR21++ = FUN17(FUN15(&VAR84));
                }
            }
            else
            {
                for (VAR39 = 0; VAR39 < VAR13->VAR60; VAR39++)
                {
                    union av_intfloat32 VAR88;
                    int VAR41;
                    for (VAR41 = 0; VAR41 < VAR42; VAR41++)
                    {
                        VAR88.VAR38 = FUN15(&VAR85[VAR41]);
                        if (VAR88.VAR89 > 0.0f)
                            VAR88.VAR89 = FUN18(VAR88.VAR89, VAR43);
                        *VAR21++ = FUN17(VAR88.VAR38);
                    }
                    if (VAR16[3])
                        *VAR21++ = FUN17(FUN15(&VAR84));
                }
            }
        }
        else if (VAR7->VAR86 == VAR90)
        {
            for (VAR39 = 0; VAR39 < VAR13->VAR60; VAR39++)
            {
                int VAR41;
                for (VAR41 = 0; VAR41 < VAR42; VAR41++)
                {
                    *VAR21++ = VAR7->VAR91[FUN19(&VAR85[VAR41])];
                }
                if (VAR16[3])
                    *VAR21++ = FUN20(FUN19(&VAR84));
            }
        }
        else if (VAR7->VAR86 == VAR92)
        {
            for (VAR39 = 0; VAR39 < VAR13->VAR60; VAR39++)
            {
                for (VAR41 = 0; VAR41 < VAR42; VAR41++)
                {
                    *VAR21++ = FUN15(&VAR85[VAR41]) >> 16;
                }
                if (VAR16[3])
                    *VAR21++ = FUN15(&VAR84) >> 16;
            }
        }
        memset(VAR21, 0, VAR31);
        VAR16[0] += VAR13->VAR62;
        VAR16[1] += VAR13->VAR62;
        VAR16[2] += VAR13->VAR62;
        if (VAR16[3])
            VAR16[3] += VAR13->VAR62;
    }
    return 0;
}