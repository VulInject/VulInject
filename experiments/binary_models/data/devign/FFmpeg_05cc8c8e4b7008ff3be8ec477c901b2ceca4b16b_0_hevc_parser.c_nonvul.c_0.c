static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = &((VAR10 *)VAR2->VAR11)->VAR9;
    VAR12 *VAR13 = &VAR9->VAR14->VAR13;
    VAR15 *VAR16 = &VAR9->VAR16;
    const VAR5 *VAR17 = VAR6 + VAR7;
    int VAR18 = -1, VAR19;
    VAR20 *VAR21;
    VAR2->VAR22 = VAR23;
    VAR2->VAR24 = 0;
    VAR2->VAR25 = VAR26;
    VAR9->VAR4 = VAR4;
    if (!VAR7)
        return 0;
    if (VAR9->VAR27 < 1)
    {
        VAR20 *VAR28 = FUN2(VAR9->VAR29, 1, sizeof(*VAR28));
        if (!VAR28)
            return FUN3(VAR30);
        VAR9->VAR29 = VAR28;
        memset(VAR9->VAR29, 0, sizeof(*VAR28));
        VAR9->VAR27 = 1;
    }
    VAR21 = &VAR9->VAR29[0];
    for (;;)
    {
        int VAR31, VAR32;
        VAR6 = FUN4(VAR6, VAR17, &VAR18);
        if (--VAR6 + 2 >= VAR17)
            break;
        VAR31 = VAR17 - VAR6;
        VAR9->VAR33 = (*VAR6 >> 1) & 0x3f;
        VAR9->VAR34 = (*(VAR6 + 1) & 0x07) - 1;
        if (VAR9->VAR33 <= VAR35)
        {
            if (VAR31 > 20)
                VAR31 = 20;
        }
        VAR32 = FUN5(VAR9, VAR6, VAR31, VAR21);
        if (VAR32 < 0)
            return VAR32;
        FUN6(VAR13, VAR21->VAR36 + 2, VAR21->VAR37);
        switch (VAR9->VAR33)
        {
        case VAR38:
            FUN7(VAR9);
            break;
        case VAR39:
            FUN8(VAR9);
            break;
        case VAR40:
            FUN9(VAR9);
            break;
        case VAR41:
        case VAR42:
            FUN10(VAR9);
            break;
        case VAR43:
        case VAR44:
        case VAR45:
        case VAR46:
        case VAR47:
        case VAR48:
        case VAR49:
        case VAR50:
        case VAR51:
        case VAR52:
        case VAR53:
        case VAR54:
        case VAR55:
        case VAR56:
        case VAR57:
        case VAR35:
            VAR16->VAR58 = FUN11(VAR13);
            VAR2->VAR25 = VAR9->VAR59;
            VAR2->VAR60 = VAR9->VAR59;
            if (FUN12(VAR9))
            {
                VAR2->VAR24 = 1;
                VAR16->VAR61 = FUN11(VAR13);
            }
            VAR16->VAR62 = FUN13(VAR13);
            if (VAR16->VAR62 >= VAR63 || !VAR9->VAR64[VAR16->VAR62])
            {
                FUN14(VAR9->VAR4, VAR65, "", VAR16->VAR62);
                return VAR66;
            }
            VAR9->VAR67 = (VAR68 *)VAR9->VAR64[VAR16->VAR62]->VAR36;
            if (VAR9->VAR67->VAR69 >= VAR70 || !VAR9->VAR71[VAR9->VAR67->VAR69])
            {
                FUN14(VAR9->VAR4, VAR65, "", VAR9->VAR67->VAR69);
                return VAR66;
            }
            if (VAR9->VAR72 != (VAR73 *)VAR9->VAR71[VAR9->VAR67->VAR69]->VAR36)
            {
                VAR9->VAR72 = (VAR73 *)VAR9->VAR71[VAR9->VAR67->VAR69]->VAR36;
                VAR9->VAR74 = (VAR75 *)VAR9->VAR76[VAR9->VAR72->VAR77]->VAR36;
            }
            if (!VAR16->VAR58)
            {
                int VAR78;
                if (VAR9->VAR67->VAR79)
                    VAR16->VAR80 = FUN11(VAR13);
                else
                    VAR16->VAR80 = 0;
                VAR78 = FUN15(VAR9->VAR72->VAR81 * VAR9->VAR72->VAR82);
                VAR16->VAR83 = VAR78 ? FUN16(VAR13, VAR78) : 0;
                if (VAR16->VAR83 >= VAR9->VAR72->VAR81 * VAR9->VAR72->VAR82)
                {
                    FUN14(VAR9->VAR4, VAR65, "", VAR16->VAR83);
                    return VAR66;
                }
            }
            else
                VAR16->VAR80 = 0;
            if (VAR16->VAR80)
                break;
            for (VAR19 = 0; VAR19 < VAR9->VAR67->VAR84; VAR19++)
                FUN17(VAR13, 1);
            VAR16->VAR85 = FUN13(VAR13);
            if (!(VAR16->VAR85 == VAR86 || VAR16->VAR85 == VAR87 || VAR16->VAR85 == VAR88))
            {
                FUN14(VAR9->VAR4, VAR65, "", VAR16->VAR85);
                return VAR66;
            }
            VAR2->VAR22 = VAR16->VAR85 == VAR88 ? VAR89 : VAR16->VAR85 == VAR87 ? VAR90
                                                                                                     : VAR23;
            if (VAR9->VAR67->VAR91)
                VAR16->VAR92 = FUN11(VAR13);
            if (VAR9->VAR72->VAR93)
                VAR16->VAR94 = FUN16(VAR13, 2);
            if (!FUN18(VAR9))
            {
                VAR16->VAR95 = FUN16(VAR13, VAR9->VAR72->VAR96);
                VAR2->VAR97 = VAR9->VAR98 = FUN19(VAR9, VAR16->VAR95);
            }
            else
                VAR2->VAR97 = VAR9->VAR98 = 0;
            if (VAR9->VAR34 == 0 && VAR9->VAR33 != VAR43 && VAR9->VAR33 != VAR45 && VAR9->VAR33 != VAR47 && VAR9->VAR33 != VAR49 && VAR9->VAR33 != VAR51 && VAR9->VAR33 != VAR50 && VAR9->VAR33 != VAR52)
                VAR9->VAR99 = VAR9->VAR98;
            return 0;
        }
        VAR6 += VAR32;
    }
    FUN14(VAR9->VAR4, VAR65, "");
    return -1;
}