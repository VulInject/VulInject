static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR5 *VAR11;
    const VAR5 *VAR12 = VAR6;
    uint32_t VAR13;
    int VAR14, VAR15, VAR16;
    int VAR17, VAR18;
    int VAR19, VAR20, VAR21, VAR22;
    int VAR23, VAR24, VAR25;
    VAR2->VAR26 = 0;
    VAR11 = VAR6 + VAR7;
    while (VAR6 < VAR11)
    {
        VAR13 = -1;
        VAR6 = FUN2(VAR6, VAR11, &VAR13);
        VAR16 = VAR11 - VAR6;
        switch (VAR13)
        {
        case VAR27:
            if (VAR16 >= 2)
            {
                VAR2->VAR28 = (VAR6[1] >> 3) & 7;
            }
            break;
        case VAR29:
            if (VAR16 >= 7)
            {
                VAR9->VAR30 = (VAR6[0] << 4) | (VAR6[1] >> 4);
                VAR9->VAR31 = ((VAR6[1] & 0x0f) << 8) | VAR6[2];
                FUN3(VAR4, VAR9->VAR30, VAR9->VAR31);
                VAR14 = VAR6[3] & 0xf;
                VAR9->VAR32.VAR33 = VAR4->VAR34.VAR33 = VAR35[VAR14].VAR36;
                VAR9->VAR32.VAR36 = VAR4->VAR34.VAR36 = VAR35[VAR14].VAR33;
                VAR4->VAR37 = ((VAR6[4] << 10) | (VAR6[5] << 2) | (VAR6[6] >> 6)) * 400;
                VAR4->VAR38 = VAR39;
                VAR4->VAR40 = 1;
            }
            break;
        case VAR41:
            if (VAR16 >= 1)
            {
                VAR15 = (VAR6[0] >> 4);
                switch (VAR15)
                {
                case 0x1:
                    if (VAR16 >= 6)
                    {
                        VAR23 = ((VAR6[1] & 1) << 1) | (VAR6[2] >> 7);
                        VAR24 = (VAR6[2] >> 5) & 3;
                        VAR25 = ((VAR6[2] & 0x1F) << 7) | (VAR6[3] >> 1);
                        VAR17 = (VAR6[5] >> 5) & 3;
                        VAR18 = (VAR6[5] & 0x1f);
                        VAR9->VAR42 = VAR6[1] & (1 << 3);
                        VAR4->VAR43 = !(VAR6[5] >> 7);
                        VAR9->VAR30 |= (VAR23 << 12);
                        VAR9->VAR31 |= (VAR24 << 12);
                        VAR4->VAR37 += (VAR25 << 18) * 400;
                        FUN3(VAR4, VAR9->VAR30, VAR9->VAR31);
                        VAR4->VAR34.VAR33 = VAR9->VAR32.VAR33 * (VAR17 + 1);
                        VAR4->VAR34.VAR36 = VAR9->VAR32.VAR36 * (VAR18 + 1);
                        VAR4->VAR38 = VAR44;
                        VAR4->VAR40 = 2;
                    }
                    break;
                case 0x8:
                    if (VAR16 >= 5)
                    {
                        VAR19 = VAR6[2] & 3;
                        VAR20 = VAR6[3] & (1 << 7);
                        VAR21 = VAR6[3] & (1 << 1);
                        VAR22 = VAR6[4] & (1 << 7);
                        if (VAR21)
                        {
                            if (VAR9->VAR42)
                            {
                                if (VAR20)
                                    VAR2->VAR26 = 4;
                                else
                                    VAR2->VAR26 = 2;
                            }
                            else if (VAR22)
                            {
                                VAR2->VAR26 = 1;
                            }
                        }
                    }
                    break;
                }
            }
            break;
        case -1:
            goto VAR45;
        default:
            if (VAR13 >= VAR46 && VAR13 <= VAR47)
                goto VAR45;
            break;
        }
    }
VAR45:;