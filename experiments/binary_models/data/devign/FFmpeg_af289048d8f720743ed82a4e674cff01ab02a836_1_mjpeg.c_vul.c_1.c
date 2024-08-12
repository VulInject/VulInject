static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11, *VAR12, *VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    VAR18 *VAR19 = VAR3;
    unsigned int VAR20;
    *VAR4 = 0;
    if (VAR7 == 0)
        return 0;
    VAR12 = VAR6;
    VAR11 = VAR6 + VAR7;
    while (VAR12 < VAR11)
    {
        VAR13 = VAR12;
        VAR15 = FUN2(&VAR12, VAR11, &VAR9->VAR21);
        VAR14 = VAR12 - VAR13;
        if (VAR14 + (VAR9->VAR12 - VAR9->VAR22) > VAR9->VAR23)
        {
            VAR9->VAR12 = VAR9->VAR22;
            if (VAR15 > 0)
                VAR9->VAR20 = VAR15;
        }
        else
        {
            memcpy(VAR9->VAR12, VAR13, VAR14);
            VAR9->VAR12 += VAR14;
            if (VAR15 == 0 || VAR15 == 0xff)
            {
                VAR9->VAR12--;
            }
            else if (VAR15 > 0)
            {
                VAR16 = VAR9->VAR12 - VAR9->VAR22;
                VAR20 = VAR9->VAR20;
                VAR9->VAR12 = VAR9->VAR22;
                VAR9->VAR20 = VAR15;
                FUN3("", VAR20);
                switch (VAR20)
                {
                case VAR24:
                    break;
                case VAR25:
                    FUN4(VAR9, VAR9->VAR22, VAR16);
                    break;
                case VAR26:
                    FUN5(VAR9, VAR9->VAR22, VAR16);
                    break;
                case VAR27:
                    FUN6(VAR9, VAR9->VAR22, VAR16);
                    break;
                case VAR28:
                    FUN7(VAR9, VAR9->VAR22, VAR16);
                    if (VAR9->VAR20 == VAR29)
                    {
                        int VAR30;
                        if (VAR9->VAR31)
                        {
                            VAR9->VAR32 ^= 1;
                            if (VAR9->VAR32)
                                goto VAR33;
                        }
                        for (VAR17 = 0; VAR17 < 3; VAR17++)
                        {
                            VAR19->VAR3[VAR17] = VAR9->VAR34[VAR17];
                            VAR30 = VAR9->VAR35[VAR17];
                            if (VAR9->VAR31)
                                VAR30 >>= 1;
                            VAR19->VAR35[VAR17] = VAR30;
                        }
                        *VAR4 = sizeof(VAR18);
                        VAR2->VAR36 = VAR9->VAR36;
                        if (VAR9->VAR31)
                            VAR2->VAR36 *= 2;
                        VAR2->VAR37 = VAR9->VAR37;
                        switch ((VAR9->VAR38[0] << 4) | VAR9->VAR39[0])
                        {
                        case 0x11:
                            VAR2->VAR40 = VAR41;
                            break;
                        case 0x21:
                            VAR2->VAR40 = VAR42;
                            break;
                        default:
                        case 0x22:
                            VAR2->VAR40 = VAR43;
                            break;
                        }
                        VAR2->VAR44 = 3;
                        goto VAR33;
                    }
                    break;
                }
            }
        }
    }
VAR33:
    return VAR12 - VAR6;
}