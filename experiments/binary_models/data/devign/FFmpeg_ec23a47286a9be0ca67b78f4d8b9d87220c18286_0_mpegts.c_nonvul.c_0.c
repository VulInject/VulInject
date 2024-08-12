static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR1;
    VAR8 *VAR9 = VAR7->VAR10->VAR11;
    VAR12 *VAR13;
    const VAR2 *VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    if (VAR5)
    {
        VAR7->VAR19 = VAR20;
        VAR7->VAR21 = 0;
    }
    VAR14 = VAR3;
    while (VAR4 > 0)
    {
        switch (VAR7->VAR19)
        {
        case VAR20:
            VAR15 = VAR22 - VAR7->VAR21;
            if (VAR15 > VAR4)
                VAR15 = VAR4;
            memcpy(VAR7->VAR23 + VAR7->VAR21, VAR14, VAR15);
            VAR7->VAR21 += VAR15;
            VAR14 += VAR15;
            VAR4 -= VAR15;
            if (VAR7->VAR21 == VAR22)
            {
                FUN2(VAR7->VAR23, VAR7->VAR21);
                if (VAR7->VAR23[0] == 0x00 && VAR7->VAR23[1] == 0x00 && VAR7->VAR23[2] == 0x01)
                {
                    VAR16 = VAR7->VAR23[3] | 0x100;
                    if (!((VAR16 >= 0x1c0 && VAR16 <= 0x1df) || (VAR16 >= 0x1e0 && VAR16 <= 0x1ef) || (VAR16 == 0x1bd)))
                        goto VAR24;
                    if (!VAR7->VAR13)
                    {
                        if (VAR16 >= 0x1c0 && VAR16 <= 0x1df)
                        {
                            VAR17 = VAR25;
                            VAR18 = VAR26;
                        }
                        else if (VAR16 == 0x1bd)
                        {
                            VAR17 = VAR25;
                            VAR18 = VAR27;
                        }
                        else
                        {
                            VAR17 = VAR28;
                            VAR18 = VAR29;
                        }
                        VAR13 = FUN3(VAR7->VAR10, VAR7->VAR30);
                        if (VAR13)
                        {
                            VAR13->VAR11 = VAR7;
                            VAR13->VAR31.VAR17 = VAR17;
                            VAR13->VAR31.VAR18 = VAR18;
                            VAR7->VAR13 = VAR13;
                        }
                    }
                    VAR7->VAR19 = VAR32;
                    VAR7->VAR33 = (VAR7->VAR23[4] << 8) | VAR7->VAR23[5];
                    if (VAR7->VAR33)
                        VAR7->VAR33 += 6;
                    VAR7->VAR34 = VAR7->VAR23[8] + 9;
                }
                else
                {
                VAR24:
                    VAR7->VAR19 = VAR35;
                    continue;
                }
            }
            break;
        case VAR32:
            VAR15 = VAR7->VAR34 - VAR7->VAR21;
            if (VAR15 > VAR4)
                VAR15 = VAR4;
            memcpy(VAR7->VAR23 + VAR7->VAR21, VAR14, VAR15);
            VAR7->VAR21 += VAR15;
            VAR14 += VAR15;
            VAR4 -= VAR15;
            if (VAR7->VAR21 == VAR7->VAR34)
            {
                const VAR2 *VAR36;
                unsigned int VAR37;
                VAR37 = VAR7->VAR23[7];
                VAR36 = VAR7->VAR23 + 9;
                VAR7->VAR38 = VAR39;
                VAR7->VAR40 = VAR39;
                if ((VAR37 & 0xc0) == 0x80)
                {
                    VAR7->VAR38 = FUN4(VAR36);
                    VAR36 += 5;
                }
                else if ((VAR37 & 0xc0) == 0xc0)
                {
                    VAR7->VAR38 = FUN4(VAR36);
                    VAR36 += 5;
                    VAR7->VAR40 = FUN4(VAR36);
                    VAR36 += 5;
                }
                VAR7->VAR19 = VAR41;
            }
            break;
        case VAR41:
            if (VAR7->VAR33)
            {
                VAR15 = VAR7->VAR33 - VAR7->VAR21;
                if (VAR15 > VAR4)
                    VAR15 = VAR4;
            }
            else
            {
                VAR15 = VAR4;
            }
            if (VAR15 > 0)
            {
                VAR42 *VAR43 = VAR9->VAR43;
                if (VAR7->VAR13 && FUN5(VAR43, VAR15) == 0)
                {
                    memcpy(VAR43->VAR44, VAR14, VAR15);
                    VAR43->VAR45 = VAR7->VAR13->VAR46;
                    VAR43->VAR38 = VAR7->VAR38;
                    VAR7->VAR38 = VAR39;
                    VAR7->VAR40 = VAR39;
                    VAR9->VAR47 = 1;
                    return;
                }
            }
            VAR4 = 0;
            break;
        case VAR35:
            VAR4 = 0;
            break;
        }
    }
}