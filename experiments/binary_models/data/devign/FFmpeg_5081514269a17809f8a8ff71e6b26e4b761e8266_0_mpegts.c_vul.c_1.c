static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10.VAR11.VAR12;
    VAR13 *VAR14 = VAR9->VAR14;
    const VAR3 *VAR15;
    int VAR16, VAR17;
    if (!VAR14->VAR18)
        return 0;
    if (VAR6)
    {
        if (VAR9->VAR19 == VAR20 && VAR9->VAR21 > 0)
        {
            FUN2(VAR9, VAR14->VAR18);
            VAR14->VAR22 = 1;
        }
        VAR9->VAR19 = VAR23;
        VAR9->VAR21 = 0;
        VAR9->VAR24 = VAR7;
    }
    VAR15 = VAR4;
    while (VAR5 > 0)
    {
        switch (VAR9->VAR19)
        {
        case VAR23:
            VAR16 = VAR25 - VAR9->VAR21;
            if (VAR16 > VAR5)
                VAR16 = VAR5;
            memcpy(VAR9->VAR26 + VAR9->VAR21, VAR15, VAR16);
            VAR9->VAR21 += VAR16;
            VAR15 += VAR16;
            VAR5 -= VAR16;
            if (VAR9->VAR21 == VAR25)
            {
                if (VAR9->VAR26[0] == 0x00 && VAR9->VAR26[1] == 0x00 && VAR9->VAR26[2] == 0x01)
                {
                    VAR17 = VAR9->VAR26[3] | 0x100;
                    FUN3(VAR9->VAR27, "", VAR9->VAR28, VAR17);
                    if ((VAR9->VAR29 && VAR9->VAR29->VAR30 == VAR31) || VAR17 == 0x1be)
                        goto VAR32;
                    if (!VAR9->VAR29)
                    {
                        VAR9->VAR29 = FUN4(VAR14->VAR27, VAR9->VAR28);
                        if (!VAR9->VAR29)
                            return FUN5(VAR33);
                        FUN6(VAR9->VAR29, VAR9, 0, 0);
                    }
                    VAR9->VAR34 = FUN7(VAR9->VAR26 + 4);
                    if (!VAR9->VAR34)
                        VAR9->VAR34 = VAR35;
                    VAR9->VAR36 = FUN8(VAR9->VAR34 + VAR37);
                    if (!VAR9->VAR36)
                        return FUN5(VAR33);
                    if (VAR17 != 0x1bc && VAR17 != 0x1bf && VAR17 != 0x1f0 && VAR17 != 0x1f1 && VAR17 != 0x1ff && VAR17 != 0x1f2 && VAR17 != 0x1f8)
                    {
                        VAR9->VAR19 = VAR38;
                        if (VAR9->VAR29->VAR39->VAR40 == VAR41)
                        {
                            FUN3(VAR9->VAR27, "", VAR9->VAR28, VAR9->VAR42);
                            VAR9->VAR29->VAR39->VAR40 = VAR43;
                        }
                    }
                    else
                    {
                        VAR9->VAR19 = VAR20;
                        VAR9->VAR21 = 0;
                    }
                }
                else
                {
                VAR32:
                    VAR9->VAR19 = VAR44;
                    continue;
                }
            }
            break;
        case VAR38:
            VAR16 = VAR45 - VAR9->VAR21;
            if (VAR16 < 0)
                return -1;
            if (VAR16 > VAR5)
                VAR16 = VAR5;
            memcpy(VAR9->VAR26 + VAR9->VAR21, VAR15, VAR16);
            VAR9->VAR21 += VAR16;
            VAR15 += VAR16;
            VAR5 -= VAR16;
            if (VAR9->VAR21 == VAR45)
            {
                VAR9->VAR46 = VAR9->VAR26[8] + 9;
                VAR9->VAR19 = VAR47;
            }
            break;
        case VAR47:
            VAR16 = VAR9->VAR46 - VAR9->VAR21;
            if (VAR16 < 0)
                return -1;
            if (VAR16 > VAR5)
                VAR16 = VAR5;
            memcpy(VAR9->VAR26 + VAR9->VAR21, VAR15, VAR16);
            VAR9->VAR21 += VAR16;
            VAR15 += VAR16;
            VAR5 -= VAR16;
            if (VAR9->VAR21 == VAR9->VAR46)
            {
                const VAR3 *VAR48;
                unsigned int VAR49, VAR50, VAR32;
                VAR49 = VAR9->VAR26[7];
                VAR48 = VAR9->VAR26 + 9;
                VAR9->VAR51 = VAR52;
                VAR9->VAR53 = VAR52;
                if ((VAR49 & 0xc0) == 0x80)
                {
                    VAR9->VAR53 = VAR9->VAR51 = FUN9(VAR48);
                    VAR48 += 5;
                }
                else if ((VAR49 & 0xc0) == 0xc0)
                {
                    VAR9->VAR51 = FUN9(VAR48);
                    VAR48 += 5;
                    VAR9->VAR53 = FUN9(VAR48);
                    VAR48 += 5;
                }
                VAR9->VAR54 = -1;
                if (VAR49 & 0x01)
                {
                    VAR50 = *VAR48++;
                    VAR32 = (VAR50 >> 4) & 0xb;
                    VAR32 += VAR32 & 0x9;
                    VAR48 += VAR32;
                    if ((VAR50 & 0x41) == 0x01 && (VAR48 + 2) <= (VAR9->VAR26 + VAR9->VAR46))
                    {
                        if ((VAR48[0] & 0x7f) > 0 && (VAR48[1] & 0x80) == 0)
                            VAR9->VAR54 = VAR48[1];
                    }
                }
                VAR9->VAR19 = VAR20;
                VAR9->VAR21 = 0;
            }
            break;
        case VAR20:
            if (VAR5 > 0 && VAR9->VAR36)
            {
                if (VAR9->VAR21 > 0 && VAR9->VAR21 + VAR5 > VAR9->VAR34)
                {
                    FUN2(VAR9, VAR14->VAR18);
                    VAR9->VAR34 = VAR35;
                    VAR9->VAR36 = FUN8(VAR9->VAR34 + VAR37);
                    if (!VAR9->VAR36)
                        return FUN5(VAR33);
                    VAR14->VAR22 = 1;
                }
                else if (VAR9->VAR21 == 0 && VAR5 > VAR9->VAR34)
                {
                    VAR5 = VAR9->VAR34;
                    VAR9->VAR49 |= VAR55;
                }
                memcpy(VAR9->VAR36 + VAR9->VAR21, VAR15, VAR5);
                VAR9->VAR21 += VAR5;
            }
            VAR5 = 0;
            if (!VAR14->VAR22 && VAR9->VAR34 < VAR35 && VAR9->VAR46 + VAR9->VAR21 == VAR9->VAR34 + 6)
            {
                VAR14->VAR22 = 1;
                FUN2(VAR9, VAR14->VAR18);
            }
            break;
        case VAR44:
            VAR5 = 0;
            break;
        }
    }
    return 0;
}