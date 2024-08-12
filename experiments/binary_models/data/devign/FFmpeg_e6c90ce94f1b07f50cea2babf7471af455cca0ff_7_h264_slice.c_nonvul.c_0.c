int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR1 *VAR5)
{
    unsigned int VAR6;
    unsigned int VAR7;
    int VAR8;
    unsigned int VAR9, VAR10, VAR11, VAR12;
    int VAR13 = 0;
    int VAR14, VAR15;
    int VAR16 = 0;
    int VAR17, VAR18;
    VAR2->VAR19 = VAR2->VAR20.VAR21;
    VAR2->VAR22 = VAR2->VAR20.VAR23;
    VAR6 = FUN2(&VAR2->VAR24);
    if (VAR6 == 0)
    {
        if (VAR5->VAR25 && VAR2->VAR26 && FUN3(VAR2))
        {
            FUN4(VAR2, VAR4, 1);
        }
        VAR5->VAR25 = 0;
        if (!VAR5->VAR27)
        {
            if (VAR2->VAR26 && !VAR2->VAR28)
            {
                FUN5(&VAR2->VAR26->VAR29, VAR30, VAR2->VAR31 == VAR32);
            }
            VAR2->VAR26 = NULL;
        }
    }
    VAR9 = FUN6(&VAR2->VAR24);
    if (VAR9 > 9)
    {
        FUN7(VAR2->VAR33, VAR34, "", VAR9, VAR2->VAR35, VAR2->VAR36);
        return VAR37;
    }
    if (VAR9 > 4)
    {
        VAR9 -= 5;
        VAR4->VAR38 = 1;
    }
    else
        VAR4->VAR38 = 0;
    VAR9 = VAR39[VAR9];
    if (VAR9 == VAR40 || (VAR5->VAR25 != 0 && VAR9 == VAR5->VAR41))
    {
        VAR13 = 1;
    }
    VAR4->VAR9 = VAR9;
    VAR4->VAR42 = VAR9 & 3;
    if (VAR2->VAR43 == VAR44 && VAR4->VAR42 != VAR40)
    {
        FUN7(VAR2->VAR33, VAR34, "");
        return VAR37;
    }
    VAR2->VAR45 = VAR4->VAR9;
    VAR7 = FUN2(&VAR2->VAR24);
    if (VAR7 >= VAR46)
    {
        FUN7(VAR2->VAR33, VAR34, "", VAR7);
        return VAR37;
    }
    if (!VAR5->VAR47[VAR7])
    {
        FUN7(VAR2->VAR33, VAR34, "", VAR7);
        return VAR37;
    }
    VAR2->VAR48 = *VAR5->VAR47[VAR7];
    if (!VAR5->VAR49[VAR2->VAR48.VAR50])
    {
        FUN7(VAR2->VAR33, VAR34, "", VAR2->VAR48.VAR50);
        return VAR37;
    }
    if (VAR2->VAR48.VAR50 != VAR2->VAR51.VAR50 || VAR5->VAR49[VAR2->VAR48.VAR50]->new)
    {
        VAR5->VAR49[VAR2->VAR48.VAR50]->new = 0;
        VAR2->VAR51 = *VAR5->VAR49[VAR2->VAR48.VAR50];
        if (VAR2->VAR52 != VAR2->VAR51.VAR52 || VAR2->VAR53 != VAR2->VAR51.VAR53)
        {
            VAR2->VAR52 = VAR2->VAR51.VAR52;
            VAR2->VAR53 = VAR2->VAR51.VAR53;
            VAR16 = 1;
        }
        if ((VAR8 = FUN8(VAR2)) < 0)
            return VAR8;
    }
    VAR2->VAR33->VAR54 = FUN9(&VAR2->VAR51);
    VAR2->VAR33->VAR55 = VAR2->VAR51.VAR56;
    VAR2->VAR33->VAR57 = VAR2->VAR51.VAR58;
    if (VAR2->VAR59 != VAR2->VAR51.VAR59 || VAR2->VAR60 != VAR2->VAR51.VAR60 * (2 - VAR2->VAR51.VAR61))
        VAR16 = 1;
    VAR2->VAR59 = VAR2->VAR51.VAR59;
    VAR2->VAR60 = VAR2->VAR51.VAR60 * (2 - VAR2->VAR51.VAR61);
    VAR2->VAR62 = VAR2->VAR59 * VAR2->VAR60;
    VAR2->VAR63 = VAR2->VAR59 + 1;
    VAR2->VAR64 = VAR2->VAR59 * 4;
    VAR2->VAR65 = VAR2->VAR51.VAR53 <= 1;
    VAR2->VAR66 = 16 * VAR2->VAR59;
    VAR2->VAR67 = 16 * VAR2->VAR60;
    VAR8 = FUN10(VAR2);
    if (VAR8 < 0)
        return VAR8;
    if (VAR2->VAR51.VAR68)
    {
        VAR2->VAR33->VAR69 = VAR2->VAR51.VAR70 ? VAR71 : VAR72;
        if (VAR2->VAR51.VAR73)
        {
            if (VAR2->VAR33->VAR74 != VAR2->VAR51.VAR74)
                VAR16 = 1;
            VAR2->VAR33->VAR75 = VAR2->VAR51.VAR75;
            VAR2->VAR33->VAR76 = VAR2->VAR51.VAR76;
            VAR2->VAR33->VAR74 = VAR2->VAR51.VAR74;
        }
    }
    if (VAR2->VAR77 && VAR16)
    {
        if (VAR2 != VAR5)
        {
            FUN7(VAR2->VAR33, VAR34, ""
                                           "",
                   VAR2->VAR66, VAR2->VAR33->VAR78, VAR2->VAR67, VAR2->VAR33->VAR79, VAR5->VAR25 + 1);
            return VAR37;
        }
        FUN11(VAR2);
        if ((VAR8 = FUN12(VAR2)) < 0)
            return VAR8;
        VAR2->VAR33->VAR80 = VAR8;
        FUN7(VAR2->VAR33, VAR81, ""
                                      "",
               VAR2->VAR66, VAR2->VAR67, VAR2->VAR33->VAR80);
        if ((VAR8 = FUN13(VAR2, 1)) < 0)
        {
            FUN7(VAR2->VAR33, VAR34, "");
            return VAR8;
        }
    }
    if (!VAR2->VAR77)
    {
        if (VAR2 != VAR5)
        {
            FUN7(VAR2->VAR33, VAR34, "");
            return VAR82;
        }
        if ((VAR8 = FUN12(VAR2)) < 0)
            return VAR8;
        VAR2->VAR33->VAR80 = VAR8;
        if ((VAR8 = FUN13(VAR2, 0)) < 0)
        {
            FUN7(VAR2->VAR33, VAR34, "");
            return VAR8;
        }
    }
    if (VAR2 == VAR5 && VAR2->VAR83 != VAR7)
    {
        VAR2->VAR83 = VAR7;
        FUN14(VAR2);
    }
    VAR2->VAR84 = FUN15(&VAR2->VAR24, VAR2->VAR51.VAR85);
    VAR2->VAR86 = 0;
    VAR2->VAR87 = 0;
    VAR14 = VAR5->VAR31;
    VAR15 = VAR5->VAR28;
    VAR2->VAR28 = VAR2->VAR88 == 0;
    if (VAR2->VAR51.VAR61)
    {
        VAR2->VAR31 = VAR89;
    }
    else
    {
        VAR17 = FUN16(&VAR2->VAR24);
        if (VAR17)
        {
            VAR18 = FUN16(&VAR2->VAR24);
            VAR2->VAR31 = VAR90 + VAR18;
        }
        else
        {
            VAR2->VAR31 = VAR89;
            VAR2->VAR87 = VAR2->VAR51.VAR91;
        }
    }
    VAR2->VAR92 = VAR2->VAR31 != VAR89;
    if (VAR5->VAR25 != 0)
    {
        if (VAR14 != VAR2->VAR31 || VAR15 != VAR2->VAR28)
        {
            FUN7(VAR2->VAR33, VAR34, "", VAR14, VAR2->VAR31);
            VAR2->VAR31 = VAR14;
            VAR2->VAR28 = VAR15;
            return VAR37;
        }
        else if (!VAR5->VAR26)
        {
            FUN7(VAR2->VAR33, VAR34, "", VAR5->VAR25 + 1);
            return VAR37;
        }
    }
    else
    {
        if (VAR2->VAR84 != VAR2->VAR93)
        {
            int VAR94 = VAR2->VAR93;
            int VAR95 = 1 << VAR2->VAR51.VAR85;
            if (VAR94 > VAR2->VAR84)
                VAR94 -= VAR95;
            if ((VAR2->VAR84 - VAR94) > VAR2->VAR51.VAR58)
            {
                VAR94 = (VAR2->VAR84 - VAR2->VAR51.VAR58) - 1;
                if (VAR94 < 0)
                    VAR94 += VAR95;
                VAR2->VAR93 = VAR94;
            }
        }
        if (VAR5->VAR27)
        {
            assert(VAR5->VAR26);
            assert(VAR5->VAR26->VAR96.VAR97[0]);
            assert(VAR5->VAR26->VAR98 != VAR99);
            if (!FUN3(VAR2) || VAR2->VAR31 == VAR14)
            {
                if (!VAR15 && VAR14 != VAR89)
                {
                    FUN5(&VAR5->VAR26->VAR29, VAR30, VAR14 == VAR90);
                }
            }
            else
            {
                if (VAR5->VAR26->VAR84 != VAR2->VAR84)
                {
                    if (!VAR15 && VAR14 != VAR89)
                    {
                        FUN5(&VAR5->VAR26->VAR29, VAR30, VAR14 == VAR90);
                    }
                }
                else
                {
                    if (!((VAR14 == VAR90 && VAR2->VAR31 == VAR32) || (VAR14 == VAR32 && VAR2->VAR31 == VAR90)))
                    {
                        FUN7(VAR2->VAR33, VAR34, "", VAR14, VAR2->VAR31);
                        VAR2->VAR31 = VAR14;
                        VAR2->VAR28 = VAR15;
                        return VAR37;
                    }
                    else if (VAR15 != VAR2->VAR28)
                    {
                        FUN17(VAR2->VAR33, "");
                        VAR2->VAR31 = VAR14;
                        VAR2->VAR28 = VAR15;
                        return VAR82;
                    }
                }
            }
        }
        while (VAR2->VAR84 != VAR2->VAR93 && VAR2->VAR84 != (VAR2->VAR93 + 1) % (1 << VAR2->VAR51.VAR85))
        {
            VAR100 *VAR101 = VAR2->VAR102 ? VAR2->VAR103[0] : NULL;
            FUN7(VAR2->VAR33, VAR104, "", VAR2->VAR84, VAR2->VAR93);
            VAR8 = FUN18(VAR2);
            if (VAR8 < 0)
            {
                VAR5->VAR27 = 0;
                return VAR8;
            }
            VAR2->VAR93++;
            VAR2->VAR93 %= 1 << VAR2->VAR51.VAR85;
            VAR2->VAR26->VAR84 = VAR2->VAR93;
            FUN5(&VAR2->VAR26->VAR29, VAR30, 0);
            FUN5(&VAR2->VAR26->VAR29, VAR30, 1);
            VAR8 = FUN19(VAR2, 1);
            if (VAR8 < 0 && (VAR2->VAR33->VAR105 & VAR106))
                return VAR8;
            VAR8 = FUN20(VAR2, VAR2->VAR107, VAR2->VAR108);
            if (VAR8 < 0 && (VAR2->VAR33->VAR105 & VAR106))
                return VAR8;
            if (VAR2->VAR102)
            {
                if (VAR101)
                {
                    FUN21(VAR2->VAR103[0]->VAR96.VAR109, VAR2->VAR103[0]->VAR96.VAR110, (const VAR111 **)VAR101->VAR96.VAR109, VAR101->VAR96.VAR110, VAR2->VAR33->VAR80, VAR2->VAR59 * 16, VAR2->VAR60 * 16);
                    VAR2->VAR103[0]->VAR112 = VAR101->VAR112 + 2;
                }
                VAR2->VAR103[0]->VAR84 = VAR2->VAR93;
            }
        }
        if (VAR5->VAR27)
        {
            assert(VAR5->VAR26);
            assert(VAR5->VAR26->VAR96.VAR97[0]);
            assert(VAR5->VAR26->VAR98 != VAR99);
            if (!FUN3(VAR2) || VAR2->VAR31 == VAR14)
            {
                VAR5->VAR26 = NULL;
                VAR5->VAR27 = FUN3(VAR2);
            }
            else
            {
                if (VAR5->VAR26->VAR84 != VAR2->VAR84)
                {
                    VAR5->VAR27 = 1;
                    VAR5->VAR26 = NULL;
                }
                else
                {
                    VAR5->VAR27 = 0;
                }
            }
        }
        else
        {
            VAR5->VAR27 = FUN3(VAR2);
        }
        if (!FUN3(VAR2) || VAR5->VAR27)
        {
            if (FUN18(VAR2) < 0)
            {
                VAR5->VAR27 = 0;
                return VAR37;
            }
        }
        else
        {
            FUN22(VAR2, 0);
        }
    }
    if (VAR2 != VAR5 && (VAR8 = FUN23(VAR2, VAR5)) < 0)
        return VAR8;
    VAR2->VAR26->VAR84 = VAR2->VAR84;
    assert(VAR2->VAR62 == VAR2->VAR59 * VAR2->VAR60);
    if (VAR6 << FUN24(VAR2) >= VAR2->VAR62 || VAR6 >= VAR2->VAR62)
    {
        FUN7(VAR2->VAR33, VAR34, "");
        return VAR37;
    }
    VAR2->VAR113 = VAR2->VAR35 = VAR6 % VAR2->VAR59;
    VAR2->VAR114 = VAR2->VAR36 = (VAR6 / VAR2->VAR59) << FUN24(VAR2);
    if (VAR2->VAR31 == VAR32)
        VAR2->VAR114 = VAR2->VAR36 = VAR2->VAR36 + 1;
    assert(VAR2->VAR36 < VAR2->VAR60);
    if (VAR2->VAR31 == VAR89)
    {
        VAR2->VAR115 = VAR2->VAR84;
        VAR2->VAR116 = 1 << VAR2->VAR51.VAR85;
    }
    else
    {
        VAR2->VAR115 = 2 * VAR2->VAR84 + 1;
        VAR2->VAR116 = 1 << (VAR2->VAR51.VAR85 + 1);
    }
    if (VAR2->VAR43 == VAR44)
        FUN2(&VAR2->VAR24);
    if (VAR2->VAR51.VAR117 == 0)
    {
        VAR2->VAR118 = FUN15(&VAR2->VAR24, VAR2->VAR51.VAR119);
        if (VAR2->VAR48.VAR120 == 1 && VAR2->VAR31 == VAR89)
            VAR2->VAR121 = FUN25(&VAR2->VAR24);
    }
    if (VAR2->VAR51.VAR117 == 1 && !VAR2->VAR51.VAR122)
    {
        VAR2->VAR123[0] = FUN25(&VAR2->VAR24);
        if (VAR2->VAR48.VAR120 == 1 && VAR2->VAR31 == VAR89)
            VAR2->VAR123[1] = FUN25(&VAR2->VAR24);
    }
    FUN26(VAR2, VAR2->VAR26->VAR124, &VAR2->VAR26->VAR112);
    if (VAR2->VAR48.VAR125)
        VAR2->VAR126 = FUN2(&VAR2->VAR24);
    VAR8 = FUN27(VAR2, VAR4);
    if (VAR8 < 0)
        return VAR8;
    else if (VAR8 == 1)
        VAR13 = 0;
    if (!VAR13)
        FUN28(VAR2, VAR4);
    if (VAR4->VAR42 != VAR40)
    {
        VAR8 = FUN29(VAR2, VAR4);
        if (VAR8 < 0)
        {
            VAR4->VAR127[1] = VAR4->VAR127[0] = 0;
            return VAR8;
        }
    }
    if ((VAR2->VAR48.VAR128 && VAR4->VAR42 == VAR129) || (VAR2->VAR48.VAR130 == 1 && VAR4->VAR42 == VAR131))
        FUN30(VAR2, VAR4);
    else if (VAR2->VAR48.VAR130 == 2 && VAR4->VAR42 == VAR131)
    {
        FUN31(VAR2, VAR4, -1);
    }
    else
    {
        VAR4->VAR132 = 0;
        for (VAR11 = 0; VAR11 < 2; VAR11++)
        {
            VAR4->VAR133[VAR11] = 0;
            VAR4->VAR134[VAR11] = 0;
        }
    }
    if (VAR2->VAR88)
    {
        VAR8 = FUN32(VAR5, &VAR2->VAR24, !(VAR2->VAR33->VAR135 & VAR136) || VAR5->VAR25 == 0);
        if (VAR8 < 0 && (VAR2->VAR33->VAR105 & VAR106))
            return VAR37;
    }
    if (FUN33(VAR2))
    {
        FUN34(VAR2, VAR4);
        if (VAR2->VAR48.VAR130 == 2 && VAR4->VAR42 == VAR131)
        {
            FUN31(VAR2, VAR4, 0);
            FUN31(VAR2, VAR4, 1);
        }
    }
    if (VAR4->VAR42 == VAR131 && !VAR4->VAR137)
        FUN35(VAR2, VAR4);
    FUN36(VAR2, VAR4);
    if (VAR4->VAR42 != VAR40 && VAR2->VAR48.VAR138)
    {
        VAR10 = FUN6(&VAR2->VAR24);
        if (VAR10 > 2)
        {
            FUN7(VAR2->VAR33, VAR34, "", VAR10);
            return VAR37;
        }
        VAR2->VAR139 = VAR10;
    }
    VAR4->VAR140 = 0;
    VAR10 = VAR2->VAR48.VAR141 + FUN25(&VAR2->VAR24);
    if (VAR10 > 51 + 6 * (VAR2->VAR51.VAR52 - 8))
    {
        FUN7(VAR2->VAR33, VAR34, "", VAR10);
        return VAR37;
    }
    VAR4->VAR142 = VAR10;
    VAR4->VAR143[0] = FUN37(VAR2, 0, VAR4->VAR142);
    VAR4->VAR143[1] = FUN37(VAR2, 1, VAR4->VAR142);
    if (VAR4->VAR9 == VAR144)
        FUN16(&VAR2->VAR24);
    if (VAR4->VAR9 == VAR144 || VAR4->VAR9 == VAR145)
        FUN25(&VAR2->VAR24);
    VAR4->VAR146 = 1;
    VAR4->VAR147 = 0;
    VAR4->VAR148 = 0;
    if (VAR2->VAR48.VAR149)
    {
        VAR10 = FUN6(&VAR2->VAR24);
        if (VAR10 > 2)
        {
            FUN7(VAR2->VAR33, VAR34, "", VAR10);
            return VAR37;
        }
        VAR4->VAR146 = VAR10;
        if (VAR4->VAR146 < 2)
            VAR4->VAR146 ^= 1;
        if (VAR4->VAR146)
        {
            VAR4->VAR147 = FUN25(&VAR2->VAR24) * 2;
            VAR4->VAR148 = FUN25(&VAR2->VAR24) * 2;
            if (VAR4->VAR147 > 12 || VAR4->VAR147 < -12 || VAR4->VAR148 > 12 || VAR4->VAR148 < -12)
            {
                FUN7(VAR2->VAR33, VAR34, "", VAR4->VAR147, VAR4->VAR148);
                return VAR37;
            }
        }
    }
    if (VAR2->VAR33->VAR150 >= VAR151 || (VAR2->VAR33->VAR150 >= VAR152 && VAR4->VAR42 != VAR40) || (VAR2->VAR33->VAR150 >= VAR153 && VAR4->VAR42 == VAR131) || (VAR2->VAR33->VAR150 >= VAR154 && VAR2->VAR88 == 0))
        VAR4->VAR146 = 0;
    if (VAR4->VAR146 == 1 && VAR5->VAR155 > 1)
    {
        if (VAR2->VAR33->VAR156 & VAR157)
        {
            VAR4->VAR146 = 2;
        }
        else
        {
            VAR5->VAR155 = 1;
            if (!VAR5->VAR158)
            {
                FUN7(VAR2->VAR33, VAR81, "");
                VAR5->VAR158 = 1;
            }
            if (VAR2 != VAR5)
            {
                FUN7(VAR2->VAR33, VAR34, "");
                return 1;
            }
        }
    }
    VAR4->VAR159 = 15 - FUN38(VAR4->VAR147, VAR4->VAR148) - FUN39(0, VAR2->VAR48.VAR160[0], VAR2->VAR48.VAR160[1]) + 6 * (VAR2->VAR51.VAR52 - 8);
    VAR5->VAR41 = VAR9;
    VAR4->VAR161 = ++VAR5->VAR25;
    if (VAR4->VAR161 >= VAR162)
    {
        FUN7(VAR2->VAR33, VAR34, "");
    }
    for (VAR12 = 0; VAR12 < 2; VAR12++)
    {
        int VAR163[16];
        int *VAR164 = VAR4->VAR164[VAR4->VAR161 & (VAR162 - 1)][VAR12];
        for (VAR11 = 0; VAR11 < 16; VAR11++)
        {
            VAR163[VAR11] = 60;
            if (VAR12 < VAR4->VAR165 && VAR11 < VAR4->VAR127[VAR12] && VAR4->VAR166[VAR12][VAR11].VAR96.VAR97[0])
            {
                int VAR167;
                VAR168 *VAR97 = VAR4->VAR166[VAR12][VAR11].VAR96.VAR97[0]->VAR169;
                for (VAR167 = 0; VAR167 < VAR2->VAR102; VAR167++)
                    if (VAR2->VAR103[VAR167]->VAR96.VAR97[0]->VAR169 == VAR97)
                    {
                        VAR163[VAR11] = VAR167;
                        break;
                    }
                for (VAR167 = 0; VAR167 < VAR2->VAR170; VAR167++)
                    if (VAR2->VAR171[VAR167] && VAR2->VAR171[VAR167]->VAR96.VAR97[0]->VAR169 == VAR97)
                    {
                        VAR163[VAR11] = VAR2->VAR102 + VAR167;
                        break;
                    }
            }
        }
        VAR164[0] = VAR164[1] = -1;
        for (VAR11 = 0; VAR11 < 16; VAR11++)
            VAR164[VAR11 + 2] = 4 * VAR163[VAR11] + (VAR4->VAR166[VAR12][VAR11].VAR98 & 3);
        VAR164[18 + 0] = VAR164[18 + 1] = -1;
        for (VAR11 = 16; VAR11 < 48; VAR11++)
            VAR164[VAR11 + 4] = 4 * VAR163[(VAR11 - 16) >> 1] + (VAR4->VAR166[VAR12][VAR11].VAR98 & 3);
    }
    if (VAR2->VAR33->VAR172 & VAR173)
    {
        FUN7(VAR2->VAR33, VAR104, "", VAR4->VAR161, (VAR2->VAR31 == VAR89 ? "" : VAR2->VAR31 == VAR90 ? ""
                                                                                                                                                                                                                                              : ""),
               VAR6, FUN40(VAR4->VAR9), VAR4->VAR38 ? "" : "", VAR2->VAR43 == VAR44 ? "" : "", VAR7, VAR2->VAR84, VAR2->VAR26->VAR124[0], VAR2->VAR26->VAR124[1], VAR4->VAR127[0], VAR4->VAR127[1], VAR4->VAR142, VAR4->VAR146, VAR4->VAR147, VAR4->VAR148, VAR4->VAR132, VAR4->VAR132 == 1 && VAR4->VAR174 ? "" : "", VAR4->VAR9 == VAR131 ? (VAR4->VAR137 ? "" : "") : "");
    }
    return 0;
}