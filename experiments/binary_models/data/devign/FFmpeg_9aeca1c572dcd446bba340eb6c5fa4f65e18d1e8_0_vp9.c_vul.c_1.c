static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    int VAR23;
    const VAR3 *VAR24;
    if ((VAR21 = FUN2(&VAR8->VAR25, VAR4, VAR5)) < 0)
    {
        FUN3(VAR2, VAR26, "");
        return VAR21;
    }
    if (FUN4(&VAR8->VAR25, 2) != 0x2)
    {
        FUN3(VAR2, VAR26, "");
        return VAR27;
    }
    VAR8->VAR28 = FUN5(&VAR8->VAR25);
    if (FUN5(&VAR8->VAR25))
    {
        FUN3(VAR2, VAR26, "");
        return VAR27;
    }
    if (FUN5(&VAR8->VAR25))
    {
        *VAR6 = FUN4(&VAR8->VAR25, 3);
        return 0;
    }
    VAR8->VAR29 = VAR8->VAR30;
    VAR8->VAR31 = VAR8->VAR32;
    VAR8->VAR32 = !FUN5(&VAR8->VAR25);
    VAR23 = VAR8->VAR33;
    VAR8->VAR33 = !FUN5(&VAR8->VAR25);
    VAR8->VAR34 = FUN5(&VAR8->VAR25);
    VAR8->VAR35 = !VAR8->VAR34 && !VAR23;
    if (VAR8->VAR32)
    {
        if (FUN6(&VAR8->VAR25, 24) != VAR36)
        {
            FUN3(VAR2, VAR26, "");
            return VAR27;
        }
        VAR8->VAR37 = FUN4(&VAR8->VAR25, 3);
        if (VAR8->VAR37 == 7)
        {
            FUN3(VAR2, VAR26, "");
            return VAR27;
        }
        VAR8->VAR38 = FUN5(&VAR8->VAR25);
        VAR8->VAR39 = 0xff;
        VAR17 = FUN4(&VAR8->VAR25, 16) + 1;
        VAR18 = FUN4(&VAR8->VAR25, 16) + 1;
        if (FUN5(&VAR8->VAR25))
            FUN7(&VAR8->VAR25, 32);
    }
    else
    {
        VAR8->VAR40 = VAR8->VAR33 ? FUN5(&VAR8->VAR25) : 0;
        VAR8->VAR41 = VAR8->VAR34 ? 0 : FUN4(&VAR8->VAR25, 2);
        if (VAR8->VAR40)
        {
            if (FUN6(&VAR8->VAR25, 24) != VAR36)
            {
                FUN3(VAR2, VAR26, "");
                return VAR27;
            }
            VAR8->VAR39 = FUN4(&VAR8->VAR25, 8);
            VAR17 = FUN4(&VAR8->VAR25, 16) + 1;
            VAR18 = FUN4(&VAR8->VAR25, 16) + 1;
            if (FUN5(&VAR8->VAR25))
                FUN7(&VAR8->VAR25, 32);
        }
        else
        {
            VAR8->VAR39 = FUN4(&VAR8->VAR25, 8);
            VAR8->VAR42[0] = FUN4(&VAR8->VAR25, 3);
            VAR8->VAR43[0] = FUN5(&VAR8->VAR25);
            VAR8->VAR42[1] = FUN4(&VAR8->VAR25, 3);
            VAR8->VAR43[1] = FUN5(&VAR8->VAR25);
            VAR8->VAR42[2] = FUN4(&VAR8->VAR25, 3);
            VAR8->VAR43[2] = FUN5(&VAR8->VAR25);
            if (!VAR8->VAR44[VAR8->VAR42[0]].VAR45->VAR4[0] || !VAR8->VAR44[VAR8->VAR42[1]].VAR45->VAR4[0] || !VAR8->VAR44[VAR8->VAR42[2]].VAR45->VAR4[0])
            {
                FUN3(VAR2, VAR26, "");
                return VAR27;
            }
            if (FUN5(&VAR8->VAR25))
            {
                VAR17 = VAR8->VAR44[VAR8->VAR42[0]].VAR45->VAR46;
                VAR18 = VAR8->VAR44[VAR8->VAR42[0]].VAR45->VAR47;
            }
            else if (FUN5(&VAR8->VAR25))
            {
                VAR17 = VAR8->VAR44[VAR8->VAR42[1]].VAR45->VAR46;
                VAR18 = VAR8->VAR44[VAR8->VAR42[1]].VAR45->VAR47;
            }
            else if (FUN5(&VAR8->VAR25))
            {
                VAR17 = VAR8->VAR44[VAR8->VAR42[2]].VAR45->VAR46;
                VAR18 = VAR8->VAR44[VAR8->VAR42[2]].VAR45->VAR47;
            }
            else
            {
                VAR17 = FUN4(&VAR8->VAR25, 16) + 1;
                VAR18 = FUN4(&VAR8->VAR25, 16) + 1;
            }
            VAR8->VAR35 &= VAR8->VAR48[VAR49].VAR50.VAR45->VAR46 == VAR17 && VAR8->VAR48[VAR49].VAR50.VAR45->VAR47 == VAR18;
            if (FUN5(&VAR8->VAR25))
                FUN7(&VAR8->VAR25, 32);
            VAR8->VAR51 = FUN5(&VAR8->VAR25);
            VAR8->VAR52 = FUN5(&VAR8->VAR25) ? VAR53 : FUN4(&VAR8->VAR25, 2);
            VAR8->VAR54 = VAR8->VAR43[0] != VAR8->VAR43[1] || VAR8->VAR43[0] != VAR8->VAR43[2];
            if (VAR8->VAR54)
            {
                if (VAR8->VAR43[0] == VAR8->VAR43[1])
                {
                    VAR8->VAR55 = 2;
                    VAR8->VAR56[0] = 0;
                    VAR8->VAR56[1] = 1;
                }
                else if (VAR8->VAR43[0] == VAR8->VAR43[2])
                {
                    VAR8->VAR55 = 1;
                    VAR8->VAR56[0] = 0;
                    VAR8->VAR56[1] = 2;
                }
                else
                {
                    VAR8->VAR55 = 0;
                    VAR8->VAR56[0] = 1;
                    VAR8->VAR56[1] = 2;
                }
            }
        }
    }
    VAR8->VAR57 = VAR8->VAR34 ? 0 : FUN5(&VAR8->VAR25);
    VAR8->VAR58 = VAR8->VAR34 ? 1 : FUN5(&VAR8->VAR25);
    VAR8->VAR59 = VAR10 = FUN4(&VAR8->VAR25, 2);
    VAR8->VAR60.VAR61 = FUN4(&VAR8->VAR25, 6);
    VAR22 = FUN4(&VAR8->VAR25, 3);
    if (VAR8->VAR60.VAR62 != VAR22)
        memset(VAR8->VAR60.VAR63, 0, sizeof(VAR8->VAR60.VAR63));
    VAR8->VAR60.VAR62 = VAR22;
    if ((VAR8->VAR64.VAR65 = FUN5(&VAR8->VAR25)))
    {
        if (FUN5(&VAR8->VAR25))
        {
            for (VAR11 = 0; VAR11 < 4; VAR11++)
                if (FUN5(&VAR8->VAR25))
                    VAR8->VAR64.VAR6[VAR11] = FUN8(&VAR8->VAR25, 6);
            for (VAR11 = 0; VAR11 < 2; VAR11++)
                if (FUN5(&VAR8->VAR25))
                    VAR8->VAR64.VAR66[VAR11] = FUN8(&VAR8->VAR25, 6);
        }
    }
    else
    {
        memset(&VAR8->VAR64, 0, sizeof(VAR8->VAR64));
    }
    VAR8->VAR67 = FUN4(&VAR8->VAR25, 8);
    VAR8->VAR68 = FUN5(&VAR8->VAR25) ? FUN8(&VAR8->VAR25, 4) : 0;
    VAR8->VAR69 = FUN5(&VAR8->VAR25) ? FUN8(&VAR8->VAR25, 4) : 0;
    VAR8->VAR70 = FUN5(&VAR8->VAR25) ? FUN8(&VAR8->VAR25, 4) : 0;
    VAR8->VAR71 = VAR8->VAR67 == 0 && VAR8->VAR68 == 0 && VAR8->VAR69 == 0 && VAR8->VAR70 == 0;
    if ((VAR8->VAR72.VAR65 = FUN5(&VAR8->VAR25)))
    {
        if ((VAR8->VAR72.VAR73 = FUN5(&VAR8->VAR25)))
        {
            for (VAR11 = 0; VAR11 < 7; VAR11++)
                VAR8->VAR74.VAR75[VAR11] = FUN5(&VAR8->VAR25) ? FUN4(&VAR8->VAR25, 8) : 255;
            if ((VAR8->VAR72.VAR76 = FUN5(&VAR8->VAR25)))
                for (VAR11 = 0; VAR11 < 3; VAR11++)
                    VAR8->VAR74.VAR77[VAR11] = FUN5(&VAR8->VAR25) ? FUN4(&VAR8->VAR25, 8) : 255;
        }
        else
        {
            VAR8->VAR78 = !VAR8->VAR32 && !VAR8->VAR40 && VAR8->VAR48[VAR49].VAR50.VAR45->VAR46 == VAR17 && VAR8->VAR48[VAR49].VAR50.VAR45->VAR47 == VAR18;
        }
        if (FUN5(&VAR8->VAR25))
        {
            VAR8->VAR72.VAR79 = FUN5(&VAR8->VAR25);
            for (VAR11 = 0; VAR11 < 8; VAR11++)
            {
                if ((VAR8->VAR72.VAR80[VAR11].VAR81 = FUN5(&VAR8->VAR25)))
                    VAR8->VAR72.VAR80[VAR11].VAR82 = FUN8(&VAR8->VAR25, 8);
                if ((VAR8->VAR72.VAR80[VAR11].VAR83 = FUN5(&VAR8->VAR25)))
                    VAR8->VAR72.VAR80[VAR11].VAR84 = FUN8(&VAR8->VAR25, 6);
                if ((VAR8->VAR72.VAR80[VAR11].VAR85 = FUN5(&VAR8->VAR25)))
                    VAR8->VAR72.VAR80[VAR11].VAR86 = FUN4(&VAR8->VAR25, 2);
                VAR8->VAR72.VAR80[VAR11].VAR87 = FUN5(&VAR8->VAR25);
            }
        }
    }
    else
    {
        VAR8->VAR72.VAR80[0].VAR81 = 0;
        VAR8->VAR72.VAR80[0].VAR83 = 0;
        VAR8->VAR72.VAR80[0].VAR87 = 0;
        VAR8->VAR72.VAR80[0].VAR85 = 0;
    }
    for (VAR11 = 0; VAR11 < (VAR8->VAR72.VAR65 ? 8 : 1); VAR11++)
    {
        int VAR88, VAR89, VAR90, VAR91, VAR92, VAR93;
        if (VAR8->VAR72.VAR80[VAR11].VAR81)
        {
            if (VAR8->VAR72.VAR79)
                VAR88 = VAR8->VAR72.VAR80[VAR11].VAR82;
            else
                VAR88 = VAR8->VAR67 + VAR8->VAR72.VAR80[VAR11].VAR82;
        }
        else
        {
            VAR88 = VAR8->VAR67;
        }
        VAR89 = FUN9(VAR88 + VAR8->VAR68, 8);
        VAR91 = FUN9(VAR88 + VAR8->VAR69, 8);
        VAR90 = FUN9(VAR88 + VAR8->VAR70, 8);
        VAR88 = FUN9(VAR88, 8);
        VAR8->VAR72.VAR80[VAR11].VAR94[0][0] = VAR95[VAR89];
        VAR8->VAR72.VAR80[VAR11].VAR94[0][1] = VAR96[VAR88];
        VAR8->VAR72.VAR80[VAR11].VAR94[1][0] = VAR95[VAR91];
        VAR8->VAR72.VAR80[VAR11].VAR94[1][1] = VAR96[VAR90];
        VAR93 = VAR8->VAR60.VAR61 >= 32;
        if (VAR8->VAR72.VAR80[VAR11].VAR83)
        {
            if (VAR8->VAR72.VAR79)
                VAR92 = VAR8->VAR72.VAR80[VAR11].VAR84;
            else
                VAR92 = VAR8->VAR60.VAR61 + VAR8->VAR72.VAR80[VAR11].VAR84;
        }
        else
        {
            VAR92 = VAR8->VAR60.VAR61;
        }
        VAR8->VAR72.VAR80[VAR11].VAR92[0][0] = VAR8->VAR72.VAR80[VAR11].VAR92[0][1] = FUN9(VAR92 + (VAR8->VAR64.VAR6[0] << VAR93), 6);
        for (VAR12 = 1; VAR12 < 4; VAR12++)
        {
            VAR8->VAR72.VAR80[VAR11].VAR92[VAR12][0] = FUN9(VAR92 + ((VAR8->VAR64.VAR6[VAR12] + VAR8->VAR64.VAR66[0]) << VAR93), 6);
            VAR8->VAR72.VAR80[VAR11].VAR92[VAR12][1] = FUN9(VAR92 + ((VAR8->VAR64.VAR6[VAR12] + VAR8->VAR64.VAR66[1]) << VAR93), 6);
        }
    }
    if ((VAR21 = FUN10(VAR2, VAR17, VAR18)) < 0)
    {
        FUN3(VAR2, VAR26, "", VAR17, VAR18);
        return VAR21;
    }
    for (VAR8->VAR97.VAR98 = 0; (VAR8->VAR99 >> VAR8->VAR97.VAR98) > 64; VAR8->VAR97.VAR98++)
        ;
    for (VAR19 = 0; (VAR8->VAR99 >> VAR19) >= 4; VAR19++)
        ;
    VAR19 = FUN11(0, VAR19 - 1);
    while (VAR19 > VAR8->VAR97.VAR98)
    {
        if (FUN5(&VAR8->VAR25))
            VAR8->VAR97.VAR98++;
        else
            break;
    }
    VAR8->VAR97.VAR100 = FUN12(&VAR8->VAR25);
    VAR8->VAR97.VAR101 = 1 << VAR8->VAR97.VAR100;
    if (VAR8->VAR97.VAR102 != (1 << VAR8->VAR97.VAR98))
    {
        VAR8->VAR97.VAR102 = 1 << VAR8->VAR97.VAR98;
        VAR8->VAR103 = FUN13(VAR8->VAR103, &VAR8->VAR104, sizeof(VAR105) * VAR8->VAR97.VAR102);
        if (!VAR8->VAR103)
        {
            FUN3(VAR2, VAR26, "");
            return FUN14(VAR106);
        }
    }
    if (VAR8->VAR32 || VAR8->VAR34 || VAR8->VAR40)
    {
        VAR8->VAR107[0].VAR108 = VAR8->VAR107[1].VAR108 = VAR8->VAR107[2].VAR108 = VAR8->VAR107[3].VAR108 = VAR109;
        memcpy(VAR8->VAR107[0].VAR110, VAR111, sizeof(VAR111));
        memcpy(VAR8->VAR107[1].VAR110, VAR111, sizeof(VAR111));
        memcpy(VAR8->VAR107[2].VAR110, VAR111, sizeof(VAR111));
        memcpy(VAR8->VAR107[3].VAR110, VAR111, sizeof(VAR111));
    }
    VAR20 = FUN4(&VAR8->VAR25, 16);
    VAR24 = FUN15(&VAR8->VAR25);
    if (VAR20 > VAR5 - (VAR24 - VAR4))
    {
        FUN3(VAR2, VAR26, "");
        return VAR27;
    }
    FUN16(&VAR8->VAR10, VAR24, VAR20);
    if (FUN17(&VAR8->VAR10, 128))
    {
        FUN3(VAR2, VAR26, "");
        return VAR27;
    }
    if (VAR8->VAR32 || VAR8->VAR40)
    {
        memset(VAR8->VAR112.VAR110, 0, sizeof(VAR8->VAR112.VAR110) + sizeof(VAR8->VAR112.VAR113));
    }
    else
    {
        memset(&VAR8->VAR112, 0, sizeof(VAR8->VAR112));
    }
    VAR8->VAR74.VAR108 = VAR8->VAR107[VAR10].VAR108;
    if (VAR8->VAR71)
    {
        VAR8->VAR114 = VAR115;
    }
    else
    {
        VAR8->VAR114 = FUN18(&VAR8->VAR10, 2);
        if (VAR8->VAR114 == 3)
            VAR8->VAR114 += FUN19(&VAR8->VAR10);
        if (VAR8->VAR114 == VAR116)
        {
            for (VAR11 = 0; VAR11 < 2; VAR11++)
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR117[VAR11] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR117[VAR11]);
            for (VAR11 = 0; VAR11 < 2; VAR11++)
                for (VAR12 = 0; VAR12 < 2; VAR12++)
                    if (FUN17(&VAR8->VAR10, 252))
                        VAR8->VAR74.VAR108.VAR118[VAR11][VAR12] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR118[VAR11][VAR12]);
            for (VAR11 = 0; VAR11 < 2; VAR11++)
                for (VAR12 = 0; VAR12 < 3; VAR12++)
                    if (FUN17(&VAR8->VAR10, 252))
                        VAR8->VAR74.VAR108.VAR119[VAR11][VAR12] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR119[VAR11][VAR12]);
        }
    }
    for (VAR11 = 0; VAR11 < 4; VAR11++)
    {
        FUN21(*VAR6)[2][6][6][3] = VAR8->VAR107[VAR10].VAR110[VAR11];
        if (FUN19(&VAR8->VAR10))
        {
            for (VAR12 = 0; VAR12 < 2; VAR12++)
                for (VAR13 = 0; VAR13 < 2; VAR13++)
                    for (VAR14 = 0; VAR14 < 6; VAR14++)
                        for (VAR15 = 0; VAR15 < 6; VAR15++)
                        {
                            VAR3 *VAR108 = VAR8->VAR74.VAR110[VAR11][VAR12][VAR13][VAR14][VAR15];
                            VAR3 *VAR120 = VAR6[VAR12][VAR13][VAR14][VAR15];
                            if (VAR15 >= 3 && VAR14 == 0)
                                break;
                            for (VAR16 = 0; VAR16 < 3; VAR16++)
                            {
                                if (FUN17(&VAR8->VAR10, 252))
                                {
                                    VAR108[VAR16] = FUN20(&VAR8->VAR10, VAR120[VAR16]);
                                }
                                else
                                {
                                    VAR108[VAR16] = VAR120[VAR16];
                                }
                            }
                            VAR108[3] = 0;
                        }
        }
        else
        {
            for (VAR12 = 0; VAR12 < 2; VAR12++)
                for (VAR13 = 0; VAR13 < 2; VAR13++)
                    for (VAR14 = 0; VAR14 < 6; VAR14++)
                        for (VAR15 = 0; VAR15 < 6; VAR15++)
                        {
                            VAR3 *VAR108 = VAR8->VAR74.VAR110[VAR11][VAR12][VAR13][VAR14][VAR15];
                            VAR3 *VAR120 = VAR6[VAR12][VAR13][VAR14][VAR15];
                            if (VAR15 > 3 && VAR14 == 0)
                                break;
                            memcpy(VAR108, VAR120, 3);
                            VAR108[3] = 0;
                        }
        }
        if (VAR8->VAR114 == VAR11)
            break;
    }
    for (VAR11 = 0; VAR11 < 3; VAR11++)
        if (FUN17(&VAR8->VAR10, 252))
            VAR8->VAR74.VAR108.VAR121[VAR11] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR121[VAR11]);
    if (!VAR8->VAR32 && !VAR8->VAR40)
    {
        for (VAR11 = 0; VAR11 < 7; VAR11++)
            for (VAR12 = 0; VAR12 < 3; VAR12++)
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR122[VAR11][VAR12] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR122[VAR11][VAR12]);
        if (VAR8->VAR52 == VAR53)
            for (VAR11 = 0; VAR11 < 4; VAR11++)
                for (VAR12 = 0; VAR12 < 2; VAR12++)
                    if (FUN17(&VAR8->VAR10, 252))
                        VAR8->VAR74.VAR108.VAR60[VAR11][VAR12] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR60[VAR11][VAR12]);
        for (VAR11 = 0; VAR11 < 4; VAR11++)
            if (FUN17(&VAR8->VAR10, 252))
                VAR8->VAR74.VAR108.VAR123[VAR11] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR123[VAR11]);
        if (VAR8->VAR54)
        {
            VAR8->VAR124 = FUN19(&VAR8->VAR10);
            if (VAR8->VAR124)
                VAR8->VAR124 += FUN19(&VAR8->VAR10);
            if (VAR8->VAR124 == VAR125)
                for (VAR11 = 0; VAR11 < 5; VAR11++)
                    if (FUN17(&VAR8->VAR10, 252))
                        VAR8->VAR74.VAR108.VAR126[VAR11] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR126[VAR11]);
        }
        else
        {
            VAR8->VAR124 = VAR127;
        }
        if (VAR8->VAR124 != VAR128)
        {
            for (VAR11 = 0; VAR11 < 5; VAR11++)
            {
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR129[VAR11][0] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR129[VAR11][0]);
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR129[VAR11][1] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR129[VAR11][1]);
            }
        }
        if (VAR8->VAR124 != VAR127)
        {
            for (VAR11 = 0; VAR11 < 5; VAR11++)
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR130[VAR11] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR130[VAR11]);
        }
        for (VAR11 = 0; VAR11 < 4; VAR11++)
            for (VAR12 = 0; VAR12 < 9; VAR12++)
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR131[VAR11][VAR12] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR131[VAR11][VAR12]);
        for (VAR11 = 0; VAR11 < 4; VAR11++)
            for (VAR12 = 0; VAR12 < 4; VAR12++)
                for (VAR13 = 0; VAR13 < 3; VAR13++)
                    if (FUN17(&VAR8->VAR10, 252))
                        VAR8->VAR74.VAR108.VAR132[3 - VAR11][VAR12][VAR13] = FUN20(&VAR8->VAR10, VAR8->VAR74.VAR108.VAR132[3 - VAR11][VAR12][VAR13]);
        for (VAR11 = 0; VAR11 < 3; VAR11++)
            if (FUN17(&VAR8->VAR10, 252))
                VAR8->VAR74.VAR108.VAR133[VAR11] = (FUN18(&VAR8->VAR10, 7) << 1) | 1;
        for (VAR11 = 0; VAR11 < 2; VAR11++)
        {
            if (FUN17(&VAR8->VAR10, 252))
                VAR8->VAR74.VAR108.VAR134[VAR11].VAR135 = (FUN18(&VAR8->VAR10, 7) << 1) | 1;
            for (VAR12 = 0; VAR12 < 10; VAR12++)
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR134[VAR11].VAR136[VAR12] = (FUN18(&VAR8->VAR10, 7) << 1) | 1;
            if (FUN17(&VAR8->VAR10, 252))
                VAR8->VAR74.VAR108.VAR134[VAR11].VAR137 = (FUN18(&VAR8->VAR10, 7) << 1) | 1;
            for (VAR12 = 0; VAR12 < 10; VAR12++)
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR134[VAR11].VAR138[VAR12] = (FUN18(&VAR8->VAR10, 7) << 1) | 1;
        }
        for (VAR11 = 0; VAR11 < 2; VAR11++)
        {
            for (VAR12 = 0; VAR12 < 2; VAR12++)
                for (VAR13 = 0; VAR13 < 3; VAR13++)
                    if (FUN17(&VAR8->VAR10, 252))
                        VAR8->VAR74.VAR108.VAR134[VAR11].VAR139[VAR12][VAR13] = (FUN18(&VAR8->VAR10, 7) << 1) | 1;
            for (VAR12 = 0; VAR12 < 3; VAR12++)
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR134[VAR11].VAR140[VAR12] = (FUN18(&VAR8->VAR10, 7) << 1) | 1;
        }
        if (VAR8->VAR51)
        {
            for (VAR11 = 0; VAR11 < 2; VAR11++)
            {
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR134[VAR11].VAR141 = (FUN18(&VAR8->VAR10, 7) << 1) | 1;
                if (FUN17(&VAR8->VAR10, 252))
                    VAR8->VAR74.VAR108.VAR134[VAR11].VAR142 = (FUN18(&VAR8->VAR10, 7) << 1) | 1;
            }
        }
    }
    return (VAR24 - VAR4) + VAR20;
}