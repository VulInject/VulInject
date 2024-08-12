int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12 = 0;
    unsigned int VAR13;
    int VAR14, VAR15;
    VAR16 *VAR17;
    VAR9 = FUN2(sizeof(*VAR17));
    if (!VAR9)
        return FUN3(VAR18);
    VAR17 = (VAR16 *)VAR9->VAR19;
    VAR17->VAR20 = VAR2->VAR21 - VAR2->VAR22;
    if (VAR17->VAR20 > sizeof(VAR17->VAR19))
    {
        FUN4(VAR4, VAR23, "");
        VAR17->VAR20 = sizeof(VAR17->VAR19);
    }
    memcpy(VAR17->VAR19, VAR2->VAR22, VAR17->VAR20);
    VAR10 = FUN5(VAR2, 8);
    VAR12 |= FUN6(VAR2) << 0;
    VAR12 |= FUN6(VAR2) << 1;
    VAR12 |= FUN6(VAR2) << 2;
    VAR12 |= FUN6(VAR2) << 3;
    VAR12 |= FUN6(VAR2) << 4;
    VAR12 |= FUN6(VAR2) << 5;
    FUN7(VAR2, 2);
    VAR11 = FUN5(VAR2, 8);
    VAR13 = FUN8(VAR2);
    if (VAR13 >= VAR24)
    {
        FUN4(VAR4, VAR25, "", VAR13);
        goto VAR26;
    }
    VAR17->VAR13 = VAR13;
    VAR17->VAR27 = 24;
    VAR17->VAR10 = VAR10;
    VAR17->VAR12 = VAR12;
    VAR17->VAR11 = VAR11;
    VAR17->VAR28 = -1;
    memset(VAR17->VAR29, 16, sizeof(VAR17->VAR29));
    memset(VAR17->VAR30, 16, sizeof(VAR17->VAR30));
    VAR17->VAR31 = 0;
    VAR17->VAR32 = 2;
    if (VAR17->VAR10 == 100 || VAR17->VAR10 == 110 || VAR17->VAR10 == 122 || VAR17->VAR10 == 244 || VAR17->VAR10 == 44 || VAR17->VAR10 == 83 || VAR17->VAR10 == 86 || VAR17->VAR10 == 118 || VAR17->VAR10 == 128 || VAR17->VAR10 == 138 || VAR17->VAR10 == 144)
    {
        VAR17->VAR33 = FUN8(VAR2);
        if (VAR17->VAR33 > 3U)
        {
            FUN9(VAR4, "", VAR17->VAR33);
            goto VAR26;
        }
        else if (VAR17->VAR33 == 3)
        {
            VAR17->VAR34 = FUN6(VAR2);
            if (VAR17->VAR34)
            {
                FUN4(VAR4, VAR25, "");
                goto VAR26;
            }
        }
        VAR17->VAR35 = FUN10(VAR2) + 8;
        VAR17->VAR36 = FUN10(VAR2) + 8;
        if (VAR17->VAR36 != VAR17->VAR35)
        {
            FUN9(VAR4, "");
            goto VAR26;
        }
        if (VAR17->VAR35 < 8 || VAR17->VAR35 > 14 || VAR17->VAR36 < 8 || VAR17->VAR36 > 14)
        {
            FUN4(VAR4, VAR25, "", VAR17->VAR35, VAR17->VAR36);
            goto VAR26;
        }
        VAR17->VAR37 = FUN6(VAR2);
        VAR17->VAR31 |= FUN11(VAR2, VAR17, NULL, 1, VAR17->VAR29, VAR17->VAR30);
    }
    else
    {
        VAR17->VAR33 = 1;
        VAR17->VAR35 = 8;
        VAR17->VAR36 = 8;
    }
    VAR15 = FUN10(VAR2);
    if (VAR15 < VAR38 - 4 || VAR15 > VAR39 - 4)
    {
        FUN4(VAR4, VAR25, "", VAR15);
        goto VAR26;
    }
    VAR17->VAR40 = VAR15 + 4;
    VAR17->VAR41 = FUN8(VAR2);
    if (VAR17->VAR41 == 0)
    {
        unsigned VAR42 = FUN10(VAR2);
        if (VAR42 > 12)
        {
            FUN4(VAR4, VAR25, "", VAR42);
            goto VAR26;
        }
        VAR17->VAR43 = VAR42 + 4;
    }
    else if (VAR17->VAR41 == 1)
    {
        VAR17->VAR44 = FUN6(VAR2);
        VAR17->VAR45 = FUN12(VAR2);
        VAR17->VAR46 = FUN12(VAR2);
        VAR17->VAR47 = FUN10(VAR2);
        if ((unsigned)VAR17->VAR47 >= FUN13(VAR17->VAR48))
        {
            FUN4(VAR4, VAR25, "", VAR17->VAR47);
            goto VAR26;
        }
        for (VAR14 = 0; VAR14 < VAR17->VAR47; VAR14++)
            VAR17->VAR48[VAR14] = FUN12(VAR2);
    }
    else if (VAR17->VAR41 != 2)
    {
        FUN4(VAR4, VAR25, "", VAR17->VAR41);
        goto VAR26;
    }
    VAR17->VAR49 = FUN8(VAR2);
    if (VAR4->VAR50 == FUN14('', '', '', ''))
        VAR17->VAR49 = FUN15(2, VAR17->VAR49);
    if (VAR17->VAR49 > VAR51 - 2 || VAR17->VAR49 > 16U)
    {
        FUN4(VAR4, VAR25, "", VAR17->VAR49);
        goto VAR26;
    }
    VAR17->VAR52 = FUN6(VAR2);
    VAR17->VAR53 = FUN10(VAR2) + 1;
    VAR17->VAR54 = FUN10(VAR2) + 1;
    VAR17->VAR55 = FUN6(VAR2);
    if (!VAR17->VAR55)
        VAR17->VAR56 = FUN6(VAR2);
    else
        VAR17->VAR56 = 0;
    if ((unsigned)VAR17->VAR53 >= VAR57 / 16 || (unsigned)VAR17->VAR54 >= VAR57 / (16 * (2 - VAR17->VAR55)) || FUN16(16 * VAR17->VAR53, 16 * VAR17->VAR54 * (2 - VAR17->VAR55), 0, VAR4))
    {
        FUN4(VAR4, VAR25, "");
        goto VAR26;
    }
    VAR17->VAR58 = FUN6(VAR2);
    if (VAR17->VAR56)
        FUN4(VAR4, VAR25, "");
    VAR17->VAR59 = FUN6(VAR2);
    if (VAR17->VAR59)
    {
        unsigned int VAR60 = FUN10(VAR2);
        unsigned int VAR61 = FUN10(VAR2);
        unsigned int VAR62 = FUN10(VAR2);
        unsigned int VAR63 = FUN10(VAR2);
        int VAR64 = 16 * VAR17->VAR53;
        int VAR65 = 16 * VAR17->VAR54 * (2 - VAR17->VAR55);
        if (VAR4->VAR66 & VAR67)
        {
            FUN4(VAR4, VAR68, ""
                                        "",
                   VAR60, VAR61, VAR62, VAR63);
            VAR17->VAR60 = VAR17->VAR61 = VAR17->VAR62 = VAR17->VAR63 = 0;
        }
        else
        {
            int VAR69 = (VAR17->VAR33 == 1) ? 1 : 0;
            int VAR70 = (VAR17->VAR33 == 1 || VAR17->VAR33 == 2) ? 1 : 0;
            int VAR71 = 1 << VAR70;
            int VAR72 = (2 - VAR17->VAR55) << VAR69;
            if (VAR60 & (0x1F >> (VAR17->VAR35 > 8)) && !(VAR4->VAR73 & VAR74))
            {
                VAR60 &= ~(0x1F >> (VAR17->VAR35 > 8));
                FUN4(VAR4, VAR23, ""
                                              "",
                       VAR60);
            }
            if (VAR60 > (unsigned)VAR57 / 4 / VAR71 || VAR61 > (unsigned)VAR57 / 4 / VAR71 || VAR62 > (unsigned)VAR57 / 4 / VAR72 || VAR63 > (unsigned)VAR57 / 4 / VAR72 || (VAR60 + VAR61) * VAR71 >= VAR64 || (VAR62 + VAR63) * VAR72 >= VAR65)
            {
                FUN4(VAR4, VAR25, "", VAR60, VAR61, VAR62, VAR63, VAR64, VAR65);
                goto VAR26;
            }
            VAR17->VAR60 = VAR60 * VAR71;
            VAR17->VAR61 = VAR61 * VAR71;
            VAR17->VAR62 = VAR62 * VAR72;
            VAR17->VAR63 = VAR63 * VAR72;
        }
    }
    else
    {
        VAR17->VAR60 = VAR17->VAR61 = VAR17->VAR62 = VAR17->VAR63 = VAR17->VAR59 = 0;
    }
    VAR17->VAR75 = FUN6(VAR2);
    if (VAR17->VAR75)
    {
        int VAR76 = FUN17(VAR2, VAR4, VAR17);
        if (VAR76 < 0)
            goto VAR26;
    }
    if (FUN18(VAR2) < 0)
    {
        FUN4(VAR4, VAR7 ? VAR23 : VAR25, "", VAR17->VAR75 ? "" : "", -FUN18(VAR2));
        if (!VAR7)
            goto VAR26;
    }
    if (!VAR17->VAR77)
    {
        VAR17->VAR78 = VAR79 - 1;
        for (VAR14 = 0; VAR14 < FUN13(VAR80); VAR14++)
        {
            if (VAR80[VAR14][0] == VAR17->VAR11)
            {
                VAR17->VAR78 = FUN19(VAR80[VAR14][1] / (VAR17->VAR53 * VAR17->VAR54), VAR17->VAR78);
                break;
            }
        }
    }
    if (!VAR17->VAR81.VAR82)
        VAR17->VAR81.VAR82 = 1;
    if (VAR4->VAR83 & VAR84)
    {
        static const char VAR85[4][5] = {"", "", "", ""};
        FUN4(VAR4, VAR68, "" VAR86 "" VAR86 "", VAR13, VAR17->VAR10, VAR17->VAR11, VAR17->VAR41, VAR17->VAR49, VAR17->VAR53, VAR17->VAR54, VAR17->VAR55 ? "" : (VAR17->VAR56 ? "" : ""), VAR17->VAR58 ? "" : "", VAR17->VAR60, VAR17->VAR61, VAR17->VAR62, VAR17->VAR63, VAR17->VAR75 ? "" : "", VAR85[VAR17->VAR33], VAR17->VAR87 ? VAR17->VAR88 : 0, VAR17->VAR87 ? VAR17->VAR89 : 0, VAR17->VAR35, VAR17->VAR77 ? VAR17->VAR78 : -1);
    }
    if (VAR6->VAR90[VAR13] && !memcmp(VAR6->VAR90[VAR13]->VAR19, VAR9->VAR19, VAR9->VAR91))
    {
        FUN20(&VAR9);
    }
    else
    {
        FUN21(VAR6, VAR13);
        VAR6->VAR90[VAR13] = VAR9;
    }
    return 0;
VAR26:
    FUN20(&VAR9);
    return VAR92;
}