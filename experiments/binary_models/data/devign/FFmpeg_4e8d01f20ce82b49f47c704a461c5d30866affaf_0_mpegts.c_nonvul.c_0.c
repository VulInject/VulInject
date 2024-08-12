static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8.VAR9.VAR10;
    VAR11 *VAR12 = &VAR2->VAR8.VAR9;
    SectionHeader VAR13;
    const VAR3 *VAR14, *VAR15;
    AVIOContext VAR16;
    int VAR17 = 0;
    Mp4Descr VAR18[VAR19] = {{0}};
    int VAR20, VAR21;
    VAR22 *VAR23 = VAR7->VAR24;
    VAR15 = VAR4 + VAR5 - 4;
    VAR14 = VAR4;
    if (FUN2(&VAR13, &VAR14, VAR15) < 0)
        return;
    if (VAR13.VAR25 != VAR26)
        return;
    if (FUN3(&VAR13, VAR12))
        return;
    FUN4(VAR23, VAR14, (unsigned)(VAR15 - VAR14), VAR18, &VAR17, VAR19);
    for (VAR21 = 0; VAR21 < VAR27; VAR21++)
    {
        if (!VAR7->VAR28[VAR21])
            continue;
        for (VAR20 = 0; VAR20 < VAR17; VAR20++)
        {
            VAR29 *VAR30;
            VAR31 *VAR32;
            if (VAR7->VAR28[VAR21]->VAR33 != VAR18[VAR20].VAR33)
                continue;
            if (VAR7->VAR28[VAR21]->VAR34 != VAR35)
            {
                FUN5(VAR23, VAR36, "", VAR21);
                continue;
            }
            VAR30 = VAR7->VAR28[VAR21]->VAR8.VAR37.VAR10;
            VAR32 = VAR30->VAR32;
            if (!VAR32)
                continue;
            VAR30->VAR38 = VAR18[VAR20].VAR38;
            FUN6(&VAR16, VAR18[VAR20].VAR39, VAR18[VAR20].VAR40, 0, NULL, NULL, NULL, NULL);
            FUN7(VAR23, VAR32, &VAR16);
            if (VAR32->VAR41->VAR42 == VAR43 && VAR32->VAR41->VAR44 > 0)
                VAR32->VAR45 = 0;
            if (VAR32->VAR41->VAR42 == VAR46 && VAR32->VAR41->VAR44 > 0)
                VAR32->VAR45 = 0;
            if (VAR32->VAR41->VAR42 <= VAR47)
            {
            }
            else if (VAR32->VAR41->VAR42 < VAR48)
                VAR32->VAR41->VAR49 = VAR50;
            else if (VAR32->VAR41->VAR42 < VAR51)
                VAR32->VAR41->VAR49 = VAR52;
            else if (VAR32->VAR41->VAR42 < VAR53)
                VAR32->VAR41->VAR49 = VAR54;
        }
    }
    for (VAR20 = 0; VAR20 < VAR17; VAR20++)
        FUN8(VAR18[VAR20].VAR39);
}