static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7 = 0, VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14, *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    char VAR20[1024];
    int VAR21 = 1;
    for (VAR8 = 0; VAR8 < VAR6; VAR8++)
    {
        VAR4 *VAR22 = &VAR5[VAR8];
        if (VAR22->VAR23)
            for (VAR9 = 0; VAR9 < VAR22->VAR24; VAR9++)
                VAR25[VAR9 + VAR22->VAR26].VAR27 = FUN2();
    }
    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
    {
        VAR12 = VAR2[VAR8].VAR28;
        if (!VAR12->VAR24 && !(VAR12->VAR29->VAR30 & VAR31))
        {
            FUN3(VAR12, VAR8, VAR12->VAR32, 1);
            fprintf(VAR33, "", VAR8);
            return FUN4(VAR34);
        }
    }
    for (VAR8 = 0; VAR8 < VAR35; VAR8++)
    {
        VAR17 = &VAR36[VAR8];
        VAR12 = VAR2[VAR17->VAR37].VAR28;
        VAR19 = &VAR25[VAR17->VAR38];
        VAR14 = VAR17->VAR39->VAR14;
        VAR15 = VAR19->VAR39->VAR14;
        VAR17->VAR39->VAR40 = VAR19->VAR39->VAR40;
        VAR14->VAR41 = VAR15->VAR41;
        VAR14->VAR42 = VAR15->VAR42;
        if (VAR17->VAR39->VAR43)
        {
            uint64_t VAR44 = (VAR45)VAR15->VAR46 + VAR47;
            if (VAR44 > VAR48)
            {
                return FUN4(VAR34);
            }
            VAR14->VAR49 = VAR15->VAR49;
            VAR14->VAR50 = VAR15->VAR50;
            if (!VAR14->VAR51)
            {
                if (!VAR12->VAR29->VAR51 || FUN5(VAR12->VAR29->VAR51, VAR15->VAR51) == VAR14->VAR49 || FUN6(VAR12->VAR29->VAR51, VAR15->VAR49) <= 0)
                    VAR14->VAR51 = VAR15->VAR51;
            }
            VAR14->VAR52 = VAR15->VAR52;
            VAR14->VAR53 = VAR15->VAR53;
            VAR14->VAR54 = VAR15->VAR54;
            VAR14->VAR55 = FUN7(VAR44);
            if (!VAR14->VAR55)
            {
                return FUN4(VAR56);
            }
            memcpy(VAR14->VAR55, VAR15->VAR55, VAR15->VAR46);
            VAR14->VAR46 = VAR15->VAR46;
            if (!VAR57 && FUN8(VAR15->VAR58) * VAR15->VAR59 > FUN8(VAR19->VAR39->VAR58) && FUN8(VAR19->VAR39->VAR58) < 1.0 / 500)
            {
                VAR14->VAR58 = VAR15->VAR58;
                VAR14->VAR58.VAR60 *= VAR15->VAR59;
                FUN9(&VAR14->VAR58.VAR60, &VAR14->VAR58.VAR61, VAR14->VAR58.VAR60, VAR14->VAR58.VAR61, VAR48);
            }
            else
                VAR14->VAR58 = VAR19->VAR39->VAR58;
            switch (VAR14->VAR50)
            {
            case VAR62:
                if (VAR63 != 256)
                {
                    fprintf(VAR33, "");
                    FUN10(1);
                }
                VAR14->VAR64 = VAR15->VAR64;
                VAR14->VAR65 = VAR15->VAR65;
                VAR14->VAR66 = VAR15->VAR66;
                VAR14->VAR67 = VAR15->VAR67;
                VAR14->VAR68 = VAR15->VAR68;
                VAR14->VAR69 = VAR15->VAR69;
                if (VAR14->VAR69 == 1 && VAR14->VAR49 == VAR70)
                    VAR14->VAR69 = 0;
                if (VAR14->VAR49 == VAR71)
                    VAR14->VAR69 = 0;
                break;
            case VAR72:
                VAR14->VAR73 = VAR15->VAR73;
                VAR14->VAR74 = VAR15->VAR74;
                VAR14->VAR75 = VAR15->VAR75;
                VAR14->VAR76 = VAR15->VAR76;
                if (!VAR14->VAR77.VAR60)
                {
                    VAR14->VAR77 = VAR17->VAR39->VAR77 = VAR19->VAR39->VAR77.VAR60 ? VAR19->VAR39->VAR77 : VAR19->VAR39->VAR14->VAR77.VAR60 ? VAR19->VAR39->VAR14->VAR77
                                                                                                                                                                                          : (VAR78){0, 1};
                }
                break;
            case VAR79:
                VAR14->VAR74 = VAR15->VAR74;
                VAR14->VAR75 = VAR15->VAR75;
                break;
            case VAR80:
                break;
            default:
                FUN11();
            }
        }
        else
        {
            if (!VAR17->VAR81)
                VAR17->VAR81 = FUN12(VAR17->VAR39->VAR14->VAR49);
            switch (VAR14->VAR50)
            {
            case VAR62:
                VAR17->VAR82 = FUN13(1024);
                if (!VAR17->VAR82)
                {
                    return FUN4(VAR56);
                }
                VAR17->VAR83 = FUN14(VAR84, VAR84);
                if (!VAR14->VAR65)
                {
                    VAR14->VAR65 = VAR15->VAR65;
                    if (VAR15->VAR85)
                        VAR14->VAR65 >>= VAR15->VAR85;
                }
                FUN15(VAR17->VAR39, VAR17->VAR81);
                VAR14->VAR58 = (VAR78){1, VAR14->VAR65};
                if (VAR14->VAR86 == VAR84)
                    VAR14->VAR86 = VAR15->VAR86;
                FUN16(VAR17->VAR39, VAR17->VAR81);
                if (!VAR14->VAR66)
                    VAR14->VAR66 = VAR15->VAR66;
                VAR14->VAR64 = VAR15->VAR64;
                if (FUN17(VAR14->VAR64) != VAR14->VAR66)
                    VAR14->VAR64 = 0;
                VAR17->VAR87 = VAR14->VAR65 != VAR15->VAR65 || VAR88 > 1;
                VAR15->VAR89 = VAR14->VAR66;
                VAR19->VAR90 = 1;
                VAR17->VAR91 = 1;
                VAR17->VAR92 = VAR15->VAR86;
                VAR17->VAR93 = VAR15->VAR65;
                VAR17->VAR94 = VAR15->VAR66;
                break;
            case VAR72:
                if (VAR14->VAR73 == VAR95)
                    VAR14->VAR73 = VAR15->VAR73;
                FUN18(VAR17->VAR39, VAR17->VAR81);
                if (VAR17->VAR39->VAR14->VAR73 == VAR95)
                {
                    fprintf(VAR33, "");
                    FUN10(1);
                }
                if (!VAR14->VAR74 || !VAR14->VAR75)
                {
                    VAR14->VAR74 = VAR15->VAR74;
                    VAR14->VAR75 = VAR15->VAR75;
                }
                VAR17->VAR96 = VAR14->VAR74 != VAR15->VAR74 || VAR14->VAR75 != VAR15->VAR75 || VAR14->VAR73 != VAR15->VAR73;
                if (VAR17->VAR96)
                {
                    FUN19(&VAR17->VAR97);
                    if (FUN20((VAR98 *)&VAR17->VAR97, VAR14->VAR73, VAR14->VAR74, VAR14->VAR75))
                    {
                        fprintf(VAR33, "");
                        FUN10(1);
                    }
                    VAR17->VAR99 = FUN21(VAR15->VAR74, VAR15->VAR75, VAR15->VAR73, VAR14->VAR74, VAR14->VAR75, VAR14->VAR73, VAR17->VAR100, NULL, NULL, NULL);
                    if (VAR17->VAR99 == NULL)
                    {
                        fprintf(VAR33, "");
                        FUN10(1);
                    }
                    VAR14->VAR41 = 0;
                }
                VAR17->VAR101 = VAR15->VAR75;
                VAR17->VAR102 = VAR15->VAR74;
                VAR17->VAR103 = VAR15->VAR73;
                VAR17->VAR91 = 1;
                VAR19->VAR90 = 1;
                if (!VAR17->VAR104.VAR60)
                    VAR17->VAR104 = VAR19->VAR39->VAR105.VAR60 ? VAR19->VAR39->VAR105 : (VAR78){25, 1};
                if (VAR17->VAR81 && VAR17->VAR81->VAR106 && !VAR107)
                {
                    int VAR108 = FUN22(VAR17->VAR104, VAR17->VAR81->VAR106);
                    VAR17->VAR104 = VAR17->VAR81->VAR106[VAR108];
                }
                VAR14->VAR58 = (VAR78){VAR17->VAR104.VAR61, VAR17->VAR104.VAR60};
                if (FUN23(VAR19, VAR17))
                {
                    fprintf(VAR33, "");
                    FUN24(1);
                }
                break;
            case VAR79:
                VAR17->VAR91 = 1;
                VAR19->VAR90 = 1;
                break;
            default:
                FUN11();
                break;
            }
            if (VAR17->VAR91 && (VAR14->VAR30 & (VAR109 | VAR110)))
            {
                char VAR111[1024];
                VAR112 *VAR113;
                snprintf(VAR111, sizeof(VAR111), "", VAR114 ? VAR114 : VAR115, VAR8);
                if (VAR14->VAR30 & VAR109)
                {
                    VAR113 = fopen(VAR111, "");
                    if (!VAR113)
                    {
                        fprintf(VAR33, "", VAR111, strerror(VAR116));
                        FUN10(1);
                    }
                    VAR17->VAR117 = VAR113;
                }
                else
                {
                    char *VAR118;
                    size_t VAR119;
                    if (FUN25(VAR111, &VAR118, &VAR119) < 0)
                    {
                        fprintf(VAR33, "", VAR111);
                        FUN10(1);
                    }
                    VAR14->VAR120 = VAR118;
                }
            }
        }
        if (VAR14->VAR50 == VAR72)
        {
            int VAR121 = VAR14->VAR74 * VAR14->VAR75;
            VAR122 = FUN26(VAR122, 6 * VAR121 + 200);
        }
    }
    if (!VAR123)
        VAR123 = FUN27(VAR122);
    if (!VAR123)
    {
        fprintf(VAR33, "", VAR122);
        return FUN4(VAR56);
    }
    for (VAR8 = 0; VAR8 < VAR35; VAR8++)
    {
        VAR17 = &VAR36[VAR8];
        if (VAR17->VAR91)
        {
            VAR124 *VAR14 = VAR17->VAR81;
            VAR13 *VAR125 = VAR25[VAR17->VAR38].VAR39->VAR14;
            if (!VAR14)
            {
                snprintf(VAR20, sizeof(VAR20), "", VAR17->VAR39->VAR14->VAR49, VAR17->VAR37, VAR17->VAR126);
                VAR7 = FUN4(VAR34);
                goto VAR127;
            }
            if (VAR125->VAR128)
            {
                VAR17->VAR39->VAR14->VAR128 = FUN27(VAR125->VAR129);
                if (!VAR17->VAR39->VAR14->VAR128)
                {
                    VAR7 = FUN4(VAR56);
                    goto VAR127;
                }
                memcpy(VAR17->VAR39->VAR14->VAR128, VAR125->VAR128, VAR125->VAR129);
                VAR17->VAR39->VAR14->VAR129 = VAR125->VAR129;
            }
            if (FUN28(VAR17->VAR39->VAR14, VAR14, &VAR17->VAR130) < 0)
            {
                snprintf(VAR20, sizeof(VAR20), "", VAR17->VAR37, VAR17->VAR126);
                VAR7 = FUN4(VAR34);
                goto VAR127;
            }
            FUN29(VAR17->VAR39->VAR14, 1);
            FUN30(VAR17->VAR130);
            if (VAR17->VAR39->VAR14->VAR52 && VAR17->VAR39->VAR14->VAR52 < 1000)
                FUN31(NULL, VAR131, ""
                                             "");
            VAR44 += VAR17->VAR39->VAR14->VAR46;
        }
    }
    for (VAR8 = 0; VAR8 < VAR132; VAR8++)
        if ((VAR7 = FUN32(VAR8, VAR36, VAR35, VAR20, sizeof(VAR20))) < 0)
            goto VAR127;
    for (VAR8 = 0; VAR8 < VAR6; VAR8++)
    {
        VAR4 *VAR22 = &VAR5[VAR8];
        for (VAR9 = 0; VAR9 < VAR22->VAR28->VAR133; VAR9++)
        {
            VAR134 *VAR135 = VAR22->VAR28->VAR136[VAR9];
            int VAR137 = VAR138;
            for (VAR10 = 0; VAR10 < VAR135->VAR139; VAR10++)
                if (!VAR25[VAR22->VAR26 + VAR135->VAR140[VAR10]].VAR137)
                {
                    VAR137 = VAR141;
                    break;
                }
            VAR135->VAR137 = VAR137;
        }
    }
    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
    {
        VAR12 = VAR2[VAR8].VAR28;
        if (FUN33(VAR12, &VAR2[VAR8].VAR130) < 0)
        {
            snprintf(VAR20, sizeof(VAR20), "", VAR8);
            VAR7 = FUN4(VAR34);
            goto VAR127;
        }
        FUN30(VAR2[VAR8].VAR130);
        if (strcmp(VAR12->VAR29->VAR142, ""))
        {
            VAR21 = 0;
        }
    }
VAR127:
    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
    {
        FUN3(VAR2[VAR8].VAR28, VAR8, VAR2[VAR8].VAR28->VAR32, 1);
    }
    if (VAR143 >= 0)
    {
        fprintf(VAR33, "");
        for (VAR8 = 0; VAR8 < VAR35; VAR8++)
        {
            VAR17 = &VAR36[VAR8];
            fprintf(VAR33, "", VAR25[VAR17->VAR38].VAR37, VAR25[VAR17->VAR38].VAR39->VAR126, VAR17->VAR37, VAR17->VAR126);
            if (VAR17->VAR144 != &VAR25[VAR17->VAR38])
                fprintf(VAR33, "", VAR17->VAR144->VAR37, VAR17->VAR144->VAR39->VAR126);
            if (VAR17->VAR39->VAR43)
                fprintf(VAR33, "");
            else
                fprintf(VAR33, "", VAR25[VAR17->VAR38].VAR125 ? VAR25[VAR17->VAR38].VAR125->VAR142 : "", VAR17->VAR81 ? VAR17->VAR81->VAR142 : "");
            fprintf(VAR33, "");
        }
    }
    if (VAR7)
    {
        fprintf(VAR33, "", VAR20);
        return VAR7;
    }
    if (VAR21)
    {
        FUN34(VAR2, VAR3);
    }
    return 0;
}