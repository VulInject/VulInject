int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    int VAR9, VAR10, VAR11 = 0;
    unsigned int VAR12;
    int VAR13, VAR14;
    VAR15 *VAR16;
    VAR9 = FUN2(VAR2, 8);
    VAR11 |= FUN3(VAR2) << 0;
    VAR11 |= FUN3(VAR2) << 1;
    VAR11 |= FUN3(VAR2) << 2;
    VAR11 |= FUN3(VAR2) << 3;
    VAR11 |= FUN3(VAR2) << 4;
    VAR11 |= FUN3(VAR2) << 5;
    FUN4(VAR2, 2);
    VAR10 = FUN2(VAR2, 8);
    VAR12 = FUN5(VAR2);
    if (VAR12 >= VAR17)
    {
        FUN6(VAR4, VAR18, "", VAR12);
        return VAR19;
    }
    VAR8 = FUN7(sizeof(*VAR16));
    if (!VAR8)
        return FUN8(VAR20);
    VAR16 = (VAR15 *)VAR8->VAR21;
    VAR16->VAR12 = VAR12;
    VAR16->VAR22 = 24;
    VAR16->VAR9 = VAR9;
    VAR16->VAR11 = VAR11;
    VAR16->VAR10 = VAR10;
    memset(VAR16->VAR23, 16, sizeof(VAR16->VAR23));
    memset(VAR16->VAR24, 16, sizeof(VAR16->VAR24));
    VAR16->VAR25 = 0;
    if (VAR16->VAR9 == 100 || VAR16->VAR9 == 110 || VAR16->VAR9 == 122 || VAR16->VAR9 == 244 || VAR16->VAR9 == 44 || VAR16->VAR9 == 83 || VAR16->VAR9 == 86 || VAR16->VAR9 == 118 || VAR16->VAR9 == 128 || VAR16->VAR9 == 138 || VAR16->VAR9 == 144)
    {
        VAR16->VAR26 = FUN5(VAR2);
        if (VAR16->VAR26 > 3)
        {
            FUN9(VAR4, "", VAR16->VAR26);
            goto VAR27;
        }
        else if (VAR16->VAR26 == 3)
        {
            VAR16->VAR28 = FUN3(VAR2);
        }
        VAR16->VAR29 = FUN10(VAR2) + 8;
        VAR16->VAR30 = FUN10(VAR2) + 8;
        if (VAR16->VAR30 != VAR16->VAR29)
        {
            FUN9(VAR4, "");
            goto VAR27;
        }
        VAR16->VAR31 = FUN3(VAR2);
        FUN11(VAR2, VAR16, NULL, 1, VAR16->VAR23, VAR16->VAR24);
    }
    else
    {
        VAR16->VAR26 = 1;
        VAR16->VAR29 = 8;
        VAR16->VAR30 = 8;
    }
    VAR14 = FUN10(VAR2);
    if (VAR14 < VAR32 - 4 || VAR14 > VAR33 - 4)
    {
        FUN6(VAR4, VAR18, "", VAR14);
        goto VAR27;
    }
    VAR16->VAR34 = VAR14 + 4;
    VAR16->VAR35 = FUN5(VAR2);
    if (VAR16->VAR35 == 0)
    {
        VAR16->VAR36 = FUN10(VAR2) + 4;
    }
    else if (VAR16->VAR35 == 1)
    {
        VAR16->VAR37 = FUN3(VAR2);
        VAR16->VAR38 = FUN12(VAR2);
        VAR16->VAR39 = FUN12(VAR2);
        VAR16->VAR40 = FUN10(VAR2);
        if ((unsigned)VAR16->VAR40 >= FUN13(VAR16->VAR41))
        {
            FUN6(VAR4, VAR18, "", VAR16->VAR40);
            goto VAR27;
        }
        for (VAR13 = 0; VAR13 < VAR16->VAR40; VAR13++)
            VAR16->VAR41[VAR13] = FUN12(VAR2);
    }
    else if (VAR16->VAR35 != 2)
    {
        FUN6(VAR4, VAR18, "", VAR16->VAR35);
        goto VAR27;
    }
    VAR16->VAR42 = FUN5(VAR2);
    if (VAR16->VAR42 > VAR43)
    {
        FUN6(VAR4, VAR18, "", VAR16->VAR42);
        goto VAR27;
    }
    VAR16->VAR44 = FUN3(VAR2);
    VAR16->VAR45 = FUN10(VAR2) + 1;
    VAR16->VAR46 = FUN10(VAR2) + 1;
    if ((unsigned)VAR16->VAR45 >= VAR47 / 16 || (unsigned)VAR16->VAR46 >= VAR47 / 16 || FUN14(16 * VAR16->VAR45, 16 * VAR16->VAR46, 0, VAR4))
    {
        FUN6(VAR4, VAR18, "");
        goto VAR27;
    }
    VAR16->VAR48 = FUN3(VAR2);
    if (!VAR16->VAR48)
        VAR16->VAR49 = FUN3(VAR2);
    else
        VAR16->VAR49 = 0;
    VAR16->VAR50 = FUN3(VAR2);
    if (!VAR16->VAR48 && !VAR16->VAR50)
    {
        FUN6(VAR4, VAR18, "");
        goto VAR27;
    }
    if (VAR16->VAR49)
        FUN6(VAR4, VAR18, "");
    VAR16->VAR51 = FUN3(VAR2);
    if (VAR16->VAR51)
    {
        unsigned int VAR52 = FUN10(VAR2);
        unsigned int VAR53 = FUN10(VAR2);
        unsigned int VAR54 = FUN10(VAR2);
        unsigned int VAR55 = FUN10(VAR2);
        if (VAR4->VAR56 & VAR57)
        {
            FUN6(VAR4, VAR58, ""
                                        "",
                   VAR52, VAR53, VAR54, VAR55);
            VAR16->VAR52 = VAR16->VAR53 = VAR16->VAR54 = VAR16->VAR55 = 0;
        }
        else
        {
            int VAR59 = (VAR16->VAR26 == 1) ? 1 : 0;
            int VAR60 = (VAR16->VAR26 == 1 || VAR16->VAR26 == 2) ? 1 : 0;
            int VAR61 = 1 << VAR60;
            int VAR62 = (2 - VAR16->VAR48) << VAR59;
            if (VAR52 & (0x1F >> (VAR16->VAR29 > 8)) && !(VAR4->VAR63 & VAR64))
            {
                VAR52 &= ~(0x1F >> (VAR16->VAR29 > 8));
                FUN6(VAR4, VAR65, ""
                                              "",
                       VAR52);
            }
            if (VAR47 / VAR61 <= VAR52 || VAR47 / VAR61 - VAR52 <= VAR53 || 16 * VAR16->VAR45 <= VAR61 * (VAR52 + VAR53) || VAR47 / VAR62 <= VAR54 || VAR47 / VAR62 - VAR54 <= VAR55 || 16 * VAR16->VAR46 <= VAR62 * (VAR54 + VAR55))
            {
                FUN6(VAR4, VAR65, "");
                if (VAR4->VAR66 & VAR67)
                    goto VAR27;
                VAR52 = VAR53 = VAR54 = VAR55 = 0;
            }
            VAR16->VAR52 = VAR52 * VAR61;
            VAR16->VAR53 = VAR53 * VAR61;
            VAR16->VAR54 = VAR54 * VAR62;
            VAR16->VAR55 = VAR55 * VAR62;
        }
    }
    else
    {
        VAR16->VAR52 = VAR16->VAR53 = VAR16->VAR54 = VAR16->VAR55 = VAR16->VAR51 = 0;
    }
    VAR16->VAR68 = FUN3(VAR2);
    if (VAR16->VAR68)
    {
        int VAR69 = FUN15(VAR2, VAR4, VAR16);
        if (VAR69 < 0 && VAR4->VAR66 & VAR67)
            goto VAR27;
    }
    if (!VAR16->VAR70 && (VAR16->VAR42 || VAR4->VAR71 >= VAR72))
    {
        VAR16->VAR73 = VAR43 - 1;
        for (VAR13 = 0; VAR13 < FUN13(VAR74); VAR13++)
        {
            if (VAR74[VAR13][0] == VAR16->VAR10)
            {
                VAR16->VAR73 = FUN16(VAR74[VAR13][1] / (VAR16->VAR45 * VAR16->VAR46), VAR16->VAR73);
                break;
            }
        }
    }
    if (!VAR16->VAR75.VAR76)
        VAR16->VAR75.VAR76 = 1;
    if (VAR4->VAR77 & VAR78)
    {
        static const char VAR79[4][5] = {"", "", "", ""};
        FUN6(VAR4, VAR58, "" VAR80 "" VAR80 "", VAR12, VAR16->VAR9, VAR16->VAR10, VAR16->VAR35, VAR16->VAR42, VAR16->VAR45, VAR16->VAR46, VAR16->VAR48 ? "" : (VAR16->VAR49 ? "" : ""), VAR16->VAR50 ? "" : "", VAR16->VAR52, VAR16->VAR53, VAR16->VAR54, VAR16->VAR55, VAR16->VAR68 ? "" : "", VAR79[VAR16->VAR26], VAR16->VAR81 ? VAR16->VAR82 : 0, VAR16->VAR81 ? VAR16->VAR83 : 0);
    }
    if (VAR6->VAR84[VAR12] && !memcmp(VAR6->VAR84[VAR12]->VAR21, VAR8->VAR21, VAR8->VAR85))
    {
        FUN17(&VAR8);
    }
    else
    {
        FUN18(VAR6, VAR12);
        VAR6->VAR84[VAR12] = VAR8;
    }
    return 0;
VAR27:
    FUN17(&VAR8);
    return VAR19;
}