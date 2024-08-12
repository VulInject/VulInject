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
                FUN3(VAR9->VAR27, VAR28, VAR9->VAR26, VAR9->VAR21);
                if (VAR9->VAR26[0] == 0x00 && VAR9->VAR26[1] == 0x00 && VAR9->VAR26[2] == 0x01)
                {
                    VAR17 = VAR9->VAR26[3] | 0x100;
                    FUN4(VAR9->VAR27, "", VAR9->VAR29, VAR17);
                    if ((!VAR9->VAR30 && VAR9->VAR27->VAR31 == VAR32) || (VAR9->VAR30 && VAR9->VAR30->VAR33 == VAR34) || VAR17 == 0x1be)
                        goto VAR35;
                    if (!VAR9->VAR30)
                        VAR9->VAR30 = FUN5(VAR9, 0, VAR17);
                    if (!VAR9->VAR30)
                        return FUN6(VAR36);
                    VAR9->VAR37 = FUN7(VAR9->VAR26 + 4);
                    if (!VAR9->VAR37)
                        VAR9->VAR37 = VAR38;
                    VAR9->VAR39 = FUN8(VAR9->VAR37 + VAR40);
                    if (!VAR9->VAR39)
                        return FUN6(VAR36);
                    if (VAR17 != 0x1bc && VAR17 != 0x1bf && VAR17 != 0x1f0 && VAR17 != 0x1f1 && VAR17 != 0x1ff && VAR17 != 0x1f2 && VAR17 != 0x1f8)
                    {
                        VAR9->VAR19 = VAR41;
                        VAR9->VAR42 = VAR9->VAR26[8] + 9;
                    }
                    else
                    {
                        VAR9->VAR19 = VAR20;
                        VAR9->VAR21 = 0;
                    }
                }
                else
                {
                VAR35:
                    VAR9->VAR19 = VAR43;
                    continue;
                }
            }
            break;
        case VAR41:
            VAR16 = VAR9->VAR42 - VAR9->VAR21;
            if (VAR16 < 0)
                return -1;
            if (VAR16 > VAR5)
                VAR16 = VAR5;
            memcpy(VAR9->VAR26 + VAR9->VAR21, VAR15, VAR16);
            VAR9->VAR21 += VAR16;
            VAR15 += VAR16;
            VAR5 -= VAR16;
            if (VAR9->VAR21 == VAR9->VAR42)
            {
                const VAR3 *VAR44;
                unsigned int VAR45;
                VAR45 = VAR9->VAR26[7];
                VAR44 = VAR9->VAR26 + 9;
                VAR9->VAR46 = VAR47;
                VAR9->VAR48 = VAR47;
                if ((VAR45 & 0xc0) == 0x80)
                {
                    VAR9->VAR48 = VAR9->VAR46 = FUN9(VAR44);
                    VAR44 += 5;
                }
                else if ((VAR45 & 0xc0) == 0xc0)
                {
                    VAR9->VAR46 = FUN9(VAR44);
                    VAR44 += 5;
                    VAR9->VAR48 = FUN9(VAR44);
                    VAR44 += 5;
                }
                VAR9->VAR19 = VAR20;
                VAR9->VAR21 = 0;
            }
            break;
        case VAR20:
            if (VAR5 > 0)
            {
                if (VAR9->VAR21 + VAR5 > VAR9->VAR37)
                {
                    FUN2(VAR9, VAR14->VAR18);
                    VAR9->VAR37 = VAR38;
                    VAR9->VAR39 = FUN8(VAR9->VAR37 + VAR40);
                    if (!VAR9->VAR39)
                        return FUN6(VAR36);
                    VAR14->VAR22 = 1;
                }
                memcpy(VAR9->VAR39 + VAR9->VAR21, VAR15, VAR5);
                VAR9->VAR21 += VAR5;
            }
            VAR5 = 0;
            break;
        case VAR43:
            VAR5 = 0;
            break;
        }
    }
    return 0;
}