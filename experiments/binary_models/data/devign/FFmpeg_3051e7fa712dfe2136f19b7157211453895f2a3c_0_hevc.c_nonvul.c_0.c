static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5->VAR4;
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8, VAR9, VAR10;
    VAR7->VAR11 = FUN2(VAR4);
    if ((FUN3(VAR2) || FUN4(VAR2)) && VAR7->VAR11)
    {
        VAR2->VAR12 = (VAR2->VAR12 + 1) & 0xff;
        VAR2->VAR13 = VAR14;
        if (FUN3(VAR2))
            FUN5(VAR2);
    }
    VAR7->VAR15 = 0;
    if (FUN6(VAR2))
        VAR7->VAR15 = FUN2(VAR4);
    VAR7->VAR16 = FUN7(VAR4);
    if (VAR7->VAR16 >= VAR17 || !VAR2->VAR18[VAR7->VAR16])
    {
        FUN8(VAR2->VAR19, VAR20, "", VAR7->VAR16);
        return VAR21;
    }
    if (!VAR7->VAR11 && VAR2->VAR22 != (VAR23 *)VAR2->VAR18[VAR7->VAR16]->VAR24)
    {
        FUN8(VAR2->VAR19, VAR20, "");
        return VAR21;
    }
    VAR2->VAR22 = (VAR23 *)VAR2->VAR18[VAR7->VAR16]->VAR24;
    if (VAR2->VAR25 == VAR26 && VAR2->VAR27 == 1)
        VAR7->VAR15 = 1;
    if (VAR2->VAR28 != (VAR29 *)VAR2->VAR30[VAR2->VAR22->VAR31]->VAR24)
    {
        const VAR29 *VAR32 = VAR2->VAR28;
        VAR2->VAR28 = (VAR29 *)VAR2->VAR30[VAR2->VAR22->VAR31]->VAR24;
        if (VAR32 && FUN6(VAR2) && VAR2->VAR25 != VAR26)
        {
            if (VAR2->VAR28->VAR33 != VAR32->VAR33 || VAR2->VAR28->VAR34 != VAR32->VAR34 || VAR2->VAR28->VAR35[VAR2->VAR28->VAR36 - 1].VAR37 != VAR32->VAR35[VAR32->VAR36 - 1].VAR37)
                VAR7->VAR15 = 0;
        }
        FUN5(VAR2);
        VAR10 = FUN9(VAR2, VAR2->VAR28, VAR38);
        if (VAR10 < 0)
            return VAR10;
        VAR2->VAR12 = (VAR2->VAR12 + 1) & 0xff;
        VAR2->VAR13 = VAR14;
    }
    VAR7->VAR39 = 0;
    if (!VAR7->VAR11)
    {
        int VAR40;
        if (VAR2->VAR22->VAR41)
            VAR7->VAR39 = FUN2(VAR4);
        VAR40 = FUN10(VAR2->VAR28->VAR42 * VAR2->VAR28->VAR43);
        VAR7->VAR44 = FUN11(VAR4, VAR40);
        if (VAR7->VAR44 >= VAR2->VAR28->VAR42 * VAR2->VAR28->VAR43)
        {
            FUN8(VAR2->VAR19, VAR20, "", VAR7->VAR44);
            return VAR21;
        }
        if (!VAR7->VAR39)
        {
            VAR7->VAR45 = VAR7->VAR44;
            VAR2->VAR46++;
        }
    }
    else
    {
        VAR7->VAR44 = VAR7->VAR45 = 0;
        VAR2->VAR46 = 0;
        VAR2->VAR47 = 0;
    }
    if (!VAR7->VAR39)
    {
        VAR2->VAR47 = 0;
        for (VAR8 = 0; VAR8 < VAR2->VAR22->VAR48; VAR8++)
            FUN12(VAR4, 1);
        VAR7->VAR49 = FUN7(VAR4);
        if (!(VAR7->VAR49 == VAR50 || VAR7->VAR49 == VAR51 || VAR7->VAR49 == VAR52))
        {
            FUN8(VAR2->VAR19, VAR20, "", VAR7->VAR49);
            return VAR21;
        }
        if (FUN6(VAR2) && VAR7->VAR49 != VAR50)
        {
            FUN8(VAR2->VAR19, VAR20, "");
            return VAR21;
        }
        VAR7->VAR53 = 1;
        if (VAR2->VAR22->VAR54)
            VAR7->VAR53 = FUN2(VAR4);
        if (VAR2->VAR28->VAR55)
            VAR7->VAR56 = FUN11(VAR4, 2);
        if (!FUN3(VAR2))
        {
            int VAR57;
            VAR7->VAR58 = FUN11(VAR4, VAR2->VAR28->VAR59);
            VAR57 = FUN13(VAR2, VAR7->VAR58);
            if (!VAR7->VAR11 && VAR57 != VAR2->VAR57)
            {
                FUN8(VAR2->VAR19, VAR60, "", VAR2->VAR57, VAR57);
                if (VAR2->VAR19->VAR61 & VAR62)
                    return VAR21;
                VAR57 = VAR2->VAR57;
            }
            VAR2->VAR57 = VAR57;
            VAR7->VAR63 = FUN2(VAR4);
            if (!VAR7->VAR63)
            {
                int VAR64 = FUN14(VAR4);
                VAR10 = FUN15(VAR2, &VAR7->VAR65, VAR2->VAR28, 1);
                if (VAR10 < 0)
                    return VAR10;
                VAR7->VAR66 = VAR64 - FUN14(VAR4);
                VAR7->VAR67 = &VAR7->VAR65;
            }
            else
            {
                int VAR68, VAR69;
                if (!VAR2->VAR28->VAR70)
                {
                    FUN8(VAR2->VAR19, VAR20, "");
                    return VAR21;
                }
                VAR68 = FUN10(VAR2->VAR28->VAR70);
                VAR69 = VAR68 > 0 ? FUN11(VAR4, VAR68) : 0;
                VAR7->VAR67 = &VAR2->VAR28->VAR71[VAR69];
            }
            VAR10 = FUN16(VAR2, &VAR7->VAR72, VAR4);
            if (VAR10 < 0)
            {
                FUN8(VAR2->VAR19, VAR60, "");
                if (VAR2->VAR19->VAR61 & VAR62)
                    return VAR21;
            }
            if (VAR2->VAR28->VAR73)
                VAR7->VAR74 = FUN2(VAR4);
            else
                VAR7->VAR74 = 0;
        }
        else
        {
            VAR2->VAR7.VAR67 = NULL;
            VAR2->VAR57 = 0;
        }
        if (VAR2->VAR75 == 0 && VAR2->VAR25 != VAR76 && VAR2->VAR25 != VAR77 && VAR2->VAR25 != VAR78 && VAR2->VAR25 != VAR79 && VAR2->VAR25 != VAR80 && VAR2->VAR25 != VAR81 && VAR2->VAR25 != VAR82)
            VAR2->VAR83 = VAR2->VAR57;
        if (VAR2->VAR28->VAR84)
        {
            VAR7->VAR85[0] = FUN2(VAR4);
            if (VAR2->VAR28->VAR86)
            {
                VAR7->VAR85[1] = VAR7->VAR85[2] = FUN2(VAR4);
            }
        }
        else
        {
            VAR7->VAR85[0] = 0;
            VAR7->VAR85[1] = 0;
            VAR7->VAR85[2] = 0;
        }
        VAR7->VAR87[VAR88] = VAR7->VAR87[VAR89] = 0;
        if (VAR7->VAR49 == VAR51 || VAR7->VAR49 == VAR52)
        {
            int VAR87;
            VAR7->VAR87[VAR88] = VAR2->VAR22->VAR90;
            if (VAR7->VAR49 == VAR52)
                VAR7->VAR87[VAR89] = VAR2->VAR22->VAR91;
            if (FUN2(VAR4))
            {
                VAR7->VAR87[VAR88] = FUN7(VAR4) + 1;
                if (VAR7->VAR49 == VAR52)
                    VAR7->VAR87[VAR89] = FUN7(VAR4) + 1;
            }
            if (VAR7->VAR87[VAR88] > VAR92 || VAR7->VAR87[VAR89] > VAR92)
            {
                FUN8(VAR2->VAR19, VAR20, "", VAR7->VAR87[VAR88], VAR7->VAR87[VAR89]);
                return VAR21;
            }
            VAR7->VAR93[0] = 0;
            VAR7->VAR93[1] = 0;
            VAR87 = FUN17(VAR2);
            if (!VAR87)
            {
                FUN8(VAR2->VAR19, VAR20, "");
                return VAR21;
            }
            if (VAR2->VAR22->VAR94 && VAR87 > 1)
            {
                VAR7->VAR93[0] = FUN2(VAR4);
                if (VAR7->VAR93[0])
                {
                    for (VAR8 = 0; VAR8 < VAR7->VAR87[VAR88]; VAR8++)
                        VAR7->VAR95[0][VAR8] = FUN11(VAR4, FUN10(VAR87));
                }
                if (VAR7->VAR49 == VAR52)
                {
                    VAR7->VAR93[1] = FUN2(VAR4);
                    if (VAR7->VAR93[1] == 1)
                        for (VAR8 = 0; VAR8 < VAR7->VAR87[VAR89]; VAR8++)
                            VAR7->VAR95[1][VAR8] = FUN11(VAR4, FUN10(VAR87));
                }
            }
            if (VAR7->VAR49 == VAR52)
                VAR7->VAR96 = FUN2(VAR4);
            if (VAR2->VAR22->VAR97)
                VAR7->VAR98 = FUN2(VAR4);
            else
                VAR7->VAR98 = 0;
            VAR7->VAR99 = 0;
            if (VAR7->VAR74)
            {
                VAR7->VAR100 = VAR88;
                if (VAR7->VAR49 == VAR52)
                    VAR7->VAR100 = !FUN2(VAR4);
                if (VAR7->VAR87[VAR7->VAR100] > 1)
                {
                    VAR7->VAR99 = FUN7(VAR4);
                    if (VAR7->VAR99 >= VAR7->VAR87[VAR7->VAR100])
                    {
                        FUN8(VAR2->VAR19, VAR20, "", VAR7->VAR99);
                        return VAR21;
                    }
                }
            }
            if ((VAR2->VAR22->VAR101 && VAR7->VAR49 == VAR51) || (VAR2->VAR22->VAR102 && VAR7->VAR49 == VAR52))
            {
                FUN18(VAR2, VAR4);
            }
            VAR7->VAR103 = 5 - FUN7(VAR4);
            if (VAR7->VAR103 < 1 || VAR7->VAR103 > 5)
            {
                FUN8(VAR2->VAR19, VAR20, "", VAR7->VAR103);
                return VAR21;
            }
        }
        VAR7->VAR104 = FUN19(VAR4);
        if (VAR2->VAR22->VAR105)
        {
            VAR7->VAR106 = FUN19(VAR4);
            VAR7->VAR107 = FUN19(VAR4);
        }
        else
        {
            VAR7->VAR106 = 0;
            VAR7->VAR107 = 0;
        }
        if (VAR2->VAR22->VAR108)
            VAR7->VAR109 = FUN2(VAR4);
        else
            VAR7->VAR109 = 0;
        if (VAR2->VAR22->VAR110)
        {
            int VAR111 = 0;
            if (VAR2->VAR22->VAR112)
                VAR111 = FUN2(VAR4);
            if (VAR111)
            {
                VAR7->VAR113 = FUN2(VAR4);
                if (!VAR7->VAR113)
                {
                    VAR7->VAR114 = FUN19(VAR4) * 2;
                    VAR7->VAR115 = FUN19(VAR4) * 2;
                }
            }
            else
            {
                VAR7->VAR113 = VAR2->VAR22->VAR116;
                VAR7->VAR114 = VAR2->VAR22->VAR114;
                VAR7->VAR115 = VAR2->VAR22->VAR115;
            }
        }
        else
        {
            VAR7->VAR113 = 0;
            VAR7->VAR114 = 0;
            VAR7->VAR115 = 0;
        }
        if (VAR2->VAR22->VAR117 && (VAR7->VAR85[0] || VAR7->VAR85[1] || !VAR7->VAR113))
        {
            VAR7->VAR118 = FUN2(VAR4);
        }
        else
        {
            VAR7->VAR118 = VAR2->VAR22->VAR117;
        }
    }
    else if (!VAR2->VAR47)
    {
        FUN8(VAR2->VAR19, VAR20, "");
        return VAR21;
    }
    VAR7->VAR119 = 0;
    if (VAR2->VAR22->VAR120 || VAR2->VAR22->VAR121)
    {
        unsigned VAR119 = FUN7(VAR4);
        if (VAR119 > FUN14(VAR4))
        {
            FUN8(VAR2->VAR19, VAR20, "", VAR119);
            return VAR21;
        }
        VAR7->VAR119 = VAR119;
        if (VAR7->VAR119 > 0)
        {
            int VAR122 = FUN7(VAR4) + 1;
            if (VAR122 < 1 || VAR122 > 32)
            {
                VAR7->VAR119 = 0;
                FUN8(VAR2->VAR19, VAR20, "", VAR122);
                return VAR21;
            }
            FUN20(&VAR7->VAR123);
            FUN20(&VAR7->VAR124);
            FUN20(&VAR7->VAR125);
            VAR7->VAR123 = FUN21(VAR7->VAR119, sizeof(int));
            VAR7->VAR124 = FUN21(VAR7->VAR119, sizeof(int));
            VAR7->VAR125 = FUN21(VAR7->VAR119, sizeof(int));
            if (!VAR7->VAR123 || !VAR7->VAR124 || !VAR7->VAR125)
            {
                VAR7->VAR119 = 0;
                FUN8(VAR2->VAR19, VAR20, "");
                return FUN22(VAR126);
            }
            for (VAR8 = 0; VAR8 < VAR7->VAR119; VAR8++)
            {
                unsigned VAR127 = FUN23(VAR4, VAR122);
                VAR7->VAR123[VAR8] = VAR127 + 1;
            }
            if (VAR2->VAR128 > 1 && (VAR2->VAR22->VAR129 > 1 || VAR2->VAR22->VAR130 > 1))
            {
                VAR2->VAR131 = 0;
                VAR2->VAR128 = 1;
            }
            else
                VAR2->VAR131 = 0;
        }
        else
            VAR2->VAR131 = 0;
    }
    if (VAR2->VAR22->VAR132)
    {
        unsigned int VAR133 = FUN7(VAR4);
        if (VAR133 * 8LL > FUN14(VAR4))
        {
            FUN8(VAR2->VAR19, VAR20, "");
            return VAR21;
        }
        for (VAR8 = 0; VAR8 < VAR133; VAR8++)
            FUN12(VAR4, 8);
    }
    VAR7->VAR134 = 26U + VAR2->VAR22->VAR135 + VAR7->VAR104;
    if (VAR7->VAR134 > 51 || VAR7->VAR134 < -VAR2->VAR28->VAR136)
    {
        FUN8(VAR2->VAR19, VAR20, ""
                                       "",
               VAR7->VAR134, -VAR2->VAR28->VAR136);
        return VAR21;
    }
    VAR7->VAR137 = VAR7->VAR44;
    if (!VAR2->VAR7.VAR137 && VAR2->VAR7.VAR39)
    {
        FUN8(VAR2->VAR19, VAR20, "");
        return VAR21;
    }
    if (FUN14(VAR4) < 0)
    {
        FUN8(VAR2->VAR19, VAR20, "", -FUN14(VAR4));
        return VAR21;
    }
    VAR2->VAR5->VAR138 = !VAR2->VAR7.VAR39;
    if (!VAR2->VAR22->VAR139)
        VAR2->VAR5->VAR140 = VAR2->VAR7.VAR134;
    VAR2->VAR47 = 1;
    VAR2->VAR5->VAR141.VAR142 = 0;
    VAR2->VAR5->VAR141.VAR143 = 0;
    return 0;
}