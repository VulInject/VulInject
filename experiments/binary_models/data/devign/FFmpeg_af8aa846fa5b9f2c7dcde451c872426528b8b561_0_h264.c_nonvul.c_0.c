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
    VAR2->VAR39 = VAR4->VAR36 * 4 + 1;
    VAR2->VAR40 = VAR4->VAR36 * 2 + 1;
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
        if (VAR2->VAR31.VAR55)
        {
            VAR2->VAR56 = VAR51;
            VAR2->VAR57 = VAR53;
        }
        else
        {
            VAR2->VAR56 = VAR2->VAR51;
            VAR2->VAR57 = VAR2->VAR53;
        }
        FUN9(VAR2);
        VAR4->VAR21->VAR41 = VAR4->VAR41;
        VAR4->VAR21->VAR44 = VAR4->VAR44;
        VAR4->VAR21->VAR58 = VAR2->VAR31.VAR59;
        if (!VAR4->VAR21->VAR58.VAR60)
            VAR4->VAR21->VAR58.VAR60 = 1;
        if (VAR2->VAR31.VAR61)
        {
            VAR4->VAR21->VAR62 = (VAR63){VAR2->VAR31.VAR64, VAR2->VAR31.VAR65};
        }
    }
    if (VAR2->VAR26 == 0)
    {
        if (FUN10(VAR2) < 0)
            return -1;
    }
    VAR4->VAR66->VAR67 = VAR2->VAR67 = FUN11(&VAR4->VAR20, VAR2->VAR31.VAR34);
    VAR2->VAR68 = 0;
    if (VAR2->VAR31.VAR38)
    {
        VAR4->VAR69 = VAR70;
    }
    else
    {
        if (FUN12(&VAR4->VAR20))
        {
            VAR4->VAR69 = VAR71 + FUN12(&VAR4->VAR20);
        }
        else
        {
            VAR4->VAR69 = VAR70;
            VAR5 <<= VAR2->VAR31.VAR72;
            VAR2->VAR68 = VAR2->VAR31.VAR72;
        }
    }
    VAR4->VAR73 = VAR4->VAR23 = VAR5 % VAR4->VAR36;
    VAR4->VAR74 = VAR4->VAR24 = VAR5 / VAR4->VAR36;
    if (VAR4->VAR24 >= VAR4->VAR37)
    {
        return -1;
    }
    if (VAR4->VAR69 == VAR70)
    {
        VAR2->VAR75 = VAR2->VAR67;
        VAR2->VAR76 = 1 << VAR2->VAR31.VAR34;
    }
    else
    {
        VAR2->VAR75 = 2 * VAR2->VAR67;
        VAR2->VAR76 = 1 << (VAR2->VAR31.VAR34 + 1);
    }
    if (VAR2->VAR77 == VAR78)
    {
        FUN2(&VAR4->VAR20);
    }
    if (VAR2->VAR31.VAR79 == 0)
    {
        VAR2->VAR80 = FUN11(&VAR4->VAR20, VAR2->VAR31.VAR81);
        if (VAR2->VAR28.VAR82 == 1 && VAR4->VAR69 == VAR70)
        {
            VAR2->VAR83 = FUN13(&VAR4->VAR20);
        }
    }
    if (VAR2->VAR31.VAR79 == 1 && !VAR2->VAR31.VAR84)
    {
        VAR2->VAR85[0] = FUN13(&VAR4->VAR20);
        if (VAR2->VAR28.VAR82 == 1 && VAR4->VAR69 == VAR70)
            VAR2->VAR85[1] = FUN13(&VAR4->VAR20);
    }
    FUN14(VAR2);
    if (VAR2->VAR28.VAR86)
    {
        VAR2->VAR87 = FUN2(&VAR4->VAR20);
    }
    VAR2->VAR88[0] = VAR2->VAR28.VAR88[0];
    VAR2->VAR88[1] = VAR2->VAR28.VAR88[1];
    if (VAR2->VAR14 == VAR9 || VAR2->VAR14 == VAR12 || VAR2->VAR14 == VAR10)
    {
        if (VAR2->VAR14 == VAR10)
        {
            VAR2->VAR89 = FUN12(&VAR4->VAR20);
        }
        VAR7 = FUN12(&VAR4->VAR20);
        if (VAR7)
        {
            VAR2->VAR88[0] = FUN2(&VAR4->VAR20) + 1;
            if (VAR2->VAR14 == VAR10)
                VAR2->VAR88[1] = FUN2(&VAR4->VAR20) + 1;
            if (VAR2->VAR88[0] > 32 || VAR2->VAR88[1] > 32)
            {
                FUN3(VAR2->VAR4.VAR21, VAR22, "");
                return -1;
            }
        }
    }
    if (!VAR15)
    {
        FUN15(VAR2);
    }
    if (FUN16(VAR2) < 0)
        return -1;
    if ((VAR2->VAR28.VAR90 && (VAR2->VAR14 == VAR9 || VAR2->VAR14 == VAR12)) || (VAR2->VAR28.VAR91 == 1 && VAR2->VAR14 == VAR10))
        FUN17(VAR2);
    else if (VAR2->VAR28.VAR91 == 2 && VAR2->VAR14 == VAR10)
        FUN18(VAR2);
    else
        VAR2->VAR92 = 0;
    if (VAR4->VAR16.VAR17)
        FUN19(VAR2);
    if (VAR2->VAR14 != VAR11 && VAR2->VAR14 != VAR13 && VAR2->VAR28.VAR93)
        VAR2->VAR94 = FUN2(&VAR4->VAR20);
    VAR2->VAR95 = 0;
    VAR4->VAR96 = VAR2->VAR28.VAR97 + FUN13(&VAR4->VAR20);
    if (VAR4->VAR96 < 0 || VAR4->VAR96 > 51)
    {
        FUN3(VAR4->VAR21, VAR22, "", VAR4->VAR96);
        return -1;
    }
    VAR2->VAR98 = FUN20(VAR2->VAR28.VAR99, VAR4->VAR96);
    if (VAR2->VAR14 == VAR12)
    {
        FUN12(&VAR4->VAR20);
    }
    if (VAR2->VAR14 == VAR12 || VAR2->VAR14 == VAR13)
    {
        FUN13(&VAR4->VAR20);
    }
    VAR2->VAR100 = 1;
    VAR2->VAR101 = 0;
    VAR2->VAR102 = 0;
    if (VAR2->VAR28.VAR103)
    {
        VAR2->VAR100 = FUN2(&VAR4->VAR20);
        if (VAR2->VAR100 < 2)
            VAR2->VAR100 ^= 1;
        if (VAR2->VAR100)
        {
            VAR2->VAR101 = FUN13(&VAR4->VAR20) << 1;
            VAR2->VAR102 = FUN13(&VAR4->VAR20) << 1;
        }
    }
    if (VAR4->VAR21->VAR104 >= VAR105 || (VAR4->VAR21->VAR104 >= VAR106 && VAR2->VAR14 != VAR11) || (VAR4->VAR21->VAR104 >= VAR107 && VAR2->VAR14 == VAR10) || (VAR4->VAR21->VAR104 >= VAR108 && VAR2->VAR18 == 0))
        VAR2->VAR100 = 0;
    if (VAR2->VAR28.VAR109 > 1 && VAR2->VAR28.VAR110 >= 3 && VAR2->VAR28.VAR110 <= 5) VAR111 = FUN11 ( & VAR4 -> VAR20 , ? ) ;
    VAR2->VAR26++;
    if (VAR4->VAR21->VAR112 & VAR113)
    {
        FUN3(VAR2->VAR4.VAR21, VAR114, "", VAR2->VAR26, (VAR4->VAR69 == VAR70 ? "" : VAR4->VAR69 == VAR71 ? ""
                                                                                                                                                                                                                                        : ""),
               VAR5, FUN21(VAR2->VAR14), VAR6, VAR2->VAR67, VAR4->VAR66->VAR115[0], VAR4->VAR66->VAR115[1], VAR2->VAR88[0], VAR2->VAR88[1], VAR4->VAR96, VAR2->VAR100, VAR2->VAR101 / 2, VAR2->VAR102 / 2, VAR2->VAR92, VAR2->VAR92 == 1 && VAR2->VAR116 ? "" : "");
    }
    return 0;
}