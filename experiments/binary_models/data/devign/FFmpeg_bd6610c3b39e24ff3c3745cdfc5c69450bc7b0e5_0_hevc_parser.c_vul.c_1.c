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
        VAR4 = FUN5(VAR4, VAR21, &VAR22);
        if (--VAR4 + 2 >= VAR21)
            break;
        VAR39 = VAR21 - VAR4;
        VAR12->VAR41 = (*VAR4 >> 1) & 0x3f;
        VAR12->VAR42 = (*(VAR4 + 1) & 0x07) - 1;
        if (VAR12->VAR41 <= VAR43)
        {
            if (VAR39 > 20)
                VAR39 = 20;
        }
        VAR40 = FUN6(NULL, VAR4, VAR39, VAR25);
        if (VAR40 < 0)
            return VAR40;
        FUN7(VAR14, VAR25->VAR44 + 2, VAR25->VAR45);
        switch (VAR12->VAR41)
        {
        case VAR46:
            FUN8(VAR14, VAR7, VAR18);
            break;
        case VAR47:
            FUN9(VAR14, VAR7, VAR18, 1);
            break;
        case VAR48:
            FUN10(VAR14, VAR7, VAR18);
            break;
        case VAR49:
        case VAR50:
            FUN11(VAR12);
            break;
        case VAR51:
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
        case VAR43:
            if (VAR26)
            {
                FUN12(VAR7, VAR66, "", VAR12->VAR41);
                return VAR67;
            }
            VAR16->VAR68 = FUN13(VAR14);
            VAR2->VAR34 = VAR12->VAR69;
            VAR2->VAR70 = VAR12->VAR69;
            if (FUN14(VAR12))
            {
                VAR2->VAR33 = 1;
                VAR16->VAR71 = FUN13(VAR14);
            }
            VAR16->VAR72 = FUN15(VAR14);
            if (VAR16->VAR72 >= VAR73 || !VAR18->VAR74[VAR16->VAR72])
            {
                FUN12(VAR7, VAR66, "", VAR16->VAR72);
                return VAR67;
            }
            VAR18->VAR75 = (VAR76 *)VAR18->VAR74[VAR16->VAR72]->VAR44;
            if (VAR18->VAR75->VAR77 >= VAR78 || !VAR18->VAR79[VAR18->VAR75->VAR77])
            {
                FUN12(VAR7, VAR66, "", VAR18->VAR75->VAR77);
                return VAR67;
            }
            if (VAR18->VAR80 != (VAR81 *)VAR18->VAR79[VAR18->VAR75->VAR77]->VAR44)
            {
                VAR18->VAR80 = (VAR81 *)VAR18->VAR79[VAR18->VAR75->VAR77]->VAR44;
                VAR18->VAR82 = (VAR83 *)VAR18->VAR84[VAR18->VAR80->VAR85]->VAR44;
            }
            if (!VAR16->VAR68)
            {
                int VAR86;
                if (VAR18->VAR75->VAR87)
                    VAR16->VAR88 = FUN13(VAR14);
                else
                    VAR16->VAR88 = 0;
                VAR86 = FUN16(VAR18->VAR80->VAR89 * VAR18->VAR80->VAR90);
                VAR16->VAR91 = VAR86 ? FUN17(VAR14, VAR86) : 0;
                if (VAR16->VAR91 >= VAR18->VAR80->VAR89 * VAR18->VAR80->VAR90)
                {
                    FUN12(VAR7, VAR66, "", VAR16->VAR91);
                    return VAR67;
                }
            }
            else
                VAR16->VAR88 = 0;
            if (VAR16->VAR88)
                break;
            for (VAR23 = 0; VAR23 < VAR18->VAR75->VAR92; VAR23++)
                FUN18(VAR14, 1);
            VAR16->VAR93 = FUN15(VAR14);
            if (!(VAR16->VAR93 == VAR94 || VAR16->VAR93 == VAR95 || VAR16->VAR93 == VAR96))
            {
                FUN12(VAR7, VAR66, "", VAR16->VAR93);
                return VAR67;
            }
            VAR2->VAR31 = VAR16->VAR93 == VAR96 ? VAR97 : VAR16->VAR93 == VAR95 ? VAR98
                                                                                                     : VAR32;
            if (VAR18->VAR75->VAR99)
                VAR16->VAR100 = FUN13(VAR14);
            if (VAR18->VAR80->VAR101)
                VAR16->VAR102 = FUN17(VAR14, 2);
            if (!FUN19(VAR12))
            {
                VAR16->VAR103 = FUN17(VAR14, VAR18->VAR80->VAR104);
                VAR2->VAR105 = VAR12->VAR106 = FUN20(VAR12, VAR16->VAR103);
            }
            else
                VAR2->VAR105 = VAR12->VAR106 = 0;
            if (VAR12->VAR42 == 0 && VAR12->VAR41 != VAR51 && VAR12->VAR41 != VAR53 && VAR12->VAR41 != VAR55 && VAR12->VAR41 != VAR57 && VAR12->VAR41 != VAR59 && VAR12->VAR41 != VAR58 && VAR12->VAR41 != VAR60)
                VAR12->VAR107 = VAR12->VAR106;
            return 0;
        }
        VAR4 += VAR40;
    }
    if (!VAR26)
        FUN12(VAR12->VAR7, VAR66, "");
    return -1;
}