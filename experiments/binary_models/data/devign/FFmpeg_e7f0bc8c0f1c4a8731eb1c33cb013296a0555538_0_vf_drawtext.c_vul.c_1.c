static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    uint32_t VAR6 = 0, VAR7 = 0;
    int VAR8 = 0, VAR9 = 0, VAR10 = 0, VAR11;
    int VAR12, VAR13;
    char *VAR14 = VAR4->VAR14;
    VAR15 *VAR16;
    int VAR17 = 0, VAR18;
    int VAR19 = 32000, VAR20 = -32000;
    FT_Vector VAR21;
    VAR22 *VAR23 = NULL, *VAR24 = NULL;
    Glyph VAR25 = {0};
    int VAR26 = VAR2->VAR27[0]->VAR28;
    int VAR29 = VAR2->VAR27[0]->VAR30;
    time_t VAR31 = FUN2(0);
    struct tm VAR32;
    VAR15 *VAR33 = VAR4->VAR34;
    int VAR35 = VAR4->VAR36;
    if (!VAR33)
        VAR35 = 2 * strlen(VAR4->VAR14) + 1;
    FUN3(&VAR31, &VAR32);
    while ((VAR33 = FUN4(VAR33, VAR35)))
    {
        *VAR33 = 1;
        if (FUN5(VAR33, VAR35, VAR4->VAR14, &VAR32) != 0 || *VAR33 == 0)
            break;
        VAR35 *= 2;
    }
    if (!VAR33)
        return FUN6(VAR37);
    VAR14 = VAR4->VAR34 = VAR33;
    VAR4->VAR36 = VAR35;
    if ((VAR18 = strlen(VAR14)) > VAR4->VAR38)
    {
        VAR39 *VAR16 = FUN4(VAR4->VAR40, VAR18 * sizeof(*VAR4->VAR40));
        if (!VAR16)
        {
            FUN7(VAR4->VAR40);
            VAR4->VAR38 = 0;
            return FUN6(VAR37);
        }
        else
        {
            VAR4->VAR40 = VAR16;
            VAR4->VAR38 = VAR18;
        }
    }
    for (VAR10 = 0, VAR16 = VAR14; *VAR16; VAR10++)
    {
        FUN8(VAR6, *VAR16++, continue;);
        VAR25.VAR6 = VAR6;
        VAR23 = FUN9(VAR4->VAR41, &VAR25, VAR42, NULL);
        if (!VAR23)
            VAR11 = FUN10(VAR2, &VAR23, VAR6);
        if (VAR11)
            return VAR11;
        VAR19 = FUN11(VAR23->VAR43.VAR44, VAR19);
        VAR20 = FUN12(VAR23->VAR43.VAR45, VAR20);
    }
    VAR12 = VAR20 - VAR19;
    VAR13 = VAR20;
    VAR23 = NULL;
    for (VAR10 = 0, VAR16 = VAR14; *VAR16; VAR10++)
    {
        FUN8(VAR6, *VAR16++, continue;);
        if (VAR7 == '' && VAR6 == '')
            continue;
        VAR7 = VAR6;
        if (FUN13(VAR6))
        {
            VAR17 = FUN12(VAR17, VAR8 - VAR4->VAR8);
            VAR9 += VAR12;
            VAR8 = 0;
            continue;
        }
        VAR24 = VAR23;
        VAR25.VAR6 = VAR6;
        VAR23 = FUN9(VAR4->VAR41, &VAR25, VAR42, NULL);
        if (VAR4->VAR46 && VAR24 && VAR23->VAR6)
        {
            FUN14(VAR4->VAR47, VAR24->VAR6, VAR23->VAR6, VAR48, &VAR21);
            VAR8 += VAR21.VAR8 >> 6;
        }
        if (VAR8 + VAR23->VAR43.VAR49 >= VAR26)
        {
            VAR17 = FUN12(VAR17, VAR8);
            VAR9 += VAR12;
            VAR8 = 0;
        }
        VAR4->VAR40[VAR10].VAR8 = VAR8 + VAR23->VAR50;
        VAR4->VAR40[VAR10].VAR9 = VAR9 - VAR23->VAR51 + VAR13;
        if (VAR6 == '')
            VAR8 = (VAR8 / VAR4->VAR52 + 1) * VAR4->VAR52;
        else
            VAR8 += VAR23->VAR53;
    }
    VAR17 = FUN11(VAR26 - 1, FUN12(VAR17, VAR8));
    VAR9 = FUN11(VAR9 + VAR12, VAR29 - 1);
    VAR4->VAR28 = VAR17;
    VAR4->VAR30 = VAR9;
    return 0;
}