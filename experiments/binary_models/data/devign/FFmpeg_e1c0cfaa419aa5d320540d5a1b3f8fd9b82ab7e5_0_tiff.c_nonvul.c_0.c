static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned VAR5, VAR6, VAR7, VAR8, VAR9 = 0, VAR10 = 0;
    int VAR11, VAR12;
    int VAR13;
    int VAR14;
    double *VAR15;
    VAR14 = FUN2(&VAR2->VAR16, VAR2->VAR17, &VAR5, &VAR6, &VAR7, &VAR12);
    if (VAR14 < 0)
    {
        goto VAR18;
    }
    VAR8 = FUN3(&VAR2->VAR16);
    if (VAR7 == 1)
    {
        switch (VAR6)
        {
        case VAR19:
        case VAR20:
        case VAR21:
            VAR9 = FUN4(&VAR2->VAR16, VAR6, VAR2->VAR17);
            break;
        case VAR22:
            VAR9 = FUN4(&VAR2->VAR16, VAR21, VAR2->VAR17);
            VAR10 = FUN4(&VAR2->VAR16, VAR21, VAR2->VAR17);
            break;
        case VAR23:
            if (VAR7 <= 4)
            {
                break;
            }
        default:
            VAR9 = VAR24;
        }
    }
    switch (VAR5)
    {
    case VAR25:
        VAR2->VAR26 = VAR9;
        break;
    case VAR27:
        VAR2->VAR28 = VAR9;
        break;
    case VAR29:
        if (VAR7 > 4U)
        {
            FUN5(VAR2->VAR30, VAR31, "", VAR9, VAR7);
            return VAR32;
        }
        VAR2->VAR33 = VAR7;
        if (VAR7 == 1)
            VAR2->VAR34 = VAR9;
        else
        {
            switch (VAR6)
            {
            case VAR19:
            case VAR20:
            case VAR21:
                VAR2->VAR34 = 0;
                if (FUN6(&VAR2->VAR16) < VAR35[VAR6] * VAR7)
                    return VAR32;
                for (VAR11 = 0; VAR11 < VAR7; VAR11++)
                    VAR2->VAR34 += FUN4(&VAR2->VAR16, VAR6, VAR2->VAR17);
                break;
            default:
                VAR2->VAR34 = -1;
            }
        }
        if (VAR2->VAR34 > 64U)
        {
            FUN5(VAR2->VAR30, VAR31, "", VAR2->VAR34, VAR7);
            VAR2->VAR34 = 0;
            return VAR32;
        }
        break;
    case VAR36:
        if (VAR7 != 1)
        {
            FUN5(VAR2->VAR30, VAR31, "");
            return VAR32;
        }
        if (VAR9 > 4U)
        {
            FUN5(VAR2->VAR30, VAR31, "", VAR9);
            return VAR32;
        }
        if (VAR2->VAR33 == 1)
            VAR2->VAR34 *= VAR9;
        VAR2->VAR33 = VAR9;
        break;
    case VAR37:
        VAR2->VAR38 = VAR9;
        VAR2->VAR39 = 0;
        switch (VAR2->VAR38)
        {
        case VAR40:
        case VAR41:
        case VAR42:
        case VAR43:
            break;
        case VAR44:
        case VAR45:
            VAR2->VAR46 = 0;
            break;
        case VAR47:
        case VAR48:
            break;
            FUN5(VAR2->VAR30, VAR31, "");
            return FUN7(VAR49);
        case VAR50:
        case VAR51:
            FUN8(VAR2->VAR30, "");
            return VAR52;
        case VAR53:
            break;
            FUN5(VAR2->VAR30, VAR31, "");
            return FUN7(VAR49);
        default:
            FUN5(VAR2->VAR30, VAR31, "", VAR2->VAR38);
            return VAR32;
        }
        break;
    case VAR54:
        if (!VAR9 || (VAR6 == VAR21 && VAR9 == VAR24))
            VAR9 = VAR2->VAR28;
        VAR2->VAR55 = FUN9(VAR9, VAR2->VAR28);
        break;
    case VAR56:
        if (VAR7 == 1)
        {
            VAR2->VAR57 = 0;
            VAR2->VAR58 = VAR9;
        }
        else
            VAR2->VAR57 = VAR8;
        VAR2->VAR59 = VAR7;
        if (VAR2->VAR59 == 1)
            VAR2->VAR55 = VAR2->VAR28;
        VAR2->VAR60 = VAR6;
        break;
    case VAR61:
        if (VAR7 == 1)
        {
            VAR2->VAR62 = 0;
            VAR2->VAR63 = VAR9;
            VAR2->VAR59 = 1;
        }
        else
        {
            VAR2->VAR62 = VAR8;
        }
        VAR2->VAR59 = VAR7;
        VAR2->VAR64 = VAR6;
        break;
    case VAR65:
    case VAR66:
        FUN10(VAR2, VAR5, VAR9, VAR10);
        break;
    case VAR67:
    case VAR68:
    case VAR69:
    case VAR70:
        FUN5(VAR2->VAR30, VAR31, "");
        return VAR52;
        break;
    case VAR71:
        VAR2->VAR39 = VAR9;
        break;
    case VAR72:
        switch (VAR9)
        {
        case VAR73:
        case VAR74:
        case VAR75:
        case VAR76:
        case VAR77:
            VAR2->VAR78 = VAR9;
            break;
        case VAR79:
        case VAR80:
        case VAR81:
        case VAR82:
        case VAR83:
        case VAR84:
        case VAR85:
        case VAR86:
        case VAR87:
            FUN8(VAR2->VAR30, "", VAR9);
            return VAR52;
        default:
            FUN5(VAR2->VAR30, VAR31, ""
                                           "",
                   VAR9);
            return VAR32;
        }
        break;
    case VAR88:
        if (VAR9 < 1 || VAR9 > 2)
        {
            FUN5(VAR2->VAR30, VAR31, "", VAR9);
            VAR9 = 1;
        }
        VAR2->VAR89 = VAR9 - 1;
        break;
    case VAR90:
    {
        GetByteContext VAR91[3];
        VAR8 = VAR35[VAR6];
        if (VAR7 / 3 > 256 || FUN6(&VAR2->VAR16) < VAR7 / 3 * VAR8 * 3)
            return VAR32;
        VAR91[0] = VAR91[1] = VAR91[2] = VAR2->VAR16;
        FUN11(&VAR91[1], VAR7 / 3 * VAR8);
        FUN11(&VAR91[2], VAR7 / 3 * VAR8 * 2);
        VAR8 = (VAR35[VAR6] - 1) << 3;
        for (VAR11 = 0; VAR11 < VAR7 / 3; VAR11++)
        {
            uint32_t VAR92 = 0xFF000000;
            VAR92 |= (FUN4(&VAR91[0], VAR6, VAR2->VAR17) >> VAR8) << 16;
            VAR92 |= (FUN4(&VAR91[1], VAR6, VAR2->VAR17) >> VAR8) << 8;
            VAR92 |= FUN4(&VAR91[2], VAR6, VAR2->VAR17) >> VAR8;
            VAR2->VAR93[VAR11] = VAR92;
        }
        VAR2->VAR94 = 1;
        break;
    }
    case VAR95:
        VAR2->VAR96 = VAR9 == 2;
        break;
    case VAR97:
        if (VAR7 != 2)
        {
            FUN5(VAR2->VAR30, VAR31, "");
            return VAR32;
        }
        for (VAR11 = 0; VAR11 < VAR7; VAR11++)
            VAR2->VAR98[VAR11] = FUN4(&VAR2->VAR16, VAR6, VAR2->VAR17);
        break;
    case VAR99:
        if (VAR2->VAR38 == VAR44)
            VAR2->VAR46 = VAR9;
        break;
    case VAR100:
        if (VAR2->VAR38 == VAR45)
            VAR2->VAR46 = VAR9;
        break;
        if ((VAR14 = FUN12(VAR7, VAR6, VAR101, VAR102, VAR2, VAR4)) < 0)
        {
            FUN5(VAR2->VAR30, VAR31, "");
            goto VAR18;
        }
    case VAR103:
        FUN13(VAR7, "", NULL);
        break;
    case VAR104:
        FUN13(VAR7, "", NULL);
        break;
    case VAR105:
        FUN13(VAR7, "", NULL);
        break;
    case VAR106:
        FUN13(1, "", NULL);
        FUN13(2, "", "");
        VAR2->VAR107 = FUN14(&VAR2->VAR16, VAR2->VAR17);
        if (VAR2->VAR107 > VAR7 / 4 - 1)
        {
            VAR2->VAR107 = VAR7 / 4 - 1;
            FUN5(VAR2->VAR30, VAR108, "");
        }
        if (FUN6(&VAR2->VAR16) < VAR2->VAR107 * sizeof(VAR109) * 4)
        {
            VAR2->VAR107 = 0;
            return -1;
        }
        VAR2->VAR110 = FUN15(VAR2->VAR107, sizeof(VAR111));
        if (!VAR2->VAR110)
        {
            FUN5(VAR2->VAR30, VAR31, "");
            VAR2->VAR107 = 0;
            goto VAR18;
        }
        for (VAR11 = 0; VAR11 < VAR2->VAR107; VAR11++)
        {
            VAR2->VAR110[VAR11].VAR112 = FUN14(&VAR2->VAR16, VAR2->VAR17);
            VAR2->VAR110[VAR11].VAR6 = FUN14(&VAR2->VAR16, VAR2->VAR17);
            VAR2->VAR110[VAR11].VAR7 = FUN14(&VAR2->VAR16, VAR2->VAR17);
            if (!VAR2->VAR110[VAR11].VAR6)
                VAR2->VAR110[VAR11].VAR113 = FUN16(VAR2->VAR110[VAR11].VAR112, FUN14(&VAR2->VAR16, VAR2->VAR17));
            else
                VAR2->VAR110[VAR11].VAR114 = FUN14(&VAR2->VAR16, VAR2->VAR17);
        }
        break;
    case VAR115:
        if (VAR7 >= VAR116 / sizeof(VAR117))
            return VAR32;
        if (FUN6(&VAR2->VAR16) < VAR7 * sizeof(VAR117))
            return VAR32;
        VAR15 = FUN17(VAR7, sizeof(double));
        if (!VAR15)
        {
            FUN5(VAR2->VAR30, VAR31, "");
            goto VAR18;
        }
        for (VAR11 = 0; VAR11 < VAR7; VAR11++)
            VAR15[VAR11] = FUN18(&VAR2->VAR16, VAR2->VAR17);
        for (VAR11 = 0; VAR11 < VAR2->VAR107; VAR11++)
        {
            if (VAR2->VAR110[VAR11].VAR6 == VAR115)
            {
                if (VAR2->VAR110[VAR11].VAR7 == 0 || VAR2->VAR110[VAR11].VAR114 + VAR2->VAR110[VAR11].VAR7 > VAR7)
                {
                    FUN5(VAR2->VAR30, VAR108, "", VAR2->VAR110[VAR11].VAR112);
                }
                else
                {
                    char *VAR118 = FUN19(&VAR15[VAR2->VAR110[VAR11].VAR114], VAR2->VAR110[VAR11].VAR7, "");
                    if (!VAR118)
                    {
                        FUN5(VAR2->VAR30, VAR31, "");
                        FUN20(&VAR15);
                        return FUN7(VAR119);
                    }
                    VAR2->VAR110[VAR11].VAR113 = VAR118;
                }
            }
        }
        FUN20(&VAR15);
        break;
    case VAR120:
        VAR13 = FUN3(&VAR2->VAR16);
        for (VAR11 = 0; VAR11 < VAR2->VAR107; VAR11++)
        {
            if (VAR2->VAR110[VAR11].VAR6 == VAR120)
            {
                if (VAR2->VAR110[VAR11].VAR7 == 0 || VAR2->VAR110[VAR11].VAR114 + VAR2->VAR110[VAR11].VAR7 > VAR7)
                {
                    FUN5(VAR2->VAR30, VAR108, "", VAR2->VAR110[VAR11].VAR112);
                }
                else
                {
                    char *VAR118;
                    FUN21(&VAR2->VAR16, VAR13 + VAR2->VAR110[VAR11].VAR114, VAR121);
                    if (FUN6(&VAR2->VAR16) < VAR2->VAR110[VAR11].VAR7)
                        return VAR32;
                    VAR118 = FUN22(VAR2->VAR110[VAR11].VAR7);
                    if (!VAR118)
                    {
                        FUN5(VAR2->VAR30, VAR31, "");
                        return FUN7(VAR119);
                    }
                    FUN23(&VAR2->VAR16, VAR118, VAR2->VAR110[VAR11].VAR7);
                    VAR118[VAR2->VAR110[VAR11].VAR7 - 1] = '';
                    VAR2->VAR110[VAR11].VAR113 = VAR118;
                }
            }
        }
        break;
    case VAR122:
        FUN13(VAR7, "", NULL);
        break;
    case VAR123:
        FUN13(VAR7, "", NULL);
        break;
    case VAR124:
        FUN13(VAR7, "", NULL);
        break;
    case VAR125:
        FUN13(VAR7, "", NULL);
        break;
    case VAR126:
        FUN13(VAR7, "", NULL);
        break;
    case VAR127:
        FUN13(VAR7, "", NULL);
        break;
    case VAR128:
        FUN13(VAR7, "", NULL);
        break;
    case VAR129:
        FUN13(VAR7, "", NULL);
        break;
    case VAR130:
        FUN13(VAR7, "", NULL);
        break;
    case VAR131:
        FUN13(VAR7, "", "");
        break;
    case VAR132:
        FUN13(VAR7, "", NULL);
        break;
    default:
        if (VAR2->VAR30->VAR133 & VAR134)
        {
            FUN5(VAR2->VAR30, VAR31, "", VAR5, VAR5);
            return VAR32;
        }
    }
VAR18:
    FUN21(&VAR2->VAR16, VAR12, VAR121);
    return 0;
}