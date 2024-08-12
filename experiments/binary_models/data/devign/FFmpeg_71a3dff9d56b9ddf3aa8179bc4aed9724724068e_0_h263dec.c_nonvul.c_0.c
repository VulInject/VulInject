int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    VAR12 *VAR13 = VAR3;
    uint64_t VAR14 = FUN2();
    FUN3(VAR2, VAR15, "", VAR2->VAR16, VAR7);
    if (VAR7 > 0)
        FUN3(VAR2, VAR15, "", VAR6[0], VAR6[1], VAR6[2], VAR6[3]);
    VAR9->VAR17 = VAR2->VAR17;
    VAR9->VAR18 = VAR2->VAR18;
    if (VAR7 == 0)
    {
        if (VAR9->VAR19 == 0 && VAR9->VAR20)
        {
            *VAR13 = *(VAR12 *)VAR9->VAR20;
            VAR9->VAR20 = NULL;
            *VAR4 = sizeof(VAR12);
        }
        return 0;
    }
    if (VAR9->VAR17 & VAR21)
    {
        int VAR22;
        if (VAR23 && VAR9->VAR24 == VAR25)
        {
            VAR22 = FUN4(&VAR9->VAR26, VAR6, VAR7);
        }
        else if (VAR27 && VAR9->VAR24 == VAR28)
        {
            VAR22 = FUN5(&VAR9->VAR26, VAR6, VAR7);
        }
        else
        {
            FUN3(VAR9->VAR2, VAR29, "");
            return -1;
        }
        if (FUN6(&VAR9->VAR26, VAR22, (const VAR5 **)&VAR6, &VAR7) < 0)
            return VAR7;
    }
VAR30:
    if (VAR9->VAR31 && (VAR9->VAR32 || VAR7 < 20))
    {
        FUN7(&VAR9->VAR33, VAR9->VAR34, VAR9->VAR31 * 8);
    }
    else
        FUN7(&VAR9->VAR33, VAR6, VAR7 * 8);
    VAR9->VAR31 = 0;
    if (!VAR9->VAR35)
    {
        if (FUN8(VAR9) < 0)
            return -1;
    }
    if (VAR9->VAR36 == NULL || VAR9->VAR36->VAR3[0])
    {
        int VAR37 = FUN9(VAR9, 0);
        VAR9->VAR36 = &VAR9->VAR38[VAR37];
    }
    if (VAR39 && VAR9->VAR40 == 5)
    {
        VAR11 = FUN10(VAR9);
    }
    else if (VAR41 && VAR9->VAR40)
    {
        VAR11 = FUN11(VAR9);
    }
    else if (VAR9->VAR42)
    {
        if (VAR9->VAR2->VAR43 && VAR9->VAR44 == 0)
        {
            GetBitContext VAR33;
            FUN7(&VAR33, VAR9->VAR2->VAR45, VAR9->VAR2->VAR43 * 8);
            VAR11 = FUN12(VAR9, &VAR33);
        }
        VAR11 = FUN12(VAR9, &VAR9->VAR33);
    }
    else if (VAR9->VAR24 == VAR46)
    {
        VAR11 = FUN13(VAR9);
    }
    else if (VAR9->VAR47)
    {
        VAR11 = FUN14(VAR9);
    }
    else
    {
        VAR11 = FUN15(VAR9);
    }
    if (VAR11 == VAR48)
        return FUN16(VAR9, VAR7);
    if (VAR11 < 0)
    {
        FUN3(VAR9->VAR2, VAR29, "");
        return -1;
    }
    VAR2->VAR49 = !VAR9->VAR19;
    if (VAR9->VAR50 == 0 && VAR9->VAR51 == 0 && VAR9->VAR52 == 0)
    {
        if (VAR9->VAR53 == FUN17("") || VAR9->VAR54 == FUN17("") || VAR9->VAR54 == FUN17("") || VAR9->VAR54 == FUN17(""))
            VAR9->VAR50 = -1;
        if (VAR9->VAR54 == FUN17("") && VAR9->VAR55 == 0 && VAR9->VAR56 == 1 && VAR9->VAR57 > 0 && VAR9->VAR19)
            VAR9->VAR50 = -1;
    }
    if (VAR9->VAR50 == 0 && VAR9->VAR51 == 0 && VAR9->VAR52 == 0)
    {
        if (VAR9->VAR54 == FUN17("") && VAR9->VAR55 == 0 && VAR9->VAR56 == 0)
            VAR9->VAR51 = 400;
    }
    if (VAR9->VAR50 && VAR9->VAR51)
    {
        VAR9->VAR51 = VAR9->VAR58 = 0;
    }
    if (VAR9->VAR59 & VAR60)
    {
        if (VAR9->VAR54 == FUN17(""))
            VAR9->VAR59 |= VAR61;
        if (VAR9->VAR54 == FUN17(""))
        {
            VAR9->VAR59 |= VAR62;
        }
        if (VAR9->VAR51 >= 500 && VAR9->VAR58 < 1814)
        {
            VAR9->VAR59 |= VAR63;
        }
        if (VAR9->VAR51 > 502 && VAR9->VAR58 < 1814)
        {
            VAR9->VAR59 |= VAR64;
        }
        if (VAR9->VAR50 && VAR9->VAR50 <= 3)
            VAR9->VAR57 = 256 * 256 * 256 * 64;
        if (VAR9->VAR50 && VAR9->VAR50 <= 1)
            VAR9->VAR59 |= VAR63;
        if (VAR9->VAR50 && VAR9->VAR50 <= 12)
            VAR9->VAR59 |= VAR65;
        if (VAR9->VAR50 && VAR9->VAR50 <= 32)
            VAR9->VAR59 |= VAR66;
        VAR9->VAR67.VAR68##VAR69 = VAR70##VAR71;
        VAR9->VAR67.VAR72##VAR69 = VAR73##VAR71;
        VAR9->VAR67.VAR74##VAR69 = VAR75##VAR71;
        if (VAR9->VAR52 && VAR9->VAR52 < 4653)
            VAR9->VAR59 |= VAR76;
        if (VAR9->VAR52 && VAR9->VAR52 < 4655)
            VAR9->VAR59 |= VAR77;
        if (VAR9->VAR52 && VAR9->VAR52 < 4670)
        {
            VAR9->VAR59 |= VAR65;
        }
        if (VAR9->VAR52 && VAR9->VAR52 <= 4712)
            VAR9->VAR59 |= VAR66;
        if (VAR9->VAR51)
            VAR9->VAR59 |= VAR77;
        if (VAR9->VAR51 == 501 && VAR9->VAR58 == 20020416)
            VAR9->VAR57 = 256 * 256 * 256 * 64;
        if (VAR9->VAR51 && VAR9->VAR51 < 500)
        {
            VAR9->VAR59 |= VAR65;
        }
        if (VAR9->VAR51)
            VAR9->VAR59 |= VAR78;
        if (VAR9->VAR51 == 500)
            VAR9->VAR57 = 256 * 256 * 256 * 64;
        if (VAR9->VAR79 == 0 && VAR9->VAR80 == 0 && VAR9->VAR51 == 0 && VAR9->VAR24 == VAR25 && VAR9->VAR55 == 0)
            VAR9->VAR59 |= VAR81;
        if (VAR9->VAR52 && VAR9->VAR52 < 4609)
            VAR9->VAR59 |= VAR81;
    }
    if (VAR9->VAR59 & VAR76)
    {
        FUN18(VAR82[0][5], VAR83)
        FUN18(VAR82[0][7], VAR84) FUN18(VAR82[0][9], VAR85) FUN18(VAR82[0][11], VAR86) FUN18(VAR82[0][13], VAR87) FUN18(VAR82[0][15], VAR88) FUN18(VAR82[1][5], VAR89) FUN18(VAR82[1][7], VAR90) FUN18(VAR82[1][9], VAR91) FUN18(VAR82[1][11], VAR92) FUN18(VAR82[1][13], VAR93) FUN18(VAR82[1][15], VAR94)
    }
    if (VAR2->VAR95 & VAR96)
        FUN3(VAR9->VAR2, VAR15, "", VAR9->VAR59, VAR9->VAR52, VAR9->VAR50, VAR9->VAR51, VAR9->VAR58, VAR9->VAR32 ? "" : "");
    {
        static VAR97 *VAR98 = NULL;
        if (!VAR98)
            VAR98 = fopen("", "");
        fprintf(VAR98, "", VAR7, VAR9->VAR99, VAR7 * (double)VAR9->VAR99);
    }
    if (VAR9->VAR24 == VAR25 && VAR9->VAR50 && VAR2->VAR100 == VAR101 && (VAR102 & VAR103))
    {
        VAR2->VAR100 = VAR104;
        VAR2->VAR105 = 0;
        VAR9->VAR44 = 0;
    }
    if (VAR9->VAR106 != VAR2->VAR105 || VAR9->VAR107 != VAR2->VAR108)
    {
        ParseContext VAR109 = VAR9->VAR26;
        VAR9->VAR26.VAR110 = 0;
        FUN19(VAR9);
        VAR9->VAR26 = VAR109;
    }
    if (!VAR9->VAR35)
    {
        FUN20(VAR2, VAR9->VAR106, VAR9->VAR107);
        goto VAR30;
    }
    if ((VAR9->VAR24 == VAR28 || VAR9->VAR24 == VAR111 || VAR9->VAR24 == VAR46))
        VAR9->VAR112 = FUN21(VAR9);
    VAR9->VAR113.VAR114 = VAR9->VAR114;
    VAR9->VAR113.VAR115 = VAR9->VAR114 == VAR116;
    if (VAR9->VAR117 == NULL && (VAR9->VAR114 == VAR118 || VAR9->VAR119))
        return FUN16(VAR9, VAR7);
    if (VAR2->VAR120 && VAR9->VAR114 == VAR118)
        return FUN16(VAR9, VAR7);
    if ((VAR2->VAR121 >= VAR122 && VAR9->VAR114 == VAR118) || (VAR2->VAR121 >= VAR123 && VAR9->VAR114 != VAR116) || VAR2->VAR121 >= VAR124)
        return FUN16(VAR9, VAR7);
    if (VAR2->VAR120 >= 5)
        return FUN16(VAR9, VAR7);
    if (VAR9->VAR125)
    {
        if (VAR9->VAR114 == VAR118)
            return FUN16(VAR9, VAR7);
        else
            VAR9->VAR125 = 0;
    }
    if ((VAR9->VAR2->VAR18 & VAR126) && VAR9->VAR114 == VAR118)
    {
        VAR9->VAR127.VAR128 = VAR9->VAR67.VAR129;
        VAR9->VAR127.VAR130 = VAR9->VAR67.VAR131;
    }
    else if ((!VAR9->VAR132) || VAR9->VAR114 == VAR118)
    {
        VAR9->VAR127.VAR128 = VAR9->VAR67.VAR133;
        VAR9->VAR127.VAR130 = VAR9->VAR67.VAR134;
    }
    else
    {
        VAR9->VAR127.VAR128 = VAR9->VAR67.VAR135;
        VAR9->VAR127.VAR130 = VAR9->VAR67.VAR134;
    }
    if (FUN22(VAR9, VAR2) < 0)
        return -1;
    FUN3(VAR2, VAR15, "", VAR9->VAR99);
    FUN23(VAR9);
    if (VAR39 && VAR9->VAR40 == 5)
    {
        VAR11 = FUN24(VAR9);
        if (VAR11 < 0)
            return VAR11;
        if (VAR11 == 1)
            goto VAR136;
    }
    VAR9->VAR137 = 0;
    VAR9->VAR138 = 0;
    FUN25(VAR9);
    while (VAR9->VAR138 < VAR9->VAR139)
    {
        if (VAR9->VAR40)
        {
            if (VAR9->VAR140 == 0 || VAR9->VAR137 != 0 || (VAR9->VAR138 % VAR9->VAR140) != 0 || FUN26(&VAR9->VAR33) > VAR9->VAR33.VAR141)
                break;
        }
        else
        {
            if (FUN27(VAR9) < 0)
                break;
        }
        if (VAR9->VAR40 < 4 && VAR9->VAR42)
            FUN28(VAR9);
        FUN25(VAR9);
    }
    if (VAR9->VAR142 && VAR9->VAR40 < 4 && VAR9->VAR114 == VAR116)
        if (!VAR41 || FUN29(VAR9, VAR7) < 0)
        {
            VAR9->VAR143[VAR9->VAR144 - 1] = VAR145 | VAR146 | VAR147;
        }
    if (VAR9->VAR24 == VAR25 && VAR9->VAR31 == 0 && VAR9->VAR32)
    {
        int VAR148 = FUN26(&VAR9->VAR33) >> 3;
        int VAR149 = 0;
        if (VAR7 - VAR148 > 5)
        {
            int VAR37;
            for (VAR37 = VAR148; VAR37 < VAR7 - 3; VAR37++)
            {
                if (VAR6[VAR37] == 0 && VAR6[VAR37 + 1] == 0 && VAR6[VAR37 + 2] == 1 && VAR6[VAR37 + 3] == 0xB6)
                {
                    VAR149 = 1;
                    break;
                }
            }
        }
        if (VAR9->VAR33.VAR110 == VAR9->VAR34 && VAR7 > 20)
        {
            VAR149 = 1;
            VAR148 = 0;
        }
        if (VAR149)
        {
            VAR9->VAR34 = FUN30(VAR9->VAR34, &VAR9->VAR150, VAR7 - VAR148 + VAR151);
            memcpy(VAR9->VAR34, VAR6 + VAR148, VAR7 - VAR148);
            VAR9->VAR31 = VAR7 - VAR148;
        }
    }
VAR136:
    FUN31(VAR9);
    FUN32(VAR9);
    assert(VAR9->VAR113.VAR114 == VAR9->VAR36->VAR114);
    assert(VAR9->VAR113.VAR114 == VAR9->VAR114);
    if (VAR9->VAR114 == VAR118 || VAR9->VAR19)
    {
        *VAR13 = *(VAR12 *)VAR9->VAR36;
    }
    else if (VAR9->VAR117 != NULL)
    {
        *VAR13 = *(VAR12 *)VAR9->VAR117;
    }
    if (VAR9->VAR117 || VAR9->VAR19)
    {
        *VAR4 = sizeof(VAR12);
        FUN33(VAR9, VAR13);
    }
    VAR2->VAR16 = VAR9->VAR44 - 1;
    FUN3(VAR2, VAR15, "" VAR152 "", FUN2() - VAR14);
    return FUN16(VAR9, VAR7);
}