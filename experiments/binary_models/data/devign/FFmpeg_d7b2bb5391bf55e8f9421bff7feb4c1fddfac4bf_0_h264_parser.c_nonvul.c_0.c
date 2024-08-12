static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR5 *VAR11 = VAR6 + VAR7;
    H2645NAL VAR12 = {NULL};
    unsigned int VAR13;
    unsigned int VAR14;
    int VAR15 = -1, VAR16 = 0;
    int VAR17[2];
    int VAR18;
    VAR2->VAR19 = VAR20;
    VAR2->VAR21 = 0;
    VAR2->VAR22 = VAR23;
    FUN2(&VAR9->VAR24);
    if (!VAR7)
        return 0;
    for (;;)
    {
        const VAR25 *VAR26;
        int VAR27, VAR28;
        VAR6 = FUN3(VAR6, VAR11, &VAR15);
        if (VAR6 >= VAR11)
            break;
        --VAR6;
        VAR27 = VAR11 - VAR6;
        switch (VAR15 & 0x1f)
        {
        case VAR29:
        case VAR30:
            if ((VAR15 & 0x1f) == VAR30 || ((VAR15 >> 5) & 0x3) == 0)
            {
                if (VAR27 > 60)
                    VAR27 = 60;
            }
            else
            {
                if (VAR27 > 1000)
                    VAR27 = 1000;
            }
            break;
        }
        VAR28 = FUN4(VAR6, VAR27, &VAR12);
        if (VAR28 < 0)
            break;
        VAR18 = FUN5(&VAR12.VAR31, VAR12.VAR32, VAR12.VAR33 * 8);
        if (VAR18 < 0)
            goto VAR34;
        FUN6(&VAR12.VAR31);
        VAR12.VAR35 = FUN7(&VAR12.VAR31, 2);
        VAR12.VAR36 = FUN7(&VAR12.VAR31, 5);
        switch (VAR12.VAR36)
        {
        case VAR37:
            FUN8(&VAR12.VAR31, VAR4, &VAR9->VAR38);
            break;
        case VAR39:
            FUN9(&VAR12.VAR31, VAR4, &VAR9->VAR38, VAR12.VAR40);
            break;
        case VAR41:
            FUN10(&VAR9->VAR24, &VAR12.VAR31, &VAR9->VAR38, VAR4);
            break;
        case VAR30:
            VAR2->VAR21 = 1;
            VAR9->VAR42.VAR43 = 0;
            VAR9->VAR42.VAR44 = 0;
            VAR9->VAR42.VAR45 = VAR9->VAR42.VAR46 = 0;
        case VAR29:
            FUN11(&VAR12.VAR31);
            VAR14 = FUN12(&VAR12.VAR31);
            VAR2->VAR19 = VAR47[VAR14 % 5];
            if (VAR9->VAR24.VAR48.VAR49 >= 0)
            {
                VAR2->VAR21 = 1;
            }
            VAR13 = FUN11(&VAR12.VAR31);
            if (VAR13 >= VAR50)
            {
                FUN13(VAR4, VAR51, "", VAR13);
                goto VAR34;
            }
            if (!VAR9->VAR38.VAR52[VAR13])
            {
                FUN13(VAR4, VAR51, "", VAR13);
                goto VAR34;
            }
            VAR9->VAR38.VAR53 = (const VAR54 *)VAR9->VAR38.VAR52[VAR13]->VAR32;
            if (!VAR9->VAR38.VAR55[VAR9->VAR38.VAR53->VAR56])
            {
                FUN13(VAR4, VAR51, "", VAR9->VAR38.VAR53->VAR56);
                goto VAR34;
            }
            VAR9->VAR38.VAR26 = (VAR25 *)VAR9->VAR38.VAR55[VAR9->VAR38.VAR53->VAR56]->VAR32;
            VAR26 = VAR9->VAR38.VAR26;
            VAR9->VAR42.VAR57 = FUN7(&VAR12.VAR31, VAR26->VAR58);
            VAR2->VAR59 = 16 * VAR26->VAR60;
            VAR2->VAR61 = 16 * VAR26->VAR62;
            VAR2->VAR63 = VAR2->VAR59 - (VAR26->VAR64 + VAR26->VAR65);
            VAR2->VAR66 = VAR2->VAR61 - (VAR26->VAR67 + VAR26->VAR68);
            if (VAR2->VAR63 <= 0 || VAR2->VAR66 <= 0)
            {
                VAR2->VAR63 = VAR2->VAR59;
                VAR2->VAR66 = VAR2->VAR61;
            }
            switch (VAR26->VAR69)
            {
            case 9:
                if (VAR26->VAR70 == 3)
                    VAR2->VAR71 = VAR72;
                else if (VAR26->VAR70 == 2)
                    VAR2->VAR71 = VAR73;
                else
                    VAR2->VAR71 = VAR74;
                break;
            case 10:
                if (VAR26->VAR70 == 3)
                    VAR2->VAR71 = VAR75;
                else if (VAR26->VAR70 == 2)
                    VAR2->VAR71 = VAR76;
                else
                    VAR2->VAR71 = VAR77;
                break;
            case 8:
                if (VAR26->VAR70 == 3)
                    VAR2->VAR71 = VAR78;
                else if (VAR26->VAR70 == 2)
                    VAR2->VAR71 = VAR79;
                else
                    VAR2->VAR71 = VAR80;
                break;
            default:
                VAR2->VAR71 = VAR81;
            }
            VAR4->VAR82 = FUN14(VAR26);
            VAR4->VAR83 = VAR26->VAR84;
            if (VAR26->VAR85)
            {
                VAR9->VAR22 = VAR86;
            }
            else
            {
                if (FUN6(&VAR12.VAR31))
                {
                    VAR9->VAR22 = VAR87 + FUN6(&VAR12.VAR31);
                }
                else
                {
                    VAR9->VAR22 = VAR86;
                }
            }
            if (VAR12.VAR36 == VAR30)
                FUN11(&VAR12.VAR31);
            if (VAR26->VAR88 == 0)
            {
                VAR9->VAR42.VAR89 = FUN7(&VAR12.VAR31, VAR26->VAR90);
                if (VAR9->VAR38.VAR53->VAR91 == 1 && VAR9->VAR22 == VAR86)
                    VAR9->VAR42.VAR92 = FUN15(&VAR12.VAR31);
            }
            if (VAR26->VAR88 == 1 && !VAR26->VAR93)
            {
                VAR9->VAR42.VAR94[0] = FUN15(&VAR12.VAR31);
                if (VAR9->VAR38.VAR53->VAR91 == 1 && VAR9->VAR22 == VAR86)
                    VAR9->VAR42.VAR94[1] = FUN15(&VAR12.VAR31);
            }
            VAR17[0] = VAR17[1] = VAR95;
            FUN16(VAR17, &VAR2->VAR96, VAR26, &VAR9->VAR42, VAR9->VAR22, VAR12.VAR35);
            if (VAR12.VAR35 && VAR12.VAR36 != VAR30)
            {
                VAR16 = FUN17(VAR2, &VAR12.VAR31, VAR4);
                if (VAR16 < 0)
                    goto VAR34;
            }
            VAR9->VAR42.VAR43 = VAR16 ? 0 : VAR9->VAR42.VAR57;
            VAR9->VAR42.VAR44 = VAR16 ? 0 : VAR9->VAR42.VAR97;
            if (VAR12.VAR35 != 0)
            {
                if (!VAR16)
                {
                    VAR9->VAR42.VAR45 = VAR9->VAR42.VAR98;
                    VAR9->VAR42.VAR46 = VAR9->VAR42.VAR89;
                }
                else
                {
                    VAR9->VAR42.VAR45 = 0;
                    VAR9->VAR42.VAR46 = VAR9->VAR22 == VAR99 ? 0 : VAR17[0];
                }
            }
            if (VAR26->VAR100 && VAR9->VAR24.VAR101.VAR102)
            {
                switch (VAR9->VAR24.VAR101.VAR103)
                {
                case VAR104:
                case VAR105:
                    VAR2->VAR106 = 0;
                    break;
                case VAR107:
                case VAR108:
                case VAR109:
                    VAR2->VAR106 = 1;
                    break;
                case VAR110:
                case VAR111:
                    VAR2->VAR106 = 2;
                    break;
                case VAR112:
                    VAR2->VAR106 = 3;
                    break;
                case VAR113:
                    VAR2->VAR106 = 5;
                    break;
                default:
                    VAR2->VAR106 = VAR9->VAR22 == VAR86 ? 1 : 0;
                    break;
                }
            }
            else
            {
                VAR2->VAR106 = VAR9->VAR22 == VAR86 ? 1 : 0;
            }
            if (VAR9->VAR22 == VAR86)
            {
                VAR2->VAR22 = VAR114;
                if (VAR26->VAR100 && VAR9->VAR24.VAR101.VAR102)
                {
                    switch (VAR9->VAR24.VAR101.VAR103)
                    {
                    case VAR108:
                    case VAR110:
                        VAR2->VAR115 = VAR116;
                        break;
                    case VAR109:
                    case VAR111:
                        VAR2->VAR115 = VAR117;
                        break;
                    default:
                        VAR2->VAR115 = VAR118;
                        break;
                    }
                }
                else
                {
                    if (VAR17[0] < VAR17[1])
                        VAR2->VAR115 = VAR116;
                    else if (VAR17[0] > VAR17[1])
                        VAR2->VAR115 = VAR117;
                    else
                        VAR2->VAR115 = VAR118;
                }
            }
            else
            {
                if (VAR9->VAR22 == VAR87)
                    VAR2->VAR22 = VAR119;
                else
                    VAR2->VAR22 = VAR120;
                VAR2->VAR115 = VAR121;
            }
            FUN18(&VAR12.VAR122);
            return 0;
        }
        VAR6 += VAR28;
    }
    FUN13(VAR4, VAR51, "");
VAR34:
    FUN18(&VAR12.VAR122);
    return -1;
}