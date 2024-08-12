FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    uint32_t VAR4;
    VAR5 *VAR6;
    FUN2(VAR2->VAR7, VAR8, "");
    VAR6 = FUN3(VAR9);
    VAR2->VAR10++;
    strcpy(VAR6->VAR11, "");
    if ((VAR3 = FUN4(VAR2, &VAR4)) < 0)
        return VAR3;
    while (VAR3 == 0)
    {
        if (!(VAR4 = FUN5(VAR2, &VAR2->VAR12)))
        {
            VAR3 = FUN6(VAR13);
            break;
        }
        else if (VAR2->VAR12 > 0)
        {
            VAR2->VAR12--;
            break;
        }
        switch (VAR4)
        {
        case VAR14:
        {
            uint64_t VAR15;
            if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                break;
            VAR6->VAR15 = VAR15;
            break;
        }
        case VAR16:
        {
            uint64_t VAR15;
            if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                break;
            VAR6->VAR17 = VAR15;
            break;
        }
        case VAR18:
        {
            uint64_t VAR15;
            if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                break;
            if (VAR6->VAR19 && VAR6->VAR19 != VAR15)
            {
                FUN2(VAR2->VAR7, VAR20, "");
                break;
            }
            VAR6->VAR19 = VAR15;
            switch (VAR6->VAR19)
            {
            case VAR21:
            case VAR22:
            case VAR23:
                break;
            case VAR24:
            case VAR25:
            case VAR26:
            default:
                FUN2(VAR2->VAR7, VAR20, "", VAR6->VAR19);
                VAR6->VAR19 = VAR27;
                break;
            }
            VAR2->VAR28[VAR2->VAR10 - 1] = VAR6;
            break;
        }
        case VAR29:
        {
            VAR30 *VAR31;
            if (!VAR6->VAR19)
                VAR6->VAR19 = VAR21;
            if (VAR6->VAR19 != VAR21)
            {
                FUN2(VAR2->VAR7, VAR20, "");
                VAR3 = VAR32;
                break;
            }
            else if ((VAR3 = FUN4(VAR2, &VAR4)) < 0)
                break;
            VAR31 = (VAR30 *)VAR6;
            while (VAR3 == 0)
            {
                if (!(VAR4 = FUN5(VAR2, &VAR2->VAR12)))
                {
                    VAR3 = FUN6(VAR13);
                    break;
                }
                else if (VAR2->VAR12 > 0)
                {
                    VAR2->VAR12--;
                    break;
                }
                switch (VAR4)
                {
                case VAR33:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    VAR6->VAR34 = VAR15;
                    break;
                }
                case VAR35:
                {
                    double VAR15;
                    if ((VAR3 = FUN8(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    if (!VAR6->VAR34)
                        VAR6->VAR34 = 1000000000 / VAR15;
                    break;
                }
                case VAR36:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    VAR31->VAR37 = VAR15;
                    break;
                }
                case VAR38:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    VAR31->VAR39 = VAR15;
                    break;
                }
                case VAR40:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    VAR31->VAR41 = VAR15;
                    break;
                }
                case VAR42:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    VAR31->VAR43 = VAR15;
                    break;
                }
                case VAR44:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    if (VAR15)
                        VAR6->VAR45 |= VAR46;
                    else
                        VAR6->VAR45 &= ~VAR46;
                    break;
                }
                case VAR47:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    if (VAR15 != VAR48 && VAR15 != VAR49 && VAR15 != VAR50 && VAR15 != VAR51)
                    {
                        FUN2(VAR2->VAR7, VAR20, "", (VAR52)VAR15);
                        break;
                    }
                    VAR31->VAR53 = VAR15;
                    break;
                }
                case VAR54:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    if (VAR15 != VAR55 && VAR15 != VAR56 && VAR15 != VAR57)
                    {
                        FUN2(VAR2->VAR7, VAR20, "", (VAR52)VAR15);
                        break;
                    }
                    VAR31->VAR58 = VAR15;
                    break;
                }
                case VAR59:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    VAR31->VAR60 = VAR15;
                    break;
                }
                default:
                    FUN2(VAR2->VAR7, VAR20, ""
                                                       "",
                           VAR4);
                case VAR61:
                    VAR3 = FUN9(VAR2);
                    break;
                }
                if (VAR2->VAR12)
                {
                    VAR2->VAR12--;
                    break;
                }
            }
            break;
        }
        case VAR62:
        {
            VAR63 *VAR64;
            if (!VAR6->VAR19)
                VAR6->VAR19 = VAR22;
            if (VAR6->VAR19 != VAR22)
            {
                FUN2(VAR2->VAR7, VAR20, "");
                VAR3 = VAR32;
                break;
            }
            else if ((VAR3 = FUN4(VAR2, &VAR4)) < 0)
                break;
            VAR64 = (VAR63 *)VAR6;
            VAR64->VAR65 = 1;
            VAR64->VAR66 = 8000;
            while (VAR3 == 0)
            {
                if (!(VAR4 = FUN5(VAR2, &VAR2->VAR12)))
                {
                    VAR3 = FUN6(VAR13);
                    break;
                }
                else if (VAR2->VAR12 > 0)
                {
                    VAR2->VAR12--;
                    break;
                }
                switch (VAR4)
                {
                case VAR67:
                {
                    double VAR15;
                    if ((VAR3 = FUN8(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    VAR64->VAR68 = VAR64->VAR66 = VAR15;
                    break;
                }
                case VAR69:
                {
                    double VAR15;
                    if ((VAR3 = FUN8(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    VAR64->VAR66 = VAR15;
                    break;
                }
                case VAR70:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    VAR64->VAR71 = VAR15;
                    break;
                }
                case VAR72:
                {
                    uint64_t VAR15;
                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                        break;
                    VAR64->VAR65 = VAR15;
                    break;
                }
                default:
                    FUN2(VAR2->VAR7, VAR20, ""
                                                       "",
                           VAR4);
                case VAR61:
                    VAR3 = FUN9(VAR2);
                    break;
                }
                if (VAR2->VAR12)
                {
                    VAR2->VAR12--;
                    break;
                }
            }
            break;
        }
        case VAR73:
        {
            char *VAR74;
            if ((VAR3 = FUN10(VAR2, &VAR4, &VAR74)) < 0)
                break;
            VAR6->VAR75 = VAR74;
            break;
        }
        case VAR76:
        {
            VAR77 *VAR78;
            int VAR79;
            if ((VAR3 = FUN11(VAR2, &VAR4, &VAR78, &VAR79) < 0))
                break;
            VAR6->VAR80 = VAR78;
            VAR6->VAR81 = VAR79;
            break;
        }
        case VAR82:
        {
            char *VAR74;
            if ((VAR3 = FUN12(VAR2, &VAR4, &VAR74)) < 0)
                break;
            VAR6->VAR83 = VAR74;
            break;
        }
        case VAR84:
        {
            char *VAR74;
            if ((VAR3 = FUN12(VAR2, &VAR4, &VAR74)) < 0)
                break;
            VAR6->VAR85 = VAR74;
            break;
        }
        case VAR86:
        {
            char *VAR74, *VAR87;
            if ((VAR3 = FUN12(VAR2, &VAR4, &VAR74)) < 0)
                break;
            if ((VAR87 = strchr(VAR74, '')))
                *VAR87 = '';
            if (strlen(VAR74) == 3)
                strcpy(VAR6->VAR11, VAR74);
            FUN13(VAR74);
            break;
        }
        case VAR88:
        {
            uint64_t VAR15;
            if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                break;
            if (VAR15)
                VAR6->VAR45 |= VAR89;
            else
                VAR6->VAR45 &= ~VAR89;
            break;
        }
        case VAR90:
        {
            uint64_t VAR15;
            if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                break;
            if (VAR15)
                VAR6->VAR45 |= VAR91;
            else
                VAR6->VAR45 &= ~VAR91;
            break;
        }
        case VAR92:
        {
            uint64_t VAR15;
            if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                break;
            if (VAR15)
                VAR6->VAR45 |= VAR93;
            else
                VAR6->VAR45 &= ~VAR93;
            break;
        }
        case VAR33:
        {
            uint64_t VAR15;
            if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                break;
            VAR6->VAR34 = VAR15;
            break;
        }
        case VAR94:
        {
            if ((VAR3 = FUN4(VAR2, &VAR4)) < 0)
                break;
            while (VAR3 == 0)
            {
                if (!(VAR4 = FUN5(VAR2, &VAR2->VAR12)))
                {
                    VAR3 = FUN6(VAR13);
                    break;
                }
                else if (VAR2->VAR12 > 0)
                {
                    VAR2->VAR12--;
                    break;
                }
                switch (VAR4)
                {
                case VAR95:
                {
                    int VAR96 = 1;
                    if ((VAR3 = FUN4(VAR2, &VAR4)) < 0)
                        break;
                    while (VAR3 == 0)
                    {
                        if (!(VAR4 = FUN5(VAR2, &VAR2->VAR12)))
                        {
                            VAR3 = FUN6(VAR13);
                            break;
                        }
                        else if (VAR2->VAR12 > 0)
                        {
                            VAR2->VAR12--;
                            break;
                        }
                        switch (VAR4)
                        {
                        case VAR97:
                        {
                            uint64_t VAR15;
                            if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                                break;
                            VAR96 = VAR15;
                            break;
                        }
                        case VAR98:
                        {
                            uint64_t VAR15;
                            if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                                break;
                            if (VAR15)
                                FUN2(VAR2->VAR7, VAR99, "");
                            break;
                        }
                        case VAR100:
                        {
                            if ((VAR3 = FUN4(VAR2, &VAR4)) < 0)
                                break;
                            while (VAR3 == 0)
                            {
                                if (!(VAR4 = FUN5(VAR2, &VAR2->VAR12)))
                                {
                                    VAR3 = FUN6(VAR13);
                                    break;
                                }
                                else if (VAR2->VAR12 > 0)
                                {
                                    VAR2->VAR12--;
                                    break;
                                }
                                switch (VAR4)
                                {
                                case VAR101:
                                {
                                    uint64_t VAR15;
                                    if ((VAR3 = FUN7(VAR2, &VAR4, &VAR15)) < 0)
                                        break;
                                    if (VAR15 != VAR102 && VAR15 != VAR103 && VAR15 != VAR104 && VAR15 != VAR105)
                                        FUN2(VAR2->VAR7, VAR99, "");
                                    VAR6->VAR106 = VAR15;
                                    break;
                                }
                                case VAR107:
                                {
                                    VAR77 *VAR78;
                                    int VAR79;
                                    if ((VAR3 = FUN11(VAR2, &VAR4, &VAR78, &VAR79) < 0))
                                        break;
                                    VAR6->VAR108 = VAR78;
                                    VAR6->VAR109 = VAR79;
                                    break;
                                }
                                default:
                                    FUN2(VAR2->VAR7, VAR20, ""
                                                                       "",
                                           VAR4);
                                case VAR61:
                                    VAR3 = FUN9(VAR2);
                                    break;
                                }
                                if (VAR2->VAR12)
                                {
                                    VAR2->VAR12--;
                                    break;
                                }
                            }
                            break;
                        }
                        default:
                            FUN2(VAR2->VAR7, VAR20, ""
                                                               "",
                                   VAR4);
                        case VAR61:
                            VAR3 = FUN9(VAR2);
                            break;
                        }
                        if (VAR2->VAR12)
                        {
                            VAR2->VAR12--;
                            break;
                        }
                    }
                    VAR6->VAR96 = VAR96;
                    break;
                }
                default:
                    FUN2(VAR2->VAR7, VAR20, ""
                                                       "",
                           VAR4);
                case VAR61:
                    VAR3 = FUN9(VAR2);
                    break;
                }
                if (VAR2->VAR12)
                {
                    VAR2->VAR12--;
                    break;
                }
            }
            break;
        }
        case VAR110:
        {
            double VAR15;
            if ((VAR3 = FUN8(VAR2, &VAR4, &VAR15)) < 0)
                break;
            VAR6->VAR111 = VAR15;
            break;
        }
        default:
            FUN2(VAR2->VAR7, VAR20, "", VAR4);
        case VAR61:
        case VAR112:
        case VAR113:
        case VAR114:
        case VAR115:
        case VAR116:
        case VAR117:
            VAR3 = FUN9(VAR2);
            break;
        }
        if (VAR2->VAR12)
        {
            VAR2->VAR12--;
            break;
        }
    }
    return VAR3;
}