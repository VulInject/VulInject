static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5->VAR4;
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8, VAR9;
    VAR7->VAR10 = FUN2(VAR4);
    if ((FUN3(VAR2) || FUN4(VAR2)) && VAR7->VAR10)
    {
        VAR2->VAR11 = (VAR2->VAR11 + 1) & 0xff;
        VAR2->VAR12 = VAR13;
        if (FUN3(VAR2))
            FUN5(VAR2);
    }
    VAR7->VAR14 = 0;
    if (FUN6(VAR2))
        VAR7->VAR14 = FUN2(VAR4);
    VAR7->VAR15 = FUN7(VAR4);
    if (VAR7->VAR15 >= VAR16 || !VAR2->VAR17.VAR18[VAR7->VAR15])
    {
        FUN8(VAR2->VAR19, VAR20, "", VAR7->VAR15);
        return VAR21;
    }
    if (!VAR7->VAR10 && VAR2->VAR17.VAR22 != (VAR23 *)VAR2->VAR17.VAR18[VAR7->VAR15]->VAR24)
    {
        FUN8(VAR2->VAR19, VAR20, "");
        return VAR21;
    }
    VAR2->VAR17.VAR22 = (VAR23 *)VAR2->VAR17.VAR18[VAR7->VAR15]->VAR24;
    if (VAR2->VAR25 == VAR26 && VAR2->VAR27 == 1)
        VAR7->VAR14 = 1;
    if (VAR2->VAR17.VAR28 != (VAR29 *)VAR2->VAR17.VAR30[VAR2->VAR17.VAR22->VAR31]->VAR24)
    {
        const VAR29 *VAR28 = (VAR29 *)VAR2->VAR17.VAR30[VAR2->VAR17.VAR22->VAR31]->VAR24;
        const VAR29 *VAR32 = VAR2->VAR17.VAR28;
        enum AVPixelFormat VAR33;
        if (VAR32 && FUN6(VAR2) && VAR2->VAR25 != VAR26)
        {
            if (VAR28->VAR34 != VAR32->VAR34 || VAR28->VAR35 != VAR32->VAR35 || VAR28->VAR36[VAR28->VAR37 - 1].VAR38 != VAR32->VAR36[VAR32->VAR37 - 1].VAR38)
                VAR7->VAR14 = 0;
        }
        FUN5(VAR2);
        VAR33 = FUN9(VAR2, VAR28);
        if (VAR33 < 0)
            return VAR33;
        VAR9 = FUN10(VAR2, VAR28, VAR33);
        if (VAR9 < 0)
            return VAR9;
        VAR2->VAR11 = (VAR2->VAR11 + 1) & 0xff;
        VAR2->VAR12 = VAR13;
    }
    VAR7->VAR39 = 0;
    if (!VAR7->VAR10)
    {
        int VAR40;
        if (VAR2->VAR17.VAR22->VAR41)
            VAR7->VAR39 = FUN2(VAR4);
        VAR40 = FUN11(VAR2->VAR17.VAR28->VAR42 * VAR2->VAR17.VAR28->VAR43);
        VAR7->VAR44 = FUN12(VAR4, VAR40);
        if (VAR7->VAR44 >= VAR2->VAR17.VAR28->VAR42 * VAR2->VAR17.VAR28->VAR43)
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
        for (VAR8 = 0; VAR8 < VAR2->VAR17.VAR22->VAR48; VAR8++)
            FUN13(VAR4, 1);
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
        if (VAR2->VAR17.VAR22->VAR54)
            VAR7->VAR53 = FUN2(VAR4);
        if (VAR2->VAR17.VAR28->VAR55)
            VAR7->VAR56 = FUN14(VAR4, 2);
        if (!FUN3(VAR2))
        {
            int VAR57, VAR58;
            VAR7->VAR59 = FUN14(VAR4, VAR2->VAR17.VAR28->VAR60);
            VAR57 = FUN15(VAR2->VAR17.VAR28, VAR2->VAR61, VAR7->VAR59, VAR2->VAR25);
            if (!VAR7->VAR10 && VAR57 != VAR2->VAR57)
            {
                FUN8(VAR2->VAR19, VAR62, "", VAR2->VAR57, VAR57);
                if (VAR2->VAR19->VAR63 & VAR64)
                    return VAR21;
                VAR57 = VAR2->VAR57;
            }
            VAR2->VAR57 = VAR57;
            VAR7->VAR65 = FUN2(VAR4);
            VAR58 = FUN16(VAR4);
            if (!VAR7->VAR65)
            {
                VAR9 = FUN17(VAR4, VAR2->VAR19, &VAR7->VAR66, VAR2->VAR17.VAR28, 1);
                if (VAR9 < 0)
                    return VAR9;
                VAR7->VAR67 = &VAR7->VAR66;
            }
            else
            {
                int VAR68, VAR69;
                if (!VAR2->VAR17.VAR28->VAR70)
                {
                    FUN8(VAR2->VAR19, VAR20, "");
                    return VAR21;
                }
                VAR68 = FUN11(VAR2->VAR17.VAR28->VAR70);
                VAR69 = VAR68 > 0 ? FUN14(VAR4, VAR68) : 0;
                VAR7->VAR67 = &VAR2->VAR17.VAR28->VAR71[VAR69];
            }
            VAR7->VAR72 = VAR58 - FUN16(VAR4);
            VAR58 = FUN16(VAR4);
            VAR9 = FUN18(VAR2, &VAR7->VAR73, VAR4);
            if (VAR9 < 0)
            {
                FUN8(VAR2->VAR19, VAR62, "");
                if (VAR2->VAR19->VAR63 & VAR64)
                    return VAR21;
            }
            VAR7->VAR74 = VAR58 - FUN16(VAR4);
            if (VAR2->VAR17.VAR28->VAR75)
                VAR7->VAR76 = FUN2(VAR4);
            else
                VAR7->VAR76 = 0;
        }
        else
        {
            VAR2->VAR7.VAR67 = NULL;
            VAR2->VAR57 = 0;
        }
        if (VAR7->VAR10 && VAR2->VAR77 == 0 && VAR2->VAR25 != VAR78 && VAR2->VAR25 != VAR79 && VAR2->VAR25 != VAR80 && VAR2->VAR25 != VAR81 && VAR2->VAR25 != VAR82 && VAR2->VAR25 != VAR83 && VAR2->VAR25 != VAR84)
            VAR2->VAR61 = VAR2->VAR57;
        if (VAR2->VAR17.VAR28->VAR85)
        {
            VAR7->VAR86[0] = FUN2(VAR4);
            if (VAR2->VAR17.VAR28->VAR87)
            {
                VAR7->VAR86[1] = VAR7->VAR86[2] = FUN2(VAR4);
            }
        }
        else
        {
            VAR7->VAR86[0] = 0;
            VAR7->VAR86[1] = 0;
            VAR7->VAR86[2] = 0;
        }
        VAR7->VAR88[VAR89] = VAR7->VAR88[VAR90] = 0;
        if (VAR7->VAR49 == VAR51 || VAR7->VAR49 == VAR52)
        {
            int VAR88;
            VAR7->VAR88[VAR89] = VAR2->VAR17.VAR22->VAR91;
            if (VAR7->VAR49 == VAR52)
                VAR7->VAR88[VAR90] = VAR2->VAR17.VAR22->VAR92;
            if (FUN2(VAR4))
            {
                VAR7->VAR88[VAR89] = FUN7(VAR4) + 1;
                if (VAR7->VAR49 == VAR52)
                    VAR7->VAR88[VAR90] = FUN7(VAR4) + 1;
            }
            if (VAR7->VAR88[VAR89] > VAR93 || VAR7->VAR88[VAR90] > VAR93)
            {
                FUN8(VAR2->VAR19, VAR20, "", VAR7->VAR88[VAR89], VAR7->VAR88[VAR90]);
                return VAR21;
            }
            VAR7->VAR94[0] = 0;
            VAR7->VAR94[1] = 0;
            VAR88 = FUN19(VAR2);
            if (!VAR88)
            {
                FUN8(VAR2->VAR19, VAR20, "");
                return VAR21;
            }
            if (VAR2->VAR17.VAR22->VAR95 && VAR88 > 1)
            {
                VAR7->VAR94[0] = FUN2(VAR4);
                if (VAR7->VAR94[0])
                {
                    for (VAR8 = 0; VAR8 < VAR7->VAR88[VAR89]; VAR8++)
                        VAR7->VAR96[0][VAR8] = FUN14(VAR4, FUN11(VAR88));
                }
                if (VAR7->VAR49 == VAR52)
                {
                    VAR7->VAR94[1] = FUN2(VAR4);
                    if (VAR7->VAR94[1] == 1)
                        for (VAR8 = 0; VAR8 < VAR7->VAR88[VAR90]; VAR8++)
                            VAR7->VAR96[1][VAR8] = FUN14(VAR4, FUN11(VAR88));
                }
            }
            if (VAR7->VAR49 == VAR52)
                VAR7->VAR97 = FUN2(VAR4);
            if (VAR2->VAR17.VAR22->VAR98)
                VAR7->VAR99 = FUN2(VAR4);
            else
                VAR7->VAR99 = 0;
            VAR7->VAR100 = 0;
            if (VAR7->VAR76)
            {
                VAR7->VAR101 = VAR89;
                if (VAR7->VAR49 == VAR52)
                    VAR7->VAR101 = !FUN2(VAR4);
                if (VAR7->VAR88[VAR7->VAR101] > 1)
                {
                    VAR7->VAR100 = FUN7(VAR4);
                    if (VAR7->VAR100 >= VAR7->VAR88[VAR7->VAR101])
                    {
                        FUN8(VAR2->VAR19, VAR20, "", VAR7->VAR100);
                        return VAR21;
                    }
                }
            }
            if ((VAR2->VAR17.VAR22->VAR102 && VAR7->VAR49 == VAR51) || (VAR2->VAR17.VAR22->VAR103 && VAR7->VAR49 == VAR52))
            {
                FUN20(VAR2, VAR4);
            }
            VAR7->VAR104 = 5 - FUN7(VAR4);
            if (VAR7->VAR104 < 1 || VAR7->VAR104 > 5)
            {
                FUN8(VAR2->VAR19, VAR20, "", VAR7->VAR104);
                return VAR21;
            }
        }
        VAR7->VAR105 = FUN21(VAR4);
        if (VAR2->VAR17.VAR22->VAR106)
        {
            VAR7->VAR107 = FUN21(VAR4);
            VAR7->VAR108 = FUN21(VAR4);
        }
        else
        {
            VAR7->VAR107 = 0;
            VAR7->VAR108 = 0;
        }
        if (VAR2->VAR17.VAR22->VAR109)
            VAR7->VAR110 = FUN2(VAR4);
        else
            VAR7->VAR110 = 0;
        if (VAR2->VAR17.VAR22->VAR111)
        {
            int VAR112 = 0;
            if (VAR2->VAR17.VAR22->VAR113)
                VAR112 = FUN2(VAR4);
            if (VAR112)
            {
                VAR7->VAR114 = FUN2(VAR4);
                if (!VAR7->VAR114)
                {
                    int VAR115 = FUN21(VAR4);
                    int VAR116 = FUN21(VAR4);
                    if (VAR115 < -6 || VAR115 > 6 || VAR116 < -6 || VAR116 > 6)
                    {
                        FUN8(VAR2->VAR19, VAR20, "", VAR115, VAR116);
                        return VAR21;
                    }
                    VAR7->VAR117 = VAR115 * 2;
                    VAR7->VAR118 = VAR116 * 2;
                }
            }
            else
            {
                VAR7->VAR114 = VAR2->VAR17.VAR22->VAR119;
                VAR7->VAR117 = VAR2->VAR17.VAR22->VAR117;
                VAR7->VAR118 = VAR2->VAR17.VAR22->VAR118;
            }
        }
        else
        {
            VAR7->VAR114 = 0;
            VAR7->VAR117 = 0;
            VAR7->VAR118 = 0;
        }
        if (VAR2->VAR17.VAR22->VAR120 && (VAR7->VAR86[0] || VAR7->VAR86[1] || !VAR7->VAR114))
        {
            VAR7->VAR121 = FUN2(VAR4);
        }
        else
        {
            VAR7->VAR121 = VAR2->VAR17.VAR22->VAR120;
        }
    }
    else if (!VAR2->VAR47)
    {
        FUN8(VAR2->VAR19, VAR20, "");
        return VAR21;
    }
    VAR7->VAR122 = 0;
    if (VAR2->VAR17.VAR22->VAR123 || VAR2->VAR17.VAR22->VAR124)
    {
        unsigned VAR122 = FUN7(VAR4);
        if (VAR122 > FUN16(VAR4))
        {
            FUN8(VAR2->VAR19, VAR20, "", VAR122);
            return VAR21;
        }
        VAR7->VAR122 = VAR122;
        if (VAR7->VAR122 > 0)
        {
            int VAR125 = FUN7(VAR4) + 1;
            if (VAR125 < 1 || VAR125 > 32)
            {
                VAR7->VAR122 = 0;
                FUN8(VAR2->VAR19, VAR20, "", VAR125);
                return VAR21;
            }
            FUN22(&VAR7->VAR126);
            FUN22(&VAR7->VAR127);
            FUN22(&VAR7->VAR128);
            VAR7->VAR126 = FUN23(VAR7->VAR122, sizeof(unsigned));
            VAR7->VAR127 = FUN23(VAR7->VAR122, sizeof(int));
            VAR7->VAR128 = FUN23(VAR7->VAR122, sizeof(int));
            if (!VAR7->VAR126 || !VAR7->VAR127 || !VAR7->VAR128)
            {
                VAR7->VAR122 = 0;
                FUN8(VAR2->VAR19, VAR20, "");
                return FUN24(VAR129);
            }
            for (VAR8 = 0; VAR8 < VAR7->VAR122; VAR8++)
            {
                unsigned VAR130 = FUN25(VAR4, VAR125);
                VAR7->VAR126[VAR8] = VAR130 + 1;
            }
            if (VAR2->VAR131 > 1 && (VAR2->VAR17.VAR22->VAR132 > 1 || VAR2->VAR17.VAR22->VAR133 > 1))
            {
                VAR2->VAR134 = 0;
                VAR2->VAR131 = 1;
            }
            else
                VAR2->VAR134 = 0;
        }
        else
            VAR2->VAR134 = 0;
    }
    if (VAR2->VAR17.VAR22->VAR135)
    {
        unsigned int VAR136 = FUN7(VAR4);
        if (VAR136 * 8LL > FUN16(VAR4))
        {
            FUN8(VAR2->VAR19, VAR20, "");
            return VAR21;
        }
        for (VAR8 = 0; VAR8 < VAR136; VAR8++)
            FUN13(VAR4, 8);
    }
    VAR7->VAR137 = 26U + VAR2->VAR17.VAR22->VAR138 + VAR7->VAR105;
    if (VAR7->VAR137 > 51 || VAR7->VAR137 < -VAR2->VAR17.VAR28->VAR139)
    {
        FUN8(VAR2->VAR19, VAR20, ""
                                       "",
               VAR7->VAR137, -VAR2->VAR17.VAR28->VAR139);
        return VAR21;
    }
    VAR7->VAR140 = VAR7->VAR44;
    if (!VAR2->VAR7.VAR140 && VAR2->VAR7.VAR39)
    {
        FUN8(VAR2->VAR19, VAR20, "");
        return VAR21;
    }
    if (FUN16(VAR4) < 0)
    {
        FUN8(VAR2->VAR19, VAR20, "", -FUN16(VAR4));
        return VAR21;
    }
    VAR2->VAR5->VAR141 = !VAR2->VAR7.VAR39;
    if (!VAR2->VAR17.VAR22->VAR142)
        VAR2->VAR5->VAR143 = VAR2->VAR7.VAR137;
    VAR2->VAR47 = 1;
    VAR2->VAR5->VAR144.VAR145 = 0;
    VAR2->VAR5->VAR144.VAR146 = 0;
    return 0;
}