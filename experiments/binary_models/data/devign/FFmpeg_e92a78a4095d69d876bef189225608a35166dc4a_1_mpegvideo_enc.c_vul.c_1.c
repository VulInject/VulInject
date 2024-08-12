static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    int VAR6;
    int VAR7 = VAR2->VAR8;
    VAR2->VAR3 = VAR3;
    VAR2->VAR9.VAR10 = VAR2->VAR9.VAR11 = 0;
    if (VAR2->VAR12 == VAR13 || VAR2->VAR12 == VAR14 || (VAR2->VAR15 && !VAR2->VAR16))
        FUN2(VAR2);
    if (VAR17 && VAR2->VAR12 == VAR18)
        FUN3(VAR2);
    VAR2->VAR9.VAR19 = 0;
    if (VAR2->VAR20 == VAR21)
    {
        if (VAR2->VAR16 >= 3)
            VAR2->VAR22 = 1;
        else
            VAR2->VAR22 = 0;
    }
    else if (VAR2->VAR20 != VAR23)
    {
        if (VAR2->VAR24 || VAR2->VAR12 == VAR25 || VAR2->VAR12 == VAR18)
            VAR2->VAR22 ^= 1;
    }
    if (VAR2->VAR26 & VAR27)
    {
        if (FUN4(VAR2, 1) < 0)
            return -1;
        FUN5(VAR2);
    }
    else if (!(VAR2->VAR26 & VAR28))
    {
        if (VAR2->VAR20 == VAR23)
            VAR2->VAR29 = VAR2->VAR30[VAR2->VAR20];
        else
            VAR2->VAR29 = VAR2->VAR30[VAR2->VAR31];
        FUN6(VAR2);
    }
    if (VAR2->VAR12 != VAR32 && VAR2->VAR12 != VAR33)
    {
        if (VAR2->VAR34 != VAR2->VAR35)
            FUN7(&VAR2->VAR34);
        if (VAR2->VAR36 != VAR2->VAR37)
            FUN7(&VAR2->VAR36);
        VAR2->VAR34 = VAR2->VAR35;
        VAR2->VAR36 = VAR2->VAR37;
    }
    VAR2->VAR38 = 0;
    for (VAR4 = 1; VAR4 < VAR7; VAR4++)
    {
        VAR5 = FUN8(VAR2->VAR39[VAR4], VAR2);
        if (VAR5 < 0)
            return VAR5;
    }
    if (FUN9(VAR2) < 0)
        return -1;
    if (VAR2->VAR20 != VAR21)
    {
        VAR2->VAR29 = (VAR2->VAR29 * VAR2->VAR40->VAR41 + 128) >> 8;
        VAR2->VAR42 = (VAR2->VAR42 * (VAR43)VAR2->VAR40->VAR41 + 128) >> 8;
        if (VAR2->VAR20 != VAR23)
        {
            if ((VAR2->VAR40->VAR44 && VAR2->VAR31 == VAR21) || VAR2->VAR40->VAR44 == 2)
            {
                VAR2->VAR40->FUN10(VAR2->VAR40, VAR45, &VAR2->VAR39[0], NULL, VAR7, sizeof(void *));
            }
        }
        VAR2->VAR40->FUN10(VAR2->VAR40, VAR46, &VAR2->VAR39[0], NULL, VAR7, sizeof(void *));
    }
    else
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR47 * VAR2->VAR48; VAR4++)
            VAR2->VAR49[VAR4] = VAR50;
        if (!VAR2->VAR51)
        {
            VAR2->VAR40->FUN10(VAR2->VAR40, VAR52, &VAR2->VAR39[0], NULL, VAR7, sizeof(void *));
        }
    }
    for (VAR4 = 1; VAR4 < VAR7; VAR4++)
    {
        FUN11(VAR2, VAR2->VAR39[VAR4]);
    }
    VAR2->VAR53.VAR54 = VAR2->VAR55->VAR54 = VAR2->VAR9.VAR11;
    VAR2->VAR53.VAR56 = VAR2->VAR55->VAR56 = VAR2->VAR9.VAR10;
    FUN12();
    if (VAR2->VAR9.VAR19 > VAR2->VAR40->VAR57 && VAR2->VAR20 == VAR58)
    {
        VAR2->VAR20 = VAR21;
        for (VAR4 = 0; VAR4 < VAR2->VAR47 * VAR2->VAR48; VAR4++)
            VAR2->VAR49[VAR4] = VAR50;
        if (VAR2->VAR16 >= 3)
            VAR2->VAR22 = 1;
        FUN13(VAR2, "", VAR2->VAR53.VAR56, VAR2->VAR53.VAR54);
    }
    if (!VAR2->VAR59)
    {
        if (VAR2->VAR20 == VAR58 || VAR2->VAR20 == VAR60)
        {
            VAR2->VAR61 = FUN14(VAR2, VAR2->VAR62, VAR63);
            if (VAR2->VAR26 & VAR64)
            {
                int VAR65, VAR66;
                VAR65 = FUN14(VAR2, VAR2->VAR67[0][0], VAR68);
                VAR66 = FUN14(VAR2, VAR2->VAR67[1][1], VAR68);
                VAR2->VAR61 = FUN15(VAR2->VAR61, VAR65, VAR66);
            }
            FUN16(VAR2);
            FUN17(VAR2, NULL, 0, VAR2->VAR62, VAR2->VAR61, VAR63, 0);
            if (VAR2->VAR26 & VAR64)
            {
                int VAR69;
                for (VAR4 = 0; VAR4 < 2; VAR4++)
                {
                    for (VAR69 = 0; VAR69 < 2; VAR69++)
                        FUN17(VAR2, VAR2->VAR70[VAR4], VAR69, VAR2->VAR67[VAR4][VAR69], VAR2->VAR61, VAR68, 0);
                }
            }
        }
        if (VAR2->VAR20 == VAR23)
        {
            int VAR65, VAR66;
            VAR65 = FUN14(VAR2, VAR2->VAR71, VAR72);
            VAR66 = FUN14(VAR2, VAR2->VAR73, VAR74);
            VAR2->VAR61 = FUN18(VAR65, VAR66);
            VAR65 = FUN14(VAR2, VAR2->VAR75, VAR76);
            VAR66 = FUN14(VAR2, VAR2->VAR77, VAR74);
            VAR2->VAR78 = FUN18(VAR65, VAR66);
            FUN17(VAR2, NULL, 0, VAR2->VAR71, VAR2->VAR61, VAR72, 1);
            FUN17(VAR2, NULL, 0, VAR2->VAR75, VAR2->VAR78, VAR76, 1);
            FUN17(VAR2, NULL, 0, VAR2->VAR73, VAR2->VAR61, VAR74, 1);
            FUN17(VAR2, NULL, 0, VAR2->VAR77, VAR2->VAR78, VAR74, 1);
            if (VAR2->VAR26 & VAR64)
            {
                int VAR79, VAR69;
                for (VAR79 = 0; VAR79 < 2; VAR79++)
                {
                    for (VAR4 = 0; VAR4 < 2; VAR4++)
                    {
                        for (VAR69 = 0; VAR69 < 2; VAR69++)
                        {
                            int VAR80 = VAR79 ? (VAR81 | VAR82) : (VAR83 | VAR82);
                            FUN17(VAR2, VAR2->VAR84[VAR79][VAR4], VAR69, VAR2->VAR85[VAR79][VAR4][VAR69], VAR79 ? VAR2->VAR78 : VAR2->VAR61, VAR80, 1);
                        }
                    }
                }
            }
        }
    }
    if (FUN4(VAR2, 0) < 0)
        return -1;
    if (VAR2->VAR86 < 3 && VAR2->VAR87 <= 128 && VAR2->VAR20 == VAR21 && !(VAR2->VAR26 & VAR28))
        VAR2->VAR86 = 3;
    if (VAR2->VAR88 == VAR89)
    {
        const VAR90 *VAR91 = VAR92;
        const VAR90 *VAR93 = VAR92;
        if (VAR2->VAR40->VAR94)
        {
            VAR93 = VAR91 = VAR2->VAR40->VAR94;
        }
        if (VAR2->VAR40->VAR95)
            VAR93 = VAR2->VAR40->VAR95;
        for (VAR4 = 1; VAR4 < 64; VAR4++)
        {
            int VAR69 = VAR2->VAR96.VAR97[VAR4];
            VAR2->VAR95[VAR69] = FUN19((VAR93[VAR4] * VAR2->VAR86) >> 3);
            VAR2->VAR94[VAR69] = FUN19((VAR91[VAR4] * VAR2->VAR86) >> 3);
        }
        VAR2->VAR98 = VAR2->VAR99 = VAR100[VAR2->VAR101];
        VAR2->VAR95[0] = VAR2->VAR94[0] = VAR100[VAR2->VAR101][8];
        FUN20(&VAR2->VAR96, VAR2->VAR35, VAR2->VAR37, VAR2->VAR94, VAR2->VAR102, 8, 8, 1);
        FUN20(&VAR2->VAR96, VAR2->VAR34, VAR2->VAR36, VAR2->VAR95, VAR2->VAR102, 8, 8, 1);
        VAR2->VAR86 = 8;
    }
    if (VAR2->VAR12 == VAR32)
    {
        static const uint8_t VAR103[32] = {13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
        static const uint8_t VAR104[32] = {14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14};
        for (VAR4 = 1; VAR4 < 64; VAR4++)
        {
            int VAR69 = VAR2->VAR96.VAR97[VAR105[VAR4]];
            VAR2->VAR94[VAR69] = VAR106[5 * 2 + 0][VAR4];
            VAR2->VAR95[VAR69] = VAR106[5 * 2 + 1][VAR4];
        }
        VAR2->VAR98 = VAR103;
        VAR2->VAR99 = VAR104;
        VAR2->VAR94[0] = 13;
        VAR2->VAR95[0] = 14;
        FUN20(&VAR2->VAR96, VAR2->VAR35, VAR2->VAR37, VAR2->VAR94, VAR2->VAR102, 8, 8, 1);
        FUN20(&VAR2->VAR96, VAR2->VAR34, VAR2->VAR36, VAR2->VAR95, VAR2->VAR102, 8, 8, 1);
        VAR2->VAR86 = 8;
    }
    VAR2->VAR55->VAR107.VAR108 = VAR2->VAR53.VAR107.VAR108 = VAR2->VAR20 == VAR21;
    VAR2->VAR55->VAR107.VAR20 = VAR2->VAR53.VAR107.VAR20 = VAR2->VAR20;
    if (VAR2->VAR53.VAR107.VAR108)
        VAR2->VAR109 = 0;
    VAR2->VAR110 = VAR2->VAR111 = 0;
    VAR2->VAR112 = FUN21(&VAR2->VAR113);
    switch (VAR2->VAR88)
    {
    case VAR89:
        if (VAR114)
            FUN22(VAR2->VAR40, &VAR2->VAR113, &VAR2->VAR115, VAR2->VAR94, VAR2->VAR95);
        break;
    case VAR116:
        if (VAR117)
            FUN23(VAR2, VAR3);
        break;
    case VAR118:
        if (VAR119 && VAR2->VAR12 == VAR120)
            FUN24(VAR2, VAR3);
        else if (VAR121 && VAR2->VAR16)
            FUN25(VAR2, VAR3);
        else if (VAR17 && VAR2->VAR15)
            FUN26(VAR2, VAR3);
        else if (VAR122 && VAR2->VAR12 == VAR123)
            FUN27(VAR2, VAR3);
        else if (VAR124 && VAR2->VAR12 == VAR125)
            FUN28(VAR2, VAR3);
        else if (VAR126 && VAR2->VAR12 == VAR127)
            FUN29(VAR2, VAR3);
        else if (VAR128)
            FUN30(VAR2, VAR3);
        break;
    case VAR129:
        if (VAR130 || VAR131)
            FUN31(VAR2, VAR3);
        break;
    default:
        FUN32(0);
    }
    VAR6 = FUN21(&VAR2->VAR113);
    VAR2->VAR132 = VAR6 - VAR2->VAR112;
    for (VAR4 = 1; VAR4 < VAR7; VAR4++)
    {
        FUN33(VAR2->VAR39[VAR4], VAR2);
    }
    VAR2->VAR40->FUN10(VAR2->VAR40, VAR133, &VAR2->VAR39[0], NULL, VAR7, sizeof(void *));
    for (VAR4 = 1; VAR4 < VAR7; VAR4++)
    {
        FUN34(VAR2, VAR2->VAR39[VAR4]);
    }
    FUN12();
    return 0;
}