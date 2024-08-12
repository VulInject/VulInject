static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11, *VAR12;
    int VAR13, VAR14;
    VAR15 *VAR16 = VAR3;
    *VAR4 = 0;
    if (VAR7 == 0)
        return 0;
    VAR12 = VAR6;
    VAR11 = VAR6 + VAR7;
    while (VAR12 < VAR11)
    {
        VAR14 = FUN2(&VAR12, VAR11);
        {
            if (VAR14 < 0)
            {
                goto VAR17;
            }
            else
            {
                FUN3("", VAR14, VAR11 - VAR12);
                if ((VAR11 - VAR12) > VAR9->VAR18)
                {
                    FUN4(VAR9->VAR19);
                    VAR9->VAR18 = VAR11 - VAR12;
                    VAR9->VAR19 = FUN5(VAR9->VAR18);
                    FUN3("", VAR9->VAR18);
                }
                if (VAR14 == VAR20)
                {
                    VAR5 *VAR21 = VAR12;
                    VAR5 *VAR22 = VAR9->VAR19;
                    while (VAR21 < VAR11)
                    {
                        uint8_t VAR23 = *(VAR21++);
                        *(VAR22++) = VAR23;
                        if (VAR23 == 0xff)
                        {
                            while (*VAR21 == 0xff)
                                VAR21++;
                            VAR23 = *(VAR21++);
                            if (VAR23 >= 0xd0 && VAR23 <= 0xd7)
                                *(VAR22++) = VAR23;
                            else if (VAR23)
                                break;
                        }
                    }
                    FUN6(&VAR9->VAR24, VAR9->VAR19, (VAR22 - VAR9->VAR19) * 8);
                    FUN3("", (VAR11 - VAR12) - (VAR22 - VAR9->VAR19));
                }
                else
                    FUN6(&VAR9->VAR24, VAR12, (VAR11 - VAR12) * 8);
                VAR9->VAR14 = VAR14;
                if (VAR9->VAR2->VAR25 & VAR26)
                {
                    FUN7("", VAR14);
                }
                if (VAR14 >= 0xd0 && VAR14 <= 0xd7)
                {
                    FUN3("", VAR14 & 0x0f);
                }
                else if (VAR9->VAR27)
                {
                    if (VAR14 >= 0xe0 && VAR14 <= 0xef)
                        FUN8(VAR9);
                    else if (VAR14 == VAR28)
                        FUN9(VAR9);
                }
                switch (VAR14)
                {
                case VAR29:
                    VAR9->VAR30 = 0;
                    break;
                case VAR31:
                    FUN10(VAR9);
                    break;
                case VAR32:
                    if (FUN11(VAR9) < 0)
                    {
                        fprintf(VAR33, "");
                        return -1;
                    }
                    break;
                case VAR34:
                    VAR9->VAR35 = 0;
                    if (FUN12(VAR9) < 0)
                        return -1;
                    break;
                case VAR36:
                    VAR9->VAR35 = 1;
                    if (FUN12(VAR9) < 0)
                        return -1;
                    break;
                case VAR37:
                VAR38:
                {
                    if (VAR9->VAR39)
                    {
                        VAR9->VAR40 ^= 1;
                        if (VAR9->VAR40)
                            goto VAR41;
                    }
                    for (VAR13 = 0; VAR13 < 3; VAR13++)
                    {
                        VAR16->VAR3[VAR13] = VAR9->VAR42[VAR13];
                        VAR16->VAR43[VAR13] = (VAR9->VAR39) ? VAR9->VAR43[VAR13] >> 1 : VAR9->VAR43[VAR13];
                    }
                    *VAR4 = sizeof(VAR15);
                    VAR2->VAR44 = VAR9->VAR44;
                    if (VAR9->VAR39)
                        VAR2->VAR44 *= 2;
                    VAR2->VAR45 = VAR9->VAR45;
                    switch ((VAR9->VAR46[0] << 4) | VAR9->VAR47[0])
                    {
                    case 0x11:
                        if (VAR9->VAR48)
                        {
                            VAR2->VAR49 = VAR50;
                        }
                        else
                            VAR2->VAR49 = VAR51;
                        break;
                    case 0x21:
                        VAR2->VAR49 = VAR52;
                        break;
                    default:
                    case 0x22:
                        VAR2->VAR49 = VAR53;
                        break;
                    }
                    goto VAR17;
                }
                break;
                case VAR20:
                    FUN13(VAR9);
                    if ((VAR9->VAR54 && !VAR9->VAR39) || VAR9->VAR30)
                        goto VAR38;
                    break;
                case VAR55:
                    FUN14(VAR9);
                    break;
                case VAR56:
                case VAR57:
                case VAR58:
                case VAR59:
                case VAR60:
                case VAR61:
                case VAR62:
                case VAR63:
                case VAR64:
                case VAR65:
                case VAR66:
                case VAR67:
                    FUN7("", VAR14);
                    break;
                }
            VAR41:
                VAR12 += (FUN15(&VAR9->VAR24) + 7) / 8;
                FUN3("", (FUN15(&VAR9->VAR24) + 7) / 8, FUN15(&VAR9->VAR24));
            }
        }
    }
VAR17:
    FUN3("", VAR11 - VAR12);
    return VAR12 - VAR6;
}