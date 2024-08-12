int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    VAR15 *VAR16 = VAR3;
    uint64_t VAR17 = FUN2();
    VAR12->VAR18 = VAR2->VAR18;
    VAR12->VAR19 = VAR2->VAR19;
    if (VAR9 == 0)
    {
        if (VAR12->VAR20 == 0 && VAR12->VAR21)
        {
            *VAR16 = VAR12->VAR21->VAR22;
            VAR12->VAR21 = NULL;
            *VAR4 = sizeof(VAR15);
        }
        return 0;
    }
    if (VAR12->VAR18 & VAR23)
    {
        int VAR24;
        if (VAR25 && VAR12->VAR26 == VAR27)
        {
            VAR24 = FUN3(&VAR12->VAR28, VAR8, VAR9);
        }
        else if (VAR29 && VAR12->VAR26 == VAR30)
        {
            VAR24 = FUN4(&VAR12->VAR28, VAR8, VAR9);
        }
        else
        {
            FUN5(VAR12->VAR2, VAR31, "");
            return -1;
        }
        if (FUN6(&VAR12->VAR28, VAR24, (const VAR7 **)&VAR8, &VAR9) < 0)
            return VAR9;
    }
VAR32:
    if (VAR12->VAR33 && (VAR12->VAR34 || VAR9 < 20))
    {
        FUN7(&VAR12->VAR35, VAR12->VAR36, VAR12->VAR33 * 8);
    }
    else
        FUN7(&VAR12->VAR35, VAR8, VAR9 * 8);
    VAR12->VAR33 = 0;
    if (!VAR12->VAR37)
    {
        if (FUN8(VAR12) < 0)
            return -1;
    }
    if (VAR12->VAR38 == NULL || VAR12->VAR38->VAR22.VAR3[0])
    {
        int VAR39 = FUN9(VAR12, 0);
        if (VAR39 < 0)
            return VAR39;
        VAR12->VAR38 = &VAR12->VAR40[VAR39];
    }
    if (VAR41 && VAR12->VAR42 == 5)
    {
        VAR14 = FUN10(VAR12);
    }
    else if (VAR43 && VAR12->VAR42)
    {
        VAR14 = FUN11(VAR12);
    }
    else if (VAR25 && VAR12->VAR44)
    {
        if (VAR12->VAR2->VAR45 && VAR12->VAR46 == 0)
        {
            GetBitContext VAR35;
            FUN7(&VAR35, VAR12->VAR2->VAR47, VAR12->VAR2->VAR45 * 8);
            VAR14 = FUN12(VAR12, &VAR35);
        }
        VAR14 = FUN12(VAR12, &VAR12->VAR35);
    }
    else if (VAR48 && VAR12->VAR26 == VAR49)
    {
        VAR14 = FUN13(VAR12);
    }
    else if (VAR50 && VAR12->VAR51)
    {
        VAR14 = FUN14(VAR12);
    }
    else
    {
        VAR14 = FUN15(VAR12);
    }
    if (VAR14 == VAR52)
        return FUN16(VAR12, VAR9);
    if (VAR14 < 0)
    {
        FUN5(VAR12->VAR2, VAR31, "");
        return -1;
    }
    VAR2->VAR53 = !VAR12->VAR20;
    if (VAR12->VAR54 == -1 && VAR12->VAR55 == -1 && VAR12->VAR56 == -1)
    {
        if (VAR12->VAR57 == FUN17("") || VAR12->VAR58 == FUN17("") || VAR12->VAR58 == FUN17("") || VAR12->VAR58 == FUN17("") || VAR12->VAR58 == FUN17(""))
            VAR12->VAR54 = 0;
        if (VAR12->VAR58 == FUN17("") && VAR12->VAR59 == 0 && VAR12->VAR60 == 1 && VAR12->VAR61 > 0 && VAR12->VAR20)
            VAR12->VAR54 = 0;
    }
    if (VAR12->VAR54 == -1 && VAR12->VAR55 == -1 && VAR12->VAR56 == -1)
    {
        if (VAR12->VAR58 == FUN17("") && VAR12->VAR59 == 0 && VAR12->VAR60 == 0)
            VAR12->VAR55 = 400;
    }
    if (VAR12->VAR54 >= 0 && VAR12->VAR55 >= 0)
    {
        VAR12->VAR55 = VAR12->VAR62 = -1;
    }
    if (VAR12->VAR63 & VAR64)
    {
        if (VAR12->VAR58 == FUN17(""))
            VAR12->VAR63 |= VAR65;
        if (VAR12->VAR58 == FUN17(""))
        {
            VAR12->VAR63 |= VAR66;
        }
        if (VAR12->VAR55 >= 500 && VAR12->VAR62 < 1814)
        {
            VAR12->VAR63 |= VAR67;
        }
        if (VAR12->VAR55 > 502 && VAR12->VAR62 < 1814)
        {
            VAR12->VAR63 |= VAR68;
        }
        if (VAR12->VAR54 <= 3U)
            VAR12->VAR61 = 256 * 256 * 256 * 64;
        if (VAR12->VAR54 <= 1U)
            VAR12->VAR63 |= VAR67;
        if (VAR12->VAR54 <= 12U)
            VAR12->VAR63 |= VAR69;
        if (VAR12->VAR54 <= 32U)
            VAR12->VAR63 |= VAR70;
        VAR12->VAR71.VAR72##VAR73 = VAR74##VAR75;
        VAR12->VAR71.VAR76##VAR73 = VAR77##VAR75;
        VAR12->VAR71.VAR78##VAR73 = VAR79##VAR75;
        if (VAR12->VAR56 < 4653U)
            VAR12->VAR63 |= VAR80;
        if (VAR12->VAR56 < 4655U)
            VAR12->VAR63 |= VAR81;
        if (VAR12->VAR56 < 4670U)
        {
            VAR12->VAR63 |= VAR69;
        }
        if (VAR12->VAR56 <= 4712U)
            VAR12->VAR63 |= VAR70;
        if (VAR12->VAR55 >= 0)
            VAR12->VAR63 |= VAR81;
        if (VAR12->VAR55 == 501 && VAR12->VAR62 == 20020416)
            VAR12->VAR61 = 256 * 256 * 256 * 64;
        if (VAR12->VAR55 < 500U)
        {
            VAR12->VAR63 |= VAR69;
        }
        if (VAR12->VAR55 >= 0)
            VAR12->VAR63 |= VAR82;
        if (VAR12->VAR55 == 500)
            VAR12->VAR61 = 256 * 256 * 256 * 64;
        if (VAR12->VAR83 == 0 && VAR12->VAR84 == 0 && VAR12->VAR55 == -1 && VAR12->VAR26 == VAR27 && VAR12->VAR59 == 0)
            VAR12->VAR63 |= VAR85;
        if (VAR12->VAR56 < 4609U)
            VAR12->VAR63 |= VAR85;
    }
    if (VAR12->VAR63 & VAR80)
    {
        FUN18(VAR86[0][5], VAR87)
        FUN18(VAR86[0][7], VAR88) FUN18(VAR86[0][9], VAR89) FUN18(VAR86[0][11], VAR90) FUN18(VAR86[0][13], VAR91) FUN18(VAR86[0][15], VAR92) FUN18(VAR86[1][5], VAR93) FUN18(VAR86[1][7], VAR94) FUN18(VAR86[1][9], VAR95) FUN18(VAR86[1][11], VAR96) FUN18(VAR86[1][13], VAR97) FUN18(VAR86[1][15], VAR98)
    }
    if (VAR2->VAR99 & VAR100)
        FUN5(VAR12->VAR2, VAR101, "", VAR12->VAR63, VAR12->VAR56, VAR12->VAR54, VAR12->VAR55, VAR12->VAR62, VAR12->VAR34 ? "" : "");
    if (VAR12->VAR26 == VAR27 && VAR12->VAR54 >= 0 && VAR2->VAR102 == VAR103 && (FUN19() & VAR104))
    {
        VAR2->VAR102 = VAR105;
        VAR2->VAR106 = 0;
        VAR12->VAR46 = 0;
    }
    if (VAR12->VAR107 != VAR2->VAR106 || VAR12->VAR108 != VAR2->VAR109)
    {
        ParseContext VAR110 = VAR12->VAR28;
        VAR12->VAR28.VAR111 = 0;
        FUN20(VAR12);
        VAR12->VAR28 = VAR110;
    }
    if (!VAR12->VAR37)
    {
        FUN21(VAR2, VAR12->VAR107, VAR12->VAR108);
        goto VAR32;
    }
    if ((VAR12->VAR26 == VAR30 || VAR12->VAR26 == VAR112 || VAR12->VAR26 == VAR49))
        VAR12->VAR113 = FUN22(VAR12);
    VAR12->VAR114.VAR22.VAR115 = VAR12->VAR115;
    VAR12->VAR114.VAR22.VAR116 = VAR12->VAR115 == VAR117;
    if (VAR12->VAR118 == NULL && (VAR12->VAR115 == VAR119 || VAR12->VAR120))
        return FUN16(VAR12, VAR9);
    if ((VAR2->VAR121 >= VAR122 && VAR12->VAR115 == VAR119) || (VAR2->VAR121 >= VAR123 && VAR12->VAR115 != VAR117) || VAR2->VAR121 >= VAR124)
        return FUN16(VAR12, VAR9);
    if (VAR12->VAR125)
    {
        if (VAR12->VAR115 == VAR119)
            return FUN16(VAR12, VAR9);
        else
            VAR12->VAR125 = 0;
    }
    if ((VAR12->VAR2->VAR19 & VAR126) && VAR12->VAR115 == VAR119)
    {
        VAR12->VAR127.VAR128 = VAR12->VAR71.VAR129;
        VAR12->VAR127.VAR130 = VAR12->VAR71.VAR131;
    }
    else if ((!VAR12->VAR132) || VAR12->VAR115 == VAR119)
    {
        VAR12->VAR127.VAR128 = VAR12->VAR71.VAR133;
        VAR12->VAR127.VAR130 = VAR12->VAR71.VAR134;
    }
    else
    {
        VAR12->VAR127.VAR128 = VAR12->VAR71.VAR135;
        VAR12->VAR127.VAR130 = VAR12->VAR71.VAR134;
    }
    if (FUN23(VAR12, VAR2) < 0)
        return -1;
    if (!VAR12->VAR34)
        FUN24(VAR2);
    if (VAR136 && (VAR12->VAR2->VAR137->VAR138 & VAR139))
    {
        FUN25(VAR12, VAR12->VAR35.VAR111, VAR12->VAR35.VAR140 - VAR12->VAR35.VAR111);
        goto VAR141;
    }
    if (VAR2->VAR142)
    {
        if (VAR2->VAR142->FUN26(VAR2, VAR12->VAR35.VAR111, VAR12->VAR35.VAR140 - VAR12->VAR35.VAR111) < 0)
            return -1;
    }
    FUN27(VAR12);
    if (VAR41 && VAR12->VAR42 == 5)
    {
        VAR14 = FUN28(VAR12);
        if (VAR14 < 0)
            return VAR14;
        if (VAR14 == 1)
            goto VAR143;
    }
    VAR12->VAR144 = 0;
    VAR12->VAR145 = 0;
    VAR14 = FUN29(VAR12);
    while (VAR12->VAR145 < VAR12->VAR146)
    {
        if (VAR12->VAR42)
        {
            if (VAR12->VAR147 == 0 || VAR12->VAR144 != 0 || (VAR12->VAR145 % VAR12->VAR147) != 0 || FUN30(&VAR12->VAR35) > VAR12->VAR35.VAR148)
                break;
        }
        else
        {
            int VAR149 = VAR12->VAR144, VAR150 = VAR12->VAR145;
            if (FUN31(VAR12) < 0)
                break;
            if (VAR150 * VAR12->VAR151 + VAR149 < VAR12->VAR145 * VAR12->VAR151 + VAR12->VAR144)
                VAR12->VAR152 = 1;
        }
        if (VAR12->VAR42 < 4 && VAR12->VAR44)
            FUN32(VAR12);
        if (FUN29(VAR12) < 0)
            VAR14 = VAR153;
    }
    if (VAR12->VAR42 && VAR12->VAR42 < 4 && VAR12->VAR115 == VAR117)
        if (!VAR43 || FUN33(VAR12, VAR9) < 0)
        {
            VAR12->VAR154[VAR12->VAR155 - 1] = VAR156;
        }
    assert(VAR12->VAR33 == 0);
VAR141:
    if (VAR12->VAR26 == VAR27 && VAR12->VAR34)
    {
        int VAR157 = FUN30(&VAR12->VAR35) >> 3;
        int VAR158 = 0;
        if (VAR9 - VAR157 > 5)
        {
            int VAR39;
            for (VAR39 = VAR157; VAR39 < VAR9 - 3; VAR39++)
            {
                if (VAR8[VAR39] == 0 && VAR8[VAR39 + 1] == 0 && VAR8[VAR39 + 2] == 1 && VAR8[VAR39 + 3] == 0xB6)
                {
                    VAR158 = 1;
                    break;
                }
            }
        }
        if (VAR12->VAR35.VAR111 == VAR12->VAR36 && VAR9 > 7 && VAR12->VAR54 >= 0)
        {
            VAR158 = 1;
            VAR157 = 0;
        }
        if (VAR158)
        {
            FUN34(&VAR12->VAR36, &VAR12->VAR159, VAR9 - VAR157 + VAR160);
            if (!VAR12->VAR36)
                return FUN35(VAR161);
            memcpy(VAR12->VAR36, VAR8 + VAR157, VAR9 - VAR157);
            VAR12->VAR33 = VAR9 - VAR157;
        }
    }
VAR143:
    FUN36(VAR12);
    if (VAR2->VAR142)
    {
        if (VAR2->VAR142->FUN37(VAR2) < 0)
            return -1;
    }
    FUN38(VAR12);
    assert(VAR12->VAR114.VAR22.VAR115 == VAR12->VAR38->VAR22.VAR115);
    assert(VAR12->VAR114.VAR22.VAR115 == VAR12->VAR115);
    if (VAR12->VAR115 == VAR119 || VAR12->VAR20)
    {
        *VAR16 = VAR12->VAR38->VAR22;
    }
    else if (VAR12->VAR118 != NULL)
    {
        *VAR16 = VAR12->VAR118->VAR22;
    }
    if (VAR12->VAR118 || VAR12->VAR20)
    {
        *VAR4 = sizeof(VAR15);
        FUN39(VAR12, VAR16);
    }
    FUN5(VAR2, VAR101, "" VAR162 "", FUN2() - VAR17);
    return (VAR14 && (VAR2->VAR163 & VAR164)) ? VAR14 : FUN16(VAR12, VAR9);
}