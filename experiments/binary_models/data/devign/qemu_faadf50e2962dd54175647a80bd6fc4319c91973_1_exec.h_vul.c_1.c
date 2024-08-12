int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5, int VAR6)
{
    mmu_ctx_t VAR7;
    int VAR8;
    int VAR9 = 0;
    if (VAR4 == 2)
    {
        VAR4 = 0;
        VAR8 = VAR10;
    }
    else
    {
        VAR8 = VAR11;
    }
    VAR9 = FUN2(VAR2, &VAR7, VAR3, VAR4, VAR8, 1);
    if (VAR9 == 0)
    {
        VAR9 = FUN3(VAR2, VAR3 & VAR12, VAR7.VAR13 & VAR12, VAR7.VAR14, VAR5, VAR6);
    }
    else if (VAR9 < 0)
    {
        if (VAR15 != 0)
            FUN4(VAR2, VAR16, fprintf, 0);
        if (VAR8 == VAR10)
        {
            switch (VAR9)
            {
            case -1:
                switch (VAR2->VAR17)
                {
                case VAR18:
                    VAR2->VAR19 = VAR20;
                    VAR2->VAR21 = 1 << 18;
                    VAR2->VAR22[VAR23] = VAR3;
                    VAR2->VAR22[VAR24] = 0x80000000 | VAR7.VAR25;
                    goto VAR26;
                case VAR27:
                    VAR2->VAR19 = VAR20;
                    goto VAR28;
                case VAR29:
                case VAR30:
                    VAR2->VAR19 = VAR31;
                    VAR2->VAR21 = 0;
                    VAR2->VAR22[VAR32] = VAR3;
                    VAR2->VAR22[VAR33] = 0x00000000;
                    break;
                case VAR34:
                case VAR35:
                    VAR2->VAR19 = VAR36;
                    VAR2->VAR21 = 0x40000000;
                    break;
                case VAR37:
                    FUN5(VAR2, "");
                    return -1;
                case VAR38:
                    FUN5(VAR2, "");
                    return -1;
                case VAR39:
                    FUN5(VAR2, ""
                                   "");
                    return -1;
                default:
                    FUN5(VAR2, "");
                    return -1;
                }
                break;
            case -2:
                VAR2->VAR19 = VAR36;
                VAR2->VAR21 = 0x08000000;
                break;
            case -3:
                VAR2->VAR19 = VAR36;
                VAR2->VAR21 = 0x10000000;
                break;
            case -4:
                VAR2->VAR19 = VAR36;
                VAR2->VAR21 = 0x10000000;
                break;
            case -5:
                VAR2->VAR19 = VAR40;
                VAR2->VAR21 = 0;
                break;
            }
        }
        else
        {
            switch (VAR9)
            {
            case -1:
                switch (VAR2->VAR17)
                {
                case VAR18:
                    if (VAR4 == 1)
                    {
                        VAR2->VAR19 = VAR41;
                        VAR2->VAR21 = 1 << 16;
                    }
                    else
                    {
                        VAR2->VAR19 = VAR42;
                        VAR2->VAR21 = 0;
                    }
                    VAR2->VAR22[VAR43] = VAR3;
                    VAR2->VAR22[VAR44] = 0x80000000 | VAR7.VAR25;
                VAR26:
                    VAR2->VAR21 |= VAR7.VAR45 << 19;
                    VAR2->VAR22[VAR46] = VAR7.VAR47[0];
                    VAR2->VAR22[VAR48] = VAR7.VAR47[1];
                    break;
                case VAR27:
                    if (VAR4 == 1)
                    {
                        VAR2->VAR19 = VAR41;
                    }
                    else
                    {
                        VAR2->VAR19 = VAR42;
                    }
                VAR28:
                    VAR2->VAR21 = VAR7.VAR45 << 19;
                    VAR2->VAR22[VAR49] = (VAR3 & ~((VAR50)0x3)) | ((VAR2->VAR51 + 1) & (VAR2->VAR52 - 1));
                    VAR2->VAR22[VAR53] = 0x80000000 | VAR7.VAR25;
                    break;
                case VAR29:
                case VAR30:
                    VAR2->VAR19 = VAR54;
                    VAR2->VAR21 = 0;
                    VAR2->VAR22[VAR32] = VAR3;
                    if (VAR4)
                        VAR2->VAR22[VAR33] = 0x00800000;
                    else
                        VAR2->VAR22[VAR33] = 0x00000000;
                    break;
                case VAR34:
                case VAR35:
                    VAR2->VAR19 = VAR55;
                    VAR2->VAR21 = 0;
                    VAR2->VAR22[VAR56] = VAR3;
                    if (VAR4 == 1)
                        VAR2->VAR22[VAR57] = 0x42000000;
                    else
                        VAR2->VAR22[VAR57] = 0x40000000;
                    break;
                case VAR37:
                    FUN5(VAR2, "");
                    return -1;
                case VAR38:
                    FUN5(VAR2, "");
                    return -1;
                case VAR39:
                    FUN5(VAR2, ""
                                   "");
                    return -1;
                default:
                    FUN5(VAR2, "");
                    return -1;
                }
                break;
            case -2:
                VAR2->VAR19 = VAR55;
                VAR2->VAR21 = 0;
                VAR2->VAR22[VAR56] = VAR3;
                if (VAR4 == 1)
                    VAR2->VAR22[VAR57] = 0x0A000000;
                else
                    VAR2->VAR22[VAR57] = 0x08000000;
                break;
            case -4:
                switch (VAR8)
                {
                case VAR58:
                    VAR2->VAR19 = VAR59;
                    VAR2->VAR21 = VAR60;
                    VAR2->VAR22[VAR56] = VAR3;
                    break;
                case VAR61:
                    VAR2->VAR19 = VAR55;
                    VAR2->VAR21 = 0;
                    VAR2->VAR22[VAR56] = VAR3;
                    if (VAR4 == 1)
                        VAR2->VAR22[VAR57] = 0x06000000;
                    else
                        VAR2->VAR22[VAR57] = 0x04000000;
                    break;
                case VAR62:
                    VAR2->VAR19 = VAR55;
                    VAR2->VAR21 = 0;
                    VAR2->VAR22[VAR56] = VAR3;
                    if (VAR4 == 1)
                        VAR2->VAR22[VAR57] = 0x06100000;
                    else
                        VAR2->VAR22[VAR57] = 0x04100000;
                    break;
                default:
                    FUN6("", VAR9);
                    VAR2->VAR19 = VAR63;
                    VAR2->VAR21 = VAR64 | VAR65;
                    VAR2->VAR22[VAR56] = VAR3;
                    break;
                }
                break;
            case -5:
                VAR2->VAR19 = VAR66;
                VAR2->VAR21 = 0;
                VAR2->VAR22[VAR56] = VAR3;
                break;
            }
        }
        FUN6("", VAR67, VAR2->VAR68, VAR2->VAR21);
        VAR9 = 1;
    }
    return VAR9;
}