static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6, uint64_t VAR7, uint64_t VAR8, int VAR9, int64_t VAR10)
{
    uint64_t VAR11 = VAR12;
    VAR13 *VAR14;
    int VAR15 = 0;
    VAR16 *VAR17;
    VAR18 *VAR19;
    int16_t VAR20;
    VAR21 *VAR22 = NULL;
    int VAR23, VAR24, VAR25 = 0;
    uint64_t VAR26;
    if ((VAR23 = FUN2(VAR2, VAR4, VAR5, &VAR26)) < 0)
    {
        FUN3(VAR2->VAR27, VAR28, "");
        return VAR15;
    }
    VAR4 += VAR23;
    VAR5 -= VAR23;
    VAR14 = FUN4(VAR2, VAR26);
    if (VAR5 <= 3 || !VAR14 || !VAR14->VAR29)
    {
        FUN3(VAR2->VAR27, VAR30, "" VAR31 "", VAR26, VAR5);
        return VAR15;
    }
    VAR17 = VAR14->VAR29;
    if (VAR17->VAR32 >= VAR33)
        return VAR15;
    if (VAR8 == VAR12)
        VAR8 = VAR14->VAR34 / VAR2->VAR35;
    VAR20 = FUN5(VAR4);
    VAR4 += 2;
    VAR24 = *VAR4++;
    VAR5 -= 3;
    if (VAR9 == -1)
        VAR9 = VAR24 & 0x80 ? VAR36 : 0;
    if (VAR7 != (VAR37)-1 && (VAR20 >= 0 || VAR7 >= -VAR20))
    {
        VAR11 = VAR7 + VAR20;
        if (VAR14->VAR38 == VAR39 && VAR11 < VAR14->VAR40)
            VAR9 = 0;
        if (VAR9)
            FUN6(VAR17, VAR10, VAR11, 0, 0, VAR41);
        VAR14->VAR40 = FUN7(VAR14->VAR40, VAR11 + VAR8);
    }
    if (VAR2->VAR42 && VAR14->VAR38 != VAR39)
    {
        if (!VAR9 || VAR11 < VAR2->VAR43)
            return VAR15;
        VAR2->VAR42 = 0;
    }
    switch ((VAR24 & 0x06) >> 1)
    {
    case 0x0:
        VAR25 = 1;
        VAR22 = FUN8(sizeof(int));
        VAR22[0] = VAR5;
        break;
    case 0x1:
    case 0x2:
    case 0x3:
        assert(VAR5 > 0);
        VAR25 = (*VAR4) + 1;
        VAR4 += 1;
        VAR5 -= 1;
        VAR22 = FUN8(VAR25 * sizeof(int));
        switch ((VAR24 & 0x06) >> 1)
        {
        case 0x1:
        {
            uint8_t VAR44;
            uint32_t VAR45 = 0;
            for (VAR23 = 0; VAR15 == 0 && VAR23 < VAR25 - 1; VAR23++)
            {
                while (1)
                {
                    if (VAR5 == 0)
                    {
                        VAR15 = -1;
                        break;
                    }
                    VAR44 = *VAR4;
                    VAR22[VAR23] += VAR44;
                    VAR4 += 1;
                    VAR5 -= 1;
                    if (VAR44 != 0xff)
                        break;
                }
                VAR45 += VAR22[VAR23];
            }
            VAR22[VAR23] = VAR5 - VAR45;
            break;
        }
        case 0x2:
            for (VAR23 = 0; VAR23 < VAR25; VAR23++)
                VAR22[VAR23] = VAR5 / VAR25;
            break;
        case 0x3:
        {
            uint32_t VAR45;
            VAR23 = FUN2(VAR2, VAR4, VAR5, &VAR26);
            if (VAR23 < 0)
            {
                FUN3(VAR2->VAR27, VAR30, "");
                break;
            }
            VAR4 += VAR23;
            VAR5 -= VAR23;
            VAR45 = VAR22[0] = VAR26;
            for (VAR23 = 1; VAR15 == 0 && VAR23 < VAR25 - 1; VAR23++)
            {
                int64_t VAR46;
                int VAR47;
                VAR47 = FUN9(VAR2, VAR4, VAR5, &VAR46);
                if (VAR47 < 0)
                {
                    FUN3(VAR2->VAR27, VAR30, "");
                    break;
                }
                VAR4 += VAR47;
                VAR5 -= VAR47;
                VAR22[VAR23] = VAR22[VAR23 - 1] + VAR46;
                VAR45 += VAR22[VAR23];
            }
            VAR22[VAR23] = VAR5 - VAR45;
            break;
        }
        }
        break;
    }
    if (VAR15 == 0)
    {
        for (VAR23 = 0; VAR23 < VAR25; VAR23++)
        {
            if (VAR17->VAR48->VAR49 == VAR50 || VAR17->VAR48->VAR49 == VAR51 || VAR17->VAR48->VAR49 == VAR52)
            {
                int VAR53 = VAR17->VAR48->VAR54;
                int VAR55 = VAR14->VAR56.VAR57;
                int VAR58 = VAR14->VAR56.VAR59;
                int VAR60 = VAR14->VAR56.VAR61;
                int VAR62 = VAR14->VAR56.VAR63;
                int VAR64 = VAR14->VAR56.VAR65;
                int VAR66;
                if (!VAR14->VAR56.VAR67)
                {
                    if (VAR17->VAR48->VAR49 == VAR50)
                        for (VAR66 = 0; VAR66 < VAR60 / 2; VAR66++)
                            memcpy(VAR14->VAR56.VAR68 + VAR66 * 2 * VAR64 + VAR62 * VAR58, VAR4 + VAR66 * VAR58, VAR58);
                    else
                        for (VAR66 = 0; VAR66 < VAR64 / VAR55; VAR66++)
                            memcpy(VAR14->VAR56.VAR68 + VAR55 * (VAR60 * VAR66 + ((VAR60 + 1) / 2) * (VAR62 & 1) + (VAR62 >> 1)), VAR4 + VAR66 * VAR55, VAR55);
                    if (++VAR14->VAR56.VAR63 >= VAR60)
                    {
                        VAR14->VAR56.VAR63 = 0;
                        VAR14->VAR56.VAR67 = VAR60 * VAR64 / VAR53;
                    }
                }
                while (VAR14->VAR56.VAR67)
                {
                    VAR19 = FUN8(sizeof(VAR18));
                    FUN10(VAR19, VAR53);
                    memcpy(VAR19->VAR4, VAR14->VAR56.VAR68 + VAR53 * (VAR60 * VAR64 / VAR53 - VAR14->VAR56.VAR67--), VAR53);
                    VAR19->VAR6 = VAR6;
                    VAR19->VAR69 = VAR17->VAR70;
                    FUN11(&VAR2->VAR71, &VAR2->VAR72, VAR19);
                }
            }
            else
            {
                VAR73 *VAR74 = VAR14->VAR74.VAR75;
                int VAR76 = 0, VAR77 = VAR22[VAR23];
                VAR3 *VAR78 = VAR4;
                if (VAR74 && VAR74->VAR79 & 1)
                {
                    VAR76 = FUN12(&VAR78, &VAR77, VAR14);
                    if (VAR76 < 0)
                        continue;
                }
                VAR19 = FUN8(sizeof(VAR18));
                if (FUN10(VAR19, VAR77 + VAR76) < 0)
                {
                    FUN13(VAR19);
                    VAR15 = FUN14(VAR80);
                    break;
                }
                if (VAR76)
                    memcpy(VAR19->VAR4, VAR74->VAR81.VAR82.VAR4, VAR76);
                memcpy(VAR19->VAR4 + VAR76, VAR78, VAR77);
                if (VAR78 != VAR4)
                    FUN13(VAR78);
                if (VAR23 == 0)
                    VAR19->VAR24 = VAR9;
                VAR19->VAR69 = VAR17->VAR70;
                VAR19->VAR83 = VAR11;
                VAR19->VAR6 = VAR6;
                if (VAR17->VAR48->VAR49 == VAR84)
                    VAR19->VAR85 = VAR8;
                else if (VAR14->VAR38 != VAR39)
                    VAR19->VAR8 = VAR8;
                if (VAR17->VAR48->VAR49 == VAR86)
                    FUN15(VAR2, VAR19, VAR8);
                if (VAR2->VAR87 && VAR11 != VAR12 && VAR2->VAR87->VAR83 == VAR11 && VAR2->VAR87->VAR69 == VAR17->VAR70)
                    FUN16(VAR2->VAR87, VAR19);
                else
                {
                    FUN11(&VAR2->VAR71, &VAR2->VAR72, VAR19);
                    VAR2->VAR87 = VAR19;
                }
            }
            if (VAR11 != VAR12)
                VAR11 = VAR8 ? VAR11 + VAR8 : VAR12;
            VAR4 += VAR22[VAR23];
        }
    }
    FUN13(VAR22);
    return VAR15;
}