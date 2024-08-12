static int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6, *VAR7 = VAR3->VAR6;
    VAR8 *const VAR9 = &VAR5->VAR9, *const VAR10 = &VAR7->VAR9;
    int VAR11 = VAR9->VAR12, VAR13;
    int VAR14;
    if (VAR2 == VAR3)
        return 0;
    VAR13 = FUN2(VAR2, VAR3);
    if (VAR13)
        return VAR13;
    if (!VAR11)
    {
        for (VAR14 = 0; VAR14 < VAR15; VAR14++)
            FUN3(VAR5->VAR16 + VAR14);
        for (VAR14 = 0; VAR14 < VAR17; VAR14++)
            FUN3(VAR5->VAR18 + VAR14);
        memcpy(&VAR5->VAR9 + 1, &VAR7->VAR9 + 1, sizeof(VAR4) - sizeof(VAR8));
        memset(VAR5->VAR16, 0, sizeof(VAR5->VAR16));
        memset(VAR5->VAR18, 0, sizeof(VAR5->VAR18));
        if (VAR10->VAR12)
        {
            if (FUN4(VAR5) < 0)
            {
                FUN5(VAR2, VAR19, "");
                return FUN6(VAR20);
            }
            FUN7(VAR5);
            VAR5->VAR9.VAR21 = FUN8(16 * 6 * VAR9->VAR22);
        }
        for (VAR14 = 0; VAR14 < 2; VAR14++)
        {
            VAR5->VAR23[VAR14] = NULL;
            VAR5->VAR24[VAR14] = 0;
        }
        VAR5->VAR25[0] = VAR5;
        VAR9->VAR26.FUN9(VAR5->VAR27);
        VAR9->VAR26.FUN9(VAR5->VAR27 + (24 * 16 << VAR5->VAR28));
    }
    VAR5->VAR29 = VAR7->VAR29;
    FUN10((void **)VAR5->VAR16, (void **)VAR7->VAR16, VAR15, sizeof(VAR30));
    VAR5->VAR31 = VAR7->VAR31;
    FUN10((void **)VAR5->VAR18, (void **)VAR7->VAR18, VAR17, sizeof(VAR32));
    VAR5->VAR33 = VAR7->VAR33;
    FUN11(VAR5, VAR7, VAR34, VAR35);
    for (VAR14 = 0; VAR14 < 6; VAR14++)
        VAR5->VAR35[VAR14] = VAR5->VAR34[0] + (VAR7->VAR35[VAR14] - VAR7->VAR34[0]);
    for (VAR14 = 0; VAR14 < 6; VAR14++)
        VAR5->VAR36[VAR14] = VAR5->VAR37[0] + (VAR7->VAR36[VAR14] - VAR7->VAR37[0]);
    VAR5->VAR38 = VAR7->VAR38;
    FUN11(VAR5, VAR7, VAR39, VAR40);
    FUN11(VAR5, VAR7, VAR41, VAR42);
    FUN11(VAR5, VAR7, VAR43, VAR44);
    FUN11(VAR5, VAR7, VAR45, VAR46);
    FUN12(VAR5->VAR45, VAR7->VAR45, 32, VAR9, VAR10);
    FUN12(VAR5->VAR47, VAR7->VAR47, 32, VAR9, VAR10);
    FUN12(VAR5->VAR48, VAR7->VAR48, VAR49 + 2, VAR9, VAR10);
    VAR5->VAR50 = VAR7->VAR50;
    VAR5->VAR51 = VAR7->VAR51;
    if (!VAR9->VAR52)
        return 0;
    if (!VAR9->VAR53)
    {
        VAR13 = FUN13(VAR5, VAR5->VAR54, VAR5->VAR55);
        VAR5->VAR56 = VAR5->VAR57;
        VAR5->VAR58 = VAR5->VAR39;
    }
    VAR5->VAR59 = VAR5->VAR60;
    VAR5->VAR61 = VAR5->VAR62;
    VAR5->VAR63 = VAR5->VAR64;
    return VAR13;
}