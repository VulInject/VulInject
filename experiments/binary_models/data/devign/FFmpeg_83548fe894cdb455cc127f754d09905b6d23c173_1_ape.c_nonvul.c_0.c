static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    uint32_t VAR10;
    int VAR11;
    int VAR12, VAR13 = 0;
    int64_t VAR14, VAR15;
    VAR6->VAR16 = FUN2(VAR4);
    VAR10 = FUN3(VAR4);
    if (VAR10 != FUN4('', '', '', ''))
        return -1;
    VAR6->VAR17 = FUN5(VAR4);
    if (VAR6->VAR17 < VAR18 || VAR6->VAR17 > VAR19)
    {
        FUN6(VAR2, VAR20, "", VAR6->VAR17 / 1000, (VAR6->VAR17 % 1000) / 10);
        return -1;
    }
    if (VAR6->VAR17 >= 3980)
    {
        VAR6->VAR21 = FUN5(VAR4);
        VAR6->VAR22 = FUN3(VAR4);
        VAR6->VAR23 = FUN3(VAR4);
        VAR6->VAR24 = FUN3(VAR4);
        VAR6->VAR25 = FUN3(VAR4);
        VAR6->VAR26 = FUN3(VAR4);
        VAR6->VAR27 = FUN3(VAR4);
        VAR6->VAR28 = FUN3(VAR4);
        FUN7(VAR4, VAR6->VAR29, 16);
        if (VAR6->VAR22 > 52)
            FUN8(VAR4, VAR6->VAR22 - 52);
        VAR6->VAR30 = FUN5(VAR4);
        VAR6->VAR31 = FUN5(VAR4);
        VAR6->VAR32 = FUN3(VAR4);
        VAR6->VAR33 = FUN3(VAR4);
        VAR6->VAR34 = FUN3(VAR4);
        VAR6->VAR35 = FUN5(VAR4);
        VAR6->VAR36 = FUN5(VAR4);
        VAR6->VAR37 = FUN3(VAR4);
    }
    else
    {
        VAR6->VAR22 = 0;
        VAR6->VAR23 = 32;
        VAR6->VAR30 = FUN5(VAR4);
        VAR6->VAR31 = FUN5(VAR4);
        VAR6->VAR36 = FUN5(VAR4);
        VAR6->VAR37 = FUN3(VAR4);
        VAR6->VAR25 = FUN3(VAR4);
        VAR6->VAR28 = FUN3(VAR4);
        VAR6->VAR34 = FUN3(VAR4);
        VAR6->VAR33 = FUN3(VAR4);
        if (VAR6->VAR31 & VAR38)
        {
            FUN8(VAR4, 4);
            VAR6->VAR23 += 4;
        }
        if (VAR6->VAR31 & VAR39)
        {
            VAR6->VAR24 = FUN3(VAR4);
            VAR6->VAR23 += 4;
            VAR6->VAR24 *= sizeof(VAR40);
        }
        else
            VAR6->VAR24 = VAR6->VAR34 * sizeof(VAR40);
        if (VAR6->VAR31 & VAR41)
            VAR6->VAR35 = 8;
        else if (VAR6->VAR31 & VAR42)
            VAR6->VAR35 = 24;
        else
            VAR6->VAR35 = 16;
        if (VAR6->VAR17 >= 3950)
            VAR6->VAR32 = 73728 * 4;
        else if (VAR6->VAR17 >= 3900 || (VAR6->VAR17 >= 3800 && VAR6->VAR30 >= 4000))
            VAR6->VAR32 = 73728;
        else
            VAR6->VAR32 = 9216;
        if (!(VAR6->VAR31 & VAR43))
            FUN8(VAR4, VAR6->VAR25);
    }
    if (!VAR6->VAR34)
    {
        FUN6(VAR2, VAR20, "");
        return FUN9(VAR44);
    }
    if (VAR6->VAR34 > VAR45 / sizeof(VAR46))
    {
        FUN6(VAR2, VAR20, "" VAR47 "", VAR6->VAR34);
        return -1;
    }
    if (VAR6->VAR24 / sizeof(*VAR6->VAR48) < VAR6->VAR34)
    {
        FUN6(VAR2, VAR20, "" VAR47 "", VAR6->VAR24 / sizeof(*VAR6->VAR48), VAR6->VAR34);
        return VAR49;
    }
    VAR6->VAR50 = FUN10(VAR6->VAR34 * sizeof(VAR46));
    if (!VAR6->VAR50)
        return FUN9(VAR51);
    VAR6->VAR52 = VAR6->VAR16 + VAR6->VAR22 + VAR6->VAR23 + VAR6->VAR24 + VAR6->VAR25;
    if (VAR6->VAR17 < 3810)
        VAR6->VAR52 += VAR6->VAR34;
    VAR6->VAR53 = 0;
    VAR6->VAR54 = VAR6->VAR33;
    if (VAR6->VAR34 > 1)
        VAR6->VAR54 += VAR6->VAR32 * (VAR6->VAR34 - 1);
    if (VAR6->VAR24 > 0)
    {
        VAR6->VAR48 = FUN10(VAR6->VAR24);
        if (!VAR6->VAR48)
            return FUN9(VAR51);
        for (VAR11 = 0; VAR11 < VAR6->VAR24 / sizeof(VAR55) && !VAR4->VAR56; VAR11++)
            VAR6->VAR48[VAR11] = FUN3(VAR4);
        if (VAR6->VAR17 < 3810)
        {
            VAR6->VAR57 = FUN10(VAR6->VAR34);
            if (!VAR6->VAR57)
                return FUN9(VAR51);
            for (VAR11 = 0; VAR11 < VAR6->VAR34 && !VAR4->VAR56; VAR11++)
                VAR6->VAR57[VAR11] = FUN11(VAR4);
        }
    }
    VAR6->VAR50[0].VAR58 = VAR6->VAR52;
    VAR6->VAR50[0].VAR59 = VAR6->VAR32;
    VAR6->VAR50[0].VAR60 = 0;
    for (VAR11 = 1; VAR11 < VAR6->VAR34; VAR11++)
    {
        VAR6->VAR50[VAR11].VAR58 = VAR6->VAR48[VAR11] + VAR6->VAR16;
        VAR6->VAR50[VAR11].VAR59 = VAR6->VAR32;
        VAR6->VAR50[VAR11 - 1].VAR61 = VAR6->VAR50[VAR11].VAR58 - VAR6->VAR50[VAR11 - 1].VAR58;
        VAR6->VAR50[VAR11].VAR60 = (VAR6->VAR50[VAR11].VAR58 - VAR6->VAR50[0].VAR58) & 3;
    }
    VAR6->VAR50[VAR6->VAR34 - 1].VAR59 = VAR6->VAR33;
    VAR15 = FUN12(VAR4);
    if (VAR15 > 0)
    {
        VAR13 = VAR15 - VAR6->VAR50[VAR6->VAR34 - 1].VAR58 - VAR6->VAR28;
        VAR13 -= VAR13 & 3;
    }
    if (VAR15 <= 0 || VAR13 <= 0)
        VAR13 = VAR6->VAR33 * 8;
    VAR6->VAR50[VAR6->VAR34 - 1].VAR61 = VAR13;
    for (VAR11 = 0; VAR11 < VAR6->VAR34; VAR11++)
    {
        if (VAR6->VAR50[VAR11].VAR60)
        {
            VAR6->VAR50[VAR11].VAR58 -= VAR6->VAR50[VAR11].VAR60;
            VAR6->VAR50[VAR11].VAR61 += VAR6->VAR50[VAR11].VAR60;
        }
        VAR6->VAR50[VAR11].VAR61 = (VAR6->VAR50[VAR11].VAR61 + 3) & ~3;
    }
    if (VAR6->VAR17 < 3810)
    {
        for (VAR11 = 0; VAR11 < VAR6->VAR34; VAR11++)
        {
            if (VAR11 < VAR6->VAR34 - 1 && VAR6->VAR57[VAR11 + 1])
                VAR6->VAR50[VAR11].VAR61 += 4;
            VAR6->VAR50[VAR11].VAR60 <<= 3;
            VAR6->VAR50[VAR11].VAR60 += VAR6->VAR57[VAR11];
        }
    }
    FUN13(VAR2, VAR6);
    FUN6(VAR2, VAR62, "" VAR63 "", VAR6->VAR17 / 1000, (VAR6->VAR17 % 1000) / 10, VAR6->VAR30);
    VAR9 = FUN14(VAR2, NULL);
    if (!VAR9)
        return -1;
    VAR12 = (VAR6->VAR34 == 0) ? 0 : ((VAR6->VAR34 - 1) * VAR6->VAR32) + VAR6->VAR33;
    VAR9->VAR64->VAR65 = VAR66;
    VAR9->VAR64->VAR67 = VAR68;
    VAR9->VAR64->VAR69 = FUN4('', '', '', '');
    VAR9->VAR64->VAR36 = VAR6->VAR36;
    VAR9->VAR64->VAR70 = VAR6->VAR37;
    VAR9->VAR64->VAR71 = VAR6->VAR35;
    VAR9->VAR72 = VAR6->VAR34;
    VAR9->VAR73 = 0;
    VAR9->VAR74 = VAR12 / VAR75;
    FUN15(VAR9, 64, VAR75, VAR6->VAR37);
    VAR9->VAR64->VAR76 = FUN10(VAR77);
    VAR9->VAR64->VAR78 = VAR77;
    FUN16(VAR9->VAR64->VAR76 + 0, VAR6->VAR17);
    FUN16(VAR9->VAR64->VAR76 + 2, VAR6->VAR30);
    FUN16(VAR9->VAR64->VAR76 + 4, VAR6->VAR31);
    VAR14 = 0;
    for (VAR11 = 0; VAR11 < VAR6->VAR34; VAR11++)
    {
        VAR6->VAR50[VAR11].VAR14 = VAR14;
        FUN17(VAR9, VAR6->VAR50[VAR11].VAR58, VAR6->VAR50[VAR11].VAR14, 0, 0, VAR79);
        VAR14 += VAR6->VAR32 / VAR75;
    }
    if (VAR4->VAR80 & VAR81)
    {
        FUN18(VAR2);
        FUN19(VAR4, 0, VAR82);
    }
    return 0;
}