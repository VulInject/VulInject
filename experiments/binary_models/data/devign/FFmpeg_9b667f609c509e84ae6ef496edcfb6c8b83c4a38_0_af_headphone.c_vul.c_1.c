static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    const int VAR8 = VAR6->VAR8;
    int VAR9 = VAR6->VAR9;
    int VAR10 = VAR2->VAR11[0]->VAR12;
    float VAR13 = FUN2((VAR6->VAR14 - 3 * VAR10) / 20 * VAR15);
    VAR16 *VAR17 = NULL;
    VAR16 *VAR18 = NULL;
    VAR16 *VAR19 = NULL;
    VAR16 *VAR20 = NULL;
    float *VAR21 = NULL;
    float *VAR22 = NULL;
    int VAR23 = 0;
    int VAR24;
    int VAR25, VAR26;
    VAR6->VAR27 = 1 << (32 - FUN3(VAR6->VAR8));
    VAR6->VAR24 = VAR24 = 1 << (32 - FUN3(VAR6->VAR8 + VAR4->VAR28));
    if (VAR6->VAR29 == VAR30)
    {
        VAR19 = FUN4(VAR24, sizeof(*VAR19));
        VAR20 = FUN4(VAR24, sizeof(*VAR20));
        if (!VAR19 || !VAR20)
        {
            return FUN5(VAR31);
        }
        FUN6(VAR6->VAR32[0]);
        FUN6(VAR6->VAR32[1]);
        VAR6->VAR32[0] = FUN7(FUN8(VAR6->VAR24), 0);
        VAR6->VAR32[1] = FUN7(FUN8(VAR6->VAR24), 0);
        FUN6(VAR6->VAR33[0]);
        FUN6(VAR6->VAR33[1]);
        VAR6->VAR33[0] = FUN7(FUN8(VAR6->VAR24), 1);
        VAR6->VAR33[1] = FUN7(FUN8(VAR6->VAR24), 1);
        if (!VAR6->VAR32[0] || !VAR6->VAR32[1] || !VAR6->VAR33[0] || !VAR6->VAR33[1])
        {
            FUN9(VAR2, VAR34, "", VAR6->VAR24);
            return FUN5(VAR31);
        }
    }
    VAR6->VAR35[0] = FUN4(FUN10(VAR6->VAR8, 16), sizeof(float) * VAR6->VAR9);
    VAR6->VAR35[1] = FUN4(FUN10(VAR6->VAR8, 16), sizeof(float) * VAR6->VAR9);
    VAR6->VAR36[0] = FUN11(VAR6->VAR9, sizeof(float));
    VAR6->VAR36[1] = FUN11(VAR6->VAR9, sizeof(float));
    if (VAR6->VAR29 == VAR37)
    {
        VAR6->VAR38[0] = FUN4(VAR6->VAR27, sizeof(float) * VAR10);
        VAR6->VAR38[1] = FUN4(VAR6->VAR27, sizeof(float) * VAR10);
    }
    else
    {
        VAR6->VAR38[0] = FUN4(VAR6->VAR27, sizeof(float));
        VAR6->VAR38[1] = FUN4(VAR6->VAR27, sizeof(float));
        VAR6->VAR39[0] = FUN11(VAR6->VAR24, sizeof(VAR16));
        VAR6->VAR39[1] = FUN11(VAR6->VAR24, sizeof(VAR16));
        if (!VAR6->VAR39[0] || !VAR6->VAR39[1])
            return FUN5(VAR31);
    }
    if (!VAR6->VAR35[0] || !VAR6->VAR35[1] || !VAR6->VAR38[0] || !VAR6->VAR38[1])
        return FUN5(VAR31);
    VAR6->VAR40[0].VAR41 = FUN12(VAR2->VAR11[0], VAR6->VAR42);
    if (!VAR6->VAR40[0].VAR41)
        return FUN5(VAR31);
    for (VAR25 = 0; VAR25 < VAR6->VAR9; VAR25++)
    {
        VAR6->VAR40[VAR25 + 1].VAR41 = FUN12(VAR2->VAR11[VAR25 + 1], VAR6->VAR8);
        if (!VAR6->VAR40[VAR25 + 1].VAR41)
            return FUN5(VAR31);
    }
    if (VAR6->VAR29 == VAR37)
    {
        VAR6->VAR43[0] = FUN4(FUN10(VAR8, 16), sizeof(float));
        VAR6->VAR43[1] = FUN4(FUN10(VAR8, 16), sizeof(float));
        VAR21 = FUN4(VAR9 * FUN10(VAR8, 16), sizeof(*VAR21));
        VAR22 = FUN4(VAR9 * FUN10(VAR8, 16), sizeof(*VAR22));
        if (!VAR22 || !VAR21 || !VAR6->VAR43[0] || !VAR6->VAR43[1])
        {
            FUN13(VAR21);
            FUN13(VAR22);
            return FUN5(VAR31);
        }
    }
    else
    {
        VAR17 = FUN11(VAR24, sizeof(*VAR17) * VAR9);
        VAR18 = FUN11(VAR24, sizeof(*VAR18) * VAR9);
        if (!VAR18 || !VAR17)
        {
            FUN13(VAR17);
            FUN13(VAR18);
            return FUN5(VAR31);
        }
    }
    for (VAR25 = 0; VAR25 < VAR6->VAR9; VAR25++)
    {
        int VAR44 = VAR6->VAR40[VAR25 + 1].VAR8;
        int VAR45 = VAR6->VAR40[VAR25 + 1].VAR45;
        int VAR46 = VAR6->VAR40[VAR25 + 1].VAR46;
        int VAR47 = -1;
        float *VAR48;
        for (VAR26 = 0; VAR26 < VAR4->VAR12; VAR26++)
        {
            if (VAR6->VAR49[VAR25] < 0)
            {
                continue;
            }
            if ((FUN14(VAR4->VAR50, VAR26)) == (1LL << VAR6->VAR49[VAR25]))
            {
                VAR47 = VAR26;
                break;
            }
        }
        if (VAR47 == -1)
            continue;
        FUN15(VAR6->VAR40[VAR25 + 1].VAR51, (void **)VAR6->VAR40[VAR25 + 1].VAR41->VAR52, VAR44);
        VAR48 = (float *)VAR6->VAR40[VAR25 + 1].VAR41->VAR52[0];
        if (VAR6->VAR29 == VAR37)
        {
            VAR23 = VAR47 * FUN10(VAR44, 16);
            for (VAR26 = 0; VAR26 < VAR44; VAR26++)
            {
                VAR21[VAR23 + VAR26] = VAR48[VAR44 * 2 - VAR26 * 2 - 2] * VAR13;
                VAR22[VAR23 + VAR26] = VAR48[VAR44 * 2 - VAR26 * 2 - 1] * VAR13;
            }
        }
        else
        {
            memset(VAR19, 0, VAR24 * sizeof(*VAR19));
            memset(VAR20, 0, VAR24 * sizeof(*VAR20));
            VAR23 = VAR47 * VAR24;
            for (VAR26 = 0; VAR26 < VAR44; VAR26++)
            {
                VAR19[VAR45 + VAR26].VAR53 = VAR48[VAR26 * 2] * VAR13;
                VAR20[VAR46 + VAR26].VAR53 = VAR48[VAR26 * 2 + 1] * VAR13;
            }
            FUN16(VAR6->VAR32[0], VAR19);
            FUN17(VAR6->VAR32[0], VAR19);
            memcpy(VAR17 + VAR23, VAR19, VAR24 * sizeof(*VAR19));
            FUN16(VAR6->VAR32[0], VAR20);
            FUN17(VAR6->VAR32[0], VAR20);
            memcpy(VAR18 + VAR23, VAR20, VAR24 * sizeof(*VAR20));
        }
    }
    if (VAR6->VAR29 == VAR37)
    {
        memcpy(VAR6->VAR35[0], VAR21, sizeof(float) * VAR9 * FUN10(VAR8, 16));
        memcpy(VAR6->VAR35[1], VAR22, sizeof(float) * VAR9 * FUN10(VAR8, 16));
        FUN18(&VAR21);
        FUN18(&VAR22);
    }
    else
    {
        VAR6->VAR54[0] = FUN11(VAR24 * VAR6->VAR9, sizeof(VAR16));
        VAR6->VAR54[1] = FUN11(VAR24 * VAR6->VAR9, sizeof(VAR16));
        if (!VAR6->VAR54[0] || !VAR6->VAR54[1])
        {
            FUN18(&VAR17);
            FUN18(&VAR18);
            FUN18(&VAR19);
            FUN18(&VAR20);
            return FUN5(VAR31);
        }
        memcpy(VAR6->VAR54[0], VAR17, sizeof(VAR16) * VAR9 * VAR24);
        memcpy(VAR6->VAR54[1], VAR18, sizeof(VAR16) * VAR9 * VAR24);
        FUN18(&VAR17);
        FUN18(&VAR18);
        FUN18(&VAR19);
        FUN18(&VAR20);
    }
    VAR6->VAR55 = 1;
    return 0;
}