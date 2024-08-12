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
        return VAR17;
    VAR6->VAR18 = FUN5(VAR4);
    if (VAR6->VAR18 < VAR19 || VAR6->VAR18 > VAR20)
    {
        FUN6(VAR2, VAR21, "", VAR6->VAR18 / 1000, (VAR6->VAR18 % 1000) / 10);
        return VAR22;
    }
    if (VAR6->VAR18 >= 3980)
    {
        VAR6->VAR23 = FUN5(VAR4);
        VAR6->VAR24 = FUN3(VAR4);
        VAR6->VAR25 = FUN3(VAR4);
        VAR6->VAR26 = FUN3(VAR4);
        VAR6->VAR27 = FUN3(VAR4);
        VAR6->VAR28 = FUN3(VAR4);
        VAR6->VAR29 = FUN3(VAR4);
        VAR6->VAR30 = FUN3(VAR4);
        FUN7(VAR4, VAR6->VAR31, 16);
        if (VAR6->VAR24 > 52)
            FUN8(VAR4, VAR6->VAR24 - 52);
        VAR6->VAR32 = FUN5(VAR4);
        VAR6->VAR33 = FUN5(VAR4);
        VAR6->VAR34 = FUN3(VAR4);
        VAR6->VAR35 = FUN3(VAR4);
        VAR6->VAR36 = FUN3(VAR4);
        VAR6->VAR37 = FUN5(VAR4);
        VAR6->VAR38 = FUN5(VAR4);
        VAR6->VAR39 = FUN3(VAR4);
    }
    else
    {
        VAR6->VAR24 = 0;
        VAR6->VAR25 = 32;
        VAR6->VAR32 = FUN5(VAR4);
        VAR6->VAR33 = FUN5(VAR4);
        VAR6->VAR38 = FUN5(VAR4);
        VAR6->VAR39 = FUN3(VAR4);
        VAR6->VAR27 = FUN3(VAR4);
        VAR6->VAR30 = FUN3(VAR4);
        VAR6->VAR36 = FUN3(VAR4);
        VAR6->VAR35 = FUN3(VAR4);
        if (VAR6->VAR33 & VAR40)
        {
            FUN8(VAR4, 4);
            VAR6->VAR25 += 4;
        }
        if (VAR6->VAR33 & VAR41)
        {
            VAR6->VAR26 = FUN3(VAR4);
            VAR6->VAR25 += 4;
            VAR6->VAR26 *= sizeof(VAR42);
        }
        else
            VAR6->VAR26 = VAR6->VAR36 * sizeof(VAR42);
        if (VAR6->VAR33 & VAR43)
            VAR6->VAR37 = 8;
        else if (VAR6->VAR33 & VAR44)
            VAR6->VAR37 = 24;
        else
            VAR6->VAR37 = 16;
        if (VAR6->VAR18 >= 3950)
            VAR6->VAR34 = 73728 * 4;
        else if (VAR6->VAR18 >= 3900 || (VAR6->VAR18 >= 3800 && VAR6->VAR32 >= 4000))
            VAR6->VAR34 = 73728;
        else
            VAR6->VAR34 = 9216;
        if (!(VAR6->VAR33 & VAR45))
            FUN8(VAR4, VAR6->VAR27);
    }
    if (!VAR6->VAR36)
    {
        FUN6(VAR2, VAR21, "");
        return FUN9(VAR46);
    }
    if (VAR6->VAR36 > VAR47 / sizeof(VAR48))
    {
        FUN6(VAR2, VAR21, "" VAR49 "", VAR6->VAR36);
        return VAR17;
    }
    if (VAR6->VAR26 / sizeof(*VAR6->VAR50) < VAR6->VAR36)
    {
        FUN6(VAR2, VAR21, "" VAR49 "", VAR6->VAR26 / sizeof(*VAR6->VAR50), VAR6->VAR36);
        return VAR17;
    }
    VAR6->VAR51 = FUN10(VAR6->VAR36 * sizeof(VAR48));
    if (!VAR6->VAR51)
        return FUN9(VAR52);
    VAR6->VAR53 = VAR6->VAR16 + VAR6->VAR24 + VAR6->VAR25 + VAR6->VAR26 + VAR6->VAR27;
    if (VAR6->VAR18 < 3810)
        VAR6->VAR53 += VAR6->VAR36;
    VAR6->VAR54 = 0;
    VAR6->VAR55 = VAR6->VAR35;
    if (VAR6->VAR36 > 1)
        VAR6->VAR55 += VAR6->VAR34 * (VAR6->VAR36 - 1);
    if (VAR6->VAR26 > 0)
    {
        VAR6->VAR50 = FUN10(VAR6->VAR26);
        if (!VAR6->VAR50)
            return FUN9(VAR52);
        for (VAR11 = 0; VAR11 < VAR6->VAR26 / sizeof(VAR56) && !VAR4->VAR57; VAR11++)
            VAR6->VAR50[VAR11] = FUN3(VAR4);
        if (VAR6->VAR18 < 3810)
        {
            VAR6->VAR58 = FUN10(VAR6->VAR36);
            if (!VAR6->VAR58)
                return FUN9(VAR52);
            for (VAR11 = 0; VAR11 < VAR6->VAR36 && !VAR4->VAR57; VAR11++)
                VAR6->VAR58[VAR11] = FUN11(VAR4);
        }
    }
    VAR6->VAR51[0].VAR59 = VAR6->VAR53;
    VAR6->VAR51[0].VAR60 = VAR6->VAR34;
    VAR6->VAR51[0].VAR61 = 0;
    for (VAR11 = 1; VAR11 < VAR6->VAR36; VAR11++)
    {
        VAR6->VAR51[VAR11].VAR59 = VAR6->VAR50[VAR11] + VAR6->VAR16;
        VAR6->VAR51[VAR11].VAR60 = VAR6->VAR34;
        VAR6->VAR51[VAR11 - 1].VAR62 = VAR6->VAR51[VAR11].VAR59 - VAR6->VAR51[VAR11 - 1].VAR59;
        VAR6->VAR51[VAR11].VAR61 = (VAR6->VAR51[VAR11].VAR59 - VAR6->VAR51[0].VAR59) & 3;
    }
    VAR6->VAR51[VAR6->VAR36 - 1].VAR60 = VAR6->VAR35;
    VAR15 = FUN12(VAR4);
    if (VAR15 > 0)
    {
        VAR13 = VAR15 - VAR6->VAR51[VAR6->VAR36 - 1].VAR59 - VAR6->VAR30;
        VAR13 -= VAR13 & 3;
    }
    if (VAR15 <= 0 || VAR13 <= 0)
        VAR13 = VAR6->VAR35 * 8;
    VAR6->VAR51[VAR6->VAR36 - 1].VAR62 = VAR13;
    for (VAR11 = 0; VAR11 < VAR6->VAR36; VAR11++)
    {
        if (VAR6->VAR51[VAR11].VAR61)
        {
            VAR6->VAR51[VAR11].VAR59 -= VAR6->VAR51[VAR11].VAR61;
            VAR6->VAR51[VAR11].VAR62 += VAR6->VAR51[VAR11].VAR61;
        }
        VAR6->VAR51[VAR11].VAR62 = (VAR6->VAR51[VAR11].VAR62 + 3) & ~3;
    }
    if (VAR6->VAR18 < 3810)
    {
        for (VAR11 = 0; VAR11 < VAR6->VAR36; VAR11++)
        {
            if (VAR11 < VAR6->VAR36 - 1 && VAR6->VAR58[VAR11 + 1])
                VAR6->VAR51[VAR11].VAR62 += 4;
            VAR6->VAR51[VAR11].VAR61 <<= 3;
            VAR6->VAR51[VAR11].VAR61 += VAR6->VAR58[VAR11];
        }
    }
    FUN13(VAR2, VAR6);
    FUN6(VAR2, VAR63, "" VAR64 "", VAR6->VAR18 / 1000, (VAR6->VAR18 % 1000) / 10, VAR6->VAR32);
    VAR9 = FUN14(VAR2, NULL);
    if (!VAR9)
        return FUN9(VAR52);
    VAR12 = (VAR6->VAR36 == 0) ? 0 : ((VAR6->VAR36 - 1) * VAR6->VAR34) + VAR6->VAR35;
    VAR9->VAR65->VAR66 = VAR67;
    VAR9->VAR65->VAR68 = VAR69;
    VAR9->VAR65->VAR70 = FUN4('', '', '', '');
    VAR9->VAR65->VAR38 = VAR6->VAR38;
    VAR9->VAR65->VAR71 = VAR6->VAR39;
    VAR9->VAR65->VAR72 = VAR6->VAR37;
    VAR9->VAR73 = VAR6->VAR36;
    VAR9->VAR74 = 0;
    VAR9->VAR75 = VAR12;
    FUN15(VAR9, 64, 1, VAR6->VAR39);
    if (FUN16(VAR9->VAR65, VAR76))
        return FUN9(VAR52);
    FUN17(VAR9->VAR65->VAR77 + 0, VAR6->VAR18);
    FUN17(VAR9->VAR65->VAR77 + 2, VAR6->VAR32);
    FUN17(VAR9->VAR65->VAR77 + 4, VAR6->VAR33);
    VAR14 = 0;
    for (VAR11 = 0; VAR11 < VAR6->VAR36; VAR11++)
    {
        VAR6->VAR51[VAR11].VAR14 = VAR14;
        FUN18(VAR9, VAR6->VAR51[VAR11].VAR59, VAR6->VAR51[VAR11].VAR14, 0, 0, VAR78);
        VAR14 += VAR6->VAR34;
    }
    if (VAR4->VAR79)
    {
        FUN19(VAR2);
        FUN20(VAR4, 0, VAR80);
    }
    return 0;
}