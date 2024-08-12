static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    int VAR5;
    VAR2->VAR3 = VAR3;
    VAR2->VAR6.VAR7 = VAR2->VAR6.VAR8 = 0;
    if (VAR2->VAR9 == VAR10 || VAR2->VAR9 == VAR11 || (VAR2->VAR12 && !VAR2->VAR13))
        FUN2(VAR2);
    if (VAR14 && VAR2->VAR9 == VAR15)
        FUN3(VAR2);
    VAR2->VAR6.VAR16 = 0;
    if (VAR2->VAR17 == VAR18)
    {
        if (VAR2->VAR19 >= 3)
            VAR2->VAR20 = 1;
        else
            VAR2->VAR20 = 0;
    }
    else if (VAR2->VAR17 != VAR21)
    {
        if (VAR2->VAR22 || VAR2->VAR9 == VAR23 || VAR2->VAR9 == VAR15)
            VAR2->VAR20 ^= 1;
    }
    if (VAR2->VAR24 & VAR25)
    {
        if (FUN4(VAR2, 1) < 0)
            return -1;
        FUN5(VAR2);
    }
    else if (!(VAR2->VAR24 & VAR26))
    {
        if (VAR2->VAR17 == VAR21)
            VAR2->VAR27 = VAR2->VAR28[VAR2->VAR17];
        else
            VAR2->VAR27 = VAR2->VAR28[VAR2->VAR29];
        FUN6(VAR2);
    }
    VAR2->VAR30 = 0;
    for (VAR4 = 1; VAR4 < VAR2->VAR31->VAR32; VAR4++)
    {
        FUN7(VAR2->VAR33[VAR4], VAR2);
    }
    if (FUN8(VAR2) < 0)
        return -1;
    if (VAR2->VAR17 != VAR18)
    {
        VAR2->VAR27 = (VAR2->VAR27 * VAR2->VAR31->VAR34 + 128) >> 8;
        VAR2->VAR35 = (VAR2->VAR35 * (VAR36)VAR2->VAR31->VAR34 + 128) >> 8;
        if (VAR2->VAR17 != VAR21 && VAR2->VAR31->VAR37 == 0)
        {
            if ((VAR2->VAR31->VAR38 && VAR2->VAR29 == VAR18) || VAR2->VAR31->VAR38 == 2)
            {
                VAR2->VAR31->FUN9(VAR2->VAR31, VAR39, (void **)&(VAR2->VAR33[0]), NULL, VAR2->VAR31->VAR32);
            }
        }
        VAR2->VAR31->FUN9(VAR2->VAR31, VAR40, (void **)&(VAR2->VAR33[0]), NULL, VAR2->VAR31->VAR32);
    }
    else
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR41 * VAR2->VAR42; VAR4++)
            VAR2->VAR43[VAR4] = VAR44;
        if (!VAR2->VAR45)
        {
            VAR2->VAR31->FUN9(VAR2->VAR31, VAR46, (void **)&(VAR2->VAR33[0]), NULL, VAR2->VAR31->VAR32);
        }
    }
    for (VAR4 = 1; VAR4 < VAR2->VAR31->VAR32; VAR4++)
    {
        FUN10(VAR2, VAR2->VAR33[VAR4]);
    }
    VAR2->VAR47.VAR48 = VAR2->VAR49->VAR48 = VAR2->VAR6.VAR8;
    VAR2->VAR47.VAR50 = VAR2->VAR49->VAR50 = VAR2->VAR6.VAR7;
    FUN11();
    if (VAR2->VAR6.VAR16 > VAR2->VAR31->VAR51 && VAR2->VAR17 == VAR52)
    {
        VAR2->VAR17 = VAR18;
        for (VAR4 = 0; VAR4 < VAR2->VAR41 * VAR2->VAR42; VAR4++)
            VAR2->VAR43[VAR4] = VAR44;
    }
    if (!VAR2->VAR53)
    {
        if (VAR2->VAR17 == VAR52 || VAR2->VAR17 == VAR54)
        {
            VAR2->VAR55 = FUN12(VAR2, VAR2->VAR56, VAR57);
            if (VAR2->VAR24 & VAR58)
            {
                int VAR59, VAR60;
                VAR59 = FUN12(VAR2, VAR2->VAR61[0][0], VAR62);
                VAR60 = FUN12(VAR2, VAR2->VAR61[1][1], VAR62);
                VAR2->VAR55 = FUN13(VAR2->VAR55, VAR59, VAR60);
            }
            FUN14(VAR2);
            FUN15(VAR2, NULL, 0, VAR2->VAR56, VAR2->VAR55, VAR57, 0);
            if (VAR2->VAR24 & VAR58)
            {
                int VAR63;
                for (VAR4 = 0; VAR4 < 2; VAR4++)
                {
                    for (VAR63 = 0; VAR63 < 2; VAR63++)
                        FUN15(VAR2, VAR2->VAR64[VAR4], VAR63, VAR2->VAR61[VAR4][VAR63], VAR2->VAR55, VAR62, 0);
                }
            }
        }
        if (VAR2->VAR17 == VAR21)
        {
            int VAR59, VAR60;
            VAR59 = FUN12(VAR2, VAR2->VAR65, VAR66);
            VAR60 = FUN12(VAR2, VAR2->VAR67, VAR68);
            VAR2->VAR55 = FUN16(VAR59, VAR60);
            VAR59 = FUN12(VAR2, VAR2->VAR69, VAR70);
            VAR60 = FUN12(VAR2, VAR2->VAR71, VAR68);
            VAR2->VAR72 = FUN16(VAR59, VAR60);
            FUN15(VAR2, NULL, 0, VAR2->VAR65, VAR2->VAR55, VAR66, 1);
            FUN15(VAR2, NULL, 0, VAR2->VAR69, VAR2->VAR72, VAR70, 1);
            FUN15(VAR2, NULL, 0, VAR2->VAR67, VAR2->VAR55, VAR68, 1);
            FUN15(VAR2, NULL, 0, VAR2->VAR71, VAR2->VAR72, VAR68, 1);
            if (VAR2->VAR24 & VAR58)
            {
                int VAR73, VAR63;
                for (VAR73 = 0; VAR73 < 2; VAR73++)
                {
                    for (VAR4 = 0; VAR4 < 2; VAR4++)
                    {
                        for (VAR63 = 0; VAR63 < 2; VAR63++)
                        {
                            int VAR74 = VAR73 ? (VAR75 | VAR76) : (VAR77 | VAR76);
                            FUN15(VAR2, VAR2->VAR78[VAR73][VAR4], VAR63, VAR2->VAR79[VAR73][VAR4][VAR63], VAR73 ? VAR2->VAR72 : VAR2->VAR55, VAR74, 1);
                        }
                    }
                }
            }
        }
    }
    if (FUN4(VAR2, 0) < 0)
        return -1;
    if (VAR2->VAR80 < 3 && VAR2->VAR81 <= 128 && VAR2->VAR17 == VAR18 && !(VAR2->VAR24 & VAR26))
        VAR2->VAR80 = 3;
    if (VAR2->VAR82 == VAR83)
    {
        VAR2->VAR84[0] = VAR85[0];
        for (VAR4 = 1; VAR4 < 64; VAR4++)
        {
            int VAR63 = VAR2->VAR86.VAR87[VAR4];
            VAR2->VAR84[VAR63] = FUN17((VAR85[VAR4] * VAR2->VAR80) >> 3);
        }
        FUN18(&VAR2->VAR86, VAR2->VAR88, VAR2->VAR89, VAR2->VAR84, VAR2->VAR90, 8, 8, 1);
        VAR2->VAR80 = 8;
    }
    VAR2->VAR49->VAR91 = VAR2->VAR47.VAR91 = VAR2->VAR17 == VAR18;
    VAR2->VAR49->VAR17 = VAR2->VAR47.VAR17 = VAR2->VAR17;
    if (VAR2->VAR47.VAR91)
        VAR2->VAR92 = 0;
    VAR2->VAR93 = FUN19(&VAR2->VAR94);
    switch (VAR2->VAR82)
    {
    case VAR83:
        if (VAR95)
            FUN20(VAR2);
        break;
    case VAR96:
        if (VAR97)
            FUN21(VAR2, VAR3);
        break;
    case VAR98:
        if (VAR99 && VAR2->VAR9 == VAR100)
            FUN22(VAR2, VAR3);
        else if (VAR101 && VAR2->VAR13)
            FUN23(VAR2, VAR3);
        else if (VAR14 && VAR2->VAR12)
            FUN24(VAR2, VAR3);
        else if (VAR102 && VAR2->VAR9 == VAR103)
            FUN25(VAR2, VAR3);
        else if (VAR104 && VAR2->VAR9 == VAR105)
            FUN26(VAR2, VAR3);
        else if (VAR106 && VAR2->VAR9 == VAR107)
            FUN27(VAR2, VAR3);
        else if (VAR108)
            FUN28(VAR2, VAR3);
        break;
    case VAR109:
        if (VAR110 || VAR111)
            FUN29(VAR2, VAR3);
        break;
    case VAR112:
        break;
    default:
        assert(0);
    }
    VAR5 = FUN19(&VAR2->VAR94);
    VAR2->VAR113 = VAR5 - VAR2->VAR93;
    for (VAR4 = 1; VAR4 < VAR2->VAR31->VAR32; VAR4++)
    {
        FUN30(VAR2->VAR33[VAR4], VAR2);
    }
    VAR2->VAR31->FUN9(VAR2->VAR31, VAR114, (void **)&(VAR2->VAR33[0]), NULL, VAR2->VAR31->VAR32);
    for (VAR4 = 1; VAR4 < VAR2->VAR31->VAR32; VAR4++)
    {
        FUN31(VAR2, VAR2->VAR33[VAR4]);
    }
    FUN11();
    return 0;
}