static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    int VAR14 = 0;
    int VAR15, VAR16;
    float **VAR17;
    float *VAR18;
    float *VAR19;
    VAR20 *VAR21 = VAR2->VAR22;
    int VAR23;
    int VAR24, VAR25;
    float VAR26;
    int VAR27;
    int VAR28;
    int VAR29;
    int VAR30;
    int VAR31;
    int VAR32, VAR33;
    int VAR34;
    VAR21->VAR35 = 0;
    VAR21->VAR36 = FUN2(VAR8, VAR9, VAR21->VAR37, VAR38 + VAR39);
    if (VAR21->VAR36 == VAR40)
    {
        FUN3(VAR2, VAR41, "");
    }
    FUN4(&VAR21->VAR42, VAR21->VAR37, VAR21->VAR36 * 8);
    if ((VAR16 = FUN5(VAR21)) < 0)
    {
        return VAR16;
    }
    VAR2->VAR43 = VAR21->VAR43;
    VAR2->VAR44 = VAR21->VAR44;
    VAR21->VAR45 = VAR46;
    for (VAR15 = 0; VAR15 < (VAR21->VAR47 / 8); VAR15++)
    {
        if ((VAR16 = FUN6(VAR21, 0, VAR15)))
        {
            FUN3(VAR2, VAR41, "");
            return VAR16;
        }
    }
    VAR14 = VAR21->VAR48;
    if (VAR21->VAR49)
        VAR21->VAR50 = VAR51[VAR21->VAR52];
    else
        VAR21->VAR50 = 0;
    VAR23 = FUN7(VAR21->VAR53, VAR21->VAR36) * 8;
    if (VAR21->VAR50 < 0 || VAR21->VAR50 & (VAR54 | VAR55))
    {
        VAR21->VAR50 = FUN8(VAR21->VAR50, 0);
        FUN9(&VAR21->VAR42, (-FUN10(&VAR21->VAR42)) & 31);
        while (VAR23 - FUN10(&VAR21->VAR42) >= 32)
        {
            uint32_t VAR56 = FUN11(&VAR21->VAR42, 32);
            switch (VAR56)
            {
            case 0x5a5a5a5a:
            {
                int VAR57, VAR58;
                VAR21->VAR59 = VAR21->VAR48;
                VAR58 = FUN12(&VAR21->VAR42, 10);
                if ((VAR21->VAR53 != (FUN10(&VAR21->VAR42) >> 3) - 4 + VAR58) && (VAR21->VAR53 != (FUN10(&VAR21->VAR42) >> 3) - 4 + VAR58 + 1))
                    continue;
                FUN13(&VAR21->VAR42, 10);
                VAR21->VAR50 |= VAR54;
                if ((VAR57 = FUN14(&VAR21->VAR42, 4)) != 1)
                {
                    FUN3(VAR2, VAR41, ""
                                                "",
                           VAR57);
                    continue;
                }
                if (VAR21->VAR59 < 2)
                {
                    FUN15(VAR2, "");
                    continue;
                }
                FUN16(VAR21, VAR21->VAR59, 0);
                for (VAR15 = 0; VAR15 < (VAR21->VAR47 / 8); VAR15++)
                    if ((VAR16 = FUN6(VAR21, VAR21->VAR59, VAR15)))
                    {
                        FUN3(VAR2, VAR41, "");
                        continue;
                    }
                VAR21->VAR35 = 1;
                break;
            }
            case 0x47004a03:
                VAR21->VAR50 |= VAR55;
                FUN17(VAR21);
                break;
            case 0x1d95f262:
            {
                int VAR60 = FUN12(&VAR21->VAR42, 12) + 1;
                if (VAR21->VAR53 != (FUN10(&VAR21->VAR42) >> 3) - 4 + VAR60)
                    continue;
                FUN3(VAR2, VAR61, "", FUN10(&VAR21->VAR42));
                FUN13(&VAR21->VAR42, 12);
                FUN3(VAR2, VAR61, "", VAR60);
                FUN3(VAR2, VAR61, "", FUN14(&VAR21->VAR42, 4));
                VAR21->VAR50 |= VAR62;
                break;
            }
            }
            FUN9(&VAR21->VAR42, (-FUN10(&VAR21->VAR42)) & 31);
        }
    }
    else
    {
        FUN9(&VAR21->VAR42, VAR23 - FUN10(&VAR21->VAR42));
    }
    if (VAR21->VAR50 & VAR62)
        VAR21->VAR45 = VAR63;
    else if (VAR21->VAR50 & (VAR54 | VAR55))
        VAR21->VAR45 = VAR64;
    if (VAR21->VAR36 - VAR21->VAR53 > 32 && FUN11(&VAR21->VAR42, 32) == VAR65)
        FUN18(VAR21);
    VAR2->VAR45 = VAR21->VAR45;
    VAR25 = VAR24 = VAR21->VAR48 + !!VAR21->VAR66;
    if (!(VAR21->VAR50 & VAR55) || (VAR21->VAR50 & VAR55 && VAR2->VAR67 > 0 && VAR2->VAR67 < VAR14 + !!VAR21->VAR66 + VAR21->VAR68[0]))
    {
        if (VAR21->VAR69 < 16)
        {
            VAR2->VAR12 = VAR70[VAR21->VAR69];
            if (VAR21->VAR35 && (!VAR2->VAR67 || VAR2->VAR67 > VAR14 + !!VAR21->VAR66))
            {
                VAR2->VAR12 |= VAR71;
                if (VAR21->VAR66)
                {
                    VAR2->VAR12 |= VAR72;
                    VAR21->VAR73 = VAR74[VAR21->VAR69];
                }
                else
                {
                    VAR21->VAR73 = VAR75[VAR21->VAR69];
                }
            }
            else
            {
                VAR24 = VAR14 + !!VAR21->VAR66;
                VAR21->VAR35 = 0;
                if (VAR21->VAR66)
                {
                    VAR2->VAR12 |= VAR72;
                    VAR21->VAR73 = VAR76[VAR21->VAR69];
                }
                else
                    VAR21->VAR73 = VAR77[VAR21->VAR69];
            }
            if (VAR24 > !!VAR21->VAR66 && VAR21->VAR73[VAR24 - 1 - !!VAR21->VAR66] < 0)
                if (FUN19(VAR2->VAR12) != VAR24)
                {
                    FUN3(VAR2, VAR41, "", VAR24, FUN19(VAR2->VAR12));
                }
            if (VAR2->VAR67 == 2 && VAR21->VAR48 > 2)
            {
                VAR24 = 2;
                VAR21->VAR78 = VAR79;
                VAR2->VAR12 = VAR80;
            }
            else if (VAR2->VAR81 & VAR82)
            {
                static const int8_t VAR83[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
                VAR21->VAR73 = VAR83;
            }
            VAR21->VAR84 = VAR85[VAR21->VAR69];
        }
        else
        {
            FUN3(VAR2, VAR41, "", VAR21->VAR69);
        }
        VAR21->VAR86 = 0;
    }
    else
    {
        VAR11 = VAR21->VAR87;
        if (VAR2->VAR67 > 0 && VAR2->VAR67 < VAR21->VAR48)
        {
            VAR24 = VAR14 + !!VAR21->VAR66;
            for (VAR15 = 0; VAR15 < VAR21->VAR88 && VAR24 + VAR21->VAR68[VAR15] <= VAR2->VAR67; VAR15++)
            {
                VAR24 += VAR21->VAR68[VAR15];
                VAR11 |= VAR21->VAR89[VAR15];
            }
        }
        else
        {
            VAR24 = VAR21->VAR48 + !!VAR21->VAR66;
            for (VAR15 = 0; VAR15 < VAR21->VAR88; VAR15++)
            {
                VAR11 |= VAR21->VAR89[VAR15];
            }
        }
        VAR12 = 0;
        for (VAR15 = 0; VAR15 < VAR21->VAR90; ++VAR15)
        {
            if (VAR11 & (1 << VAR15))
            {
                VAR12 |= VAR91[VAR15];
            }
        }
        if (FUN20(VAR11) != FUN20(VAR12))
        {
            FUN3(VAR2, VAR61, "");
        }
        VAR2->VAR12 = VAR12;
        if (!(VAR2->VAR81 & VAR82))
        {
            for (VAR28 = -1, VAR32 = 0; VAR28 < VAR21->VAR88; ++VAR28)
            {
                VAR29 = VAR28 >= 0 ? VAR21->VAR89[VAR28] : VAR21->VAR87;
                for (VAR15 = 0; VAR15 < VAR21->VAR90; VAR15++)
                {
                    if (VAR29 & ~(VAR92 | VAR93) & (1 << VAR15))
                    {
                        VAR30 = VAR91[VAR15];
                        VAR31 = FUN20(VAR12 & (VAR30 - 1));
                        VAR21->VAR94[VAR32++] = VAR31;
                    }
                }
            }
            VAR21->VAR84 = FUN20(VAR12 & (VAR72 - 1));
        }
        else
        {
            for (VAR15 = 0; VAR15 < VAR24; VAR15++)
                VAR21->VAR94[VAR15] = VAR15;
            VAR21->VAR84 = VAR24 - 1;
        }
        VAR21->VAR73 = VAR21->VAR94;
    }
    if (VAR2->VAR24 != VAR24)
    {
        if (VAR2->VAR24)
            FUN3(VAR2, VAR95, "", VAR2->VAR24, VAR24);
        VAR2->VAR24 = VAR24;
    }
    VAR21->VAR96.VAR97 = 256 * (VAR21->VAR47 / 8);
    if ((VAR16 = FUN21(VAR2, &VAR21->VAR96)) < 0)
    {
        FUN3(VAR2, VAR41, "");
        return VAR16;
    }
    VAR17 = (float **)VAR21->VAR96.VAR98;
    if (VAR2->VAR24 < VAR25)
    {
        VAR16 = FUN22(NULL, VAR25 - VAR24, VAR21->VAR96.VAR97, VAR2->VAR99, 0);
        if (VAR16 < 0)
            return VAR16;
        FUN23(&VAR21->VAR100, &VAR21->VAR101, VAR16);
        if (!VAR21->VAR100)
            return FUN24(VAR102);
        VAR16 = FUN25((VAR7 **)VAR21->VAR103, NULL, VAR21->VAR100, VAR25 - VAR24, VAR21->VAR96.VAR97, VAR2->VAR99, 0);
        if (VAR16 < 0)
            return VAR16;
    }
    for (VAR15 = 0; VAR15 < (VAR21->VAR47 / 8); VAR15++)
    {
        int VAR104;
        for (VAR104 = 0; VAR104 < VAR24; VAR104++)
            VAR21->VAR105[VAR104] = VAR17[VAR104] + VAR15 * 256;
        for (; VAR104 < VAR25; VAR104++)
            VAR21->VAR105[VAR104] = VAR21->VAR103[VAR104 - VAR24] + VAR15 * 256;
        FUN26(VAR21, VAR15);
        if ((VAR21->VAR106 & 1) && VAR21->VAR35)
        {
            float *VAR107 = VAR21->VAR105[VAR21->VAR73[VAR21->VAR59]];
            float *VAR108 = VAR21->VAR105[VAR21->VAR73[VAR21->VAR59 - 2]];
            float *VAR109 = VAR21->VAR105[VAR21->VAR73[VAR21->VAR59 - 1]];
            VAR21->VAR110.FUN27(VAR108, VAR107, -VAR111, 256);
            VAR21->VAR110.FUN27(VAR109, VAR107, -VAR111, 256);
        }
        if (VAR21->VAR86)
        {
            VAR104 = VAR14;
            for (VAR28 = 0; VAR28 < VAR21->VAR88; VAR28++)
            {
                VAR34 = VAR104 + VAR21->VAR68[VAR28];
                VAR29 = VAR21->VAR86;
                for (VAR32 = VAR104; VAR32 < VAR34; VAR32++)
                {
                    if (VAR29 & (1 << VAR32))
                    {
                        VAR18 = VAR21->VAR105[VAR21->VAR73[VAR32]];
                        for (VAR33 = 0; VAR33 < VAR34; VAR33++)
                        {
                            VAR27 = VAR21->VAR73[VAR33];
                            VAR26 = VAR21->VAR112[VAR32][VAR33];
                            if (VAR26 != 0.0)
                            {
                                VAR19 = VAR21->VAR105[VAR27];
                                VAR21->VAR110.FUN27(VAR19, VAR18, -VAR26, 256);
                            }
                        }
                    }
                }
                if ((VAR29 & (1 << VAR104)) && VAR21->VAR113[VAR28] != 1.0f)
                {
                    VAR26 = VAR21->VAR113[VAR28];
                    for (VAR32 = 0; VAR32 < VAR104; VAR32++)
                    {
                        VAR18 = VAR21->VAR105[VAR21->VAR73[VAR32]];
                        for (VAR33 = 0; VAR33 < 256; VAR33++)
                            VAR18[VAR33] *= VAR26;
                    }
                    if (VAR21->VAR66)
                    {
                        VAR18 = VAR21->VAR105[VAR21->VAR84];
                        for (VAR33 = 0; VAR33 < 256; VAR33++)
                            VAR18[VAR33] *= VAR26;
                    }
                }
                VAR104 = VAR34;
            }
        }
    }
    VAR13 = 2 * VAR21->VAR66 * (VAR21->VAR47 / 8);
    for (VAR15 = 0; VAR15 < 2 * VAR21->VAR66 * 4; VAR15++)
        VAR21->VAR114[VAR15] = VAR21->VAR114[VAR15 + VAR13];
    *VAR4 = 1;
    *(VAR115 *)VAR3 = VAR21->VAR96;
    return VAR9;