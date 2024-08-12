int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5)
{
    mmu_ctx_t VAR6;
    int VAR7;
    int VAR8 = 0;
    if (VAR4 == 2)
    {
        VAR4 = 0;
        VAR7 = VAR9;
    }
    else
    {
        VAR7 = VAR2->VAR7;
    }
    VAR8 = FUN2(VAR2, &VAR6, VAR3, VAR4, VAR7);
    if (VAR8 == 0)
    {
        FUN3(VAR2, VAR3 & VAR10, VAR6.VAR11 & VAR10, VAR6.VAR12, VAR5, VAR13);
        VAR8 = 0;
    }
    else if (VAR8 < 0)
    {
        FUN4(VAR2);
        if (VAR7 == VAR9)
        {
            switch (VAR8)
            {
            case -1:
                switch (VAR2->VAR14)
                {
                case VAR15:
                    VAR2->VAR16 = VAR17;
                    VAR2->VAR18 = 1 << 18;
                    VAR2->VAR19[VAR20] = VAR3;
                    VAR2->VAR19[VAR21] = 0x80000000 | VAR6.VAR22;
                    goto VAR23;
                case VAR24:
                    VAR2->VAR16 = VAR17;
                    goto VAR25;
                case VAR26:
                case VAR27:
                    VAR2->VAR16 = VAR28;
                    VAR2->VAR18 = 0;
                    VAR2->VAR19[VAR29] = VAR3;
                    VAR2->VAR19[VAR30] = 0x00000000;
                    break;
                case VAR31:
                case VAR32:
                case VAR33:
                case VAR34:
                case VAR35:
                    VAR2->VAR16 = VAR36;
                    VAR2->VAR18 = 0x40000000;
                    break;
                case VAR37:
                    FUN5(VAR2, VAR3, VAR4);
                case VAR38:
                    VAR2->VAR16 = VAR28;
                    VAR2->VAR18 = 0;
                    VAR2->VAR19[VAR39] = VAR3;
                    return -1;
                case VAR40:
                    FUN6(VAR2, "");
                    break;
                case VAR41:
                    FUN6(VAR2, ""
                                   "");
                    return -1;
                default:
                    FUN6(VAR2, "");
                    return -1;
                }
                break;
            case -2:
                VAR2->VAR16 = VAR36;
                VAR2->VAR18 = 0x08000000;
                break;
            case -3:
                if ((VAR2->VAR14 == VAR38) || (VAR2->VAR14 == VAR37))
                {
                    VAR2->VAR19[VAR42] = 0x00000000;
                }
                VAR2->VAR16 = VAR36;
                VAR2->VAR18 = 0x10000000;
                break;
            case -4:
                VAR2->VAR16 = VAR36;
                VAR2->VAR18 = 0x10000000;
                break;
            case -5:
                if (VAR2->VAR14 == VAR33)
                {
                    VAR2->VAR16 = VAR36;
                    VAR2->VAR18 = 0x40000000;
                }
                else
                {
                    VAR2->VAR16 = VAR43;
                    VAR2->VAR18 = 0;
                }
                break;
            }
        }
        else
        {
            switch (VAR8)
            {
            case -1:
                switch (VAR2->VAR14)
                {
                case VAR15:
                    if (VAR4 == 1)
                    {
                        VAR2->VAR16 = VAR44;
                        VAR2->VAR18 = 1 << 16;
                    }
                    else
                    {
                        VAR2->VAR16 = VAR45;
                        VAR2->VAR18 = 0;
                    }
                    VAR2->VAR19[VAR46] = VAR3;
                    VAR2->VAR19[VAR47] = 0x80000000 | VAR6.VAR22;
                VAR23:
                    VAR2->VAR18 |= VAR6.VAR48 << 19;
                    VAR2->VAR19[VAR49] = VAR2->VAR50 + FUN7(VAR2, VAR6.VAR51[0], VAR52);
                    VAR2->VAR19[VAR53] = VAR2->VAR50 + FUN7(VAR2, VAR6.VAR51[1], VAR52);
                    break;
                case VAR24:
                    if (VAR4 == 1)
                    {
                        VAR2->VAR16 = VAR44;
                    }
                    else
                    {
                        VAR2->VAR16 = VAR45;
                    }
                VAR25:
                    VAR2->VAR18 = VAR6.VAR48 << 19;
                    VAR2->VAR19[VAR54] = (VAR3 & ~((VAR55)0x3)) | ((VAR2->VAR56 + 1) & (VAR2->VAR57 - 1));
                    VAR2->VAR19[VAR58] = 0x80000000 | VAR6.VAR22;
                    break;
                case VAR26:
                case VAR27:
                    VAR2->VAR16 = VAR59;
                    VAR2->VAR18 = 0;
                    VAR2->VAR19[VAR29] = VAR3;
                    if (VAR4)
                    {
                        VAR2->VAR19[VAR30] = 0x00800000;
                    }
                    else
                    {
                        VAR2->VAR19[VAR30] = 0x00000000;
                    }
                    break;
                case VAR31:
                case VAR32:
                case VAR33:
                case VAR34:
                case VAR35:
                    VAR2->VAR16 = VAR60;
                    VAR2->VAR18 = 0;
                    VAR2->VAR19[VAR61] = VAR3;
                    if (VAR4 == 1)
                    {
                        VAR2->VAR19[VAR62] = 0x42000000;
                    }
                    else
                    {
                        VAR2->VAR19[VAR62] = 0x40000000;
                    }
                    break;
                case VAR40:
                    FUN6(VAR2, "");
                    break;
                case VAR37:
                    FUN5(VAR2, VAR3, VAR4);
                case VAR38:
                    VAR2->VAR16 = VAR59;
                    VAR2->VAR18 = 0;
                    VAR2->VAR19[VAR39] = VAR3;
                    VAR2->VAR19[VAR42] = VAR4 ? VAR63 : 0;
                    return -1;
                case VAR41:
                    FUN6(VAR2, ""
                                   "");
                    return -1;
                default:
                    FUN6(VAR2, "");
                    return -1;
                }
                break;
            case -2:
                VAR2->VAR16 = VAR60;
                VAR2->VAR18 = 0;
                if (VAR2->VAR14 == VAR26 || VAR2->VAR14 == VAR27)
                {
                    VAR2->VAR19[VAR29] = VAR3;
                    if (VAR4)
                    {
                        VAR2->VAR19[VAR30] |= 0x00800000;
                    }
                }
                else if ((VAR2->VAR14 == VAR38) || (VAR2->VAR14 == VAR37))
                {
                    VAR2->VAR19[VAR39] = VAR3;
                    VAR2->VAR19[VAR42] = VAR4 ? VAR63 : 0;
                }
                else
                {
                    VAR2->VAR19[VAR61] = VAR3;
                    if (VAR4 == 1)
                    {
                        VAR2->VAR19[VAR62] = 0x0A000000;
                    }
                    else
                    {
                        VAR2->VAR19[VAR62] = 0x08000000;
                    }
                }
                break;
            case -4:
                switch (VAR7)
                {
                case VAR64:
                    VAR2->VAR16 = VAR65;
                    VAR2->VAR18 = VAR66;
                    VAR2->VAR19[VAR61] = VAR3;
                    break;
                case VAR67:
                    VAR2->VAR16 = VAR60;
                    VAR2->VAR18 = 0;
                    VAR2->VAR19[VAR61] = VAR3;
                    if (VAR4 == 1)
                    {
                        VAR2->VAR19[VAR62] = 0x06000000;
                    }
                    else
                    {
                        VAR2->VAR19[VAR62] = 0x04000000;
                    }
                    break;
                case VAR68:
                    VAR2->VAR16 = VAR60;
                    VAR2->VAR18 = 0;
                    VAR2->VAR19[VAR61] = VAR3;
                    if (VAR4 == 1)
                    {
                        VAR2->VAR19[VAR62] = 0x06100000;
                    }
                    else
                    {
                        VAR2->VAR19[VAR62] = 0x04100000;
                    }
                    break;
                default:
                    FUN8("", VAR8);
                    VAR2->VAR16 = VAR69;
                    VAR2->VAR18 = VAR70 | VAR71;
                    VAR2->VAR19[VAR61] = VAR3;
                    break;
                }
                break;
            case -5:
                if (VAR2->VAR14 == VAR33)
                {
                    VAR2->VAR16 = VAR60;
                    VAR2->VAR18 = 0;
                    VAR2->VAR19[VAR61] = VAR3;
                    if (VAR4 == 1)
                    {
                        VAR2->VAR19[VAR62] = 0x42000000;
                    }
                    else
                    {
                        VAR2->VAR19[VAR62] = 0x40000000;
                    }
                }
                else
                {
                    VAR2->VAR16 = VAR72;
                    VAR2->VAR18 = 0;
                    VAR2->VAR19[VAR61] = VAR3;
                }
                break;
            }
        }
        FUN8("", VAR73, VAR2->VAR74, VAR2->VAR18);
        VAR8 = 1;
    }
    return VAR8;