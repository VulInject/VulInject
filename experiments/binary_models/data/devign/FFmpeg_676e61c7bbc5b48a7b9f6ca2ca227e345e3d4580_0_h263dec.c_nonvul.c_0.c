int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    VAR12 *VAR13 = VAR3;
    uint64_t VAR14 = FUN2();
    FUN3("", VAR2->VAR15, VAR7);
    FUN3("", VAR6[0], VAR6[1], VAR6[2], VAR6[3]);
    VAR9->VAR16 = VAR2->VAR16;
    VAR9->VAR17 = VAR2->VAR17;
    if (VAR7 == 0)
    {
        if (VAR9->VAR18 == 0 && VAR9->VAR19)
        {
            *VAR13 = *(VAR12 *)VAR9->VAR19;
            VAR9->VAR19 = NULL;
            *VAR4 = sizeof(VAR12);
        }
        return 0;
    }
    if (VAR9->VAR16 & VAR20)
    {
        int VAR21;
        if (VAR9->VAR22 == VAR23)
        {
            VAR21 = FUN4(&VAR9->VAR24, VAR6, VAR7);
        }
        else if (VAR9->VAR22 == VAR25)
        {
            VAR21 = FUN5(&VAR9->VAR24, VAR6, VAR7);
        }
        else
        {
            FUN6(VAR9->VAR2, VAR26, "");
            return -1;
        }
        if (FUN7(&VAR9->VAR24, VAR21, &VAR6, &VAR7) < 0)
            return VAR7;
    }
VAR27:
    if (VAR9->VAR28 && (VAR9->VAR29 || VAR7 < 20))
    {
        FUN8(&VAR9->VAR30, VAR9->VAR31, VAR9->VAR28 * 8);
    }
    else
        FUN8(&VAR9->VAR30, VAR6, VAR7 * 8);
    VAR9->VAR28 = 0;
    if (!VAR9->VAR32)
    {
        if (FUN9(VAR9) < 0)
            return -1;
    }
    if (VAR9->VAR33 == NULL || VAR9->VAR33->VAR3[0])
    {
        int VAR34 = FUN10(VAR9, 0);
        VAR9->VAR33 = &VAR9->VAR35[VAR34];
    }
    if (VAR9->VAR36 == 5)
    {
        VAR11 = FUN11(VAR9);
    }
    else if (VAR9->VAR36)
    {
        VAR11 = FUN12(VAR9);
    }
    else if (VAR9->VAR37)
    {
        if (VAR9->VAR2->VAR38 && VAR9->VAR39 == 0)
        {
            GetBitContext VAR30;
            FUN8(&VAR30, VAR9->VAR2->VAR40, VAR9->VAR2->VAR38 * 8);
            VAR11 = FUN13(VAR9, &VAR30);
        }
        VAR11 = FUN13(VAR9, &VAR9->VAR30);
        if (VAR9->VAR16 & VAR41)
            VAR9->VAR18 = 1;
    }
    else if (VAR9->VAR22 == VAR42)
    {
        VAR11 = FUN14(VAR9);
    }
    else if (VAR9->VAR43)
    {
        VAR11 = FUN15(VAR9);
    }
    else
    {
        VAR11 = FUN16(VAR9);
    }
    if (VAR11 == VAR44)
        return FUN17(VAR9, VAR7);
    if (VAR11 < 0)
    {
        FUN6(VAR9->VAR2, VAR26, "");
        return -1;
    }
    VAR2->VAR45 = !VAR9->VAR18;
    if (VAR9->VAR46 == 0 && VAR9->VAR47 == 0 && VAR9->VAR48 == 0)
    {
        if (VAR9->VAR2->VAR49 == FUN18("") || VAR9->VAR2->VAR50 == FUN18("") || VAR9->VAR2->VAR50 == FUN18(""))
            VAR9->VAR46 = -1;
        if (VAR9->VAR2->VAR50 == FUN18("") && VAR9->VAR51 == 0 && VAR9->VAR52 == 1 && VAR9->VAR53 > 0 && VAR9->VAR18)
            VAR9->VAR46 = -1;
    }
    if (VAR9->VAR46 == 0 && VAR9->VAR47 == 0 && VAR9->VAR48 == 0)
    {
        if (VAR9->VAR2->VAR50 == FUN18("") && VAR9->VAR51 == 0 && VAR9->VAR52 == 0)
            VAR9->VAR47 = 400;
    }
    if (VAR9->VAR54 & VAR55)
    {
        VAR9->VAR54 &= ~VAR56;
        if (VAR9->VAR53 > -2 && !VAR9->VAR57 && (VAR9->VAR47 || !VAR9->VAR58))
            VAR9->VAR54 |= VAR56;
        if (VAR9->VAR2->VAR50 == FUN18(""))
            VAR9->VAR54 |= VAR59;
        if (VAR9->VAR2->VAR50 == FUN18(""))
        {
            VAR9->VAR54 |= VAR60;
        }
        if (VAR9->VAR47 >= 500)
        {
            VAR9->VAR54 |= VAR61;
        }
        if (VAR9->VAR47 > 502)
        {
            VAR9->VAR54 |= VAR62;
        }
        if (VAR9->VAR46 && VAR9->VAR46 <= 3)
            VAR9->VAR53 = 256 * 256 * 256 * 64;
        if (VAR9->VAR46 && VAR9->VAR46 <= 1)
            VAR9->VAR54 |= VAR61;
        if (VAR9->VAR46 && VAR9->VAR46 <= 12)
            VAR9->VAR54 |= VAR63;
        if (VAR9->VAR46 && VAR9->VAR46 <= 32)
            VAR9->VAR54 |= VAR64;
        VAR9->VAR65.VAR66##VAR67 = VAR68##VAR69;
        VAR9->VAR65.VAR70##VAR67 = VAR71##VAR69;
        VAR9->VAR65.VAR72##VAR67 = VAR73##VAR69;
        if (VAR9->VAR48 && VAR9->VAR48 < 4653)
            VAR9->VAR54 |= VAR74;
        if (VAR9->VAR48 && VAR9->VAR48 < 4655)
            VAR9->VAR54 |= VAR75;
        if (VAR9->VAR48 && VAR9->VAR48 < 4670)
        {
            VAR9->VAR54 |= VAR63;
        }
        if (VAR9->VAR48 && VAR9->VAR48 <= 4712)
            VAR9->VAR54 |= VAR64;
        if (VAR9->VAR47)
            VAR9->VAR54 |= VAR75;
        if (VAR9->VAR47 == 501 && VAR9->VAR76 == 20020416)
            VAR9->VAR53 = 256 * 256 * 256 * 64;
        if (VAR9->VAR47 && VAR9->VAR47 < 500)
        {
            VAR9->VAR54 |= VAR63;
        }
        if (VAR9->VAR47)
            VAR9->VAR54 |= VAR77;
        if (VAR9->VAR47 == 500)
            VAR9->VAR53 = 256 * 256 * 256 * 64;
        if (VAR9->VAR58 == 0 && VAR9->VAR57 == 0 && VAR9->VAR47 == 0 && VAR9->VAR22 == VAR23 && VAR9->VAR51 == 0)
            VAR9->VAR54 |= VAR56;
        if (VAR9->VAR48 && VAR9->VAR48 < 4609)
            VAR9->VAR54 |= VAR56;
    }
    if (VAR9->VAR54 & VAR74)
    {
        FUN19(VAR78[0][5], VAR79)
        FUN19(VAR78[0][7], VAR80) FUN19(VAR78[0][9], VAR81) FUN19(VAR78[0][11], VAR82) FUN19(VAR78[0][13], VAR83) FUN19(VAR78[0][15], VAR84) FUN19(VAR78[1][5], VAR85) FUN19(VAR78[1][7], VAR86) FUN19(VAR78[1][9], VAR87) FUN19(VAR78[1][11], VAR88) FUN19(VAR78[1][13], VAR89) FUN19(VAR78[1][15], VAR90)
    }
    if (VAR2->VAR91 & VAR92)
        FUN6(VAR9->VAR2, VAR93, "", VAR9->VAR54, VAR9->VAR48, VAR9->VAR46, VAR9->VAR47, VAR9->VAR76, VAR9->VAR29 ? "" : "");
    {
        static VAR94 *VAR95 = NULL;
        if (!VAR95)
            VAR95 = fopen("", "");
        fprintf(VAR95, "", VAR7, VAR9->VAR96, VAR7 * (double)VAR9->VAR96);
    }
    if (VAR9->VAR97 != VAR2->VAR97 || VAR9->VAR98 != VAR2->VAR98)
    {
        ParseContext VAR99 = VAR9->VAR24;
        VAR9->VAR24.VAR100 = 0;
        FUN20(VAR9);
        VAR9->VAR24 = VAR99;
    }
    if (!VAR9->VAR32)
    {
        VAR2->VAR97 = VAR9->VAR97;
        VAR2->VAR98 = VAR9->VAR98;
        goto VAR27;
    }
    if ((VAR9->VAR22 == VAR25 || VAR9->VAR22 == VAR101))
        VAR9->VAR102 = FUN21(VAR9);
    VAR9->VAR103.VAR104 = VAR9->VAR104;
    VAR9->VAR103.VAR105 = VAR9->VAR104 == VAR106;
    if (VAR9->VAR107 == NULL && (VAR9->VAR104 == VAR108 || VAR9->VAR109))
        return FUN17(VAR9, VAR7);
    if (VAR2->VAR110 && VAR9->VAR104 == VAR108)
        return FUN17(VAR9, VAR7);
    if (VAR2->VAR110 >= 5)
        return FUN17(VAR9, VAR7);
    if (VAR9->VAR111)
    {
        if (VAR9->VAR104 == VAR108)
            return FUN17(VAR9, VAR7);
        else
            VAR9->VAR111 = 0;
    }
    if (FUN22(VAR9, VAR2) < 0)
        return -1;
    FUN3("", VAR9->VAR96);
    FUN23(VAR9);
    if (VAR9->VAR36 == 5)
    {
        if (FUN24(VAR9) < 0)
            return -1;
    }
    VAR9->VAR112 = 0;
    VAR9->VAR113 = 0;
    FUN25(VAR9);
    while (VAR9->VAR113 < VAR9->VAR114)
    {
        if (VAR9->VAR36)
        {
            if (VAR9->VAR112 != 0 || (VAR9->VAR113 % VAR9->VAR115) != 0 || FUN26(&VAR9->VAR30) > VAR9->VAR30.VAR116)
                break;
        }
        else
        {
            if (FUN27(VAR9) < 0)
                break;
        }
        if (VAR9->VAR36 < 4 && VAR9->VAR37)
            FUN28(VAR9);
        FUN25(VAR9);
    }
    if (VAR9->VAR117 && VAR9->VAR36 < 4 && VAR9->VAR104 == VAR106)
        if (FUN29(VAR9, VAR7) < 0)
        {
            VAR9->VAR118[VAR9->VAR119 - 1] = VAR120 | VAR121 | VAR122;
        }
    if (VAR9->VAR22 == VAR23 && VAR9->VAR28 == 0 && VAR9->VAR29)
    {
        int VAR123 = FUN26(&VAR9->VAR30) >> 3;
        int VAR124 = 0;
        if (VAR7 - VAR123 > 5 && VAR7 - VAR123 < VAR125)
        {
            int VAR34;
            for (VAR34 = VAR123; VAR34 < VAR7 - 3; VAR34++)
            {
                if (VAR6[VAR34] == 0 && VAR6[VAR34 + 1] == 0 && VAR6[VAR34 + 2] == 1 && VAR6[VAR34 + 3] == 0xB6)
                {
                    VAR124 = 1;
                    break;
                }
            }
        }
        if (VAR9->VAR30.VAR100 == VAR9->VAR31 && VAR7 > 20)
        {
            VAR124 = 1;
            VAR123 = 0;
        }
        if (VAR124)
        {
            memcpy(VAR9->VAR31, VAR6 + VAR123, VAR7 - VAR123);
            VAR9->VAR28 = VAR7 - VAR123;
        }
    }
    FUN30(VAR9);
    FUN31(VAR9);
    assert(VAR9->VAR103.VAR104 == VAR9->VAR33->VAR104);
    assert(VAR9->VAR103.VAR104 == VAR9->VAR104);
    if (VAR9->VAR104 == VAR108 || VAR9->VAR18)
    {
        *VAR13 = *(VAR12 *)&VAR9->VAR103;
        FUN32(VAR9, VAR13);
    }
    else
    {
        *VAR13 = *(VAR12 *)&VAR9->VAR126;
        if (VAR13)
            FUN32(VAR9, VAR13);
    }
    VAR2->VAR15 = VAR9->VAR39 - 1;
    if (VAR9->VAR107 || VAR9->VAR18)
        *VAR4 = sizeof(VAR12);
    FUN3("", FUN2() - VAR14);
    return FUN17(VAR9, VAR7);
}