int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    VAR15 *VAR16 = VAR3;
    uint64_t VAR17 = FUN2();
    FUN3(VAR2, VAR18, "", VAR2->VAR19, VAR9);
    if (VAR9 > 0)
        FUN3(VAR2, VAR18, "", VAR8[0], VAR8[1], VAR8[2], VAR8[3]);
    VAR12->VAR20 = VAR2->VAR20;
    VAR12->VAR21 = VAR2->VAR21;
    if (VAR9 == 0)
    {
        if (VAR12->VAR22 == 0 && VAR12->VAR23)
        {
            *VAR16 = *(VAR15 *)VAR12->VAR23;
            VAR12->VAR23 = NULL;
            *VAR4 = sizeof(VAR15);
        }
        return 0;
    }
    if (VAR12->VAR20 & VAR24)
    {
        int VAR25;
        if (VAR26 && VAR12->VAR27 == VAR28)
        {
            VAR25 = FUN4(&VAR12->VAR29, VAR8, VAR9);
        }
        else if (VAR30 && VAR12->VAR27 == VAR31)
        {
            VAR25 = FUN5(&VAR12->VAR29, VAR8, VAR9);
        }
        else
        {
            FUN3(VAR12->VAR2, VAR32, "");
            return -1;
        }
        if (FUN6(&VAR12->VAR29, VAR25, (const VAR7 **)&VAR8, &VAR9) < 0)
            return VAR9;
    }
VAR33:
    if (VAR12->VAR34 && (VAR12->VAR35 || VAR9 < 20))
    {
        FUN7(&VAR12->VAR36, VAR12->VAR37, VAR12->VAR34 * 8);
    }
    else
        FUN7(&VAR12->VAR36, VAR8, VAR9 * 8);
    VAR12->VAR34 = 0;
    if (!VAR12->VAR38)
    {
        if (FUN8(VAR12) < 0)
            return -1;
    }
    if (VAR12->VAR39 == NULL || VAR12->VAR39->VAR3[0])
    {
        int VAR40 = FUN9(VAR12, 0);
        VAR12->VAR39 = &VAR12->VAR41[VAR40];
    }
    if (VAR42 && VAR12->VAR43 == 5)
    {
        VAR14 = FUN10(VAR12);
    }
    else if (VAR44 && VAR12->VAR43)
    {
        VAR14 = FUN11(VAR12);
    }
    else if (VAR12->VAR45)
    {
        if (VAR12->VAR2->VAR46 && VAR12->VAR47 == 0)
        {
            GetBitContext VAR36;
            FUN7(&VAR36, VAR12->VAR2->VAR48, VAR12->VAR2->VAR46 * 8);
            VAR14 = FUN12(VAR12, &VAR36);
        }
        VAR14 = FUN12(VAR12, &VAR12->VAR36);
    }
    else if (VAR12->VAR27 == VAR49)
    {
        VAR14 = FUN13(VAR12);
    }
    else if (VAR12->VAR50)
    {
        VAR14 = FUN14(VAR12);
    }
    else
    {
        VAR14 = FUN15(VAR12);
    }
    if (VAR14 == VAR51)
        return FUN16(VAR12, VAR9);
    if (VAR14 < 0)
    {
        FUN3(VAR12->VAR2, VAR32, "");
        return -1;
    }
    VAR2->VAR52 = !VAR12->VAR22;
    if (VAR12->VAR53 == 0 && VAR12->VAR54 == 0 && VAR12->VAR55 == 0)
    {
        if (VAR12->VAR56 == FUN17("") || VAR12->VAR57 == FUN17("") || VAR12->VAR57 == FUN17("") || VAR12->VAR57 == FUN17(""))
            VAR12->VAR53 = -1;
        if (VAR12->VAR57 == FUN17("") && VAR12->VAR58 == 0 && VAR12->VAR59 == 1 && VAR12->VAR60 > 0 && VAR12->VAR22)
            VAR12->VAR53 = -1;
    }
    if (VAR12->VAR53 == 0 && VAR12->VAR54 == 0 && VAR12->VAR55 == 0)
    {
        if (VAR12->VAR57 == FUN17("") && VAR12->VAR58 == 0 && VAR12->VAR59 == 0)
            VAR12->VAR54 = 400;
    }
    if (VAR12->VAR53 && VAR12->VAR54)
    {
        VAR12->VAR54 = VAR12->VAR61 = 0;
    }
    if (VAR12->VAR62 & VAR63)
    {
        if (VAR12->VAR57 == FUN17(""))
            VAR12->VAR62 |= VAR64;
        if (VAR12->VAR57 == FUN17(""))
        {
            VAR12->VAR62 |= VAR65;
        }
        if (VAR12->VAR54 >= 500 && VAR12->VAR61 < 1814)
        {
            VAR12->VAR62 |= VAR66;
        }
        if (VAR12->VAR54 > 502 && VAR12->VAR61 < 1814)
        {
            VAR12->VAR62 |= VAR67;
        }
        if (VAR12->VAR53 && VAR12->VAR53 <= 3)
            VAR12->VAR60 = 256 * 256 * 256 * 64;
        if (VAR12->VAR53 && VAR12->VAR53 <= 1)
            VAR12->VAR62 |= VAR66;
        if (VAR12->VAR53 && VAR12->VAR53 <= 12)
            VAR12->VAR62 |= VAR68;
        if (VAR12->VAR53 && VAR12->VAR53 <= 32)
            VAR12->VAR62 |= VAR69;
        VAR12->VAR70.VAR71##VAR72 = VAR73##VAR74;
        VAR12->VAR70.VAR75##VAR72 = VAR76##VAR74;
        VAR12->VAR70.VAR77##VAR72 = VAR78##VAR74;
        if (VAR12->VAR55 && VAR12->VAR55 < 4653)
            VAR12->VAR62 |= VAR79;
        if (VAR12->VAR55 && VAR12->VAR55 < 4655)
            VAR12->VAR62 |= VAR80;
        if (VAR12->VAR55 && VAR12->VAR55 < 4670)
        {
            VAR12->VAR62 |= VAR68;
        }
        if (VAR12->VAR55 && VAR12->VAR55 <= 4712)
            VAR12->VAR62 |= VAR69;
        if (VAR12->VAR54)
            VAR12->VAR62 |= VAR80;
        if (VAR12->VAR54 == 501 && VAR12->VAR61 == 20020416)
            VAR12->VAR60 = 256 * 256 * 256 * 64;
        if (VAR12->VAR54 && VAR12->VAR54 < 500)
        {
            VAR12->VAR62 |= VAR68;
        }
        if (VAR12->VAR54)
            VAR12->VAR62 |= VAR81;
        if (VAR12->VAR54 == 500)
            VAR12->VAR60 = 256 * 256 * 256 * 64;
        if (VAR12->VAR82 == 0 && VAR12->VAR83 == 0 && VAR12->VAR54 == 0 && VAR12->VAR27 == VAR28 && VAR12->VAR58 == 0)
            VAR12->VAR62 |= VAR84;
        if (VAR12->VAR55 && VAR12->VAR55 < 4609)
            VAR12->VAR62 |= VAR84;
    }
    if (VAR12->VAR62 & VAR79)
    {
        FUN18(VAR85[0][5], VAR86)
        FUN18(VAR85[0][7], VAR87) FUN18(VAR85[0][9], VAR88) FUN18(VAR85[0][11], VAR89) FUN18(VAR85[0][13], VAR90) FUN18(VAR85[0][15], VAR91) FUN18(VAR85[1][5], VAR92) FUN18(VAR85[1][7], VAR93) FUN18(VAR85[1][9], VAR94) FUN18(VAR85[1][11], VAR95) FUN18(VAR85[1][13], VAR96) FUN18(VAR85[1][15], VAR97)
    }
    if (VAR2->VAR98 & VAR99)
        FUN3(VAR12->VAR2, VAR18, "", VAR12->VAR62, VAR12->VAR55, VAR12->VAR53, VAR12->VAR54, VAR12->VAR61, VAR12->VAR35 ? "" : "");
    {
        static VAR100 *VAR101 = NULL;
        if (!VAR101)
            VAR101 = fopen("", "");
        fprintf(VAR101, "", VAR9, VAR12->VAR102, VAR9 * (double)VAR12->VAR102);
    }
    if (VAR12->VAR27 == VAR28 && VAR12->VAR53 && VAR2->VAR103 == VAR104 && (VAR105 & VAR106))
    {
        VAR2->VAR103 = VAR107;
        VAR2->VAR108 = 0;
        VAR12->VAR47 = 0;
    }
    if (VAR12->VAR109 != VAR2->VAR108 || VAR12->VAR110 != VAR2->VAR111)
    {
        ParseContext VAR112 = VAR12->VAR29;
        VAR12->VAR29.VAR113 = 0;
        FUN19(VAR12);
        VAR12->VAR29 = VAR112;
    }
    if (!VAR12->VAR38)
    {
        FUN20(VAR2, VAR12->VAR109, VAR12->VAR110);
        goto VAR33;
    }
    if ((VAR12->VAR27 == VAR31 || VAR12->VAR27 == VAR114 || VAR12->VAR27 == VAR49))
        VAR12->VAR115 = FUN21(VAR12);
    VAR12->VAR116.VAR117 = VAR12->VAR117;
    VAR12->VAR116.VAR118 = VAR12->VAR117 == VAR119;
    if (VAR12->VAR120 == NULL && (VAR12->VAR117 == VAR121 || VAR12->VAR122))
        return FUN16(VAR12, VAR9);
    if (VAR2->VAR123 && VAR12->VAR117 == VAR121)
        return FUN16(VAR12, VAR9);
    if ((VAR2->VAR124 >= VAR125 && VAR12->VAR117 == VAR121) || (VAR2->VAR124 >= VAR126 && VAR12->VAR117 != VAR119) || VAR2->VAR124 >= VAR127)
        return FUN16(VAR12, VAR9);
    if (VAR2->VAR123 >= 5)
        return FUN16(VAR12, VAR9);
    if (VAR12->VAR128)
    {
        if (VAR12->VAR117 == VAR121)
            return FUN16(VAR12, VAR9);
        else
            VAR12->VAR128 = 0;
    }
    if ((VAR12->VAR2->VAR21 & VAR129) && VAR12->VAR117 == VAR121)
    {
        VAR12->VAR130.VAR131 = VAR12->VAR70.VAR132;
        VAR12->VAR130.VAR133 = VAR12->VAR70.VAR134;
    }
    else if ((!VAR12->VAR135) || VAR12->VAR117 == VAR121)
    {
        VAR12->VAR130.VAR131 = VAR12->VAR70.VAR136;
        VAR12->VAR130.VAR133 = VAR12->VAR70.VAR137;
    }
    else
    {
        VAR12->VAR130.VAR131 = VAR12->VAR70.VAR138;
        VAR12->VAR130.VAR133 = VAR12->VAR70.VAR137;
    }
    if (FUN22(VAR12, VAR2) < 0)
        return -1;
    if (VAR2->VAR139)
    {
        if (VAR2->VAR139->FUN23(VAR2, VAR8, VAR9) < 0)
            return -1;
    }
    FUN3(VAR2, VAR18, "", VAR12->VAR102);
    FUN24(VAR12);
    if (VAR42 && VAR12->VAR43 == 5)
    {
        VAR14 = FUN25(VAR12);
        if (VAR14 < 0)
            return VAR14;
        if (VAR14 == 1)
            goto VAR140;
    }
    VAR12->VAR141 = 0;
    VAR12->VAR142 = 0;
    FUN26(VAR12);
    while (VAR12->VAR142 < VAR12->VAR143)
    {
        if (VAR12->VAR43)
        {
            if (VAR12->VAR144 == 0 || VAR12->VAR141 != 0 || (VAR12->VAR142 % VAR12->VAR144) != 0 || FUN27(&VAR12->VAR36) > VAR12->VAR36.VAR145)
                break;
        }
        else
        {
            if (FUN28(VAR12) < 0)
                break;
        }
        if (VAR12->VAR43 < 4 && VAR12->VAR45)
            FUN29(VAR12);
        FUN26(VAR12);
    }
    if (VAR12->VAR146 && VAR12->VAR43 < 4 && VAR12->VAR117 == VAR119)
        if (!VAR44 || FUN30(VAR12, VAR9) < 0)
        {
            VAR12->VAR147[VAR12->VAR148 - 1] = VAR149 | VAR150 | VAR151;
        }
    if (VAR12->VAR27 == VAR28 && VAR12->VAR34 == 0 && VAR12->VAR35)
    {
        int VAR152 = FUN27(&VAR12->VAR36) >> 3;
        int VAR153 = 0;
        if (VAR9 - VAR152 > 5)
        {
            int VAR40;
            for (VAR40 = VAR152; VAR40 < VAR9 - 3; VAR40++)
            {
                if (VAR8[VAR40] == 0 && VAR8[VAR40 + 1] == 0 && VAR8[VAR40 + 2] == 1 && VAR8[VAR40 + 3] == 0xB6)
                {
                    VAR153 = 1;
                    break;
                }
            }
        }
        if (VAR12->VAR36.VAR113 == VAR12->VAR37 && VAR9 > 20)
        {
            VAR153 = 1;
            VAR152 = 0;
        }
        if (VAR153)
        {
            FUN31(&VAR12->VAR37, &VAR12->VAR154, VAR9 - VAR152 + VAR155);
            if (!VAR12->VAR37)
                return FUN32(VAR156);
            memcpy(VAR12->VAR37, VAR8 + VAR152, VAR9 - VAR152);
            VAR12->VAR34 = VAR9 - VAR152;
        }
    }
VAR140:
    FUN33(VAR12);
    if (VAR2->VAR139)
    {
        if (VAR2->VAR139->FUN34(VAR2) < 0)
            return -1;
    }
    FUN35(VAR12);
    assert(VAR12->VAR116.VAR117 == VAR12->VAR39->VAR117);
    assert(VAR12->VAR116.VAR117 == VAR12->VAR117);
    if (VAR12->VAR117 == VAR121 || VAR12->VAR22)
    {
        *VAR16 = *(VAR15 *)VAR12->VAR39;
    }
    else if (VAR12->VAR120 != NULL)
    {
        *VAR16 = *(VAR15 *)VAR12->VAR120;
    }
    if (VAR12->VAR120 || VAR12->VAR22)
    {
        *VAR4 = sizeof(VAR15);
        FUN36(VAR12, VAR16);
    }
    FUN3(VAR2, VAR18, "" VAR157 "", FUN2() - VAR17);
    return FUN16(VAR12, VAR9);
}