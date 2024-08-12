static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = (VAR4 == 1);
    VAR6 *VAR10 = VAR9 ? VAR7->VAR11 : VAR7;
    VAR12 *const VAR13 = VAR10->VAR14[VAR15];
    int VAR16, VAR17, VAR18, VAR19 = 0;
    int VAR20, VAR21, VAR22;
    ptrdiff_t VAR23, VAR24;
    int VAR25;
    int VAR26 = 0;
    if (VAR13->VAR27)
    {
        VAR13->VAR28 = VAR29;
        VAR10->FUN2(VAR10);
        for (VAR20 = 0; VAR20 < VAR10->VAR30 * VAR10->VAR31; VAR20++)
            VAR10->VAR32[VAR20].VAR33 = VAR34;
    }
    else
    {
        VAR13->VAR28 = VAR35;
        FUN3(VAR10);
        VAR10->FUN4(VAR10);
        VAR10->VAR36 = VAR37;
    }
    if (VAR10->FUN5(VAR10))
        goto VAR38;
    memset(VAR10->VAR39, 0, sizeof(VAR10->VAR39));
    VAR10->VAR39[1][VAR15] = 128;
    VAR10->VAR39[2][VAR15] = 128;
    for (VAR20 = 0; VAR20 < 4 * VAR10->VAR31 + 6; VAR20++)
    {
        VAR10->VAR40[VAR20].VAR41 = VAR42;
        VAR10->VAR40[VAR20].VAR43 = 0;
        VAR10->VAR40[VAR20].VAR44 = 0;
    }
    VAR10->VAR40[2 * VAR10->VAR31 + 2].VAR41 = VAR15;
    VAR10->VAR40[3 * VAR10->VAR31 + 4].VAR41 = VAR15;
    VAR23 = VAR13->VAR45[0];
    VAR24 = VAR13->VAR45[1];
    if (VAR10->VAR46 < 0)
        VAR19 = 7;
    for (VAR16 = 0; VAR16 < VAR10->VAR30; VAR16++)
    {
        if (VAR10->VAR46 < 0)
            VAR18 = VAR10->VAR30 - VAR16 - 1;
        else
            VAR18 = VAR16;
        for (VAR20 = 0; VAR20 < 4; VAR20++)
        {
            VAR10->VAR47[VAR20].VAR41 = VAR42;
            VAR10->VAR47[VAR20].VAR43 = 0;
            VAR10->VAR47[VAR20].VAR44 = 0;
        }
        memset(VAR10->VAR48, 0, sizeof(VAR10->VAR48));
        memset(VAR10->VAR49, 24, sizeof(VAR10->VAR49));
        VAR10->VAR50[0] = 1;
        VAR10->VAR50[1] = 2;
        VAR10->VAR50[2] = 1;
        VAR10->VAR50[3] = 2;
        VAR10->VAR50[4] = 2 * VAR10->VAR31 + 2 + 1;
        VAR10->VAR50[5] = 3 * VAR10->VAR31 + 4 + 1;
        VAR10->VAR51[VAR10->VAR52] = (VAR18 * 16 + VAR19) * VAR23;
        VAR10->VAR51[VAR10->VAR53] = VAR10->VAR51[VAR10->VAR52] + 8 * VAR23;
        VAR10->VAR51[1] = VAR10->VAR51[0] + 8;
        VAR10->VAR51[3] = VAR10->VAR51[2] + 8;
        VAR10->VAR51[4] = (VAR18 * 8 + VAR19) * VAR24;
        VAR10->VAR51[5] = VAR10->VAR51[4];
        for (VAR17 = 0; VAR17 < VAR10->VAR31; VAR17++)
        {
            if (!VAR26)
            {
                int VAR54 = FUN6(VAR10, VAR16, VAR17, VAR9);
                if (VAR54 < 0)
                    VAR26 = 1;
            }
            if (VAR26)
                FUN7(VAR10, VAR16, VAR17, VAR9);
            for (VAR21 = 0; VAR21 < 4; VAR21++)
            {
                VAR10->VAR50[VAR21] += 2;
                VAR10->VAR51[VAR21] += 16;
            }
            for (VAR22 = 4; VAR22 < 6; VAR22++)
            {
                VAR10->VAR50[VAR22] += 1;
                VAR10->VAR51[VAR22] += 8;
            }
        }
    }
VAR38:
    if (VAR13->VAR27 || VAR10->VAR55)
    {
        FUN8(VAR10->VAR14[VAR56]);
        if ((VAR25 = FUN9(VAR10->VAR14[VAR56], VAR13)) < 0)
            return VAR25;
    }
    FUN8(VAR10->VAR14[VAR57]);
    FUN10(VAR12 *, VAR10->VAR14[VAR15], VAR10->VAR14[VAR57]);
    return 0;
}