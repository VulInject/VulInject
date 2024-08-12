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
                case VAR36:
                    VAR2->VAR19 = VAR37;
                    VAR2->VAR21 = 0x40000000;
                    break;
                case VAR38:
                    FUN5(VAR2, "");
                    return -1;
                case VAR39:
                    FUN5(VAR2, "");
                    return -1;
                case VAR40:
                    FUN5(VAR2, "");
                    return -1;
                case VAR41:
                    FUN5(VAR2, ""
                                   "");
                    return -1;
                default:
                    FUN5(VAR2, "");
                    return -1;
                }
                break;
            case -2:
                VAR2->VAR19 = VAR37;
                VAR2->VAR21 = 0x08000000;
                break;
            case -3:
                VAR2->VAR19 = VAR37;
                VAR2->VAR21 = 0x10000000;
                break;
            case -4:
                VAR2->VAR19 = VAR37;
                VAR2->VAR21 = 0x10000000;
                break;
            case -5:
                VAR2->VAR19 = VAR42;
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
                        VAR2->VAR19 = VAR43;
                        VAR2->VAR21 = 1 << 16;
                    }
                    else
                    {
                        VAR2->VAR19 = VAR44;
                        VAR2->VAR21 = 0;
                    }
                    VAR2->VAR22[VAR45] = VAR3;
                    VAR2->VAR22[VAR46] = 0x80000000 | VAR7.VAR25;
                VAR26:
                    VAR2->VAR21 |= VAR7.VAR47 << 19;
                    VAR2->VAR22[VAR48] = VAR7.VAR49[0];
                    VAR2->VAR22[VAR50] = VAR7.VAR49[1];
                    break;
                case VAR27:
                    if (VAR4 == 1)
                    {
                        VAR2->VAR19 = VAR43;
                    }
                    else
                    {
                        VAR2->VAR19 = VAR44;
                    }
                VAR28:
                    VAR2->VAR21 = VAR7.VAR47 << 19;
                    VAR2->VAR22[VAR51] = (VAR3 & ~((VAR52)0x3)) | ((VAR2->VAR53 + 1) & (VAR2->VAR54 - 1));
                    VAR2->VAR22[VAR55] = 0x80000000 | VAR7.VAR25;
                    break;
                case VAR29:
                case VAR30:
                    VAR2->VAR19 = VAR56;
                    VAR2->VAR21 = 0;
                    VAR2->VAR22[VAR32] = VAR3;
                    if (VAR4)
                        VAR2->VAR22[VAR33] = 0x00800000;
                    else
                        VAR2->VAR22[VAR33] = 0x00000000;
                    break;
                case VAR34:
                case VAR35:
                case VAR36:
                    VAR2->VAR19 = VAR57;
                    VAR2->VAR21 = 0;
                    VAR2->VAR22[VAR58] = VAR3;
                    if (VAR4 == 1)
                        VAR2->VAR22[VAR59] = 0x42000000;
                    else
                        VAR2->VAR22[VAR59] = 0x40000000;
                    break;
                case VAR38:
                    FUN5(VAR2, "");
                    return -1;
                case VAR39:
                    FUN5(VAR2, "");
                    return -1;
                case VAR40:
                    FUN5(VAR2, "");
                    return -1;
                case VAR41:
                    FUN5(VAR2, ""
                                   "");
                    return -1;
                default:
                    FUN5(VAR2, "");
                    return -1;
                }
                break;
            case -2:
                VAR2->VAR19 = VAR57;
                VAR2->VAR21 = 0;
                VAR2->VAR22[VAR58] = VAR3;
                if (VAR4 == 1)
                    VAR2->VAR22[VAR59] = 0x0A000000;
                else
                    VAR2->VAR22[VAR59] = 0x08000000;
                break;
            case -4:
                switch (VAR8)
                {
                case VAR60:
                    VAR2->VAR19 = VAR61;
                    VAR2->VAR21 = VAR62;
                    VAR2->VAR22[VAR58] = VAR3;
                    break;
                case VAR63:
                    VAR2->VAR19 = VAR57;
                    VAR2->VAR21 = 0;
                    VAR2->VAR22[VAR58] = VAR3;
                    if (VAR4 == 1)
                        VAR2->VAR22[VAR59] = 0x06000000;
                    else
                        VAR2->VAR22[VAR59] = 0x04000000;
                    break;
                case VAR64:
                    VAR2->VAR19 = VAR57;
                    VAR2->VAR21 = 0;
                    VAR2->VAR22[VAR58] = VAR3;
                    if (VAR4 == 1)
                        VAR2->VAR22[VAR59] = 0x06100000;
                    else
                        VAR2->VAR22[VAR59] = 0x04100000;
                    break;
                default:
                    FUN6("", VAR9);
                    VAR2->VAR19 = VAR65;
                    VAR2->VAR21 = VAR66 | VAR67;
                    VAR2->VAR22[VAR58] = VAR3;
                    break;
                }
                break;
            case -5:
                VAR2->VAR19 = VAR68;
                VAR2->VAR21 = 0;
                VAR2->VAR22[VAR58] = VAR3;
                break;
            }
        }
        FUN6("", VAR69, VAR2->VAR70, VAR2->VAR21);
        VAR9 = 1;
    }
    return VAR9;
}