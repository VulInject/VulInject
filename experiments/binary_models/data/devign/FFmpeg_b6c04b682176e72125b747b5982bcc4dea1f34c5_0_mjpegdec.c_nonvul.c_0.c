int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR7 *VAR14, *VAR15;
    const VAR7 *VAR16;
    int VAR17;
    int VAR18;
    VAR19 *VAR20 = VAR3;
    VAR12->VAR21 = 0;
    VAR15 = VAR8;
    VAR14 = VAR8 + VAR9;
    while (VAR15 < VAR14)
    {
        VAR18 = FUN2(VAR12, &VAR15, VAR14, &VAR16, &VAR17);
        {
            if (VAR18 < 0)
            {
                goto VAR22;
            }
            else
            {
                FUN3(VAR2, VAR23, "", VAR18, VAR14 - VAR15);
                FUN4(&VAR12->VAR24, VAR16, VAR17 * 8);
                VAR12->VAR18 = VAR18;
                if (VAR12->VAR2->VAR25 & VAR26)
                {
                    FUN3(VAR2, VAR23, "", VAR18);
                }
                if (VAR18 >= 0xd0 && VAR18 <= 0xd7)
                {
                    FUN3(VAR2, VAR23, "", VAR18 & 0x0f);
                }
                else if (VAR18 >= VAR27 && VAR18 <= VAR28)
                {
                    FUN5(VAR12);
                }
                else if (VAR18 == VAR29)
                {
                    FUN6(VAR12);
                }
                switch (VAR18)
                {
                case VAR30:
                    VAR12->VAR31 = 0;
                    VAR12->VAR32 = 0;
                    break;
                case VAR33:
                    FUN7(VAR12);
                    break;
                case VAR34:
                    if (FUN8(VAR12) < 0)
                    {
                        FUN3(VAR2, VAR35, "");
                        return -1;
                    }
                    break;
                case VAR36:
                case VAR37:
                    VAR12->VAR38 = 0;
                    VAR12->VAR39 = 0;
                    VAR12->VAR40 = 0;
                    if (FUN9(VAR12) < 0)
                        return -1;
                    break;
                case VAR41:
                    VAR12->VAR38 = 0;
                    VAR12->VAR39 = 0;
                    VAR12->VAR40 = 1;
                    if (FUN9(VAR12) < 0)
                        return -1;
                    break;
                case VAR42:
                    VAR12->VAR38 = 1;
                    VAR12->VAR39 = 0;
                    VAR12->VAR40 = 0;
                    if (FUN9(VAR12) < 0)
                        return -1;
                    break;
                case VAR43:
                    VAR12->VAR38 = 1;
                    VAR12->VAR39 = 1;
                    VAR12->VAR40 = 0;
                    if (FUN9(VAR12) < 0)
                        return -1;
                    break;
                case VAR44:
                    if (!VAR45 || FUN10(VAR12) < 0)
                        return -1;
                    break;
                case VAR46:
                VAR47:
                    VAR12->VAR48 = 0;
                    if (!VAR12->VAR21)
                    {
                        FUN3(VAR2, VAR49, "");
                        break;
                    }
                    if (VAR12->VAR50)
                    {
                        VAR12->VAR51 ^= 1;
                        if (VAR12->VAR51 == !VAR12->VAR52)
                            break;
                    }
                    *VAR20 = *VAR12->VAR53;
                    *VAR4 = sizeof(VAR19);
                    if (!VAR12->VAR38)
                    {
                        VAR20->VAR54 = FUN11(VAR12->VAR55[0], VAR12->VAR55[1], VAR12->VAR55[2]);
                        VAR20->VAR56 = 0;
                        VAR20->VAR57 = VAR12->VAR57;
                        memset(VAR20->VAR57, VAR20->VAR54, (VAR12->VAR58 + 15) / 16);
                        if (VAR2->VAR25 & VAR59)
                            FUN3(VAR2, VAR23, "", VAR20->VAR54);
                        VAR20->VAR54 *= VAR60;
                    }
                    goto VAR22;
                case VAR61:
                    if (!VAR12->VAR21)
                    {
                        FUN3(VAR2, VAR49, "");
                        break;
                    }
                    if (FUN12(VAR12, NULL, NULL) < 0 && VAR2->VAR62 >= VAR63)
                        return VAR64;
                    break;
                case VAR65:
                    FUN13(VAR12);
                    break;
                case VAR66:
                case VAR67:
                case VAR68:
                case VAR69:
                case VAR70:
                case VAR71:
                case VAR72:
                case VAR73:
                case VAR74:
                case VAR75:
                    FUN3(VAR2, VAR35, "", VAR18);
                    break;
                }
                VAR15 += (FUN14(&VAR12->VAR24) + 7) / 8;
                FUN3(VAR2, VAR23, "", (FUN14(&VAR12->VAR24) + 7) / 8, FUN14(&VAR12->VAR24));
            }
        }
    }
    if (VAR12->VAR21)
    {
        FUN3(VAR2, VAR49, "");
        goto VAR47;
    }
    FUN3(VAR2, VAR76, "");
    return -1;
VAR22:
    FUN3(VAR2, VAR23, "", VAR14 - VAR15);
    return VAR15 - VAR8;
}