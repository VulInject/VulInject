static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR5 *VAR11;
    uint32_t VAR12;
    int VAR13, VAR14, VAR15;
    int VAR16, VAR17;
    int VAR18, VAR19, VAR20, VAR21;
    int VAR22, VAR23, VAR24;
    VAR2->VAR25 = 0;
    VAR11 = VAR6 + VAR7;
    while (VAR6 < VAR11)
    {
        VAR12 = -1;
        VAR6 = FUN2(VAR6, VAR11, &VAR12);
        VAR15 = VAR11 - VAR6;
        switch (VAR12)
        {
        case VAR26:
            if (VAR15 >= 2)
            {
                VAR2->VAR27 = (VAR6[1] >> 3) & 7;
            }
            break;
        case VAR28:
            if (VAR15 >= 7)
            {
                VAR9->VAR29 = (VAR6[0] << 4) | (VAR6[1] >> 4);
                VAR9->VAR30 = ((VAR6[1] & 0x0f) << 8) | VAR6[2];
                FUN3(VAR4, VAR9->VAR29, VAR9->VAR30);
                VAR13 = VAR6[3] & 0xf;
                VAR9->VAR31.VAR32 = VAR4->VAR33.VAR32 = VAR34[VAR13].VAR35;
                VAR9->VAR31.VAR35 = VAR4->VAR33.VAR35 = VAR34[VAR13].VAR32;
                VAR4->VAR36 = ((VAR6[4] << 10) | (VAR6[5] << 2) | (VAR6[6] >> 6)) * 400;
                VAR4->VAR37 = VAR38;
                VAR4->VAR39 = 1;
            }
            break;
        case VAR40:
            if (VAR15 >= 1)
            {
                VAR14 = (VAR6[0] >> 4);
                switch (VAR14)
                {
                case 0x1:
                    if (VAR15 >= 6)
                    {
                        VAR22 = ((VAR6[1] & 1) << 1) | (VAR6[2] >> 7);
                        VAR23 = (VAR6[2] >> 5) & 3;
                        VAR24 = ((VAR6[2] & 0x1F) << 7) | (VAR6[3] >> 1);
                        VAR16 = (VAR6[5] >> 5) & 3;
                        VAR17 = (VAR6[5] & 0x1f);
                        VAR9->VAR41 = VAR6[1] & (1 << 3);
                        VAR4->VAR42 = !(VAR6[5] >> 7);
                        VAR9->VAR29 |= (VAR22 << 12);
                        VAR9->VAR30 |= (VAR23 << 12);
                        VAR4->VAR36 += (VAR24 << 18) * 400;
                        FUN3(VAR4, VAR9->VAR29, VAR9->VAR30);
                        VAR4->VAR33.VAR32 = VAR9->VAR31.VAR32 * (VAR16 + 1) * 2;
                        VAR4->VAR33.VAR35 = VAR9->VAR31.VAR35 * (VAR17 + 1);
                        VAR4->VAR37 = VAR43;
                        VAR4->VAR39 = 2;
                    }
                    break;
                case 0x8:
                    if (VAR15 >= 5)
                    {
                        VAR18 = VAR6[2] & 3;
                        VAR19 = VAR6[3] & (1 << 7);
                        VAR20 = VAR6[3] & (1 << 1);
                        VAR21 = VAR6[4] & (1 << 7);
                        VAR2->VAR25 = 1;
                        if (VAR20)
                        {
                            if (VAR9->VAR41)
                            {
                                if (VAR19)
                                    VAR2->VAR25 = 5;
                                else
                                    VAR2->VAR25 = 3;
                            }
                            else if (VAR21)
                            {
                                VAR2->VAR25 = 2;
                            }
                        }
                    }
                    break;
                }
            }
            break;
        case -1:
            goto VAR44;
        default:
            if (VAR12 >= VAR45 && VAR12 <= VAR46)
                goto VAR44;
            break;
        }
    }
VAR44:;
}