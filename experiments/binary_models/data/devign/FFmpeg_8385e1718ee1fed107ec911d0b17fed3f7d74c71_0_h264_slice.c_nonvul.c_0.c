int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9 = 0;
    int VAR10 = VAR4 == VAR2->VAR11 && !VAR2->VAR12;
    VAR9 = FUN2(VAR2, VAR4, VAR6);
    if (VAR9 < 0)
        return VAR9;
    if (VAR4->VAR13 == 0 || !VAR2->VAR12)
    {
        if (VAR2->VAR14)
        {
            FUN3(VAR2->VAR15, VAR16, "");
            return VAR17;
        }
    }
    if (VAR4->VAR13 == 0)
    {
        if (VAR2->VAR12)
        {
            if (VAR2->VAR18 > 1)
            {
                if (!VAR2->VAR19)
                {
                    FUN3(VAR2->VAR15, VAR20, "");
                    VAR2->VAR19 = 1;
                }
                VAR2->VAR18 = 1;
                return VAR21;
            }
            if (VAR2->VAR22 && FUN4(VAR2) && VAR2->VAR23)
            {
                VAR9 = FUN5(VAR2, VAR2->VAR11, 1);
                VAR2->VAR12 = 0;
                if (VAR9 < 0)
                    return VAR9;
            }
            else if (VAR2->VAR22 && !FUN4(VAR2) && !VAR2->VAR23 && VAR2->VAR24 == VAR25)
            {
                FUN3(VAR2, VAR20, "");
                VAR9 = FUN5(VAR2, VAR2->VAR11, 1);
                VAR2->VAR12 = 0;
                FUN6(&VAR2->VAR22->VAR26, VAR27, 0);
                FUN6(&VAR2->VAR22->VAR26, VAR27, 1);
                VAR2->VAR22 = NULL;
                if (VAR9 < 0)
                    return VAR9;
            }
            else
                return VAR17;
        }
        if (!VAR2->VAR23)
        {
            if (VAR2->VAR22 && !VAR2->VAR28)
            {
                FUN6(&VAR2->VAR22->VAR26, VAR27, VAR2->VAR29 == VAR30);
            }
            VAR2->VAR22 = NULL;
        }
    }
    if (!VAR2->VAR12)
        FUN7(VAR4 == VAR2->VAR11);
    if (VAR2->VAR12 == 0 && !VAR2->VAR23)
    {
        if ((VAR2->VAR15->VAR31 >= VAR32 && !VAR2->VAR33) || (VAR2->VAR15->VAR31 >= VAR34 && VAR4->VAR35 == VAR36) || (VAR2->VAR15->VAR31 >= VAR37 && VAR4->VAR35 != VAR38) || (VAR2->VAR15->VAR31 >= VAR39 && VAR2->VAR24 != VAR25 && VAR2->VAR40.VAR41.VAR42 < 0) || VAR2->VAR15->VAR31 >= VAR43)
        {
            return VAR44;
        }
    }
    if (!VAR10)
    {
        const VAR45 *VAR46 = (const VAR45 *)VAR2->VAR47.VAR48[VAR4->VAR49]->VAR50;
        if (VAR2->VAR47.VAR46->VAR51 != VAR46->VAR51 || VAR2->VAR47.VAR46->VAR52 != VAR46->VAR52)
        {
            FUN3(VAR2->VAR15, VAR16, "");
            return VAR17;
        }
        if (VAR2->VAR47.VAR53 != (const VAR54 *)VAR2->VAR47.VAR55[VAR2->VAR47.VAR46->VAR51]->VAR50)
        {
            FUN3(VAR2->VAR15, VAR16, "");
            return VAR17;
        }
    }
    if (VAR2->VAR12 == 0)
    {
        VAR9 = FUN8(VAR2, VAR4, VAR6, VAR10);
        if (VAR9 < 0)
            return VAR9;
    }
    else
    {
        if (VAR2->VAR29 != VAR4->VAR29 || VAR2->VAR28 != (VAR6->VAR56 == 0))
        {
            FUN3(VAR2->VAR15, VAR16, "", VAR2->VAR29, VAR4->VAR29);
            return VAR17;
        }
        else if (!VAR2->VAR22)
        {
            FUN3(VAR2->VAR15, VAR16, "", VAR2->VAR12 + 1);
            return VAR17;
        }
    }
    FUN9(VAR2->VAR57 == VAR2->VAR58 * VAR2->VAR59);
    if (VAR4->VAR13 << FUN10(VAR2) >= VAR2->VAR57 || VAR4->VAR13 >= VAR2->VAR57)
    {
        FUN3(VAR2->VAR15, VAR16, "");
        return VAR17;
    }
    VAR4->VAR60 = VAR4->VAR61 = VAR4->VAR13 % VAR2->VAR58;
    VAR4->VAR62 = VAR4->VAR63 = (VAR4->VAR13 / VAR2->VAR58) << FUN10(VAR2);
    if (VAR2->VAR29 == VAR30)
        VAR4->VAR62 = VAR4->VAR63 = VAR4->VAR63 + 1;
    FUN9(VAR4->VAR63 < VAR2->VAR59);
    if (!VAR2->VAR14)
    {
        FUN11(VAR2->VAR22->VAR64, &VAR2->VAR22->VAR65, VAR2->VAR47.VAR53, &VAR2->VAR65, VAR2->VAR29, VAR6->VAR56);
        memcpy(VAR2->VAR66, VAR4->VAR66, VAR4->VAR67 * sizeof(*VAR2->VAR66));
        VAR2->VAR67 = VAR4->VAR67;
        VAR2->VAR68 = VAR4->VAR68;
    }
    VAR9 = FUN12(VAR2, VAR4);
    if (VAR9 < 0)
        return VAR9;
    if (VAR2->VAR47.VAR46->VAR69 == 2 && VAR4->VAR35 == VAR36)
    {
        FUN13(VAR2, VAR4, -1);
        if (FUN14(VAR2))
        {
            FUN13(VAR2, VAR4, 0);
            FUN13(VAR2, VAR4, 1);
        }
    }
    if (VAR4->VAR35 == VAR36 && !VAR4->VAR70)
        FUN15(VAR2, VAR4);
    FUN16(VAR2, VAR4);
    if (VAR2->VAR15->VAR71 >= VAR43 || (VAR2->VAR15->VAR71 >= VAR39 && VAR2->VAR24 != VAR25) || (VAR2->VAR15->VAR71 >= VAR37 && VAR4->VAR35 != VAR38) || (VAR2->VAR15->VAR71 >= VAR34 && VAR4->VAR35 == VAR36) || (VAR2->VAR15->VAR71 >= VAR32 && VAR6->VAR56 == 0))
        VAR4->VAR72 = 0;
    if (VAR4->VAR72 == 1 && VAR2->VAR18 > 1)
    {
        if (VAR2->VAR15->VAR73 & VAR74)
        {
            VAR4->VAR72 = 2;
        }
        else
        {
            VAR2->VAR75 = 1;
        }
    }
    VAR4->VAR76 = 15 - FUN17(VAR4->VAR77, VAR4->VAR78) - FUN18(0, VAR2->VAR47.VAR46->VAR79[0], VAR2->VAR47.VAR46->VAR79[1]) + 6 * (VAR2->VAR47.VAR53->VAR80 - 8);
    VAR4->VAR81 = ++VAR2->VAR12;
    if (VAR4->VAR81)
        VAR2->VAR82[(VAR4->VAR81 - 1) & (VAR83 - 1)] = VAR4->VAR62;
    if (VAR2->VAR82[VAR4->VAR81 & (VAR83 - 1)] + 3 >= VAR4->VAR62 && VAR2->VAR82[VAR4->VAR81 & (VAR83 - 1)] <= VAR4->VAR62 && VAR4->VAR81 >= VAR83)
    {
        FUN3(VAR2->VAR15, VAR20, "", VAR4->VAR81, VAR83);
    }
    for (VAR8 = 0; VAR8 < 2; VAR8++)
    {
        int VAR84[16];
        int *VAR85 = VAR2->VAR85[VAR4->VAR81 & (VAR83 - 1)][VAR8];
        for (VAR7 = 0; VAR7 < 16; VAR7++)
        {
            VAR84[VAR7] = 60;
            if (VAR8 < VAR4->VAR86 && VAR7 < VAR4->VAR87[VAR8] && VAR4->VAR88[VAR8][VAR7].VAR89->VAR90->VAR91[0])
            {
                int VAR92;
                VAR93 *VAR91 = VAR4->VAR88[VAR8][VAR7].VAR89->VAR90->VAR91[0]->VAR94;
                for (VAR92 = 0; VAR92 < VAR2->VAR95; VAR92++)
                    if (VAR2->VAR96[VAR92]->VAR90->VAR91[0]->VAR94 == VAR91)
                    {
                        VAR84[VAR7] = VAR92;
                        break;
                    }
                for (VAR92 = 0; VAR92 < VAR2->VAR97; VAR92++)
                    if (VAR2->VAR98[VAR92] && VAR2->VAR98[VAR92]->VAR90->VAR91[0]->VAR94 == VAR91)
                    {
                        VAR84[VAR7] = VAR2->VAR95 + VAR92;
                        break;
                    }
            }
        }
        VAR85[0] = VAR85[1] = -1;
        for (VAR7 = 0; VAR7 < 16; VAR7++)
            VAR85[VAR7 + 2] = 4 * VAR84[VAR7] + (VAR4->VAR88[VAR8][VAR7].VAR99 & 3);
        VAR85[18 + 0] = VAR85[18 + 1] = -1;
        for (VAR7 = 16; VAR7 < 48; VAR7++)
            VAR85[VAR7 + 4] = 4 * VAR84[(VAR7 - 16) >> 1] + (VAR4->VAR88[VAR8][VAR7].VAR99 & 3);
    }
    if (VAR2->VAR15->VAR100 & VAR101)
    {
        FUN3(VAR2->VAR15, VAR102, "", VAR4->VAR81, (VAR2->VAR29 == VAR103 ? "" : VAR2->VAR29 == VAR104 ? ""
                                                                                                                                                                                                                                       : ""),
               VAR4->VAR63 * VAR2->VAR58 + VAR4->VAR61, FUN19(VAR4->VAR105), VAR4->VAR106 ? "" : "", VAR6->VAR107 == VAR25 ? "" : "", VAR2->VAR65.VAR108, VAR2->VAR22->VAR64[0], VAR2->VAR22->VAR64[1], VAR4->VAR87[0], VAR4->VAR87[1], VAR4->VAR109, VAR4->VAR72, VAR4->VAR77, VAR4->VAR78, VAR4->VAR110.VAR111, VAR4->VAR110.VAR111 == 1 && VAR4->VAR110.VAR112 ? "" : "", VAR4->VAR105 == VAR36 ? (VAR4->VAR70 ? "" : "") : "");
    }
    return 0;
}