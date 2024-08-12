static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[0];
    uint32_t VAR13 = 0, VAR14 = 0;
    int VAR15 = 0, VAR16 = 0, VAR17 = 0, VAR18;
    int VAR19 = 0, VAR20;
    int VAR21, VAR22;
    char *VAR23;
    VAR24 *VAR25;
    int VAR26 = 32000, VAR27 = -32000;
    int VAR28 = 32000, VAR29 = -32000;
    FT_Vector VAR30;
    VAR31 *VAR32 = NULL, *VAR33 = NULL;
    Glyph VAR34 = {0};
    time_t VAR35 = FUN2(0);
    struct tm VAR36;
    VAR37 *VAR38 = &VAR8->VAR39;
    FFDrawColor VAR40;
    FFDrawColor VAR41;
    FFDrawColor VAR42;
    FFDrawColor VAR43;
    FUN3(VAR38);
    if (VAR8->VAR44 != VAR45)
        VAR35 = VAR4->VAR46 * FUN4(VAR2->VAR12[0]->VAR47) + VAR8->VAR44 / 1000000;
    switch (VAR8->VAR48)
    {
    case VAR49:
        FUN5(VAR38, "", VAR8->VAR23);
        break;
    case VAR50:
        if ((VAR18 = FUN6(VAR2, VAR8->VAR23, &VAR8->VAR39)) < 0)
            return VAR18;
        break;
    case VAR51:
        FUN7(&VAR35, &VAR36);
        FUN8(VAR38, VAR8->VAR23, &VAR36);
        break;
    }
    if (VAR8->VAR52)
    {
        char VAR53[VAR54];
        FUN9(&VAR8->VAR55, VAR53, VAR11->VAR56);
        FUN3(VAR38);
        FUN5(VAR38, "", VAR8->VAR23, VAR53);
    }
    if (!FUN10(VAR38))
        return FUN11(VAR57);
    VAR23 = VAR8->VAR39.VAR58;
    if ((VAR20 = VAR8->VAR39.VAR20) > VAR8->VAR59)
    {
        if (!(VAR8->VAR60 = FUN12(VAR8->VAR60, VAR20 * sizeof(*VAR8->VAR60))))
            return FUN11(VAR57);
        VAR8->VAR59 = VAR20;
    }
    if (VAR8->VAR61[0])
    {
        FUN3(&VAR8->VAR62);
        if ((VAR18 = FUN6(VAR2, VAR8->VAR61, &VAR8->VAR62)) < 0)
            return VAR18;
        if (!FUN10(&VAR8->VAR62))
            return FUN11(VAR57);
        FUN13(VAR8, VAR63, "", VAR8->VAR62.VAR58);
        VAR18 = FUN14(VAR8->VAR40.VAR64, VAR8->VAR62.VAR58, -1, VAR8);
        if (VAR18)
            return VAR18;
        FUN15(&VAR8->VAR65, &VAR8->VAR40, VAR8->VAR40.VAR64);
    }
    VAR15 = 0;
    VAR16 = 0;
    for (VAR17 = 0, VAR25 = VAR23; *VAR25; VAR17++)
    {
        FUN16(VAR13, *VAR25++, continue;);
        VAR34.VAR13 = VAR13;
        VAR32 = FUN17(VAR8->VAR66, &VAR34, VAR67, NULL);
        if (!VAR32)
        {
            VAR18 = FUN18(VAR2, &VAR32, VAR13);
            if (VAR18 < 0)
                return VAR18;
        }
        VAR26 = FUN19(VAR32->VAR68.VAR69, VAR26);
        VAR27 = FUN20(VAR32->VAR68.VAR70, VAR27);
        VAR28 = FUN19(VAR32->VAR68.VAR71, VAR28);
        VAR29 = FUN20(VAR32->VAR68.VAR72, VAR29);
    }
    VAR8->VAR73 = VAR27 - VAR26;
    VAR8->VAR74 = VAR29 - VAR28;
    VAR32 = NULL;
    for (VAR17 = 0, VAR25 = VAR23; *VAR25; VAR17++)
    {
        FUN16(VAR13, *VAR25++, continue;);
        if (VAR14 == '' && VAR13 == '')
            continue;
        VAR14 = VAR13;
        if (FUN21(VAR13))
        {
            VAR19 = FUN20(VAR19, VAR15);
            VAR16 += VAR8->VAR73;
            VAR15 = 0;
            continue;
        }
        VAR33 = VAR32;
        VAR34.VAR13 = VAR13;
        VAR32 = FUN17(VAR8->VAR66, &VAR34, VAR67, NULL);
        if (VAR8->VAR75 && VAR33 && VAR32->VAR13)
        {
            FUN22(VAR8->VAR76, VAR33->VAR13, VAR32->VAR13, VAR77, &VAR30);
            VAR15 += VAR30.VAR15 >> 6;
        }
        VAR8->VAR60[VAR17].VAR15 = VAR15 + VAR32->VAR78;
        VAR8->VAR60[VAR17].VAR16 = VAR16 - VAR32->VAR79 + VAR27;
        if (VAR13 == '')
            VAR15 = (VAR15 / VAR8->VAR80 + 1) * VAR8->VAR80;
        else
            VAR15 += VAR32->VAR81;
    }
    VAR19 = FUN20(VAR15, VAR19);
    VAR8->VAR82[VAR83] = VAR8->VAR82[VAR84] = VAR19;
    VAR8->VAR82[VAR85] = VAR8->VAR82[VAR86] = VAR16 + VAR8->VAR73;
    VAR8->VAR82[VAR87] = VAR8->VAR74;
    VAR8->VAR82[VAR88] = VAR8->VAR73;
    VAR8->VAR82[VAR89] = VAR8->VAR82[VAR90] = VAR27;
    VAR8->VAR82[VAR91] = VAR8->VAR82[VAR92] = VAR26;
    VAR8->VAR82[VAR93] = VAR8->VAR82[VAR94] = VAR8->VAR73;
    VAR8->VAR15 = VAR8->VAR82[VAR95] = FUN23(VAR8->VAR96, VAR8->VAR82, &VAR8->VAR97);
    VAR8->VAR16 = VAR8->VAR82[VAR98] = FUN23(VAR8->VAR99, VAR8->VAR82, &VAR8->VAR97);
    VAR8->VAR15 = VAR8->VAR82[VAR95] = FUN23(VAR8->VAR96, VAR8->VAR82, &VAR8->VAR97);
    FUN24(VAR8);
    FUN25(VAR8, &VAR40, VAR8->VAR40);
    FUN25(VAR8, &VAR41, VAR8->VAR41);
    FUN25(VAR8, &VAR42, VAR8->VAR42);
    FUN25(VAR8, &VAR43, VAR8->VAR43);
    VAR21 = FUN19(VAR5 - 1, VAR19);
    VAR22 = FUN19(VAR6 - 1, VAR16 + VAR8->VAR73);
    if (VAR8->VAR100)
        FUN26(&VAR8->VAR65, &VAR43, VAR4->VAR101, VAR4->VAR102, VAR5, VAR6, VAR8->VAR15 - VAR8->VAR103, VAR8->VAR16 - VAR8->VAR103, VAR21 + VAR8->VAR103 * 2, VAR22 + VAR8->VAR103 * 2);
    if (VAR8->VAR104 || VAR8->VAR105)
    {
        if ((VAR18 = FUN27(VAR8, VAR4, VAR5, VAR6, &VAR41, VAR8->VAR104, VAR8->VAR105, 0)) < 0)
            return VAR18;
    }
    if (VAR8->VAR106)
    {
        if ((VAR18 = FUN27(VAR8, VAR4, VAR5, VAR6, &VAR42, 0, 0, VAR8->VAR106)) < 0)
            return VAR18;
    }
    if ((VAR18 = FUN27(VAR8, VAR4, VAR5, VAR6, &VAR40, 0, 0, 0)) < 0)
        return VAR18;
    return 0;
}