static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    uint32_t VAR10 = 0, VAR11 = 0;
    int VAR12 = 0, VAR13 = 0, VAR14 = 0, VAR15;
    int VAR16 = 0, VAR17;
    int VAR18, VAR19;
    char *VAR20 = VAR8->VAR20;
    VAR21 *VAR22;
    int VAR23 = 32000, VAR24 = -32000;
    int VAR25 = 32000, VAR26 = -32000;
    FT_Vector VAR27;
    VAR28 *VAR29 = NULL, *VAR30 = NULL;
    Glyph VAR31 = {0};
    time_t VAR32 = FUN2(0);
    struct tm VAR33;
    VAR21 *VAR34 = VAR8->VAR35;
    int VAR36 = VAR8->VAR37;
    if (VAR8->VAR38 != VAR39)
        VAR32 = VAR4->VAR40 * FUN3(VAR2->VAR41[0]->VAR42) + VAR8->VAR38 / 1000000;
    if (!VAR34)
    {
        VAR36 = 2 * strlen(VAR8->VAR20) + 1;
        VAR34 = FUN4(VAR36);
    }
    FUN5(&VAR32, &VAR33);
    if (strchr(VAR8->VAR20, ''))
        VAR33 = *FUN6(&VAR32);
    do
    {
        *VAR34 = 1;
        if (FUN7(VAR34, VAR36, VAR8->VAR20, &VAR33) != 0 || *VAR34 == 0)
            break;
        VAR36 *= 2;
    } while ((VAR34 = FUN8(VAR34, VAR36)));
    if (VAR8->VAR43)
    {
        char VAR44[VAR45];
        FUN9(&VAR8->VAR46, VAR44, VAR8->VAR47++);
        VAR34 = FUN10("", VAR8->VAR20, VAR44);
    }
    if (!VAR34)
        return FUN11(VAR48);
    VAR20 = VAR8->VAR35 = VAR34;
    VAR8->VAR37 = VAR36;
    if ((VAR17 = strlen(VAR20)) > VAR8->VAR49)
    {
        if (!(VAR8->VAR50 = FUN8(VAR8->VAR50, VAR17 * sizeof(*VAR8->VAR50))))
            return FUN11(VAR48);
        VAR8->VAR49 = VAR17;
    }
    VAR12 = 0;
    VAR13 = 0;
    for (VAR14 = 0, VAR22 = VAR20; *VAR22; VAR14++)
    {
        FUN12(VAR10, *VAR22++, continue;);
        VAR31.VAR10 = VAR10;
        VAR29 = FUN13(VAR8->VAR51, &VAR31, VAR52, NULL);
        if (!VAR29)
        {
            FUN14(VAR2, &VAR29, VAR10);
        }
        VAR23 = FUN15(VAR29->VAR53.VAR54, VAR23);
        VAR24 = FUN16(VAR29->VAR53.VAR55, VAR24);
        VAR25 = FUN15(VAR29->VAR53.VAR56, VAR25);
        VAR26 = FUN16(VAR29->VAR53.VAR57, VAR26);
    }
    VAR8->VAR58 = VAR24 - VAR23;
    VAR8->VAR59 = VAR26 - VAR25;
    VAR29 = NULL;
    for (VAR14 = 0, VAR22 = VAR20; *VAR22; VAR14++)
    {
        FUN12(VAR10, *VAR22++, continue;);
        if (VAR11 == '' && VAR10 == '')
            continue;
        VAR11 = VAR10;
        if (FUN17(VAR10))
        {
            VAR16 = FUN16(VAR16, VAR12);
            VAR13 += VAR8->VAR58;
            VAR12 = 0;
            continue;
        }
        VAR30 = VAR29;
        VAR31.VAR10 = VAR10;
        VAR29 = FUN13(VAR8->VAR51, &VAR31, VAR52, NULL);
        if (VAR8->VAR60 && VAR30 && VAR29->VAR10)
        {
            FUN18(VAR8->VAR61, VAR30->VAR10, VAR29->VAR10, VAR62, &VAR27);
            VAR12 += VAR27.VAR12 >> 6;
        }
        VAR8->VAR50[VAR14].VAR12 = VAR12 + VAR29->VAR63;
        VAR8->VAR50[VAR14].VAR13 = VAR13 - VAR29->VAR64 + VAR24;
        if (VAR10 == '')
            VAR12 = (VAR12 / VAR8->VAR65 + 1) * VAR8->VAR65;
        else
            VAR12 += VAR29->VAR66;
    }
    VAR16 = FUN16(VAR12, VAR16);
    VAR8->VAR67[VAR68] = VAR8->VAR67[VAR69] = VAR16;
    VAR8->VAR67[VAR70] = VAR8->VAR67[VAR71] = VAR13 + VAR8->VAR58;
    VAR8->VAR67[VAR72] = VAR8->VAR59;
    VAR8->VAR67[VAR73] = VAR8->VAR58;
    VAR8->VAR67[VAR74] = VAR8->VAR67[VAR75] = VAR24;
    VAR8->VAR67[VAR76] = VAR8->VAR67[VAR77] = VAR23;
    VAR8->VAR67[VAR78] = VAR8->VAR67[VAR79] = VAR8->VAR58;
    VAR8->VAR12 = VAR8->VAR67[VAR80] = FUN19(VAR8->VAR81, VAR8->VAR67, &VAR8->VAR82);
    VAR8->VAR13 = VAR8->VAR67[VAR83] = FUN19(VAR8->VAR84, VAR8->VAR67, &VAR8->VAR82);
    VAR8->VAR12 = VAR8->VAR67[VAR80] = FUN19(VAR8->VAR81, VAR8->VAR67, &VAR8->VAR82);
    VAR8->VAR85 = FUN19(VAR8->VAR86, VAR8->VAR67, &VAR8->VAR82);
    if (!VAR8->VAR85)
        return 0;
    VAR18 = FUN15(VAR5 - 1, VAR16);
    VAR19 = FUN15(VAR6 - 1, VAR13 + VAR8->VAR58);
    if (VAR8->VAR87)
        FUN20(&VAR8->VAR88, &VAR8->VAR89, VAR4->VAR90, VAR4->VAR91, VAR5, VAR6, VAR8->VAR12, VAR8->VAR13, VAR18, VAR19);
    if (VAR8->VAR92 || VAR8->VAR93)
    {
        if ((VAR15 = FUN21(VAR8, VAR4, VAR5, VAR6, VAR8->VAR94.VAR95, &VAR8->VAR94, VAR8->VAR92, VAR8->VAR93)) < 0)
            return VAR15;
    }
    if ((VAR15 = FUN21(VAR8, VAR4, VAR5, VAR6, VAR8->VAR96.VAR95, &VAR8->VAR96, 0, 0)) < 0)
        return VAR15;
    return 0;