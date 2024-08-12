static int FUN1(VAR1 *VAR2[4], int VAR3[4], int VAR4, int VAR5, enum AVPixelFormat VAR6, enum AVPixelFormat VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12, struct VAR13 *VAR14)
{
    static enum AVPixelFormat VAR15;
    static int VAR16, VAR17;
    static VAR1 *VAR18[4];
    static int VAR19[4];
    VAR1 *VAR20[4] = {0};
    VAR1 *VAR21[4] = {0};
    int VAR22[4];
    int VAR23;
    uint64_t VAR24, VAR25 = 0, VAR26 = 0, VAR27 = 0;
    struct VAR28 *VAR29 = NULL, *VAR30 = NULL;
    uint32_t VAR31 = 0;
    int VAR32 = 0;
    if (VAR15 != VAR6 || VAR16 != VAR8 || VAR17 != VAR9)
    {
        struct VAR28 *VAR33 = NULL;
        int VAR34;
        for (VAR34 = 0; VAR34 < 4; VAR34++)
            FUN2(&VAR18[VAR34]);
        FUN3(VAR19, VAR6, VAR8);
        for (VAR34 = 0; VAR34 < 4; VAR34++)
        {
            VAR19[VAR34] = FUN4(VAR19[VAR34], 16);
            if (VAR19[VAR34])
                VAR18[VAR34] = FUN5(VAR19[VAR34] * VAR9 + 16);
            if (VAR19[VAR34] && !VAR18[VAR34])
            {
                FUN6("");
                VAR32 = -1;
                goto VAR35;
            }
        }
        VAR33 = FUN7(VAR4, VAR5, VAR36, VAR8, VAR9, VAR6, VAR37, NULL, NULL, NULL);
        if (!VAR33)
        {
            fprintf(VAR38, "", VAR39[VAR36].VAR40, VAR39[VAR6].VAR40);
            VAR32 = -1;
            goto VAR35;
        }
        FUN8(VAR33, VAR2, VAR3, 0, VAR5, VAR18, VAR19);
        FUN9(VAR33);
        VAR15 = VAR6;
        VAR16 = VAR8;
        VAR17 = VAR9;
    }
    FUN3(VAR22, VAR7, VAR10);
    for (VAR23 = 0; VAR23 < 4; VAR23++)
    {
        VAR22[VAR23] = FUN4(VAR22[VAR23], 16);
        if (VAR22[VAR23])
            VAR20[VAR23] = FUN5(VAR22[VAR23] * VAR11 + 16);
        if (VAR22[VAR23] && !VAR20[VAR23])
        {
            FUN6("");
            VAR32 = -1;
            goto VAR35;
        }
    }
    VAR29 = FUN7(VAR8, VAR9, VAR6, VAR10, VAR11, VAR7, VAR12, NULL, NULL, NULL);
    if (!VAR29)
    {
        fprintf(VAR38, "", VAR39[VAR6].VAR40, VAR39[VAR7].VAR40);
        VAR32 = -1;
        goto VAR35;
    }
    FUN10("", VAR39[VAR6].VAR40, VAR8, VAR9, VAR39[VAR7].VAR40, VAR10, VAR11, VAR12);
    FUN11(VAR41);
    FUN8(VAR29, VAR18, VAR19, 0, VAR9, VAR20, VAR22);
    for (VAR23 = 0; VAR23 < 4 && VAR22[VAR23]; VAR23++)
        VAR31 = FUN12(FUN13(VAR42), VAR31, VAR20[VAR23], VAR22[VAR23] * VAR11);
    if (VAR14 && VAR31 == VAR14->VAR31)
    {
        VAR24 = VAR14->VAR24;
        VAR25 = VAR14->VAR25;
        VAR26 = VAR14->VAR26;
        VAR27 = VAR14->VAR27;
    }
    else
    {
        for (VAR23 = 0; VAR23 < 4; VAR23++)
        {
            VAR3[VAR23] = FUN4(VAR3[VAR23], 16);
            if (VAR3[VAR23])
                VAR21[VAR23] = FUN5(VAR3[VAR23] * VAR5);
            if (VAR3[VAR23] && !VAR21[VAR23])
            {
                FUN6("");
                VAR32 = -1;
                goto VAR35;
            }
        }
        VAR30 = FUN7(VAR10, VAR11, VAR7, VAR4, VAR5, VAR36, VAR37, NULL, NULL, NULL);
        if (!VAR30)
        {
            fprintf(VAR38, "", VAR39[VAR7].VAR40, VAR39[VAR36].VAR40);
            VAR32 = -1;
            goto VAR35;
        }
        FUN8(VAR30, VAR20, VAR22, 0, VAR11, VAR21, VAR3);
        VAR24 = FUN14(VAR2[0], VAR21[0], VAR3[0], VAR3[0], VAR4, VAR5);
        if (FUN15(VAR6) && FUN15(VAR7))
        {
            VAR25 = FUN14(VAR2[1], VAR21[1], VAR3[1], VAR3[1], (VAR4 + 1) >> 1, (VAR5 + 1) >> 1);
            VAR26 = FUN14(VAR2[2], VAR21[2], VAR3[2], VAR3[2], (VAR4 + 1) >> 1, (VAR5 + 1) >> 1);
        }
        if (FUN16(VAR6) && FUN16(VAR7))
            VAR27 = FUN14(VAR2[3], VAR21[3], VAR3[3], VAR3[3], VAR4, VAR5);
        VAR24 /= VAR4 * VAR5;
        VAR25 /= VAR4 * VAR5 / 4;
        VAR26 /= VAR4 * VAR5 / 4;
        VAR27 /= VAR4 * VAR5;
        FUN9(VAR30);
        for (VAR23 = 0; VAR23 < 4; VAR23++)
            if (VAR3[VAR23])
                FUN17(VAR21[VAR23]);
    }
    FUN10("" VAR43 "" VAR43 "" VAR43 "" VAR43 "", VAR31, VAR24, VAR25, VAR26, VAR27);
VAR35:
    FUN9(VAR29);
    for (VAR23 = 0; VAR23 < 4; VAR23++)
        if (VAR22[VAR23])
            FUN17(VAR20[VAR23]);
    return VAR32;
}