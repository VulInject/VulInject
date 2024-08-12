static int FUN1(VAR1 *VAR2)
{
    unsigned VAR3, VAR4, VAR5, VAR6, VAR7 = 0;
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13;
    VAR14 *VAR15;
    double *VAR16;
    VAR3 = FUN2(&VAR2->VAR17, VAR2->VAR18);
    VAR4 = FUN2(&VAR2->VAR17, VAR2->VAR18);
    VAR5 = FUN3(&VAR2->VAR17, VAR2->VAR18);
    VAR6 = FUN3(&VAR2->VAR17, VAR2->VAR18);
    VAR12 = FUN4(&VAR2->VAR17);
    if (VAR4 == 0 || VAR4 >= FUN5(VAR19))
    {
        FUN6(VAR2->VAR20, VAR21, "", VAR4);
        return 0;
    }
    if (VAR5 == 1)
    {
        switch (VAR4)
        {
        case VAR22:
        case VAR23:
            FUN7(&VAR2->VAR17, -4, VAR24);
            VAR7 = FUN8(&VAR2->VAR17, VAR4, VAR2->VAR18);
            break;
        case VAR25:
            VAR7 = VAR6;
            break;
        case VAR26:
            if (VAR5 <= 4)
            {
                FUN7(&VAR2->VAR17, -4, VAR24);
                break;
            }
        default:
            VAR7 = VAR27;
            FUN7(&VAR2->VAR17, VAR6, VAR28);
        }
    }
    else
    {
        if (VAR5 <= 4 && VAR19[VAR4] * VAR5 <= 4)
        {
            FUN7(&VAR2->VAR17, -4, VAR24);
        }
        else
        {
            FUN7(&VAR2->VAR17, VAR6, VAR28);
        }
    }
    switch (VAR3)
    {
    case VAR29:
        VAR2->VAR30 = VAR7;
        break;
    case VAR31:
        VAR2->VAR32 = VAR7;
        break;
    case VAR33:
        VAR2->VAR34 = VAR5;
        if (VAR5 > 4)
        {
            FUN6(VAR2->VAR20, VAR35, "", VAR2->VAR36, VAR5);
            return VAR37;
        }
        if (VAR5 == 1)
            VAR2->VAR36 = VAR7;
        else
        {
            switch (VAR4)
            {
            case VAR22:
                VAR2->VAR36 = (VAR6 & 0xFF) + ((VAR6 >> 8) & 0xFF) + ((VAR6 >> 16) & 0xFF) + ((VAR6 >> 24) & 0xFF);
                break;
            case VAR23:
            case VAR25:
                VAR2->VAR36 = 0;
                if (FUN9(&VAR2->VAR17) < VAR19[VAR4] * VAR5)
                    return VAR37;
                for (VAR8 = 0; VAR8 < VAR5; VAR8++)
                    VAR2->VAR36 += FUN8(&VAR2->VAR17, VAR4, VAR2->VAR18);
                break;
            default:
                VAR2->VAR36 = -1;
            }
        }
        break;
    case VAR38:
        if (VAR5 != 1)
        {
            FUN6(VAR2->VAR20, VAR35, "");
            return VAR37;
        }
        if (VAR2->VAR34 == 1)
            VAR2->VAR36 *= VAR7;
        VAR2->VAR34 = VAR7;
        break;
    case VAR39:
        VAR2->VAR40 = VAR7;
        VAR2->VAR41 = 0;
        switch (VAR2->VAR40)
        {
        case VAR42:
        case VAR43:
        case VAR44:
        case VAR45:
            break;
        case VAR46:
        case VAR47:
            VAR2->VAR48 = 0;
            break;
        case VAR49:
        case VAR50:
            break;
            FUN6(VAR2->VAR20, VAR35, "");
            return FUN10(VAR51);
        case VAR52:
        case VAR53:
            FUN6(VAR2->VAR20, VAR35, "");
            return VAR54;
        default:
            FUN6(VAR2->VAR20, VAR35, "", VAR2->VAR40);
            return VAR37;
        }
        break;
    case VAR55:
        if (VAR4 == VAR25 && VAR7 == VAR27)
            VAR7 = VAR2->VAR32;
        if (VAR7 < 1)
        {
            FUN6(VAR2->VAR20, VAR35, "");
            return VAR37;
        }
        VAR2->VAR56 = VAR7;
        break;
    case VAR57:
        if (VAR5 == 1)
        {
            VAR2->VAR58 = 0;
            VAR2->VAR59 = VAR7;
        }
        else
            VAR2->VAR58 = VAR6;
        VAR2->VAR60 = VAR5;
        if (VAR2->VAR60 == 1)
            VAR2->VAR56 = VAR2->VAR32;
        VAR2->VAR61 = VAR4;
        if (VAR2->VAR58 > FUN11(&VAR2->VAR17))
        {
            FUN6(VAR2->VAR20, VAR35, "");
            return VAR37;
        }
        break;
    case VAR62:
        if (VAR5 == 1)
        {
            VAR2->VAR63 = 0;
            VAR2->VAR64 = VAR7;
            VAR2->VAR60 = 1;
        }
        else
        {
            VAR2->VAR63 = VAR6;
        }
        VAR2->VAR60 = VAR5;
        VAR2->VAR65 = VAR4;
        if (VAR2->VAR63 > FUN11(&VAR2->VAR17))
        {
            FUN6(VAR2->VAR20, VAR35, "");
            return VAR37;
        }
        break;
    case VAR66:
    case VAR67:
    case VAR68:
    case VAR69:
        FUN6(VAR2->VAR20, VAR35, "");
        return VAR54;
        break;
    case VAR70:
        VAR2->VAR41 = VAR7;
        break;
    case VAR71:
        switch (VAR7)
        {
        case 0:
            VAR2->VAR72 = 1;
            break;
        case 1:
            VAR2->VAR72 = 0;
            break;
        case 2:
        case 3:
            break;
        default:
            FUN6(VAR2->VAR20, VAR35, "", VAR7);
            return VAR37;
        }
        break;
    case VAR73:
        if (VAR7 < 1 || VAR7 > 2)
        {
            FUN6(VAR2->VAR20, VAR35, "", VAR7);
            VAR7 = 1;
        }
        VAR2->VAR74 = VAR7 - 1;
        break;
    case VAR75:
        VAR15 = (VAR14 *)VAR2->VAR76;
        VAR6 = VAR19[VAR4];
        if (VAR5 / 3 > 256 || FUN9(&VAR2->VAR17) < VAR5 / 3 * VAR6 * 3)
            return VAR37;
        VAR6 = (VAR19[VAR4] - 1) << 3;
        for (VAR10 = 2; VAR10 >= 0; VAR10--)
        {
            for (VAR8 = 0; VAR8 < VAR5 / 3; VAR8++)
            {
                if (VAR10 == 2)
                    VAR15[VAR8] = 0xFFU << 24;
                VAR9 = (FUN8(&VAR2->VAR17, VAR4, VAR2->VAR18) >> VAR6) << (VAR10 * 8);
                VAR15[VAR8] |= VAR9;
            }
        }
        VAR2->VAR77 = 1;
        break;
    case VAR78:
        if (VAR7 == 2)
        {
            FUN6(VAR2->VAR20, VAR35, "");
            return VAR54;
        }
        break;
    case VAR79:
        if (VAR2->VAR40 == VAR46)
            VAR2->VAR48 = VAR7;
        break;
    case VAR80:
        if (VAR2->VAR40 == VAR47)
            VAR2->VAR48 = VAR7;
        break;
        if ((VAR13 = FUN12(VAR5, VAR4, VAR81, VAR82, VAR2)) < 0)
        {
            FUN6(VAR2->VAR20, VAR35, "");
            return VAR13;
        }
    case VAR83:
        FUN13(VAR5, "", NULL);
        break;
    case VAR84:
        FUN13(VAR5, "", NULL);
        break;
    case VAR85:
        FUN13(VAR5, "", NULL);
        break;
    case VAR86:
        FUN13(1, "", NULL);
        FUN13(2, "", "");
        VAR2->VAR87 = FUN2(&VAR2->VAR17, VAR2->VAR18);
        if (VAR2->VAR87 > VAR5 / 4 - 1)
        {
            VAR2->VAR87 = VAR5 / 4 - 1;
            FUN6(VAR2->VAR20, VAR88, "");
        }
        if (FUN9(&VAR2->VAR17) < VAR2->VAR87 * sizeof(VAR89) * 4)
        {
            VAR2->VAR87 = 0;
            return -1;
        }
        VAR2->VAR90 = FUN14(sizeof(VAR91) * VAR2->VAR87);
        if (!VAR2->VAR90)
        {
            FUN6(VAR2->VAR20, VAR35, "");
            VAR2->VAR87 = 0;
            return FUN10(VAR92);
        }
        for (VAR8 = 0; VAR8 < VAR2->VAR87; VAR8++)
        {
            VAR2->VAR90[VAR8].VAR93 = FUN2(&VAR2->VAR17, VAR2->VAR18);
            VAR2->VAR90[VAR8].VAR4 = FUN2(&VAR2->VAR17, VAR2->VAR18);
            VAR2->VAR90[VAR8].VAR5 = FUN2(&VAR2->VAR17, VAR2->VAR18);
            if (!VAR2->VAR90[VAR8].VAR4)
                VAR2->VAR90[VAR8].VAR94 = FUN15(VAR2->VAR90[VAR8].VAR93, FUN2(&VAR2->VAR17, VAR2->VAR18));
            else
                VAR2->VAR90[VAR8].VAR95 = FUN2(&VAR2->VAR17, VAR2->VAR18);
        }
        break;
    case VAR96:
        if (VAR5 >= VAR97 / sizeof(VAR98))
            return VAR37;
        if (FUN9(&VAR2->VAR17) < VAR5 * sizeof(VAR98))
            return VAR37;
        VAR16 = FUN16(VAR5 * sizeof(double));
        if (!VAR16)
        {
            FUN6(VAR2->VAR20, VAR35, "");
            return FUN10(VAR92);
        }
        for (VAR8 = 0; VAR8 < VAR5; VAR8++)
            VAR16[VAR8] = FUN17(&VAR2->VAR17, VAR2->VAR18);
        for (VAR8 = 0; VAR8 < VAR2->VAR87; VAR8++)
        {
            if (VAR2->VAR90[VAR8].VAR4 == VAR96)
            {
                if (VAR2->VAR90[VAR8].VAR5 == 0 || VAR2->VAR90[VAR8].VAR95 + VAR2->VAR90[VAR8].VAR5 > VAR5)
                {
                    FUN6(VAR2->VAR20, VAR88, "", VAR2->VAR90[VAR8].VAR93);
                }
                else
                {
                    char *VAR99 = FUN18(&VAR16[VAR2->VAR90[VAR8].VAR95], VAR2->VAR90[VAR8].VAR5, "");
                    if (!VAR99)
                    {
                        FUN6(VAR2->VAR20, VAR35, "");
                        FUN19(&VAR16);
                        return FUN10(VAR92);
                    }
                    VAR2->VAR90[VAR8].VAR94 = VAR99;
                }
            }
        }
        FUN19(&VAR16);
        break;
    case VAR100:
        VAR11 = FUN4(&VAR2->VAR17);
        for (VAR8 = 0; VAR8 < VAR2->VAR87; VAR8++)
        {
            if (VAR2->VAR90[VAR8].VAR4 == VAR100)
            {
                if (VAR2->VAR90[VAR8].VAR5 == 0 || VAR2->VAR90[VAR8].VAR95 + VAR2->VAR90[VAR8].VAR5 > VAR5)
                {
                    FUN6(VAR2->VAR20, VAR88, "", VAR2->VAR90[VAR8].VAR93);
                }
                else
                {
                    char *VAR99;
                    FUN7(&VAR2->VAR17, VAR11 + VAR2->VAR90[VAR8].VAR95, VAR28);
                    if (FUN9(&VAR2->VAR17) < VAR2->VAR90[VAR8].VAR5)
                        return VAR37;
                    VAR99 = FUN16(VAR2->VAR90[VAR8].VAR5);
                    if (!VAR99)
                    {
                        FUN6(VAR2->VAR20, VAR35, "");
                        return FUN10(VAR92);
                    }
                    FUN20(&VAR2->VAR17, VAR99, VAR2->VAR90[VAR8].VAR5);
                    VAR99[VAR2->VAR90[VAR8].VAR5 - 1] = '';
                    VAR2->VAR90[VAR8].VAR94 = VAR99;
                }
            }
        }
        break;
    case VAR101:
        FUN13(VAR5, "", NULL);
        break;
    case VAR102:
        FUN13(VAR5, "", NULL);
        break;
    case VAR103:
        FUN13(VAR5, "", NULL);
        break;
    case VAR104:
        FUN13(VAR5, "", NULL);
        break;
    case VAR105:
        FUN13(VAR5, "", NULL);
        break;
    case VAR106:
        FUN13(VAR5, "", NULL);
        break;
    case VAR107:
        FUN13(VAR5, "", NULL);
        break;
    case VAR108:
        FUN13(VAR5, "", NULL);
        break;
    case VAR109:
        FUN13(VAR5, "", NULL);
        break;
    case VAR110:
        FUN13(VAR5, "", "");
        break;
    case VAR111:
        FUN13(VAR5, "", NULL);
        break;
    default:
        FUN6(VAR2->VAR20, VAR21, "", VAR3, VAR3);
    }
    FUN7(&VAR2->VAR17, VAR12, VAR28);
    return 0;
}