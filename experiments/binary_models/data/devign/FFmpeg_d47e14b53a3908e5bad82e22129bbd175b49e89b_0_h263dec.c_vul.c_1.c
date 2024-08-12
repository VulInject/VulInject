int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    VAR15 *VAR16 = VAR3;
    VAR12->VAR17 = VAR2->VAR17;
    VAR12->VAR18 = VAR2->VAR18;
    if (VAR9 == 0)
    {
        if (VAR12->VAR19 == 0 && VAR12->VAR20)
        {
            if ((VAR14 = FUN2(VAR16, &VAR12->VAR20->VAR21)) < 0)
                return VAR14;
            VAR12->VAR20 = NULL;
            *VAR4 = 1;
        }
        return 0;
    }
    if (VAR12->VAR17 & VAR22)
    {
        int VAR23;
        if (VAR24 && VAR12->VAR25 == VAR26)
        {
            VAR23 = FUN3(&VAR12->VAR27, VAR8, VAR9);
        }
        else if (VAR28 && VAR12->VAR25 == VAR29)
        {
            VAR23 = FUN4(&VAR12->VAR27, VAR8, VAR9);
        }
        else if (VAR30 && VAR12->VAR25 == VAR31)
        {
            VAR23 = FUN4(&VAR12->VAR27, VAR8, VAR9);
        }
        else
        {
            FUN5(VAR12->VAR2, VAR32, "");
            return FUN6(VAR33);
        }
        if (FUN7(&VAR12->VAR27, VAR23, (const VAR7 **)&VAR8, &VAR9) < 0)
            return VAR9;
    }
VAR34:
    if (VAR12->VAR35 && VAR12->VAR36)
    {
        int VAR37;
        for (VAR37 = 0; VAR37 < VAR9 - 3; VAR37++)
        {
            if (VAR8[VAR37] == 0 && VAR8[VAR37 + 1] == 0 && VAR8[VAR37 + 2] == 1)
            {
                if (VAR8[VAR37 + 3] == 0xB0)
                {
                    FUN5(VAR12->VAR2, VAR38, "");
                    VAR12->VAR36 = 0;
                }
                break;
            }
        }
    }
    if (VAR12->VAR36 && (VAR12->VAR35 || VAR9 < 20))
    {
        FUN8(&VAR12->VAR39, VAR12->VAR40, VAR12->VAR36 * 8);
    }
    else
        FUN8(&VAR12->VAR39, VAR8, VAR9 * 8);
    VAR12->VAR36 = 0;
    if (!VAR12->VAR41)
    {
        if ((VAR14 = FUN9(VAR12)) < 0)
            return VAR14;
    }
    if (VAR12->VAR42 == NULL || VAR12->VAR42->VAR21.VAR3[0])
    {
        int VAR37 = FUN10(VAR12, 0);
        if (VAR37 < 0)
            return VAR37;
        VAR12->VAR42 = &VAR12->VAR43[VAR37];
    }
    if (VAR44 && VAR12->VAR45 == 5)
    {
        VAR14 = FUN11(VAR12);
    }
    else if (VAR46 && VAR12->VAR45)
    {
        VAR14 = FUN12(VAR12);
    }
    else if (VAR24 && VAR12->VAR47)
    {
        if (VAR12->VAR2->VAR48 && VAR12->VAR49 == 0)
        {
            GetBitContext VAR39;
            FUN8(&VAR39, VAR12->VAR2->VAR50, VAR12->VAR2->VAR48 * 8);
            VAR14 = FUN13(VAR12, &VAR39);
        }
        VAR14 = FUN13(VAR12, &VAR12->VAR39);
    }
    else if (VAR51 && VAR12->VAR25 == VAR52)
    {
        VAR14 = FUN14(VAR12);
    }
    else if (VAR53 && VAR12->VAR54)
    {
        VAR14 = FUN15(VAR12);
    }
    else
    {
        VAR14 = FUN16(VAR12);
    }
    if (VAR14 < 0 || VAR14 == VAR55)
    {
        if (VAR12->VAR56 != VAR2->VAR57 || VAR12->VAR58 != VAR2->VAR59)
        {
            FUN5(VAR12->VAR2, VAR38, "");
            VAR12->VAR56 = VAR2->VAR57;
            VAR12->VAR58 = VAR2->VAR59;
        }
    }
    if (VAR14 == VAR55)
        return FUN17(VAR12, VAR9);
    if (VAR14 < 0)
    {
        FUN5(VAR12->VAR2, VAR32, "");
        return VAR14;
    }
    VAR2->VAR60 = !VAR12->VAR19;
    if (VAR12->VAR61 == -1 && VAR12->VAR62 == -1 && VAR12->VAR63 == -1)
    {
        if (VAR12->VAR64 == FUN18("") || VAR12->VAR65 == FUN18("") || VAR12->VAR65 == FUN18("") || VAR12->VAR65 == FUN18("") || VAR12->VAR65 == FUN18("") || VAR12->VAR65 == FUN18(""))
            VAR12->VAR61 = 0;
        if (VAR12->VAR65 == FUN18("") && VAR12->VAR66 == 0 && VAR12->VAR67 == 1 && VAR12->VAR68 > 0 && VAR12->VAR19)
            VAR12->VAR61 = 0;
    }
    if (VAR12->VAR61 == -1 && VAR12->VAR62 == -1 && VAR12->VAR63 == -1)
    {
        if (VAR12->VAR65 == FUN18("") && VAR12->VAR66 == 0 && VAR12->VAR67 == 0)
            VAR12->VAR62 = 400;
    }
    if (VAR12->VAR61 >= 0 && VAR12->VAR62 >= 0)
    {
        VAR12->VAR62 = VAR12->VAR69 = -1;
    }
    if (VAR12->VAR70 & VAR71)
    {
        if (VAR12->VAR65 == FUN18(""))
            VAR12->VAR70 |= VAR72;
        if (VAR12->VAR65 == FUN18(""))
        {
            VAR12->VAR70 |= VAR73;
        }
        if (VAR12->VAR62 >= 500 && VAR12->VAR69 < 1814)
        {
            VAR12->VAR70 |= VAR74;
        }
        if (VAR12->VAR62 > 502 && VAR12->VAR69 < 1814)
        {
            VAR12->VAR70 |= VAR75;
        }
        if (VAR12->VAR61 <= 3U)
            VAR12->VAR68 = 256 * 256 * 256 * 64;
        if (VAR12->VAR61 <= 1U)
            VAR12->VAR70 |= VAR74;
        if (VAR12->VAR61 <= 12U)
            VAR12->VAR70 |= VAR76;
        if (VAR12->VAR61 <= 32U)
            VAR12->VAR70 |= VAR77;
        VAR12->VAR78.VAR79##VAR80 = VAR81##VAR82;
        VAR12->VAR78.VAR83##VAR80 = VAR84##VAR82;
        VAR12->VAR78.VAR85##VAR80 = VAR86##VAR82;
        if (VAR12->VAR63 < 4653U)
            VAR12->VAR70 |= VAR87;
        if (VAR12->VAR63 < 4655U)
            VAR12->VAR70 |= VAR88;
        if (VAR12->VAR63 < 4670U)
        {
            VAR12->VAR70 |= VAR76;
        }
        if (VAR12->VAR63 <= 4712U)
            VAR12->VAR70 |= VAR77;
        if (VAR12->VAR62 >= 0)
            VAR12->VAR70 |= VAR88;
        if (VAR12->VAR62 == 501 && VAR12->VAR69 == 20020416)
            VAR12->VAR68 = 256 * 256 * 256 * 64;
        if (VAR12->VAR62 < 500U)
        {
            VAR12->VAR70 |= VAR76;
        }
        if (VAR12->VAR62 >= 0)
            VAR12->VAR70 |= VAR89;
        if (VAR12->VAR62 == 500)
            VAR12->VAR68 = 256 * 256 * 256 * 64;
        if (VAR12->VAR90 == 0 && VAR12->VAR91 == 0 && VAR12->VAR62 == -1 && VAR12->VAR25 == VAR26 && VAR12->VAR66 == 0)
            VAR12->VAR70 |= VAR92;
        if (VAR12->VAR63 < 4609U)
            VAR12->VAR70 |= VAR92;
    }
    if (VAR12->VAR70 & VAR87)
    {
        FUN19(VAR93[0][5], VAR94)
        FUN19(VAR93[0][7], VAR95) FUN19(VAR93[0][9], VAR96) FUN19(VAR93[0][11], VAR97) FUN19(VAR93[0][13], VAR98) FUN19(VAR93[0][15], VAR99) FUN19(VAR93[1][5], VAR100) FUN19(VAR93[1][7], VAR101) FUN19(VAR93[1][9], VAR102) FUN19(VAR93[1][11], VAR103) FUN19(VAR93[1][13], VAR104) FUN19(VAR93[1][15], VAR105)
    }
    if (VAR2->VAR106 & VAR107)
        FUN5(VAR12->VAR2, VAR108, "", VAR12->VAR70, VAR12->VAR63, VAR12->VAR61, VAR12->VAR62, VAR12->VAR69, VAR12->VAR35 ? "" : "");
    if (VAR12->VAR25 == VAR26 && VAR12->VAR61 >= 0 && VAR2->VAR109 == VAR110 && (FUN20() & VAR111))
    {
        VAR2->VAR109 = VAR112;
        FUN21(VAR12);
        goto VAR34;
    }
    if (VAR12->VAR56 != VAR2->VAR57 || VAR12->VAR58 != VAR2->VAR59 || VAR12->VAR113)
    {
        VAR12->VAR113 = 0;
        FUN22(VAR2, VAR12->VAR56, VAR12->VAR58);
        if ((VAR14 = FUN23(VAR12)))
            return VAR14;
    }
    if ((VAR12->VAR25 == VAR29 || VAR12->VAR25 == VAR31 || VAR12->VAR25 == VAR52))
        VAR12->VAR114 = FUN24(VAR12);
    VAR12->VAR115.VAR21.VAR116 = VAR12->VAR116;
    VAR12->VAR115.VAR21.VAR117 = VAR12->VAR116 == VAR118;
    if (VAR12->VAR119 == NULL && (VAR12->VAR116 == VAR120 || VAR12->VAR121))
        return FUN17(VAR12, VAR9);
    if ((VAR2->VAR122 >= VAR123 && VAR12->VAR116 == VAR120) || (VAR2->VAR122 >= VAR124 && VAR12->VAR116 != VAR118) || VAR2->VAR122 >= VAR125)
        return FUN17(VAR12, VAR9);
    if (VAR12->VAR126)
    {
        if (VAR12->VAR116 == VAR120)
            return FUN17(VAR12, VAR9);
        else
            VAR12->VAR126 = 0;
    }
    if ((!VAR12->VAR127) || VAR12->VAR116 == VAR120)
    {
        VAR12->VAR128.VAR129 = VAR12->VAR78.VAR130;
        VAR12->VAR128.VAR131 = VAR12->VAR78.VAR132;
    }
    else
    {
        VAR12->VAR128.VAR129 = VAR12->VAR78.VAR133;
        VAR12->VAR128.VAR131 = VAR12->VAR78.VAR132;
    }
    if ((VAR14 = FUN25(VAR12, VAR2)) < 0)
        return VAR14;
    if (!VAR12->VAR35 && !VAR2->VAR134)
        FUN26(VAR2);
    if (VAR135 && (VAR12->VAR2->VAR136->VAR137 & VAR138))
    {
        FUN27(VAR12, VAR12->VAR39.VAR139, VAR12->VAR39.VAR140 - VAR12->VAR39.VAR139);
        goto VAR141;
    }
    if (VAR2->VAR134)
    {
        if ((VAR14 = VAR2->VAR134->FUN28(VAR2, VAR12->VAR39.VAR139, VAR12->VAR39.VAR140 - VAR12->VAR39.VAR139)) < 0)
            return VAR14;
    }
    FUN29(VAR12);
    if (VAR44 && VAR12->VAR45 == 5)
    {
        VAR14 = FUN30(VAR12);
        if (VAR14 < 0)
            return VAR14;
        if (VAR14 == 1)
            goto VAR141;
    }
    VAR12->VAR142 = 0;
    VAR12->VAR143 = 0;
    VAR14 = FUN31(VAR12);
    while (VAR12->VAR143 < VAR12->VAR144)
    {
        if (VAR12->VAR45)
        {
            if (VAR12->VAR145 == 0 || VAR12->VAR142 != 0 || (VAR12->VAR143 % VAR12->VAR145) != 0 || FUN32(&VAR12->VAR39) < 0)
                break;
        }
        else
        {
            int VAR146 = VAR12->VAR142, VAR147 = VAR12->VAR143;
            if (FUN33(VAR12) < 0)
                break;
            if (VAR147 * VAR12->VAR148 + VAR146 < VAR12->VAR143 * VAR12->VAR148 + VAR12->VAR142)
                VAR12->VAR149.VAR150 = 1;
        }
        if (VAR12->VAR45 < 4 && VAR12->VAR47)
            FUN34(VAR12);
        if (FUN31(VAR12) < 0)
            VAR14 = VAR151;
    }
    if (VAR12->VAR45 && VAR12->VAR45 < 4 && VAR12->VAR116 == VAR118)
        if (!VAR46 || FUN35(VAR12, VAR9) < 0)
        {
            VAR12->VAR149.VAR152[VAR12->VAR153 - 1] = VAR154;
        }
    FUN36(VAR12->VAR36 == 0);
VAR141:
    FUN37(&VAR12->VAR149);
    if (VAR2->VAR134)
    {
        if ((VAR14 = VAR2->VAR134->FUN38(VAR2)) < 0)
            return VAR14;
    }
    FUN39(VAR12);
    if (VAR12->VAR25 == VAR26 && VAR12->VAR35)
    {
        int VAR155 = VAR12->VAR39.VAR139 == VAR12->VAR40 ? 0 : (FUN40(&VAR12->VAR39) >> 3);
        int VAR156 = 0;
        if (VAR9 - VAR155 > 7)
        {
            int VAR37;
            for (VAR37 = VAR155; VAR37 < VAR9 - 4; VAR37++)
            {
                if (VAR8[VAR37] == 0 && VAR8[VAR37 + 1] == 0 && VAR8[VAR37 + 2] == 1 && VAR8[VAR37 + 3] == 0xB6)
                {
                    VAR156 = !(VAR8[VAR37 + 4] & 0x40);
                    break;
                }
            }
        }
        if (VAR156)
        {
            FUN41(&VAR12->VAR40, &VAR12->VAR157, VAR9 - VAR155 + VAR158);
            if (!VAR12->VAR40)
                return FUN6(VAR159);
            memcpy(VAR12->VAR40, VAR8 + VAR155, VAR9 - VAR155);
            VAR12->VAR36 = VAR9 - VAR155;
        }
    }
    if (!VAR12->VAR35 && VAR2->VAR134)
        FUN26(VAR2);
    FUN36(VAR12->VAR115.VAR21.VAR116 == VAR12->VAR42->VAR21.VAR116);
    FUN36(VAR12->VAR115.VAR21.VAR116 == VAR12->VAR116);
    if (VAR12->VAR116 == VAR120 || VAR12->VAR19)
    {
        if ((VAR14 = FUN2(VAR16, &VAR12->VAR42->VAR21)) < 0)
            return VAR14;
        FUN42(VAR12, VAR12->VAR42, VAR16);
        FUN43(VAR12, VAR16, VAR12->VAR42, VAR160);
    }
    else if (VAR12->VAR119 != NULL)
    {
        if ((VAR14 = FUN2(VAR16, &VAR12->VAR119->VAR21)) < 0)
            return VAR14;
        FUN42(VAR12, VAR12->VAR119, VAR16);
        FUN43(VAR12, VAR16, VAR12->VAR119, VAR160);
    }
    if (VAR12->VAR119 || VAR12->VAR19)
    {
        if (VAR16->VAR161 == VAR162 && (VAR12->VAR65 == FUN18("") || VAR12->VAR65 == FUN18("")))
        {
            int VAR163, VAR164, VAR165;
            FUN44(VAR16);
            for (VAR165 = 0; VAR165 < 3; VAR165++)
            {
                int VAR166 = FUN45(VAR16->VAR56, !!VAR165);
                int VAR167 = FUN45(VAR16->VAR58, !!VAR165);
                int VAR168 = VAR16->VAR168[VAR165];
                for (VAR164 = 0; VAR164 < (VAR167 >> 1); VAR164++)
                    for (VAR163 = 0; VAR163 < VAR166; VAR163++)
                        FUN46(int, VAR16->VAR3[VAR165][VAR163 + VAR164 * VAR168], VAR16->VAR3[VAR165][VAR163 + (VAR167 - 1 - VAR164) * VAR168]);
            }
        }
        *VAR4 = 1;
    }
    return (VAR14 && (VAR2->VAR169 & VAR170)) ? VAR14 : FUN17(VAR12, VAR9);
}