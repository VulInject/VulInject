static inline int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    VAR13 *VAR14 = &VAR9->VAR14;
    VAR15 *VAR16 = &VAR9->VAR16;
    int VAR17 = VAR4 == VAR7->VAR18;
    int VAR19, VAR20;
    VAR2->VAR21 = VAR22;
    VAR2->VAR23 = 0;
    VAR2->VAR24 = VAR25;
    FUN2(VAR16);
    VAR20 = FUN3(&VAR9->VAR26, VAR4, VAR5, VAR7, 0, 0, VAR27, 1);
    if (VAR20 < 0)
        return VAR20;
    for (VAR19 = 0; VAR19 < VAR9->VAR26.VAR28; VAR19++)
    {
        VAR29 *VAR30 = &VAR9->VAR26.VAR31[VAR19];
        VAR32 *VAR33 = &VAR30->VAR33;
        int VAR34 = 0, VAR35 = 0;
        switch (VAR30->VAR36)
        {
        case VAR37:
            FUN4(VAR33, VAR7, VAR14);
            break;
        case VAR38:
            FUN5(VAR33, VAR7, VAR14, 1);
            break;
        case VAR39:
            FUN6(VAR33, VAR7, VAR14);
            break;
        case VAR40:
        case VAR41:
            FUN7(VAR33, VAR7, VAR16, VAR14, VAR30->VAR36);
            break;
        case VAR42:
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
            if (VAR17)
            {
                FUN8(VAR7, VAR58, "", VAR30->VAR36);
                return VAR59;
            }
            VAR12->VAR60 = FUN9(VAR33);
            VAR2->VAR24 = VAR16->VAR61.VAR62;
            VAR2->VAR63 = VAR16->VAR61.VAR62;
            if (FUN10(VAR30))
            {
                VAR2->VAR23 = 1;
                VAR12->VAR64 = FUN9(VAR33);
            }
            VAR12->VAR65 = FUN11(VAR33);
            if (VAR12->VAR65 >= VAR66 || !VAR14->VAR67[VAR12->VAR65])
            {
                FUN8(VAR7, VAR58, "", VAR12->VAR65);
                return VAR59;
            }
            VAR14->VAR68 = (VAR69 *)VAR14->VAR67[VAR12->VAR65]->VAR70;
            if (VAR14->VAR68->VAR71 >= VAR72 || !VAR14->VAR73[VAR14->VAR68->VAR71])
            {
                FUN8(VAR7, VAR58, "", VAR14->VAR68->VAR71);
                return VAR59;
            }
            if (VAR14->VAR74 != (VAR75 *)VAR14->VAR73[VAR14->VAR68->VAR71]->VAR70)
            {
                VAR14->VAR74 = (VAR75 *)VAR14->VAR73[VAR14->VAR68->VAR71]->VAR70;
                VAR14->VAR76 = (VAR77 *)VAR14->VAR78[VAR14->VAR74->VAR79]->VAR70;
            }
            VAR2->VAR80 = VAR14->VAR74->VAR81;
            VAR2->VAR82 = VAR14->VAR74->VAR83;
            VAR2->VAR81 = VAR14->VAR74->VAR84;
            VAR2->VAR83 = VAR14->VAR74->VAR85;
            VAR2->VAR86 = VAR14->VAR74->VAR87;
            VAR7->VAR88 = VAR14->VAR74->VAR89.VAR90.VAR91;
            VAR7->VAR92 = VAR14->VAR74->VAR89.VAR90.VAR93;
            if (VAR14->VAR76->VAR94)
            {
                VAR34 = VAR14->VAR76->VAR95;
                VAR35 = VAR14->VAR76->VAR96;
            }
            else if (VAR14->VAR74->VAR97.VAR98)
            {
                VAR34 = VAR14->VAR74->VAR97.VAR99;
                VAR35 = VAR14->VAR74->VAR97.VAR100;
            }
            if (VAR34 != 0 && VAR35 != 0)
                FUN12(&VAR7->VAR101.VAR35, &VAR7->VAR101.VAR34, VAR34, VAR35, 1 << 30);
            if (!VAR12->VAR60)
            {
                int VAR102;
                if (VAR14->VAR68->VAR103)
                    VAR12->VAR104 = FUN9(VAR33);
                else
                    VAR12->VAR104 = 0;
                VAR102 = FUN13(VAR14->VAR74->VAR105 * VAR14->VAR74->VAR106);
                VAR12->VAR107 = FUN14(VAR33, VAR102);
                if (VAR12->VAR107 >= VAR14->VAR74->VAR105 * VAR14->VAR74->VAR106)
                {
                    FUN8(VAR7, VAR58, "", VAR12->VAR107);
                    return VAR59;
                }
            }
            else
                VAR12->VAR104 = 0;
            if (VAR12->VAR104)
                break;
            for (VAR19 = 0; VAR19 < VAR14->VAR68->VAR108; VAR19++)
                FUN15(VAR33, 1);
            VAR12->VAR109 = FUN11(VAR33);
            if (!(VAR12->VAR109 == VAR110 || VAR12->VAR109 == VAR111 || VAR12->VAR109 == VAR112))
            {
                FUN8(VAR7, VAR58, "", VAR12->VAR109);
                return VAR59;
            }
            VAR2->VAR21 = VAR12->VAR109 == VAR112 ? VAR113 : VAR12->VAR109 == VAR111 ? VAR114
                                                                                                               : VAR22;
            if (VAR14->VAR68->VAR115)
                VAR12->VAR116 = FUN9(VAR33);
            if (VAR14->VAR74->VAR117)
                VAR12->VAR118 = FUN16(VAR33, 2);
            if (!FUN17(VAR30))
            {
                VAR12->VAR119 = FUN16(VAR33, VAR14->VAR74->VAR120);
                VAR2->VAR121 = VAR9->VAR122 = FUN18(VAR14->VAR74, VAR9->VAR123, VAR12->VAR119, VAR30->VAR36);
            }
            else
                VAR2->VAR121 = VAR9->VAR122 = 0;
            if (VAR30->VAR124 == 0 && VAR30->VAR36 != VAR42 && VAR30->VAR36 != VAR44 && VAR30->VAR36 != VAR46 && VAR30->VAR36 != VAR48 && VAR30->VAR36 != VAR50 && VAR30->VAR36 != VAR49 && VAR30->VAR36 != VAR51)
                VAR9->VAR123 = VAR9->VAR122;
            return 0;
        }
    }
    if (!VAR17)
        FUN8(VAR7, VAR58, "");
    return -1;
}