static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    int VAR7;
    static const uint8_t VAR8[5] = {VAR9, VAR10, VAR11, VAR12, VAR13};
    int VAR14;
    int VAR15 = 0;
    VAR4->VAR16.VAR17 = VAR2->VAR18 != 0;
    VAR4->VAR19 = VAR2->VAR18 == 0;
    VAR5 = FUN2(&VAR4->VAR20);
    VAR14 = FUN2(&VAR4->VAR20);
    if (VAR14 > 9)
    {
        FUN3(VAR2->VAR4.VAR21, VAR22, "", VAR2->VAR14, VAR4->VAR23, VAR4->VAR24);
        return -1;
    }
    if (VAR14 > 4)
    {
        VAR14 -= 5;
        VAR2->VAR25 = 1;
    }
    else
        VAR2->VAR25 = 0;
    VAR14 = VAR8[VAR14];
    if (VAR14 == VAR11 || (VAR2->VAR26 != 0 && VAR14 == VAR2->VAR14))
    {
        VAR15 = 1;
    }
    VAR2->VAR14 = VAR14;
    VAR4->VAR27 = VAR2->VAR14;
    VAR6 = FUN2(&VAR4->VAR20);
    if (VAR6 > 255)
    {
        FUN3(VAR2->VAR4.VAR21, VAR22, "");
        return -1;
    }
    VAR2->VAR28 = VAR2->VAR29[VAR6];
    if (VAR2->VAR28.VAR30 == 0)
    {
        FUN3(VAR2->VAR4.VAR21, VAR22, "");
        return -1;
    }
    VAR2->VAR31 = VAR2->VAR32[VAR2->VAR28.VAR33];
    if (VAR2->VAR31.VAR34 == 0)
    {
        FUN3(VAR2->VAR4.VAR21, VAR22, "");
        return -1;
    }
    if (VAR2->VAR35 != VAR6)
    {
        VAR2->VAR35 = VAR6;
        FUN4(VAR2);
    }
    VAR4->VAR36 = VAR2->VAR31.VAR36;
    VAR4->VAR37 = VAR2->VAR31.VAR37 * (2 - VAR2->VAR31.VAR38);
    VAR2->VAR39 = VAR4->VAR36 * 4;
    VAR2->VAR40 = VAR4->VAR36 * 2;
    VAR4->VAR41 = 16 * VAR4->VAR36 - 2 * (VAR2->VAR31.VAR42 + VAR2->VAR31.VAR43);
    if (VAR2->VAR31.VAR38)
        VAR4->VAR44 = 16 * VAR4->VAR37 - 2 * (VAR2->VAR31.VAR45 + VAR2->VAR31.VAR46);
    else
        VAR4->VAR44 = 16 * VAR4->VAR37 - 4 * (VAR2->VAR31.VAR45 + VAR2->VAR31.VAR46);
    if (VAR4->VAR47 && (VAR4->VAR41 != VAR4->VAR21->VAR41 || VAR4->VAR44 != VAR4->VAR21->VAR44))
    {
        FUN5(VAR2);
        FUN6(VAR4);
    }
    if (!VAR4->VAR47)
    {
        if (FUN7(VAR4) < 0)
            return -1;
        if (VAR4->VAR48.VAR49 == VAR50)
        {
            memcpy(VAR2->VAR51, VAR51, 16 * sizeof(VAR52));
            memcpy(VAR2->VAR53, VAR53, 16 * sizeof(VAR52));
        }
        else
        {
            int VAR54;
            for (VAR54 = 0; VAR54 < 16; VAR54++)
            {
                VAR2->VAR51[VAR54] = FUN8(VAR51[VAR54]);
                VAR2->VAR53[VAR54] = FUN8(VAR53[VAR54]);
            }
        }
        if (VAR4->VAR48.VAR55 == VAR56)
        {
            memcpy(VAR2->VAR57, VAR57, 64 * sizeof(VAR52));
            memcpy(VAR2->VAR58, VAR58, 64 * sizeof(VAR52));
            memcpy(VAR2->VAR59, VAR59, 64 * sizeof(VAR52));
            memcpy(VAR2->VAR60, VAR60, 64 * sizeof(VAR52));
        }
        else
        {
            int VAR54;
            for (VAR54 = 0; VAR54 < 64; VAR54++)
            {
                VAR2->VAR57[VAR54] = FUN8(VAR57[VAR54]);
                VAR2->VAR58[VAR54] = FUN8(VAR58[VAR54]);
                VAR2->VAR59[VAR54] = FUN8(VAR59[VAR54]);
                VAR2->VAR60[VAR54] = FUN8(VAR60[VAR54]);
            }
        }
        if (VAR2->VAR31.VAR61)
        {
            VAR2->VAR62 = VAR51;
            VAR2->VAR63 = VAR57;
            VAR2->VAR64 = VAR58;
            VAR2->VAR65 = VAR53;
            VAR2->VAR66 = VAR59;
            VAR2->VAR67 = VAR60;
        }
        else
        {
            VAR2->VAR62 = VAR2->VAR51;
            VAR2->VAR63 = VAR2->VAR57;
            VAR2->VAR64 = VAR2->VAR58;
            VAR2->VAR65 = VAR2->VAR53;
            VAR2->VAR66 = VAR2->VAR59;
            VAR2->VAR67 = VAR2->VAR60;
        }
        FUN9(VAR2);
        VAR4->VAR21->VAR41 = VAR4->VAR41;
        VAR4->VAR21->VAR44 = VAR4->VAR44;
        VAR4->VAR21->VAR68 = VAR2->VAR31.VAR69;
        if (!VAR4->VAR21->VAR68.VAR70)
            VAR4->VAR21->VAR68.VAR70 = 1;
        if (VAR2->VAR31.VAR71)
        {
            VAR4->VAR21->VAR72 = (VAR73){VAR2->VAR31.VAR74 * 2, VAR2->VAR31.VAR75};
            if (VAR2->VAR76 > 0 && VAR2->VAR76 < 44)
                VAR4->VAR21->VAR72.VAR70 *= 2;
            FUN10(&VAR4->VAR21->VAR72.VAR77, &VAR4->VAR21->VAR72.VAR70, VAR4->VAR21->VAR72.VAR77, VAR4->VAR21->VAR72.VAR70, 1 << 30);
        }
    }
    if (VAR2->VAR26 == 0)
    {
        if (FUN11(VAR2) < 0)
            return -1;
    }
    VAR4->VAR78->VAR79 = VAR2->VAR79 = FUN12(&VAR4->VAR20, VAR2->VAR31.VAR34);
    VAR2->VAR80 = 0;
    VAR2->VAR81 = 0;
    if (VAR2->VAR31.VAR38)
    {
        VAR4->VAR82 = VAR83;
    }
    else
    {
        if (FUN13(&VAR4->VAR20))
        {
            VAR4->VAR82 = VAR84 + FUN13(&VAR4->VAR20);
            FUN3(VAR2->VAR4.VAR21, VAR22, "");
        }
        else
        {
            VAR4->VAR82 = VAR83;
            VAR2->VAR81 = VAR2->VAR31.VAR85;
        }
    }
    VAR4->VAR86 = VAR4->VAR23 = VAR5 % VAR4->VAR36;
    VAR4->VAR87 = VAR4->VAR24 = (VAR5 / VAR4->VAR36) << VAR2->VAR81;
    if (VAR4->VAR24 >= VAR4->VAR37)
    {
        return -1;
    }
    if (VAR4->VAR82 == VAR83)
    {
        VAR2->VAR88 = VAR2->VAR79;
        VAR2->VAR89 = 1 << VAR2->VAR31.VAR34;
    }
    else
    {
        VAR2->VAR88 = 2 * VAR2->VAR79;
        VAR2->VAR89 = 1 << (VAR2->VAR31.VAR34 + 1);
    }
    if (VAR2->VAR90 == VAR91)
    {
        FUN2(&VAR4->VAR20);
    }
    if (VAR2->VAR31.VAR92 == 0)
    {
        VAR2->VAR93 = FUN12(&VAR4->VAR20, VAR2->VAR31.VAR94);
        if (VAR2->VAR28.VAR95 == 1 && VAR4->VAR82 == VAR83)
        {
            VAR2->VAR96 = FUN14(&VAR4->VAR20);
        }
    }
    if (VAR2->VAR31.VAR92 == 1 && !VAR2->VAR31.VAR97)
    {
        VAR2->VAR98[0] = FUN14(&VAR4->VAR20);
        if (VAR2->VAR28.VAR95 == 1 && VAR4->VAR82 == VAR83)
            VAR2->VAR98[1] = FUN14(&VAR4->VAR20);
    }
    FUN15(VAR2);
    if (VAR2->VAR28.VAR99)
    {
        VAR2->VAR100 = FUN2(&VAR4->VAR20);
    }
    VAR2->VAR101[0] = VAR2->VAR28.VAR101[0];
    VAR2->VAR101[1] = VAR2->VAR28.VAR101[1];
    if (VAR2->VAR14 == VAR9 || VAR2->VAR14 == VAR12 || VAR2->VAR14 == VAR10)
    {
        if (VAR2->VAR14 == VAR10)
        {
            VAR2->VAR102 = FUN13(&VAR4->VAR20);
            if (VAR2->VAR31.VAR85 && VAR2->VAR102)
                FUN3(VAR2->VAR4.VAR21, VAR22, "");
        }
        VAR7 = FUN13(&VAR4->VAR20);
        if (VAR7)
        {
            VAR2->VAR101[0] = FUN2(&VAR4->VAR20) + 1;
            if (VAR2->VAR14 == VAR10)
                VAR2->VAR101[1] = FUN2(&VAR4->VAR20) + 1;
            if (VAR2->VAR101[0] > 32 || VAR2->VAR101[1] > 32)
            {
                FUN3(VAR2->VAR4.VAR21, VAR22, "");
                return -1;
            }
        }
    }
    if (!VAR15)
    {
        FUN16(VAR2);
    }
    if (FUN17(VAR2) < 0)
        return -1;
    if ((VAR2->VAR28.VAR103 && (VAR2->VAR14 == VAR9 || VAR2->VAR14 == VAR12)) || (VAR2->VAR28.VAR104 == 1 && VAR2->VAR14 == VAR10))
        FUN18(VAR2);
    else if (VAR2->VAR28.VAR104 == 2 && VAR2->VAR14 == VAR10)
        FUN19(VAR2);
    else
        VAR2->VAR105 = 0;
    if (VAR4->VAR16.VAR17)
        FUN20(VAR2);
    if (VAR106)
        FUN21(VAR2);
    if (VAR2->VAR14 != VAR11 && VAR2->VAR14 != VAR13 && VAR2->VAR28.VAR107)
        VAR2->VAR108 = FUN2(&VAR4->VAR20);
    VAR2->VAR109 = 0;
    VAR4->VAR110 = VAR2->VAR28.VAR111 + FUN14(&VAR4->VAR20);
    if (VAR4->VAR110 < 0 || VAR4->VAR110 > 51)
    {
        FUN3(VAR4->VAR21, VAR22, "", VAR4->VAR110);
        return -1;
    }
    VAR2->VAR112 = FUN22(VAR2->VAR28.VAR113, VAR4->VAR110);
    if (VAR2->VAR14 == VAR12)
    {
        FUN13(&VAR4->VAR20);
    }
    if (VAR2->VAR14 == VAR12 || VAR2->VAR14 == VAR13)
    {
        FUN14(&VAR4->VAR20);
    }
    VAR2->VAR114 = 1;
    VAR2->VAR115 = 0;
    VAR2->VAR116 = 0;
    if (VAR2->VAR28.VAR117)
    {
        VAR2->VAR114 = FUN2(&VAR4->VAR20);
        if (VAR2->VAR114 < 2)
            VAR2->VAR114 ^= 1;
        if (VAR2->VAR114)
        {
            VAR2->VAR115 = FUN14(&VAR4->VAR20) << 1;
            VAR2->VAR116 = FUN14(&VAR4->VAR20) << 1;
        }
    }
    if (VAR4->VAR21->VAR118 >= VAR119 || (VAR4->VAR21->VAR118 >= VAR120 && VAR2->VAR14 != VAR11) || (VAR4->VAR21->VAR118 >= VAR121 && VAR2->VAR14 == VAR10) || (VAR4->VAR21->VAR118 >= VAR122 && VAR2->VAR18 == 0))
        VAR2->VAR114 = 0;
    if (VAR2->VAR28.VAR123 > 1 && VAR2->VAR28.VAR124 >= 3 && VAR2->VAR28.VAR124 <= 5) VAR125 = FUN12 ( & VAR4 -> VAR20 , ? ) ;
    VAR2->VAR26++;
    VAR2->VAR126 = (VAR4->VAR127 & VAR128) ? 0 : 16;
    VAR2->VAR129 = VAR106 ? 0 : VAR2->VAR126;
    if (VAR4->VAR21->VAR130 & VAR131)
    {
        FUN3(VAR2->VAR4.VAR21, VAR132, "", VAR2->VAR26, (VAR4->VAR82 == VAR83 ? "" : VAR4->VAR82 == VAR84 ? ""
                                                                                                                                                                                                                                        : ""),
               VAR5, FUN23(VAR2->VAR14), VAR6, VAR2->VAR79, VAR4->VAR78->VAR133[0], VAR4->VAR78->VAR133[1], VAR2->VAR101[0], VAR2->VAR101[1], VAR4->VAR110, VAR2->VAR114, VAR2->VAR115 / 2, VAR2->VAR116 / 2, VAR2->VAR105, VAR2->VAR105 == 1 && VAR2->VAR134 ? "" : "");
    }
    if ((VAR4->VAR21->VAR135 & VAR136) && !VAR4->VAR16.VAR17)
    {
        VAR4->VAR137.VAR138 = VAR4->VAR48.VAR139;
        VAR4->VAR137.VAR140 = VAR4->VAR48.VAR141;
    }
    else
    {
        VAR4->VAR137.VAR138 = VAR4->VAR48.VAR142;
        VAR4->VAR137.VAR140 = VAR4->VAR48.VAR143;
    }
    return 0;
}