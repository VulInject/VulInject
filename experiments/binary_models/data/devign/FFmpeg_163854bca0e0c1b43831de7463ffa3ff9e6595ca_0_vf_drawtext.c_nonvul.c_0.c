static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    uint32_t VAR10 = 0, VAR11 = 0;
    int VAR12 = 0, VAR13 = 0, VAR14 = 0, VAR15;
    int VAR16;
    char *VAR17 = VAR8->VAR17;
    VAR18 *VAR19;
    int VAR20 = 0, VAR21;
    int VAR22 = 32000, VAR23 = -32000;
    FT_Vector VAR24;
    VAR25 *VAR26 = NULL, *VAR27 = NULL;
    Glyph VAR28 = {0};
    time_t VAR29 = FUN2(0);
    struct tm VAR30;
    VAR18 *VAR31 = VAR8->VAR32;
    int VAR33 = VAR8->VAR34;
    if (VAR8->VAR35 != VAR36)
        VAR29 = VAR4->VAR37 * FUN3(VAR2->VAR38[0]->VAR39) + VAR8->VAR35 / 1000000;
    if (!VAR31)
    {
        VAR33 = 2 * strlen(VAR8->VAR17) + 1;
        VAR31 = FUN4(VAR33);
    }
    FUN5(&VAR29, &VAR30);
    if (strchr(VAR8->VAR17, ''))
        VAR30 = *FUN6(&VAR29);
    do
    {
        *VAR31 = 1;
        if (FUN7(VAR31, VAR33, VAR8->VAR17, &VAR30) != 0 || *VAR31 == 0)
            break;
        VAR33 *= 2;
    } while ((VAR31 = FUN8(VAR31, VAR33)));
    if (!VAR31)
        return FUN9(VAR40);
    VAR17 = VAR8->VAR32 = VAR31;
    VAR8->VAR34 = VAR33;
    if ((VAR21 = strlen(VAR17)) > VAR8->VAR41)
    {
        if (!(VAR8->VAR42 = FUN8(VAR8->VAR42, VAR21 * sizeof(*VAR8->VAR42))))
            return FUN9(VAR40);
        VAR8->VAR41 = VAR21;
    }
    VAR12 = VAR8->VAR12;
    VAR13 = VAR8->VAR13;
    for (VAR14 = 0, VAR19 = VAR17; *VAR19; VAR14++)
    {
        FUN10(VAR10, *VAR19++, continue;);
        VAR28.VAR10 = VAR10;
        VAR26 = FUN11(VAR8->VAR43, &VAR28, VAR44, NULL);
        if (!VAR26)
            FUN12(VAR2, &VAR26, VAR10);
        VAR22 = FUN13(VAR26->VAR45.VAR46, VAR22);
        VAR23 = FUN14(VAR26->VAR45.VAR47, VAR23);
    }
    VAR16 = VAR23 - VAR22;
    VAR26 = NULL;
    for (VAR14 = 0, VAR19 = VAR17; *VAR19; VAR14++)
    {
        FUN10(VAR10, *VAR19++, continue;);
        if (VAR11 == '' && VAR10 == '')
            continue;
        VAR11 = VAR10;
        if (FUN15(VAR10))
        {
            VAR20 = FUN14(VAR20, VAR12 - VAR8->VAR12);
            VAR13 += VAR16;
            VAR12 = VAR8->VAR12;
            continue;
        }
        VAR27 = VAR26;
        VAR28.VAR10 = VAR10;
        VAR26 = FUN11(VAR8->VAR43, &VAR28, VAR44, NULL);
        if (VAR8->VAR48 && VAR27 && VAR26->VAR10)
        {
            FUN16(VAR8->VAR49, VAR27->VAR10, VAR26->VAR10, VAR50, &VAR24);
            VAR12 += VAR24.VAR12 >> 6;
        }
        VAR8->VAR42[VAR14].VAR12 = VAR12 + VAR26->VAR51;
        VAR8->VAR42[VAR14].VAR13 = VAR13 - VAR26->VAR52 + VAR23;
        if (VAR10 == '')
            VAR12 = (VAR12 / VAR8->VAR53 + 1) * VAR8->VAR53;
        else
            VAR12 += VAR26->VAR54;
    }
    VAR20 = FUN13(VAR5 - VAR8->VAR12 - 1, FUN14(VAR20, VAR12 - VAR8->VAR12));
    VAR13 = FUN13(VAR13 + VAR16, VAR6 - 1);
    if (VAR8->VAR55)
        FUN17(VAR4, VAR8->VAR12, VAR8->VAR13, VAR20, VAR13 - VAR8->VAR13, VAR8->VAR56, VAR8->VAR57, VAR8->VAR58, VAR8->VAR59, VAR8->VAR60, VAR8->VAR61, VAR8->VAR62);
    if (VAR8->VAR63 || VAR8->VAR64)
    {
        if ((VAR15 = FUN18(VAR8, VAR4, VAR5, VAR6, VAR8->VAR65, VAR8->VAR66, VAR8->VAR63, VAR8->VAR64)) < 0)
            return VAR15;
    }
    if ((VAR15 = FUN18(VAR8, VAR4, VAR5, VAR6, VAR8->VAR67, VAR8->VAR68, 0, 0)) < 0)
        return VAR15;
    return 0;
}