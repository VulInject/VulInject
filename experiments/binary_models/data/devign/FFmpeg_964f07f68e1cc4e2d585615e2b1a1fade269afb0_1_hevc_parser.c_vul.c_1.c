static inline int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16 = &VAR12->VAR16;
    VAR17 *VAR18 = &VAR12->VAR18;
    VAR19 *VAR20 = &VAR9->VAR20;
    const VAR3 *VAR21 = VAR4 + VAR5;
    int VAR22 = -1, VAR23;
    VAR24 *VAR25;
    int VAR26 = VAR4 == VAR7->VAR27;
    if (!VAR12->VAR28)
        VAR12->VAR28 = FUN2(sizeof(VAR29));
    if (!VAR12->VAR28)
        return FUN3(VAR30);
    VAR14 = &VAR12->VAR28->VAR14;
    VAR2->VAR31 = VAR32;
    VAR2->VAR33 = 0;
    VAR2->VAR34 = VAR35;
    VAR12->VAR7 = VAR7;
    if (!VAR5)
        return 0;
    if (VAR20->VAR36 < 1)
    {
        VAR24 *VAR37 = FUN4(VAR20->VAR38, 1, sizeof(*VAR37));
        if (!VAR37)
            return FUN3(VAR30);
        VAR20->VAR38 = VAR37;
        memset(VAR20->VAR38, 0, sizeof(*VAR37));
        VAR20->VAR36 = 1;
    }
    VAR25 = &VAR20->VAR38[0];
    for (;;)
    {
        int VAR39, VAR40;
        int VAR41;
        VAR4 = FUN5(VAR4, VAR21, &VAR22);
        if (--VAR4 + 2 >= VAR21)
            break;
        VAR39 = VAR21 - VAR4;
        VAR12->VAR42 = (*VAR4 >> 1) & 0x3f;
        VAR12->VAR43 = (*(VAR4 + 1) & 0x07) - 1;
        if (VAR12->VAR42 <= VAR44)
        {
            if (VAR39 > 20)
                VAR39 = 20;
        }
        VAR40 = FUN6(VAR4, VAR39, VAR25);
        if (VAR40 < 0)
            return VAR40;
        VAR41 = FUN7(VAR14, VAR25->VAR45 + 2, VAR25->VAR46);
        if (VAR41 < 0)
            return VAR41;
        switch (VAR12->VAR42)
        {
        case VAR47:
            FUN8(VAR14, VAR7, VAR18);
            break;
        case VAR48:
            FUN9(VAR14, VAR7, VAR18, 1);
            break;
        case VAR49:
            FUN10(VAR14, VAR7, VAR18);
            break;
        case VAR50:
        case VAR51:
            FUN11(VAR12);
            break;
        case VAR52:
        case VAR53:
        case VAR54:
        case VAR55:
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
        case VAR44:
            if (VAR26)
            {
                FUN12(VAR7, VAR67, "", VAR12->VAR42);
                return VAR68;
            }
            VAR16->VAR69 = FUN13(VAR14);
            VAR2->VAR34 = VAR12->VAR70;
            VAR2->VAR71 = VAR12->VAR70;
            if (FUN14(VAR12))
            {
                VAR2->VAR33 = 1;
                VAR16->VAR72 = FUN13(VAR14);
            }
            VAR16->VAR73 = FUN15(VAR14);
            if (VAR16->VAR73 >= VAR74 || !VAR18->VAR75[VAR16->VAR73])
            {
                FUN12(VAR7, VAR67, "", VAR16->VAR73);
                return VAR68;
            }
            VAR18->VAR76 = (VAR77 *)VAR18->VAR75[VAR16->VAR73]->VAR45;
            if (VAR18->VAR76->VAR78 >= VAR79 || !VAR18->VAR80[VAR18->VAR76->VAR78])
            {
                FUN12(VAR7, VAR67, "", VAR18->VAR76->VAR78);
                return VAR68;
            }
            if (VAR18->VAR81 != (VAR82 *)VAR18->VAR80[VAR18->VAR76->VAR78]->VAR45)
            {
                VAR18->VAR81 = (VAR82 *)VAR18->VAR80[VAR18->VAR76->VAR78]->VAR45;
                VAR18->VAR83 = (VAR84 *)VAR18->VAR85[VAR18->VAR81->VAR86]->VAR45;
            }
            if (!VAR16->VAR69)
            {
                int VAR87;
                if (VAR18->VAR76->VAR88)
                    VAR16->VAR89 = FUN13(VAR14);
                else
                    VAR16->VAR89 = 0;
                VAR87 = FUN16(VAR18->VAR81->VAR90 * VAR18->VAR81->VAR91);
                VAR16->VAR92 = FUN17(VAR14, VAR87);
                if (VAR16->VAR92 >= VAR18->VAR81->VAR90 * VAR18->VAR81->VAR91)
                {
                    FUN12(VAR7, VAR67, "", VAR16->VAR92);
                    return VAR68;
                }
            }
            else
                VAR16->VAR89 = 0;
            if (VAR16->VAR89)
                break;
            for (VAR23 = 0; VAR23 < VAR18->VAR76->VAR93; VAR23++)
                FUN18(VAR14, 1);
            VAR16->VAR94 = FUN15(VAR14);
            if (!(VAR16->VAR94 == VAR95 || VAR16->VAR94 == VAR96 || VAR16->VAR94 == VAR97))
            {
                FUN12(VAR7, VAR67, "", VAR16->VAR94);
                return VAR68;
            }
            VAR2->VAR31 = VAR16->VAR94 == VAR97 ? VAR98 : VAR16->VAR94 == VAR96 ? VAR99
                                                                                                     : VAR32;
            if (VAR18->VAR76->VAR100)
                VAR16->VAR101 = FUN13(VAR14);
            if (VAR18->VAR81->VAR102)
                VAR16->VAR103 = FUN19(VAR14, 2);
            if (!FUN20(VAR12))
            {
                VAR16->VAR104 = FUN19(VAR14, VAR18->VAR81->VAR105);
                VAR2->VAR106 = VAR12->VAR107 = FUN21(VAR12, VAR16->VAR104);
            }
            else
                VAR2->VAR106 = VAR12->VAR107 = 0;
            if (VAR12->VAR43 == 0 && VAR12->VAR42 != VAR52 && VAR12->VAR42 != VAR54 && VAR12->VAR42 != VAR56 && VAR12->VAR42 != VAR58 && VAR12->VAR42 != VAR60 && VAR12->VAR42 != VAR59 && VAR12->VAR42 != VAR61)
                VAR12->VAR108 = VAR12->VAR107;
            return 0;
        }
        VAR4 += VAR40;
    }
    if (!VAR26)
        FUN12(VAR12->VAR7, VAR67, "");
    return -1;