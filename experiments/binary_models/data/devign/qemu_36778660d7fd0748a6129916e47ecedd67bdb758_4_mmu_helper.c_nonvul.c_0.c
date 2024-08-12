static int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(FUN3(VAR2));
    VAR8 *VAR9 = FUN4(VAR7);
    mmu_ctx_t VAR10;
    int VAR11;
    int VAR12 = 0;
    if (VAR4 == 2)
    {
        VAR4 = 0;
        VAR11 = VAR13;
    }
    else
    {
        VAR11 = VAR2->VAR11;
    }
    VAR12 = FUN5(VAR2, &VAR10, VAR3, VAR4, VAR11);
    if (VAR12 == 0)
    {
        FUN6(VAR7, VAR3 & VAR14, VAR10.VAR15 & VAR14, VAR10.VAR16, VAR5, VAR17);
        VAR12 = 0;
    }
    else if (VAR12 < 0)
    {
        FUN7(VAR7);
        if (VAR11 == VAR13)
        {
            switch (VAR12)
            {
            case -1:
                switch (VAR2->VAR18)
                {
                case VAR19:
                    VAR7->VAR20 = VAR21;
                    VAR2->VAR22 = 1 << 18;
                    VAR2->VAR23[VAR24] = VAR3;
                    VAR2->VAR23[VAR25] = 0x80000000 | VAR10.VAR26;
                    goto VAR27;
                case VAR28:
                    VAR7->VAR20 = VAR21;
                    goto VAR29;
                case VAR30:
                case VAR31:
                    VAR7->VAR20 = VAR32;
                    VAR2->VAR22 = 0;
                    VAR2->VAR23[VAR33] = VAR3;
                    VAR2->VAR23[VAR34] = 0x00000000;
                    break;
                case VAR35:
                    FUN8(VAR2, VAR3, VAR4);
                case VAR36:
                    VAR7->VAR20 = VAR32;
                    VAR2->VAR22 = 0;
                    VAR2->VAR23[VAR37] = VAR3;
                    return -1;
                case VAR38:
                    FUN9(VAR7, "");
                    break;
                case VAR39:
                    FUN9(VAR7, ""
                                  "");
                    return -1;
                default:
                    FUN9(VAR7, "");
                    return -1;
                }
                break;
            case -2:
                VAR7->VAR20 = VAR40;
                VAR2->VAR22 = 0x08000000;
                break;
            case -3:
                if ((VAR2->VAR18 == VAR36) || (VAR2->VAR18 == VAR35))
                {
                    VAR2->VAR23[VAR41] = 0x00000000;
                }
                VAR7->VAR20 = VAR40;
                VAR2->VAR22 = 0x10000000;
                break;
            case -4:
                VAR7->VAR20 = VAR40;
                VAR2->VAR22 = 0x10000000;
                break;
            }
        }
        else
        {
            switch (VAR12)
            {
            case -1:
                switch (VAR2->VAR18)
                {
                case VAR19:
                    if (VAR4 == 1)
                    {
                        VAR7->VAR20 = VAR42;
                        VAR2->VAR22 = 1 << 16;
                    }
                    else
                    {
                        VAR7->VAR20 = VAR43;
                        VAR2->VAR22 = 0;
                    }
                    VAR2->VAR23[VAR44] = VAR3;
                    VAR2->VAR23[VAR45] = 0x80000000 | VAR10.VAR26;
                VAR27:
                    VAR2->VAR22 |= VAR10.VAR46 << 19;
                    VAR2->VAR23[VAR47] = FUN10(VAR9) + FUN11(VAR9, VAR10.VAR48[0]);
                    VAR2->VAR23[VAR49] = FUN10(VAR9) + FUN11(VAR9, VAR10.VAR48[1]);
                    break;
                case VAR28:
                    if (VAR4 == 1)
                    {
                        VAR7->VAR20 = VAR42;
                    }
                    else
                    {
                        VAR7->VAR20 = VAR43;
                    }
                VAR29:
                    VAR2->VAR22 = VAR10.VAR46 << 19;
                    VAR2->VAR23[VAR50] = (VAR3 & ~((VAR51)0x3)) | ((VAR2->VAR52 + 1) & (VAR2->VAR53 - 1));
                    VAR2->VAR23[VAR54] = 0x80000000 | VAR10.VAR26;
                    break;
                case VAR30:
                case VAR31:
                    VAR7->VAR20 = VAR55;
                    VAR2->VAR22 = 0;
                    VAR2->VAR23[VAR33] = VAR3;
                    if (VAR4)
                    {
                        VAR2->VAR23[VAR34] = 0x00800000;
                    }
                    else
                    {
                        VAR2->VAR23[VAR34] = 0x00000000;
                    }
                    break;
                case VAR38:
                    FUN9(VAR7, "");
                    break;
                case VAR35:
                    FUN8(VAR2, VAR3, VAR4);
                case VAR36:
                    VAR7->VAR20 = VAR55;
                    VAR2->VAR22 = 0;
                    VAR2->VAR23[VAR37] = VAR3;
                    VAR2->VAR23[VAR41] = VAR4 ? VAR56 : 0;
                    return -1;
                case VAR39:
                    FUN9(VAR7, ""
                                  "");
                    return -1;
                default:
                    FUN9(VAR7, "");
                    return -1;
                }
                break;
            case -2:
                VAR7->VAR20 = VAR57;
                VAR2->VAR22 = 0;
                if (VAR2->VAR18 == VAR30 || VAR2->VAR18 == VAR31)
                {
                    VAR2->VAR23[VAR33] = VAR3;
                    if (VAR4)
                    {
                        VAR2->VAR23[VAR34] |= 0x00800000;
                    }
                }
                else if ((VAR2->VAR18 == VAR36) || (VAR2->VAR18 == VAR35))
                {
                    VAR2->VAR23[VAR37] = VAR3;
                    VAR2->VAR23[VAR41] = VAR4 ? VAR56 : 0;
                }
                else
                {
                    VAR2->VAR23[VAR58] = VAR3;
                    if (VAR4 == 1)
                    {
                        VAR2->VAR23[VAR59] = 0x0A000000;
                    }
                    else
                    {
                        VAR2->VAR23[VAR59] = 0x08000000;
                    }
                }
                break;
            case -4:
                switch (VAR11)
                {
                case VAR60:
                    VAR7->VAR20 = VAR61;
                    VAR2->VAR22 = VAR62;
                    VAR2->VAR23[VAR58] = VAR3;
                    break;
                case VAR63:
                    VAR7->VAR20 = VAR57;
                    VAR2->VAR22 = 0;
                    VAR2->VAR23[VAR58] = VAR3;
                    if (VAR4 == 1)
                    {
                        VAR2->VAR23[VAR59] = 0x06000000;
                    }
                    else
                    {
                        VAR2->VAR23[VAR59] = 0x04000000;
                    }
                    break;
                case VAR64:
                    VAR7->VAR20 = VAR57;
                    VAR2->VAR22 = 0;
                    VAR2->VAR23[VAR58] = VAR3;
                    if (VAR4 == 1)
                    {
                        VAR2->VAR23[VAR59] = 0x06100000;
                    }
                    else
                    {
                        VAR2->VAR23[VAR59] = 0x04100000;
                    }
                    break;
                default:
                    FUN12("", VAR12);
                    VAR7->VAR20 = VAR65;
                    VAR2->VAR22 = VAR66 | VAR67;
                    VAR2->VAR23[VAR58] = VAR3;
                    break;
                }
                break;
            }
        }
        FUN12("", VAR68, VAR7->VAR69, VAR2->VAR22);
        VAR12 = 1;
    }
    return VAR12;
}