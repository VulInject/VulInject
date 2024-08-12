int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    VAR13 *VAR14 = VAR3;
    float VAR15;
    uint64_t VAR16 = FUN2();
    FUN3("", VAR2->VAR17, VAR7);
    FUN3("", VAR6[0], VAR6[1], VAR6[2], VAR6[3]);
    VAR9->VAR18 = VAR2->VAR18;
    *VAR4 = 0;
    if (VAR7 == 0)
    {
        return 0;
    }
    if (VAR9->VAR18 & VAR19)
    {
        int VAR20;
        VAR21 *VAR22 = &VAR9->VAR23;
        VAR22->VAR24 = VAR22->VAR25;
        if (VAR9->VAR26 == VAR27)
        {
            VAR20 = FUN4(VAR9, VAR6, VAR7);
        }
        else
        {
            fprintf(VAR28, "");
            return -1;
        }
        if (VAR20 == -1)
        {
            if (VAR7 + VAR29 + VAR22->VAR25 > VAR22->VAR30)
            {
                VAR22->VAR30 = VAR7 + VAR22->VAR25 + 10 * 1024;
                VAR22->VAR31 = realloc(VAR22->VAR31, VAR22->VAR30);
            }
            memcpy(&VAR22->VAR31[VAR22->VAR25], VAR6, VAR7);
            VAR22->VAR25 += VAR7;
            return VAR7;
        }
        if (VAR22->VAR25)
        {
            if (VAR20 + VAR29 + VAR22->VAR25 > VAR22->VAR30)
            {
                VAR22->VAR30 = VAR20 + VAR22->VAR25 + 10 * 1024;
                VAR22->VAR31 = realloc(VAR22->VAR31, VAR22->VAR30);
            }
            memcpy(&VAR22->VAR31[VAR22->VAR25], VAR6, VAR20 + VAR29);
            VAR22->VAR25 = 0;
            VAR6 = VAR22->VAR31;
            VAR7 = VAR22->VAR24 + VAR20;
        }
    }
VAR32:
    if (VAR9->VAR33 && VAR7 < 20)
    {
        FUN5(&VAR9->VAR34, VAR9->VAR35, VAR9->VAR33 * 8);
    }
    else
        FUN5(&VAR9->VAR34, VAR6, VAR7 * 8);
    VAR9->VAR33 = 0;
    if (!VAR9->VAR36)
    {
        if (FUN6(VAR9) < 0)
            return -1;
    }
    if (VAR9->VAR37 == 5)
    {
        VAR11 = FUN7(VAR9);
    }
    else if (VAR9->VAR37)
    {
        VAR11 = FUN8(VAR9);
    }
    else if (VAR9->VAR38)
    {
        if (VAR9->VAR2->VAR39 && VAR9->VAR40 == 0)
        {
            GetBitContext VAR34;
            FUN5(&VAR34, VAR9->VAR2->VAR41, VAR9->VAR2->VAR39 * 8);
            VAR11 = FUN9(VAR9, &VAR34);
        }
        VAR11 = FUN9(VAR9, &VAR9->VAR34);
        if (VAR9->VAR18 & VAR42)
            VAR9->VAR43 = 1;
    }
    else if (VAR9->VAR44)
    {
        VAR11 = FUN10(VAR9);
    }
    else
    {
        VAR11 = FUN11(VAR9);
    }
    VAR2->VAR45 = !VAR9->VAR43;
    if (VAR9->VAR46 & VAR47)
    {
        if (VAR9->VAR48 > -2 && !VAR9->VAR49)
            VAR9->VAR46 |= VAR50;
        else
            VAR9->VAR46 &= ~VAR50;
        if (VAR9->VAR2->VAR51 == FUN12(""))
            VAR9->VAR46 |= VAR52;
        if (VAR9->VAR2->VAR51 == FUN12(""))
            VAR9->VAR46 |= VAR53;
        if (VAR9->VAR2->VAR51 == FUN12(""))
            VAR9->VAR46 |= VAR53;
        if (VAR9->VAR2->VAR51 == FUN12(""))
        {
            VAR9->VAR46 |= VAR54;
            VAR9->VAR46 |= VAR53;
        }
        if (VAR9->VAR55)
        {
            VAR9->VAR46 |= VAR56;
        }
        if (VAR9->VAR2->VAR51 == FUN12("") && VAR9->VAR57 == 0)
            VAR9->VAR46 |= VAR56;
        if (VAR9->VAR2->VAR51 == FUN12("") && VAR9->VAR57 == 0)
            VAR9->VAR48 = 256 * 256 * 256 * 64;
        if (VAR9->VAR57 && VAR9->VAR57 <= 3)
            VAR9->VAR48 = 256 * 256 * 256 * 64;
        if (VAR9->VAR57 && VAR9->VAR57 <= 1)
            VAR9->VAR46 |= VAR56;
        VAR9->VAR58.VAR59##VAR60 = VAR61##VAR62;
        VAR9->VAR58.VAR63##VAR60 = VAR64##VAR62;
        VAR9->VAR58.VAR65##VAR60 = VAR66##VAR62;
        if (VAR9->VAR67 && VAR9->VAR67 < 4653)
            VAR9->VAR46 |= VAR68;
        if (VAR9->VAR55 == 500)
            VAR9->VAR46 |= VAR50;
        if (VAR9->VAR69 == 0 && VAR9->VAR49 == 0 && VAR9->VAR55 == 0 && VAR9->VAR26 == VAR27 && VAR9->VAR70 == 0)
            VAR9->VAR46 |= VAR50;
        if (VAR9->VAR67 && VAR9->VAR67 < 4609)
            VAR9->VAR46 |= VAR50;
    }
    if (VAR9->VAR46 & VAR68)
    {
        FUN13(VAR71[0][5], VAR72)
        FUN13(VAR71[0][7], VAR73) FUN13(VAR71[0][9], VAR74) FUN13(VAR71[0][11], VAR75) FUN13(VAR71[0][13], VAR76) FUN13(VAR71[0][15], VAR77) FUN13(VAR71[1][5], VAR78) FUN13(VAR71[1][7], VAR79) FUN13(VAR71[1][9], VAR80) FUN13(VAR71[1][11], VAR81) FUN13(VAR71[1][13], VAR82) FUN13(VAR71[1][15], VAR83)
    }
    {
        static VAR84 *VAR85 = NULL;
        if (!VAR85)
            VAR85 = fopen("", "");
        fprintf(VAR85, "", VAR7, VAR9->VAR86, VAR7 * (double)VAR9->VAR86);
    }
    if (VAR9->VAR87)
        VAR15 = VAR9->VAR88 * VAR9->VAR89 / (float)(VAR9->VAR90 * VAR9->VAR87);
    else
        VAR15 = 0;
    if (VAR9->VAR89 != VAR2->VAR89 || VAR9->VAR90 != VAR2->VAR90 || FUN14(VAR15 - VAR2->VAR91) > 0.001)
    {
        FUN15(VAR9);
        VAR9->VAR36 = 0;
    }
    if (!VAR9->VAR36)
    {
        VAR2->VAR89 = VAR9->VAR89;
        VAR2->VAR90 = VAR9->VAR90;
        VAR2->VAR91 = VAR15;
        goto VAR32;
    }
    if ((VAR9->VAR26 == VAR92 || VAR9->VAR26 == VAR93))
        VAR9->VAR94 = FUN16(VAR9);
    if (VAR11 == VAR95)
        return FUN17(VAR9, VAR7);
    if (VAR11 < 0)
    {
        fprintf(VAR28, "");
        return -1;
    }
    VAR9->VAR96.VAR97 = VAR9->VAR97;
    VAR9->VAR96.VAR98 = VAR9->VAR97 == VAR99;
    if (VAR9->VAR100.VAR3[0] == NULL && VAR9->VAR97 == VAR101)
        return FUN17(VAR9, VAR7);
    if (VAR2->VAR102 && VAR9->VAR97 == VAR101)
        return FUN17(VAR9, VAR7);
    if (VAR2->VAR102 >= 5)
        return FUN17(VAR9, VAR7);
    if (VAR9->VAR103)
    {
        if (VAR9->VAR97 == VAR101)
            return FUN17(VAR9, VAR7);
        else
            VAR9->VAR103 = 0;
    }
    if (FUN18(VAR9, VAR2) < 0)
        return -1;
    FUN3("", VAR9->VAR86);
    if (VAR9->VAR104)
        memset(VAR9->VAR105, VAR106 | VAR107 | VAR108 | VAR109 | VAR110 | VAR111 | VAR112, VAR9->VAR113 * sizeof(VAR5));
    VAR9->VAR114[0] = VAR9->VAR114[1] = VAR9->VAR114[2] = VAR9->VAR114[3] = VAR9->VAR115 * 2 + 2;
    VAR9->VAR114[4] = VAR9->VAR114[5] = VAR9->VAR115 + 2;
    VAR9->VAR116 = 0;
    VAR9->VAR117 = 0;
    FUN19(VAR9);
    VAR9->VAR105[0] |= VAR109;
    while (VAR9->VAR117 < VAR9->VAR118 && VAR9->VAR34.VAR119 - FUN20(&VAR9->VAR34) > 16)
    {
        if (VAR9->VAR37)
        {
            if (VAR9->VAR116 != 0 || (VAR9->VAR117 % VAR9->VAR120) != 0)
                break;
        }
        else
        {
            if (FUN21(VAR9) < 0)
                break;
        }
        if (VAR9->VAR37 < 4 && VAR9->VAR38)
            FUN22(VAR9);
        FUN19(VAR9);
        VAR9->VAR105[VAR9->VAR121 + VAR9->VAR122 * VAR9->VAR115] |= VAR109;
    }
    if (VAR9->VAR123 && VAR9->VAR37 < 4 && VAR9->VAR97 == VAR99)
        if (FUN23(VAR9, VAR7) < 0)
        {
            VAR9->VAR105[VAR9->VAR113 - 1] = VAR107 | VAR108 | VAR106;
        }
    if (VAR9->VAR26 == VAR27 && VAR9->VAR33 == 0 && VAR9->VAR55 >= 500)
    {
        int VAR124 = FUN20(&VAR9->VAR34) >> 3;
        if (VAR7 - VAR124 > 5 && VAR7 - VAR124 < VAR125)
        {
            int VAR12;
            int VAR126 = 0;
            for (VAR12 = VAR124; VAR12 < VAR7 - 3; VAR12++)
            {
                if (VAR6[VAR12] == 0 && VAR6[VAR12 + 1] == 0 && VAR6[VAR12 + 2] == 1 && VAR6[VAR12 + 3] == 0xB6)
                {
                    VAR126 = 1;
                    break;
                }
            }
            if (VAR126)
            {
                memcpy(VAR9->VAR35, VAR6 + VAR124, VAR7 - VAR124);
                VAR9->VAR33 = VAR7 - VAR124;
            }
        }
    }
    if (VAR9->VAR104)
    {
        int VAR127 = 0, VAR128 = 0;
        for (VAR12 = 0; VAR12 < VAR9->VAR113; VAR12++)
        {
            int VAR129 = VAR9->VAR105[VAR12];
            if (VAR12 % VAR9->VAR115 == 0)
                FUN3("");
            FUN3("", VAR129);
            if (VAR129 == 0)
                continue;
            if (VAR129 & (VAR108 | VAR107 | VAR106))
                VAR127 = 1;
            if (VAR129 & VAR109)
            {
                if (VAR128)
                    VAR127 = 1;
                VAR128 = 3;
            }
            if (VAR129 & VAR110)
                VAR128--;
            if (VAR129 & VAR111)
                VAR128--;
            if (VAR129 & VAR112)
                VAR128--;
        }
        if (VAR128 || VAR127)
        {
            fprintf(VAR28, "");
            FUN24(VAR9);
        }
    }
    FUN25(VAR9);
    if ((VAR2->VAR130 & VAR131) && VAR9->VAR100.VAR3[0])
    {
        const int VAR132 = 1 + VAR9->VAR133;
        int VAR117;
        VAR134 *VAR135 = VAR9->VAR100.VAR3[0];
        VAR9->VAR43 = 0;
        for (VAR117 = 0; VAR117 < VAR9->VAR118; VAR117++)
        {
            int VAR116;
            for (VAR116 = 0; VAR116 < VAR9->VAR115; VAR116++)
            {
                const int VAR136 = VAR116 + VAR117 * VAR9->VAR115;
                if (VAR9->VAR137[VAR136] == VAR138)
                {
                    int VAR12;
                    for (VAR12 = 0; VAR12 < 4; VAR12++)
                    {
                        int VAR139 = VAR116 * 16 + 4 + 8 * (VAR12 & 1);
                        int VAR140 = VAR117 * 16 + 4 + 8 * (VAR12 >> 1);
                        int VAR141 = 1 + VAR116 * 2 + (VAR12 & 1) + (VAR117 * 2 + 1 + (VAR12 >> 1)) * (VAR9->VAR115 * 2 + 2);
                        int VAR142 = (VAR9->VAR143[VAR141][0] >> VAR132) + VAR139;
                        int VAR144 = (VAR9->VAR143[VAR141][1] >> VAR132) + VAR140;
                        FUN26(VAR135, VAR139, VAR140, VAR142, VAR144, VAR9->VAR89, VAR9->VAR90, VAR9->VAR145, 100);
                    }
                }
                else
                {
                    int VAR139 = VAR116 * 16 + 8;
                    int VAR140 = VAR117 * 16 + 8;
                    int VAR141 = 1 + VAR116 * 2 + (VAR117 * 2 + 1) * (VAR9->VAR115 * 2 + 2);
                    int VAR142 = (VAR9->VAR143[VAR141][0] >> VAR132) + VAR139;
                    int VAR144 = (VAR9->VAR143[VAR141][1] >> VAR132) + VAR140;
                    FUN26(VAR135, VAR139, VAR140, VAR142, VAR144, VAR9->VAR89, VAR9->VAR90, VAR9->VAR145, 100);
                }
                VAR9->VAR146[VAR136] = 0;
            }
        }
    }
    if (VAR9->VAR97 == VAR101 || VAR9->VAR43)
    {
        *VAR14 = *(VAR13 *)&VAR9->VAR96;
    }
    else
    {
        *VAR14 = *(VAR13 *)&VAR9->VAR100;
    }
    if (VAR2->VAR130 & VAR147)
    {
        VAR148 *VAR149 = VAR14->VAR150;
        int VAR151, VAR152;
        for (VAR152 = 0; VAR152 < VAR9->VAR118; VAR152++)
        {
            for (VAR151 = 0; VAR151 < VAR9->VAR115; VAR151++)
            {
                FUN3("", VAR149[VAR151 + VAR152 * VAR9->VAR115]);
            }
            FUN3("");
        }
        FUN3("");
    }
    VAR2->VAR17 = VAR9->VAR40 - 1;
    if (VAR9->VAR100.VAR3[0] || VAR9->VAR43)
        *VAR4 = sizeof(VAR13);
    FUN3("", FUN2() - VAR16);
    return FUN17(VAR9, VAR7);
}