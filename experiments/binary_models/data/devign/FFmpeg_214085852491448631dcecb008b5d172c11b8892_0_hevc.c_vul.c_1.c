static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const VAR5 *VAR6 = VAR4->VAR6;
    int VAR7 = VAR4->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    int *VAR12 = FUN2(VAR2->VAR13.VAR14 + 1, sizeof(int));
    int *VAR15 = FUN2(VAR2->VAR13.VAR14 + 1, sizeof(int));
    int64_t VAR16;
    int VAR17, VAR18 = 0;
    int VAR19, VAR20, VAR21 = 0;
    if (!VAR12 || !VAR15)
    {
        FUN3(VAR12);
        FUN3(VAR15);
        return FUN4(VAR22);
    }
    if (VAR2->VAR13.VAR23 + VAR2->VAR13.VAR14 * VAR2->VAR24.VAR25->VAR26 >= VAR2->VAR24.VAR25->VAR26 * VAR2->VAR24.VAR25->VAR27)
    {
        FUN5(VAR2->VAR28, VAR29, "", VAR2->VAR13.VAR23, VAR2->VAR13.VAR14, VAR2->VAR24.VAR25->VAR26, VAR2->VAR24.VAR25->VAR27);
        VAR21 = VAR30;
        goto VAR31;
    }
    FUN6(VAR2->VAR28, VAR2->VAR13.VAR14 + 1);
    if (!VAR2->VAR32[1])
    {
        for (VAR19 = 1; VAR19 < VAR2->VAR33; VAR19++)
        {
            VAR2->VAR32[VAR19] = FUN7(sizeof(VAR1));
            memcpy(VAR2->VAR32[VAR19], VAR2, sizeof(VAR1));
            VAR2->VAR34[VAR19] = FUN8(sizeof(VAR9));
            VAR2->VAR32[VAR19]->VAR11 = VAR2->VAR34[VAR19];
        }
    }
    VAR16 = (VAR10->VAR35.VAR36 >> 3);
    for (VAR20 = 0, VAR18 = 0, VAR17 = VAR16 + VAR2->VAR13.VAR37[0]; VAR20 < VAR4->VAR38; VAR20++)
    {
        if (VAR4->VAR39[VAR20] >= VAR16 && VAR4->VAR39[VAR20] < VAR17)
        {
            VAR17--;
            VAR18++;
        }
    }
    for (VAR19 = 1; VAR19 < VAR2->VAR13.VAR14; VAR19++)
    {
        VAR16 += (VAR2->VAR13.VAR37[VAR19 - 1] - VAR18);
        for (VAR20 = 0, VAR18 = 0, VAR17 = VAR16 + VAR2->VAR13.VAR37[VAR19]; VAR20 < VAR4->VAR38; VAR20++)
        {
            if (VAR4->VAR39[VAR20] >= VAR16 && VAR4->VAR39[VAR20] < VAR17)
            {
                VAR17--;
                VAR18++;
            }
        }
        VAR2->VAR13.VAR8[VAR19 - 1] = VAR2->VAR13.VAR37[VAR19] - VAR18;
        VAR2->VAR13.VAR16[VAR19 - 1] = VAR16;
    }
    if (VAR2->VAR13.VAR14 != 0)
    {
        VAR16 += VAR2->VAR13.VAR37[VAR2->VAR13.VAR14 - 1] - VAR18;
        if (VAR7 < VAR16)
        {
            FUN5(VAR2->VAR28, VAR29, "");
            VAR21 = VAR30;
            goto VAR31;
        }
        VAR2->VAR13.VAR8[VAR2->VAR13.VAR14 - 1] = VAR7 - VAR16;
        VAR2->VAR13.VAR16[VAR2->VAR13.VAR14 - 1] = VAR16;
    }
    VAR2->VAR6 = VAR6;
    for (VAR19 = 1; VAR19 < VAR2->VAR33; VAR19++)
    {
        VAR2->VAR32[VAR19]->VAR11->VAR40 = 1;
        VAR2->VAR32[VAR19]->VAR11->VAR41 = VAR2->VAR32[0]->VAR11->VAR41;
        memcpy(VAR2->VAR32[VAR19], VAR2, sizeof(VAR1));
        VAR2->VAR32[VAR19]->VAR11 = VAR2->VAR34[VAR19];
    }
    FUN9(&VAR2->VAR42, 0);
    FUN10(VAR2->VAR28);
    for (VAR19 = 0; VAR19 <= VAR2->VAR13.VAR14; VAR19++)
    {
        VAR15[VAR19] = VAR19;
        VAR12[VAR19] = 0;
    }
    if (VAR2->VAR24.VAR43->VAR44)
        VAR2->VAR28->FUN11(VAR2->VAR28, VAR45, VAR15, VAR12, VAR2->VAR13.VAR14 + 1);
    for (VAR19 = 0; VAR19 <= VAR2->VAR13.VAR14; VAR19++)
        VAR21 += VAR12[VAR19];
VAR31:
    FUN3(VAR12);
    FUN3(VAR15);
    return VAR21;
}