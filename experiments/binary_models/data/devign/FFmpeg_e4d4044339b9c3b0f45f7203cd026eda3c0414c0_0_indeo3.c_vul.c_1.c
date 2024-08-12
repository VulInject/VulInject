static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9, const VAR10 *VAR11[2], int VAR12[2], const VAR3 **VAR13, const VAR3 *VAR14)
{
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19 = 0;
    uint8_t VAR20, *VAR21, *VAR22;
    const VAR10 *VAR23;
    unsigned int VAR24, VAR25;
    uint64_t VAR26;
    int VAR27 = 0, VAR28, VAR29 = 1;
    int VAR30, VAR31, VAR32;
    VAR30 = VAR6;
    VAR31 = (VAR30 << (2 + VAR8)) - (VAR2->VAR33 << 2);
    VAR32 = VAR8 ? VAR30 : 0;
    for (VAR16 = 0; VAR16 < VAR2->VAR34; VAR29 = 0, VAR16 += 1 + VAR8)
    {
        for (VAR15 = 0; VAR15 < VAR2->VAR33; VAR15 += 1 + VAR7)
        {
            VAR22 = VAR5;
            VAR21 = VAR4;
            if (VAR19 > 0)
            {
                if (VAR9 <= 4)
                {
                    VAR35;
                }
                else if (VAR9 == 10 && !VAR2->VAR36)
                {
                    VAR37;
                }
                VAR19--;
            }
            else
            {
                for (VAR17 = 0; VAR17 < 4;)
                {
                    VAR18 = 1;
                    VAR28 = VAR29 && !VAR17;
                    if (VAR9 <= 4)
                        VAR23 = VAR11[VAR17 & 1];
                    else
                        VAR23 = VAR11[1];
                    VAR38;
                    VAR20 = FUN2(VAR13);
                    if (VAR20 < 248)
                    {
                        if (VAR20 < VAR23->VAR39)
                        {
                            VAR38;
                            VAR24 = FUN2(VAR13);
                            VAR25 = VAR20;
                            if (VAR24 >= VAR23->VAR39 || VAR24 >= 248)
                        }
                        else
                        {
                            VAR20 -= VAR23->VAR39;
                            VAR24 = VAR20 / VAR23->VAR40;
                            VAR25 = VAR20 % VAR23->VAR40;
                            if (VAR12[VAR17 & 1])
                                FUN3(unsigned int, VAR24, VAR25);
                        }
                        if (VAR9 <= 4)
                        {
                            VAR41;
                        }
                        else if (VAR9 == 10 && !VAR2->VAR36)
                        {
                            VAR42;
                        }
                        else
                        {
                            VAR43;
                        }
                    }
                    else
                    {
                        switch (VAR20)
                        {
                        case VAR44:
                            VAR27 = 0;
                            VAR19 = 1;
                            VAR20 = 253;
                        case VAR45:
                        case VAR46:
                        case VAR47:
                            VAR18 = 257 - VAR20 - VAR17;
                            if (VAR18 <= 0)
                                return VAR48;
                            if (VAR9 <= 4)
                            {
                                VAR49;
                            }
                            else if (VAR9 == 10 && !VAR2->VAR36)
                            {
                                VAR50;
                            }
                            break;
                        case VAR51:
                            VAR38;
                            VAR20 = FUN2(VAR13);
                            VAR19 = (VAR20 & 0x1F) - 1;
                            if (VAR20 >= 64 || VAR19 < 0)
                                return VAR52;
                            VAR27 = VAR20 & 0x20;
                            VAR18 = 4 - VAR17;
                            if (VAR9 >= 10 || (VAR2->VAR36 || !VAR27))
                            {
                                if (VAR9 <= 4)
                                {
                                    VAR49;
                                }
                                else if (VAR9 == 10 && !VAR2->VAR36)
                                {
                                    VAR50;
                                }
                            }
                            break;
                        case VAR53:
                            VAR27 = 1;
                            VAR19 = 1;
                        case VAR54:
                            if (VAR17)
                                return VAR48;
                            VAR18 = 4;
                            if (VAR2->VAR36)
                            {
                                if (VAR9 <= 4)
                                {
                                    VAR49;
                                }
                                else if (VAR9 == 10 && !VAR2->VAR36)
                                {
                                    VAR50;
                                }
                            }
                            break;
                        default:
                            return VAR55;
                        }
                    }
                    VAR17 += VAR18;
                    VAR22 += VAR30 * (VAR18 << VAR8);
                    VAR21 += VAR30 * (VAR18 << VAR8);
                }
            }
            VAR4 += 4 << VAR7;
            VAR5 += 4 << VAR7;
        }
        VAR5 += VAR31;
        VAR4 += VAR31;
    }
    return VAR56;