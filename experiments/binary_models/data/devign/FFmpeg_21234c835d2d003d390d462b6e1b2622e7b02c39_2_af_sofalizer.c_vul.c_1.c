static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, float VAR5)
{
    struct VAR6 *VAR7 = VAR2->VAR8;
    const int VAR9 = VAR7->VAR10.VAR9;
    int VAR11 = VAR7->VAR11;
    int VAR12 = VAR7->VAR12;
    int VAR13[16];
    int VAR14[16];
    int VAR15 = VAR2->VAR16[0]->VAR17;
    float VAR18 = FUN2((VAR7->VAR19 - 3 * VAR15) / 20 * VAR20);
    VAR21 *VAR22 = NULL;
    VAR21 *VAR23 = NULL;
    VAR21 *VAR24 = NULL;
    VAR21 *VAR25 = NULL;
    float *VAR26 = NULL;
    float *VAR27 = NULL;
    int VAR28 = 0;
    int VAR29[16];
    int VAR30, VAR31, VAR32 = VAR3, VAR33 = VAR4;
    if (!VAR7->VAR10.VAR34)
    {
        FUN3(VAR2, VAR35, "");
        return VAR36;
    }
    if (VAR7->VAR37 == VAR38)
    {
        VAR7->VAR39[0] = FUN4(FUN5(VAR9, 16), sizeof(float));
        VAR7->VAR39[1] = FUN4(FUN5(VAR9, 16), sizeof(float));
        VAR26 = FUN6(VAR11 * VAR9, sizeof(*VAR26));
        VAR27 = FUN6(VAR11 * VAR9, sizeof(*VAR27));
        if (!VAR27 || !VAR26 || !VAR7->VAR39[0] || !VAR7->VAR39[1])
        {
            FUN7(VAR26);
            FUN7(VAR27);
            return FUN8(VAR40);
        }
    }
    else
    {
        VAR22 = FUN6(VAR12, sizeof(*VAR22) * VAR11);
        VAR23 = FUN6(VAR12, sizeof(*VAR23) * VAR11);
        if (!VAR23 || !VAR22)
        {
            FUN7(VAR22);
            FUN7(VAR23);
            return FUN8(VAR40);
        }
    }
    for (VAR30 = 0; VAR30 < VAR7->VAR11; VAR30++)
    {
        VAR3 = (int)(VAR7->VAR41[VAR30] + VAR32) % 360;
        VAR4 = (int)(VAR7->VAR42[VAR30] + VAR33) % 90;
        VAR29[VAR30] = FUN9(VAR7, VAR3, VAR4, VAR5);
        VAR13[VAR30] = *(VAR7->VAR10.VAR43 + 2 * VAR29[VAR30]);
        VAR14[VAR30] = *(VAR7->VAR10.VAR43 + 2 * VAR29[VAR30] + 1);
        if (VAR7->VAR37 == VAR38)
        {
            VAR28 = VAR30 * VAR9;
            for (VAR31 = 0; VAR31 < VAR9; VAR31++)
            {
                *(VAR26 + VAR28 + VAR31) = *(VAR7->VAR10.VAR44 + 2 * VAR29[VAR30] * VAR9 + VAR9 - 1 - VAR31) * VAR18;
                *(VAR27 + VAR28 + VAR31) = *(VAR7->VAR10.VAR44 + 2 * VAR29[VAR30] * VAR9 + VAR9 - 1 - VAR31 + VAR9) * VAR18;
            }
        }
        else
        {
            VAR24 = FUN4(VAR12, sizeof(*VAR24));
            VAR25 = FUN4(VAR12, sizeof(*VAR25));
            if (!VAR24 || !VAR25)
            {
                FUN7(VAR22);
                FUN7(VAR23);
                FUN7(VAR24);
                FUN7(VAR25);
                return FUN8(VAR40);
            }
            VAR28 = VAR30 * VAR12;
            for (VAR31 = 0; VAR31 < VAR9; VAR31++)
            {
                VAR24[VAR13[VAR30] + VAR31].VAR45 = *(VAR7->VAR10.VAR44 + 2 * VAR29[VAR30] * VAR9 + VAR31) * VAR18;
                VAR25[VAR14[VAR30] + VAR31].VAR45 = *(VAR7->VAR10.VAR44 + (2 * VAR29[VAR30] + 1) * VAR9 + VAR31) * VAR18;
            }
            FUN10(VAR7->VAR46[0], VAR24);
            FUN11(VAR7->VAR46[0], VAR24);
            memcpy(VAR22 + VAR28, VAR24, VAR12 * sizeof(*VAR24));
            FUN10(VAR7->VAR46[0], VAR25);
            FUN11(VAR7->VAR46[0], VAR25);
            memcpy(VAR23 + VAR28, VAR25, VAR12 * sizeof(*VAR25));
        }
        FUN3(VAR2, VAR47, "", VAR29[VAR30], *(VAR7->VAR10.VAR48 + VAR29[VAR30]), *(VAR7->VAR10.VAR49 + VAR29[VAR30]), *(VAR7->VAR10.VAR50 + VAR29[VAR30]));
    }
    if (VAR7->VAR37 == VAR38)
    {
        memcpy(VAR7->VAR44[0], VAR26, sizeof(float) * VAR11 * VAR9);
        memcpy(VAR7->VAR44[1], VAR27, sizeof(float) * VAR11 * VAR9);
        FUN12(&VAR26);
        FUN12(&VAR27);
    }
    else
    {
        VAR7->VAR51[0] = FUN6(VAR12 * VAR7->VAR11, sizeof(VAR21));
        VAR7->VAR51[1] = FUN6(VAR12 * VAR7->VAR11, sizeof(VAR21));
        if (!VAR7->VAR51[0] || !VAR7->VAR51[1])
        {
            FUN12(&VAR22);
            FUN12(&VAR23);
            FUN12(&VAR24);
            FUN12(&VAR25);
            return FUN8(VAR40);
        }
        memcpy(VAR7->VAR51[0], VAR22, sizeof(VAR21) * VAR11 * VAR12);
        memcpy(VAR7->VAR51[1], VAR23, sizeof(VAR21) * VAR11 * VAR12);
        FUN12(&VAR22);
        FUN12(&VAR23);
        FUN12(&VAR24);
        FUN12(&VAR25);
    }
    memcpy(VAR7->VAR52[0], &VAR13[0], sizeof(int) * VAR7->VAR11);
    memcpy(VAR7->VAR52[1], &VAR14[0], sizeof(int) * VAR7->VAR11);
    return 0;
}