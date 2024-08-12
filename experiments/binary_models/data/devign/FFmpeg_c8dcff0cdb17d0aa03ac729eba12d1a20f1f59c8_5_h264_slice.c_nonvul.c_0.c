int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const VAR5 *VAR6;
    const VAR7 *VAR8;
    unsigned int VAR9;
    unsigned int VAR10;
    int VAR11;
    unsigned int VAR12, VAR13, VAR14, VAR15;
    int VAR16, VAR17;
    int VAR18 = 0;
    int VAR19, VAR20;
    int VAR21, VAR22, VAR23;
    int VAR24 = 0;
    VAR2->VAR25 = VAR2->VAR26.VAR27;
    VAR2->VAR28 = VAR2->VAR26.VAR29;
    VAR9 = FUN2(&VAR4->VAR30);
    if (VAR9 == 0)
    {
        if (VAR2->VAR31 && VAR2->VAR32 && FUN3(VAR2))
        {
            FUN4(VAR2, VAR4, 1);
        }
        VAR2->VAR31 = 0;
        if (!VAR2->VAR33)
        {
            if (VAR2->VAR32 && !VAR2->VAR22)
            {
                FUN5(&VAR2->VAR32->VAR34, VAR35, VAR2->VAR23 == VAR36);
            }
            VAR2->VAR32 = NULL;
        }
    }
    VAR12 = FUN6(&VAR4->VAR30);
    if (VAR12 > 9)
    {
        FUN7(VAR2->VAR37, VAR38, "", VAR12, VAR9);
        return VAR39;
    }
    if (VAR12 > 4)
    {
        VAR12 -= 5;
        VAR4->VAR40 = 1;
    }
    else
        VAR4->VAR40 = 0;
    VAR12 = VAR41[VAR12];
    VAR4->VAR12 = VAR12;
    VAR4->VAR42 = VAR12 & 3;
    if (VAR2->VAR43 == VAR44 && VAR4->VAR42 != VAR45)
    {
        FUN7(VAR2->VAR37, VAR38, "");
        return VAR39;
    }
    if (!VAR2->VAR46)
        VAR2->VAR47 = VAR4->VAR12;
    VAR10 = FUN2(&VAR4->VAR30);
    if (VAR10 >= VAR48)
    {
        FUN7(VAR2->VAR37, VAR38, "", VAR10);
        return VAR39;
    }
    if (!VAR2->VAR49.VAR50[VAR10])
    {
        FUN7(VAR2->VAR37, VAR38, "", VAR10);
        return VAR39;
    }
    if (!VAR2->VAR46)
    {
        VAR2->VAR49.VAR8 = (const VAR7 *)VAR2->VAR49.VAR50[VAR10]->VAR51;
    }
    else if (VAR2->VAR49.VAR8 != (const VAR7 *)VAR2->VAR49.VAR50[VAR10]->VAR51)
    {
        FUN7(VAR2->VAR37, VAR38, "");
        return VAR39;
    }
    if (!VAR2->VAR49.VAR52[VAR2->VAR49.VAR8->VAR53])
    {
        FUN7(VAR2->VAR37, VAR38, "", VAR2->VAR49.VAR8->VAR53);
        return VAR39;
    }
    if (VAR2->VAR49.VAR6 != (const VAR5 *)VAR2->VAR49.VAR52[VAR2->VAR49.VAR8->VAR53]->VAR51)
    {
        VAR2->VAR49.VAR6 = (VAR5 *)VAR2->VAR49.VAR52[VAR2->VAR49.VAR8->VAR53]->VAR51;
        if (VAR2->VAR54 != VAR2->VAR49.VAR6->VAR54 || VAR2->VAR55 != VAR2->VAR49.VAR6->VAR55)
            VAR18 = 1;
        if (VAR2->VAR56 & VAR57 || (VAR2->VAR49.VAR6->VAR58 && !VAR2->VAR49.VAR6->VAR59))
        {
            if (VAR2->VAR37->VAR60 > 1 || VAR2->VAR61[0])
                FUN7(VAR2->VAR37, VAR62, ""
                                                 "");
            else
                VAR2->VAR63 = 1;
        }
        if (VAR2->VAR37->VAR60 < 2)
            VAR2->VAR37->VAR60 = !VAR2->VAR63;
    }
    VAR8 = VAR2->VAR49.VAR8;
    VAR6 = VAR2->VAR49.VAR6;
    if (!VAR2->VAR46)
    {
        VAR2->VAR37->VAR64 = FUN8(VAR6);
        VAR2->VAR37->VAR65 = VAR6->VAR66;
        VAR2->VAR37->VAR67 = VAR6->VAR68;
        if (VAR2->VAR69 != VAR6->VAR69 || VAR2->VAR70 != VAR6->VAR70 * (2 - VAR6->VAR71))
            VAR18 = 1;
        VAR2->VAR69 = VAR6->VAR69;
        VAR2->VAR70 = VAR6->VAR70 * (2 - VAR6->VAR71);
        VAR2->VAR72 = VAR2->VAR69 * VAR2->VAR70;
        VAR2->VAR73 = VAR2->VAR69 + 1;
        VAR2->VAR74 = VAR2->VAR69 * 4;
        VAR2->VAR75 = VAR6->VAR55 <= 1;
        VAR2->VAR76 = 16 * VAR2->VAR69;
        VAR2->VAR77 = 16 * VAR2->VAR70;
        VAR11 = FUN9(VAR2);
        if (VAR11 < 0)
            return VAR11;
        if (VAR6->VAR78)
        {
            VAR2->VAR37->VAR79 = VAR6->VAR80 ? VAR81 : VAR82;
            if (VAR6->VAR83)
            {
                if (VAR2->VAR37->VAR84 != VAR6->VAR84)
                    VAR18 = 1;
                VAR2->VAR37->VAR85 = VAR6->VAR85;
                VAR2->VAR37->VAR86 = VAR6->VAR86;
                VAR2->VAR37->VAR84 = VAR6->VAR84;
            }
        }
    }
    if (VAR2->VAR87 && VAR18)
    {
        VAR2->VAR87 = 0;
        if (VAR4 != VAR2->VAR88)
        {
            FUN7(VAR2->VAR37, VAR38, ""
                                           "",
                   VAR2->VAR76, VAR2->VAR37->VAR89, VAR2->VAR77, VAR2->VAR37->VAR90, VAR2->VAR31 + 1);
            return VAR39;
        }
        FUN10(VAR2);
        if ((VAR11 = FUN11(VAR2)) < 0)
            return VAR11;
        VAR2->VAR37->VAR91 = VAR11;
        FUN7(VAR2->VAR37, VAR92, ""
                                      "",
               VAR2->VAR76, VAR2->VAR77, VAR2->VAR37->VAR91);
        if ((VAR11 = FUN12(VAR2)) < 0)
        {
            FUN7(VAR2->VAR37, VAR38, "");
            return VAR11;
        }
    }
    if (!VAR2->VAR87)
    {
        if (VAR4 != VAR2->VAR88)
        {
            FUN7(VAR2->VAR37, VAR38, "");
            return VAR93;
        }
        if ((VAR11 = FUN11(VAR2)) < 0)
            return VAR11;
        VAR2->VAR37->VAR91 = VAR11;
        if ((VAR11 = FUN12(VAR2)) < 0)
        {
            FUN7(VAR2->VAR37, VAR38, "");
            return VAR11;
        }
    }
    VAR21 = FUN13(&VAR4->VAR30, VAR6->VAR94);
    if (!VAR2->VAR46)
        VAR2->VAR95.VAR21 = VAR21;
    VAR4->VAR96 = 0;
    VAR16 = VAR2->VAR23;
    VAR17 = VAR2->VAR22;
    VAR22 = VAR2->VAR97 == 0;
    if (VAR6->VAR71)
    {
        VAR23 = VAR98;
    }
    else
    {
        VAR19 = FUN14(&VAR4->VAR30);
        if (VAR19)
        {
            VAR20 = FUN14(&VAR4->VAR30);
            VAR23 = VAR99 + VAR20;
        }
        else
        {
            VAR23 = VAR98;
            VAR24 = VAR6->VAR100;
        }
    }
    if (!VAR2->VAR46)
    {
        VAR2->VAR22 = VAR22;
        VAR2->VAR23 = VAR23;
        VAR2->VAR24 = VAR24;
    }
    VAR4->VAR101 = VAR2->VAR23 != VAR98;
    if (VAR2->VAR31 != 0)
    {
        if (VAR16 != VAR23 || VAR17 != VAR22)
        {
            FUN7(VAR2->VAR37, VAR38, "", VAR16, VAR2->VAR23);
            return VAR39;
        }
        else if (!VAR2->VAR32)
        {
            FUN7(VAR2->VAR37, VAR38, "", VAR2->VAR31 + 1);
            return VAR39;
        }
    }
    else
    {
        if (VAR2->VAR95.VAR21 != VAR2->VAR95.VAR102)
        {
            int VAR103 = VAR2->VAR95.VAR102;
            int VAR104 = 1 << VAR6->VAR94;
            if (VAR103 > VAR2->VAR95.VAR21)
                VAR103 -= VAR104;
            if ((VAR2->VAR95.VAR21 - VAR103) > VAR6->VAR68)
            {
                VAR103 = (VAR2->VAR95.VAR21 - VAR6->VAR68) - 1;
                if (VAR103 < 0)
                    VAR103 += VAR104;
                VAR2->VAR95.VAR102 = VAR103;
            }
        }
        if (VAR2->VAR33)
        {
            assert(VAR2->VAR32);
            assert(VAR2->VAR32->VAR105->VAR106[0]);
            assert(VAR2->VAR32->VAR107 != VAR108);
            if (!FUN3(VAR2) || VAR2->VAR23 == VAR16)
            {
                if (!VAR17 && VAR16 != VAR98)
                {
                    FUN5(&VAR2->VAR32->VAR34, VAR35, VAR16 == VAR99);
                }
            }
            else
            {
                if (VAR2->VAR32->VAR21 != VAR2->VAR95.VAR21)
                {
                    if (!VAR17 && VAR16 != VAR98)
                    {
                        FUN5(&VAR2->VAR32->VAR34, VAR35, VAR16 == VAR99);
                    }
                }
                else
                {
                    if (!((VAR16 == VAR99 && VAR2->VAR23 == VAR36) || (VAR16 == VAR36 && VAR2->VAR23 == VAR99)))
                    {
                        FUN7(VAR2->VAR37, VAR38, "", VAR16, VAR2->VAR23);
                        VAR2->VAR23 = VAR16;
                        VAR2->VAR22 = VAR17;
                        return VAR39;
                    }
                    else if (VAR17 != VAR2->VAR22)
                    {
                        FUN15(VAR2->VAR37, "");
                        VAR2->VAR23 = VAR16;
                        VAR2->VAR22 = VAR17;
                        return VAR93;
                    }
                }
            }
        }
        while (VAR2->VAR95.VAR21 != VAR2->VAR95.VAR102 && VAR2->VAR95.VAR21 != (VAR2->VAR95.VAR102 + 1) % (1 << VAR6->VAR94))
        {
            VAR109 *VAR110 = VAR2->VAR111 ? VAR2->VAR112[0] : NULL;
            FUN7(VAR2->VAR37, VAR113, "", VAR2->VAR95.VAR21, VAR2->VAR95.VAR102);
            VAR11 = FUN16(VAR2);
            if (VAR11 < 0)
            {
                VAR2->VAR33 = 0;
                return VAR11;
            }
            VAR2->VAR95.VAR102++;
            VAR2->VAR95.VAR102 %= 1 << VAR6->VAR94;
            VAR2->VAR32->VAR21 = VAR2->VAR95.VAR102;
            FUN5(&VAR2->VAR32->VAR34, VAR35, 0);
            FUN5(&VAR2->VAR32->VAR34, VAR35, 1);
            VAR11 = FUN17(VAR2, 1);
            if (VAR11 < 0 && (VAR2->VAR37->VAR114 & VAR115))
                return VAR11;
            VAR11 = FUN18(VAR2, VAR2->VAR116, VAR2->VAR117);
            if (VAR11 < 0 && (VAR2->VAR37->VAR114 & VAR115))
                return VAR11;
            if (VAR2->VAR111)
            {
                if (VAR110 && VAR2->VAR112[0]->VAR105->VAR76 == VAR110->VAR105->VAR76 && VAR2->VAR112[0]->VAR105->VAR77 == VAR110->VAR105->VAR77 && VAR2->VAR112[0]->VAR105->VAR118 == VAR110->VAR105->VAR118)
                {
                    FUN19(VAR2->VAR112[0]->VAR105->VAR51, VAR2->VAR112[0]->VAR105->VAR119, (const VAR120 **)VAR110->VAR105->VAR51, VAR110->VAR105->VAR119, VAR110->VAR105->VAR118, VAR2->VAR69 * 16, VAR2->VAR70 * 16);
                    VAR2->VAR112[0]->VAR95 = VAR110->VAR95 + 2;
                }
                VAR2->VAR112[0]->VAR21 = VAR2->VAR95.VAR102;
            }
        }
        if (VAR2->VAR33)
        {
            assert(VAR2->VAR32);
            assert(VAR2->VAR32->VAR105->VAR106[0]);
            assert(VAR2->VAR32->VAR107 != VAR108);
            if (!FUN3(VAR2) || VAR2->VAR23 == VAR16)
            {
                VAR2->VAR32 = NULL;
                VAR2->VAR33 = FUN3(VAR2);
            }
            else
            {
                if (VAR2->VAR32->VAR21 != VAR2->VAR95.VAR21)
                {
                    VAR2->VAR33 = 1;
                    VAR2->VAR32 = NULL;
                }
                else
                {
                    VAR2->VAR33 = 0;
                }
            }
        }
        else
        {
            VAR2->VAR33 = FUN3(VAR2);
        }
        if (!FUN3(VAR2) || VAR2->VAR33)
        {
            if (FUN20(VAR2) < 0)
            {
                VAR2->VAR33 = 0;
                return VAR39;
            }
        }
        else
        {
            FUN21(VAR2, 0);
        }
    }
    assert(VAR2->VAR72 == VAR2->VAR69 * VAR2->VAR70);
    if (VAR9 << FUN22(VAR2) >= VAR2->VAR72 || VAR9 >= VAR2->VAR72)
    {
        FUN7(VAR2->VAR37, VAR38, "");
        return VAR39;
    }
    VAR4->VAR121 = VAR4->VAR122 = VAR9 % VAR2->VAR69;
    VAR4->VAR123 = VAR4->VAR124 = (VAR9 / VAR2->VAR69) << FUN22(VAR2);
    if (VAR2->VAR23 == VAR36)
        VAR4->VAR123 = VAR4->VAR124 = VAR4->VAR124 + 1;
    assert(VAR4->VAR124 < VAR2->VAR70);
    if (VAR2->VAR23 == VAR98)
    {
        VAR2->VAR125 = VAR2->VAR95.VAR21;
        VAR2->VAR126 = 1 << VAR6->VAR94;
    }
    else
    {
        VAR2->VAR125 = 2 * VAR2->VAR95.VAR21 + 1;
        VAR2->VAR126 = 1 << (VAR6->VAR94 + 1);
    }
    if (VAR2->VAR43 == VAR44)
        FUN2(&VAR4->VAR30);
    if (VAR6->VAR127 == 0)
    {
        int VAR128 = FUN13(&VAR4->VAR30, VAR6->VAR129);
        if (!VAR2->VAR46)
            VAR2->VAR95.VAR128 = VAR128;
        if (VAR8->VAR130 == 1 && VAR2->VAR23 == VAR98)
        {
            int VAR131 = FUN23(&VAR4->VAR30);
            if (!VAR2->VAR46)
                VAR2->VAR95.VAR131 = VAR131;
        }
    }
    if (VAR6->VAR127 == 1 && !VAR6->VAR132)
    {
        int VAR133 = FUN23(&VAR4->VAR30);
        if (!VAR2->VAR46)
            VAR2->VAR95.VAR133[0] = VAR133;
        if (VAR8->VAR130 == 1 && VAR2->VAR23 == VAR98)
        {
            VAR133 = FUN23(&VAR4->VAR30);
            if (!VAR2->VAR46)
                VAR2->VAR95.VAR133[1] = VAR133;
        }
    }
    if (!VAR2->VAR46)
        FUN24(VAR2->VAR32->VAR134, &VAR2->VAR32->VAR95, VAR6, &VAR2->VAR95, VAR2->VAR23, VAR2->VAR97);
    if (VAR8->VAR135)
        VAR4->VAR136 = FUN2(&VAR4->VAR30);
    if (VAR4->VAR42 == VAR137)
        VAR4->VAR138 = FUN14(&VAR4->VAR30);
    VAR11 = FUN25(&VAR4->VAR139, VAR4->VAR140, &VAR4->VAR30, VAR8, VAR4->VAR42, VAR2->VAR23);
    if (VAR11 < 0)
        return VAR11;
    if (VAR4->VAR42 != VAR45)
    {
        VAR11 = FUN26(VAR2, VAR4);
        if (VAR11 < 0)
        {
            VAR4->VAR140[1] = VAR4->VAR140[0] = 0;
            return VAR11;
        }
    }
    if ((VAR8->VAR141 && VAR4->VAR42 == VAR142) || (VAR8->VAR143 == 1 && VAR4->VAR42 == VAR137))
        FUN27(&VAR4->VAR30, VAR6, VAR4->VAR140, VAR4->VAR42, &VAR4->VAR144);
    else if (VAR8->VAR143 == 2 && VAR4->VAR42 == VAR137)
    {
        FUN28(VAR2, VAR4, -1);
    }
    else
    {
        VAR4->VAR144.VAR145 = 0;
        for (VAR14 = 0; VAR14 < 2; VAR14++)
        {
            VAR4->VAR144.VAR146[VAR14] = 0;
            VAR4->VAR144.VAR147[VAR14] = 0;
        }
    }
    if (VAR2->VAR97)
    {
        VAR11 = FUN29(VAR2, &VAR4->VAR30, !(VAR2->VAR37->VAR148 & VAR149) || VAR2->VAR31 == 0);
        if (VAR11 < 0 && (VAR2->VAR37->VAR114 & VAR115))
            return VAR39;
    }
    if (FUN30(VAR2))
    {
        FUN31(VAR2, VAR4);
        if (VAR8->VAR143 == 2 && VAR4->VAR42 == VAR137)
        {
            FUN28(VAR2, VAR4, 0);
            FUN28(VAR2, VAR4, 1);
        }
    }
    if (VAR4->VAR42 == VAR137 && !VAR4->VAR138)
        FUN32(VAR2, VAR4);
    FUN33(VAR2, VAR4);
    if (VAR4->VAR42 != VAR45 && VAR8->VAR150)
    {
        VAR13 = FUN6(&VAR4->VAR30);
        if (VAR13 > 2)
        {
            FUN7(VAR2->VAR37, VAR38, "", VAR13);
            return VAR39;
        }
        VAR4->VAR151 = VAR13;
    }
    VAR4->VAR152 = 0;
    VAR13 = VAR8->VAR153 + FUN23(&VAR4->VAR30);
    if (VAR13 > 51 + 6 * (VAR6->VAR54 - 8))
    {
        FUN7(VAR2->VAR37, VAR38, "", VAR13);
        return VAR39;
    }
    VAR4->VAR154 = VAR13;
    VAR4->VAR155[0] = FUN34(VAR2, 0, VAR4->VAR154);
    VAR4->VAR155[1] = FUN34(VAR2, 1, VAR4->VAR154);
    if (VAR4->VAR12 == VAR156)
        FUN14(&VAR4->VAR30);
    if (VAR4->VAR12 == VAR156 || VAR4->VAR12 == VAR157)
        FUN23(&VAR4->VAR30);
    VAR4->VAR158 = 1;
    VAR4->VAR159 = 0;
    VAR4->VAR160 = 0;
    if (VAR8->VAR161)
    {
        VAR13 = FUN6(&VAR4->VAR30);
        if (VAR13 > 2)
        {
            FUN7(VAR2->VAR37, VAR38, "", VAR13);
            return VAR39;
        }
        VAR4->VAR158 = VAR13;
        if (VAR4->VAR158 < 2)
            VAR4->VAR158 ^= 1;
        if (VAR4->VAR158)
        {
            VAR4->VAR159 = FUN23(&VAR4->VAR30) * 2;
            VAR4->VAR160 = FUN23(&VAR4->VAR30) * 2;
            if (VAR4->VAR159 > 12 || VAR4->VAR159 < -12 || VAR4->VAR160 > 12 || VAR4->VAR160 < -12)
            {
                FUN7(VAR2->VAR37, VAR38, "", VAR4->VAR159, VAR4->VAR160);
                return VAR39;
            }
        }
    }
    if (VAR2->VAR37->VAR162 >= VAR163 || (VAR2->VAR37->VAR162 >= VAR164 && VAR4->VAR42 != VAR45) || (VAR2->VAR37->VAR162 >= VAR165 && VAR4->VAR42 == VAR137) || (VAR2->VAR37->VAR162 >= VAR166 && VAR2->VAR97 == 0))
        VAR4->VAR158 = 0;
    if (VAR4->VAR158 == 1 && VAR2->VAR167 > 1)
    {
        if (VAR2->VAR37->VAR168 & VAR169)
        {
            VAR4->VAR158 = 2;
        }
        else
        {
            VAR2->VAR167 = 1;
            if (!VAR2->VAR170)
            {
                FUN7(VAR2->VAR37, VAR92, "");
                VAR2->VAR170 = 1;
            }
            if (VAR4 != VAR2->VAR88)
            {
                FUN7(VAR2->VAR37, VAR38, "");
                return 1;
            }
        }
    }
    VAR4->VAR171 = 15 - FUN35(VAR4->VAR159, VAR4->VAR160) - FUN36(0, VAR8->VAR172[0], VAR8->VAR172[1]) + 6 * (VAR6->VAR54 - 8);
    VAR4->VAR173 = ++VAR2->VAR31;
    if (VAR4->VAR173 >= VAR174)
    {
        FUN7(VAR2->VAR37, VAR38, "");
    }
    for (VAR15 = 0; VAR15 < 2; VAR15++)
    {
        int VAR175[16];
        int *VAR176 = VAR4->VAR176[VAR4->VAR173 & (VAR174 - 1)][VAR15];
        for (VAR14 = 0; VAR14 < 16; VAR14++)
        {
            VAR175[VAR14] = 60;
            if (VAR15 < VAR4->VAR139 && VAR14 < VAR4->VAR140[VAR15] && VAR4->VAR177[VAR15][VAR14].VAR178->VAR105->VAR106[0])
            {
                int VAR179;
                VAR180 *VAR106 = VAR4->VAR177[VAR15][VAR14].VAR178->VAR105->VAR106[0]->VAR181;
                for (VAR179 = 0; VAR179 < VAR2->VAR111; VAR179++)
                    if (VAR2->VAR112[VAR179]->VAR105->VAR106[0]->VAR181 == VAR106)
                    {
                        VAR175[VAR14] = VAR179;
                        break;
                    }
                for (VAR179 = 0; VAR179 < VAR2->VAR182; VAR179++)
                    if (VAR2->VAR183[VAR179] && VAR2->VAR183[VAR179]->VAR105->VAR106[0]->VAR181 == VAR106)
                    {
                        VAR175[VAR14] = VAR2->VAR111 + VAR179;
                        break;
                    }
            }
        }
        VAR176[0] = VAR176[1] = -1;
        for (VAR14 = 0; VAR14 < 16; VAR14++)
            VAR176[VAR14 + 2] = 4 * VAR175[VAR14] + (VAR4->VAR177[VAR15][VAR14].VAR107 & 3);
        VAR176[18 + 0] = VAR176[18 + 1] = -1;
        for (VAR14 = 16; VAR14 < 48; VAR14++)
            VAR176[VAR14 + 4] = 4 * VAR175[(VAR14 - 16) >> 1] + (VAR4->VAR177[VAR15][VAR14].VAR107 & 3);
    }
    if (VAR2->VAR37->VAR184 & VAR185)
    {
        FUN7(VAR2->VAR37, VAR113, "", VAR4->VAR173, (VAR2->VAR23 == VAR98 ? "" : VAR2->VAR23 == VAR99 ? ""
                                                                                                                                                                                                                                              : ""),
               VAR9, FUN37(VAR4->VAR12), VAR4->VAR40 ? "" : "", VAR2->VAR43 == VAR44 ? "" : "", VAR10, VAR2->VAR95.VAR21, VAR2->VAR32->VAR134[0], VAR2->VAR32->VAR134[1], VAR4->VAR140[0], VAR4->VAR140[1], VAR4->VAR154, VAR4->VAR158, VAR4->VAR159, VAR4->VAR160, VAR4->VAR144.VAR145, VAR4->VAR144.VAR145 == 1 && VAR4->VAR144.VAR186 ? "" : "", VAR4->VAR12 == VAR137 ? (VAR4->VAR138 ? "" : "") : "");
    }
    return 0;
}