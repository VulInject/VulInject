static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    unsigned int VAR4;
    unsigned int VAR5;
    int VAR6;
    unsigned int VAR7, VAR8, VAR9, VAR10;
    int VAR11 = 0;
    int VAR12, VAR13;
    int VAR14 = 0;
    int VAR15, VAR16;
    VAR2->VAR17.VAR18 = VAR2->VAR19.VAR20;
    VAR2->VAR17.VAR21 = VAR2->VAR19.VAR22;
    VAR4 = FUN2(&VAR2->VAR23);
    if (VAR4 == 0)
    {
        if (VAR3->VAR24 && VAR2->VAR25 && FUN3(VAR2))
        {
            FUN4(VAR2, 1);
        }
        VAR3->VAR24 = 0;
        if (!VAR3->VAR26)
        {
            if (VAR2->VAR25 && !VAR2->VAR27)
            {
                FUN5(&VAR2->VAR25->VAR28, VAR29, VAR2->VAR30 == VAR31);
            }
            VAR2->VAR25 = NULL;
        }
    }
    VAR7 = FUN6(&VAR2->VAR23);
    if (VAR7 > 9)
    {
        FUN7(VAR2->VAR32, VAR33, "", VAR7, VAR2->VAR34, VAR2->VAR35);
        return VAR36;
    }
    if (VAR7 > 4)
    {
        VAR7 -= 5;
        VAR2->VAR37 = 1;
    }
    else
        VAR2->VAR37 = 0;
    VAR7 = VAR38[VAR7];
    if (VAR7 == VAR39 || (VAR3->VAR24 != 0 && VAR7 == VAR3->VAR40))
    {
        VAR11 = 1;
    }
    VAR2->VAR7 = VAR7;
    VAR2->VAR41 = VAR7 & 3;
    if (VAR2->VAR42 == VAR43 && VAR2->VAR41 != VAR39)
    {
        FUN7(VAR2->VAR32, VAR33, "");
        return VAR36;
    }
    VAR2->VAR44 = VAR2->VAR7;
    VAR5 = FUN2(&VAR2->VAR23);
    if (VAR5 >= VAR45)
    {
        FUN7(VAR2->VAR32, VAR33, "", VAR5);
        return VAR36;
    }
    if (!VAR3->VAR46[VAR5])
    {
        FUN7(VAR2->VAR32, VAR33, "", VAR5);
        return VAR36;
    }
    VAR2->VAR47 = *VAR3->VAR46[VAR5];
    if (!VAR3->VAR48[VAR2->VAR47.VAR49])
    {
        FUN7(VAR2->VAR32, VAR33, "", VAR2->VAR47.VAR49);
        return VAR36;
    }
    if (VAR2->VAR47.VAR49 != VAR2->VAR50.VAR49 || VAR3->VAR48[VAR2->VAR47.VAR49]->new)
    {
        VAR3->VAR48[VAR2->VAR47.VAR49]->new = 0;
        VAR2->VAR50 = *VAR3->VAR48[VAR2->VAR47.VAR49];
        if (VAR2->VAR51 != VAR2->VAR50.VAR51 || VAR2->VAR52 != VAR2->VAR50.VAR52)
        {
            VAR2->VAR51 = VAR2->VAR50.VAR51;
            VAR2->VAR52 = VAR2->VAR50.VAR52;
            VAR14 = 1;
        }
        if ((VAR6 = FUN8(VAR2)) < 0)
            return VAR6;
    }
    VAR2->VAR32->VAR53 = FUN9(&VAR2->VAR50);
    VAR2->VAR32->VAR54 = VAR2->VAR50.VAR55;
    VAR2->VAR32->VAR56 = VAR2->VAR50.VAR57;
    if (VAR2->VAR58 != VAR2->VAR50.VAR58 || VAR2->VAR59 != VAR2->VAR50.VAR59 * (2 - VAR2->VAR50.VAR60))
        VAR14 = 1;
    VAR2->VAR58 = VAR2->VAR50.VAR58;
    VAR2->VAR59 = VAR2->VAR50.VAR59 * (2 - VAR2->VAR50.VAR60);
    VAR2->VAR61 = VAR2->VAR58 * VAR2->VAR59;
    VAR2->VAR62 = VAR2->VAR58 + 1;
    VAR2->VAR63 = VAR2->VAR58 * 4;
    VAR2->VAR64 = VAR2->VAR50.VAR52 <= 1;
    VAR2->VAR65 = 16 * VAR2->VAR58;
    VAR2->VAR66 = 16 * VAR2->VAR59;
    VAR6 = FUN10(VAR2);
    if (VAR6 < 0)
        return VAR6;
    if (VAR2->VAR50.VAR67)
    {
        VAR2->VAR32->VAR68 = VAR2->VAR50.VAR69 ? VAR70 : VAR71;
        if (VAR2->VAR50.VAR72)
        {
            if (VAR2->VAR32->VAR73 != VAR2->VAR50.VAR73)
                VAR14 = 1;
            VAR2->VAR32->VAR74 = VAR2->VAR50.VAR74;
            VAR2->VAR32->VAR75 = VAR2->VAR50.VAR75;
            VAR2->VAR32->VAR73 = VAR2->VAR50.VAR73;
        }
    }
    if (VAR2->VAR76 && (VAR2->VAR65 != VAR2->VAR32->VAR77 || VAR2->VAR66 != VAR2->VAR32->VAR78 || VAR14))
    {
        if (VAR2 != VAR3)
        {
            FUN7(VAR2->VAR32, VAR33, ""
                                           "",
                   VAR2->VAR65, VAR2->VAR32->VAR77, VAR2->VAR66, VAR2->VAR32->VAR78, VAR3->VAR24 + 1);
            return VAR36;
        }
        FUN11(VAR2);
        if ((VAR6 = FUN12(VAR2)) < 0)
            return VAR6;
        VAR2->VAR32->VAR79 = VAR6;
        FUN7(VAR2->VAR32, VAR80, ""
                                      "",
               VAR2->VAR65, VAR2->VAR66, VAR2->VAR32->VAR79);
        if ((VAR6 = FUN13(VAR2, 1)) < 0)
        {
            FUN7(VAR2->VAR32, VAR33, "");
            return VAR6;
        }
    }
    if (!VAR2->VAR76)
    {
        if (VAR2 != VAR3)
        {
            FUN7(VAR2->VAR32, VAR33, "");
            return VAR81;
        }
        if ((VAR6 = FUN12(VAR2)) < 0)
            return VAR6;
        VAR2->VAR32->VAR79 = VAR6;
        if ((VAR6 = FUN13(VAR2, 0)) < 0)
        {
            FUN7(VAR2->VAR32, VAR33, "");
            return VAR6;
        }
    }
    if (VAR2 == VAR3 && VAR2->VAR82 != VAR5)
    {
        VAR2->VAR82 = VAR5;
        FUN14(VAR2);
    }
    VAR2->VAR83 = FUN15(&VAR2->VAR23, VAR2->VAR50.VAR84);
    VAR2->VAR85 = 0;
    VAR2->VAR86 = 0;
    VAR12 = VAR3->VAR30;
    VAR13 = VAR3->VAR27;
    VAR2->VAR27 = VAR2->VAR87 == 0;
    if (VAR2->VAR50.VAR60)
    {
        VAR2->VAR30 = VAR88;
    }
    else
    {
        VAR15 = FUN16(&VAR2->VAR23);
        if (VAR15)
        {
            VAR16 = FUN16(&VAR2->VAR23);
            VAR2->VAR30 = VAR89 + VAR16;
        }
        else
        {
            VAR2->VAR30 = VAR88;
            VAR2->VAR86 = VAR2->VAR50.VAR90;
        }
    }
    VAR2->VAR91 = VAR2->VAR30 != VAR88;
    if (VAR3->VAR24 != 0)
    {
        if (VAR12 != VAR2->VAR30 || VAR13 != VAR2->VAR27)
        {
            FUN7(VAR2->VAR32, VAR33, "", VAR12, VAR2->VAR30);
            VAR2->VAR30 = VAR12;
            VAR2->VAR27 = VAR13;
            return VAR36;
        }
        else if (!VAR3->VAR25)
        {
            FUN7(VAR2->VAR32, VAR33, "", VAR3->VAR24 + 1);
            return VAR36;
        }
    }
    else
    {
        if (VAR2->VAR83 != VAR2->VAR92)
        {
            int VAR93 = VAR2->VAR92;
            int VAR94 = 1 << VAR2->VAR50.VAR84;
            if (VAR93 > VAR2->VAR83)
                VAR93 -= VAR94;
            if ((VAR2->VAR83 - VAR93) > VAR2->VAR50.VAR57)
            {
                VAR93 = (VAR2->VAR83 - VAR2->VAR50.VAR57) - 1;
                if (VAR93 < 0)
                    VAR93 += VAR94;
                VAR2->VAR92 = VAR93;
            }
        }
        if (VAR3->VAR26)
        {
            assert(VAR3->VAR25);
            assert(VAR3->VAR25->VAR95.VAR96[0]);
            assert(VAR3->VAR25->VAR97 != VAR98);
            if (!FUN3(VAR2) || VAR2->VAR30 == VAR12)
            {
                if (!VAR13 && VAR12 != VAR88)
                {
                    FUN5(&VAR3->VAR25->VAR28, VAR29, VAR12 == VAR89);
                }
            }
            else
            {
                if (VAR3->VAR25->VAR83 != VAR2->VAR83)
                {
                    if (!VAR13 && VAR12 != VAR88)
                    {
                        FUN5(&VAR3->VAR25->VAR28, VAR29, VAR12 == VAR89);
                    }
                }
                else
                {
                    if (!((VAR12 == VAR89 && VAR2->VAR30 == VAR31) || (VAR12 == VAR31 && VAR2->VAR30 == VAR89)))
                    {
                        FUN7(VAR2->VAR32, VAR33, "", VAR12, VAR2->VAR30);
                        VAR2->VAR30 = VAR12;
                        VAR2->VAR27 = VAR13;
                        return VAR36;
                    }
                    else if (VAR13 != VAR2->VAR27)
                    {
                        FUN17(VAR2->VAR32, "");
                        VAR2->VAR30 = VAR12;
                        VAR2->VAR27 = VAR13;
                        return VAR81;
                    }
                }
            }
        }
        while (VAR2->VAR83 != VAR2->VAR92 && VAR2->VAR83 != (VAR2->VAR92 + 1) % (1 << VAR2->VAR50.VAR84))
        {
            VAR99 *VAR100 = VAR2->VAR101 ? VAR2->VAR102[0] : NULL;
            FUN7(VAR2->VAR32, VAR103, "", VAR2->VAR83, VAR2->VAR92);
            VAR6 = FUN18(VAR2);
            if (VAR6 < 0)
            {
                VAR3->VAR26 = 0;
                return VAR6;
            }
            VAR2->VAR92++;
            VAR2->VAR92 %= 1 << VAR2->VAR50.VAR84;
            VAR2->VAR25->VAR83 = VAR2->VAR92;
            FUN5(&VAR2->VAR25->VAR28, VAR29, 0);
            FUN5(&VAR2->VAR25->VAR28, VAR29, 1);
            VAR6 = FUN19(VAR2, 1);
            if (VAR6 < 0 && (VAR2->VAR32->VAR104 & VAR105))
                return VAR6;
            VAR6 = FUN20(VAR2, VAR2->VAR106, VAR2->VAR107);
            if (VAR6 < 0 && (VAR2->VAR32->VAR104 & VAR105))
                return VAR6;
            if (VAR2->VAR101)
            {
                if (VAR100)
                {
                    FUN21(VAR2->VAR102[0]->VAR95.VAR108, VAR2->VAR102[0]->VAR95.VAR109, (const VAR110 **)VAR100->VAR95.VAR108, VAR100->VAR95.VAR109, VAR2->VAR32->VAR79, VAR2->VAR58 * 16, VAR2->VAR59 * 16);
                    VAR2->VAR102[0]->VAR111 = VAR100->VAR111 + 2;
                }
                VAR2->VAR102[0]->VAR83 = VAR2->VAR92;
            }
        }
        if (VAR3->VAR26)
        {
            assert(VAR3->VAR25);
            assert(VAR3->VAR25->VAR95.VAR96[0]);
            assert(VAR3->VAR25->VAR97 != VAR98);
            if (!FUN3(VAR2) || VAR2->VAR30 == VAR12)
            {
                VAR3->VAR25 = NULL;
                VAR3->VAR26 = FUN3(VAR2);
            }
            else
            {
                if (VAR3->VAR25->VAR83 != VAR2->VAR83)
                {
                    VAR3->VAR26 = 1;
                    VAR3->VAR25 = NULL;
                }
                else
                {
                    VAR3->VAR26 = 0;
                }
            }
        }
        else
        {
            VAR3->VAR26 = FUN3(VAR2);
        }
        if (!FUN3(VAR2) || VAR3->VAR26)
        {
            if (FUN18(VAR2) < 0)
            {
                VAR3->VAR26 = 0;
                return VAR36;
            }
        }
        else
        {
            FUN22(VAR2, 0);
        }
    }
    if (VAR2 != VAR3 && (VAR6 = FUN23(VAR2, VAR3)) < 0)
        return VAR6;
    VAR2->VAR25->VAR83 = VAR2->VAR83;
    assert(VAR2->VAR61 == VAR2->VAR58 * VAR2->VAR59);
    if (VAR4 << FUN24(VAR2) >= VAR2->VAR61 || VAR4 >= VAR2->VAR61)
    {
        FUN7(VAR2->VAR32, VAR33, "");
        return VAR36;
    }
    VAR2->VAR112 = VAR2->VAR34 = VAR4 % VAR2->VAR58;
    VAR2->VAR113 = VAR2->VAR35 = (VAR4 / VAR2->VAR58) << FUN24(VAR2);
    if (VAR2->VAR30 == VAR31)
        VAR2->VAR113 = VAR2->VAR35 = VAR2->VAR35 + 1;
    assert(VAR2->VAR35 < VAR2->VAR59);
    if (VAR2->VAR30 == VAR88)
    {
        VAR2->VAR114 = VAR2->VAR83;
        VAR2->VAR115 = 1 << VAR2->VAR50.VAR84;
    }
    else
    {
        VAR2->VAR114 = 2 * VAR2->VAR83 + 1;
        VAR2->VAR115 = 1 << (VAR2->VAR50.VAR84 + 1);
    }
    if (VAR2->VAR42 == VAR43)
        FUN2(&VAR2->VAR23);
    if (VAR2->VAR50.VAR116 == 0)
    {
        VAR2->VAR117 = FUN15(&VAR2->VAR23, VAR2->VAR50.VAR118);
        if (VAR2->VAR47.VAR119 == 1 && VAR2->VAR30 == VAR88)
            VAR2->VAR120 = FUN25(&VAR2->VAR23);
    }
    if (VAR2->VAR50.VAR116 == 1 && !VAR2->VAR50.VAR121)
    {
        VAR2->VAR122[0] = FUN25(&VAR2->VAR23);
        if (VAR2->VAR47.VAR119 == 1 && VAR2->VAR30 == VAR88)
            VAR2->VAR122[1] = FUN25(&VAR2->VAR23);
    }
    FUN26(VAR2, VAR2->VAR25->VAR123, &VAR2->VAR25->VAR111);
    if (VAR2->VAR47.VAR124)
        VAR2->VAR125 = FUN2(&VAR2->VAR23);
    VAR6 = FUN27(VAR2);
    if (VAR6 < 0)
        return VAR6;
    else if (VAR6 == 1)
        VAR11 = 0;
    if (!VAR11)
        FUN28(VAR2);
    if (VAR2->VAR41 != VAR39)
    {
        VAR6 = FUN29(VAR2);
        if (VAR6 < 0)
        {
            VAR2->VAR126[1] = VAR2->VAR126[0] = 0;
            return VAR6;
        }
    }
    if ((VAR2->VAR47.VAR127 && VAR2->VAR41 == VAR128) || (VAR2->VAR47.VAR129 == 1 && VAR2->VAR41 == VAR130))
        FUN30(VAR2);
    else if (VAR2->VAR47.VAR129 == 2 && VAR2->VAR41 == VAR130)
    {
        FUN31(VAR2, -1);
    }
    else
    {
        VAR2->VAR131 = 0;
        for (VAR9 = 0; VAR9 < 2; VAR9++)
        {
            VAR2->VAR132[VAR9] = 0;
            VAR2->VAR133[VAR9] = 0;
        }
    }
    if (VAR2->VAR87)
    {
        VAR6 = FUN32(VAR3, &VAR2->VAR23, !(VAR2->VAR32->VAR134 & VAR135) || VAR3->VAR24 == 0);
        if (VAR6 < 0 && (VAR2->VAR32->VAR104 & VAR105))
            return VAR36;
    }
    if (FUN33(VAR2))
    {
        FUN34(VAR2);
        if (VAR2->VAR47.VAR129 == 2 && VAR2->VAR41 == VAR130)
        {
            FUN31(VAR2, 0);
            FUN31(VAR2, 1);
        }
    }
    if (VAR2->VAR41 == VAR130 && !VAR2->VAR136)
        FUN35(VAR2);
    FUN36(VAR2);
    if (VAR2->VAR41 != VAR39 && VAR2->VAR47.VAR137)
    {
        VAR8 = FUN6(&VAR2->VAR23);
        if (VAR8 > 2)
        {
            FUN7(VAR2->VAR32, VAR33, "", VAR8);
            return VAR36;
        }
        VAR2->VAR138 = VAR8;
    }
    VAR2->VAR139 = 0;
    VAR8 = VAR2->VAR47.VAR140 + FUN25(&VAR2->VAR23);
    if (VAR8 > 51 + 6 * (VAR2->VAR50.VAR51 - 8))
    {
        FUN7(VAR2->VAR32, VAR33, "", VAR8);
        return VAR36;
    }
    VAR2->VAR141 = VAR8;
    VAR2->VAR142[0] = FUN37(VAR2, 0, VAR2->VAR141);
    VAR2->VAR142[1] = FUN37(VAR2, 1, VAR2->VAR141);
    if (VAR2->VAR7 == VAR143)
        FUN16(&VAR2->VAR23);
    if (VAR2->VAR7 == VAR143 || VAR2->VAR7 == VAR144)
        FUN25(&VAR2->VAR23);
    VAR2->VAR145 = 1;
    VAR2->VAR146 = 0;
    VAR2->VAR147 = 0;
    if (VAR2->VAR47.VAR148)
    {
        VAR8 = FUN6(&VAR2->VAR23);
        if (VAR8 > 2)
        {
            FUN7(VAR2->VAR32, VAR33, "", VAR8);
            return VAR36;
        }
        VAR2->VAR145 = VAR8;
        if (VAR2->VAR145 < 2)
            VAR2->VAR145 ^= 1;
        if (VAR2->VAR145)
        {
            VAR2->VAR146 = FUN25(&VAR2->VAR23) * 2;
            VAR2->VAR147 = FUN25(&VAR2->VAR23) * 2;
            if (VAR2->VAR146 > 12 || VAR2->VAR146 < -12 || VAR2->VAR147 > 12 || VAR2->VAR147 < -12)
            {
                FUN7(VAR2->VAR32, VAR33, "", VAR2->VAR146, VAR2->VAR147);
                return VAR36;
            }
        }
    }
    if (VAR2->VAR32->VAR149 >= VAR150 || (VAR2->VAR32->VAR149 >= VAR151 && VAR2->VAR41 != VAR39) || (VAR2->VAR32->VAR149 >= VAR152 && VAR2->VAR41 == VAR130) || (VAR2->VAR32->VAR149 >= VAR153 && VAR2->VAR87 == 0))
        VAR2->VAR145 = 0;
    if (VAR2->VAR145 == 1 && VAR3->VAR154 > 1)
    {
        if (VAR2->VAR32->VAR155 & VAR156)
        {
            VAR2->VAR145 = 2;
        }
        else
        {
            VAR3->VAR154 = 1;
            if (!VAR3->VAR157)
            {
                FUN7(VAR2->VAR32, VAR80, "");
                VAR3->VAR157 = 1;
            }
            if (VAR2 != VAR3)
            {
                FUN7(VAR2->VAR32, VAR33, "");
                return 1;
            }
        }
    }
    VAR2->VAR158 = 15 + FUN38(VAR2->VAR146, VAR2->VAR147) - FUN39(0, VAR2->VAR47.VAR159[0], VAR2->VAR47.VAR159[1]) + 6 * (VAR2->VAR50.VAR51 - 8);
    VAR3->VAR40 = VAR7;
    VAR2->VAR160 = ++VAR3->VAR24;
    if (VAR2->VAR160 >= VAR161)
    {
        FUN7(VAR2->VAR32, VAR33, "");
    }
    for (VAR10 = 0; VAR10 < 2; VAR10++)
    {
        int VAR162[16];
        int *VAR163 = VAR2->VAR163[VAR2->VAR160 & (VAR161 - 1)][VAR10];
        for (VAR9 = 0; VAR9 < 16; VAR9++)
        {
            VAR162[VAR9] = 60;
            if (VAR10 < VAR2->VAR164 && VAR9 < VAR2->VAR126[VAR10] && VAR2->VAR165[VAR10][VAR9].VAR95.VAR96[0])
            {
                int VAR166;
                VAR167 *VAR96 = VAR2->VAR165[VAR10][VAR9].VAR95.VAR96[0]->VAR168;
                for (VAR166 = 0; VAR166 < VAR2->VAR101; VAR166++)
                    if (VAR2->VAR102[VAR166]->VAR95.VAR96[0]->VAR168 == VAR96)
                    {
                        VAR162[VAR9] = VAR166;
                        break;
                    }
                for (VAR166 = 0; VAR166 < VAR2->VAR169; VAR166++)
                    if (VAR2->VAR170[VAR166] && VAR2->VAR170[VAR166]->VAR95.VAR96[0]->VAR168 == VAR96)
                    {
                        VAR162[VAR9] = VAR2->VAR101 + VAR166;
                        break;
                    }
            }
        }
        VAR163[0] = VAR163[1] = -1;
        for (VAR9 = 0; VAR9 < 16; VAR9++)
            VAR163[VAR9 + 2] = 4 * VAR162[VAR9] + (VAR2->VAR165[VAR10][VAR9].VAR97 & 3);
        VAR163[18 + 0] = VAR163[18 + 1] = -1;
        for (VAR9 = 16; VAR9 < 48; VAR9++)
            VAR163[VAR9 + 4] = 4 * VAR162[(VAR9 - 16) >> 1] + (VAR2->VAR165[VAR10][VAR9].VAR97 & 3);
    }
    if (VAR2->VAR32->VAR171 & VAR172)
    {
        FUN7(VAR2->VAR32, VAR103, "", VAR2->VAR160, (VAR2->VAR30 == VAR88 ? "" : VAR2->VAR30 == VAR89 ? ""
                                                                                                                                                                                                                                             : ""),
               VAR4, FUN40(VAR2->VAR7), VAR2->VAR37 ? "" : "", VAR2->VAR42 == VAR43 ? "" : "", VAR5, VAR2->VAR83, VAR2->VAR25->VAR123[0], VAR2->VAR25->VAR123[1], VAR2->VAR126[0], VAR2->VAR126[1], VAR2->VAR141, VAR2->VAR145, VAR2->VAR146, VAR2->VAR147, VAR2->VAR131, VAR2->VAR131 == 1 && VAR2->VAR173 ? "" : "", VAR2->VAR7 == VAR130 ? (VAR2->VAR136 ? "" : "") : "");
    }
    return 0;
}