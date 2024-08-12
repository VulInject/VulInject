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
    FUN5(VAR2->VAR23, VAR2->VAR13.VAR14 + 1);
    if (!VAR2->VAR24[1])
    {
        for (VAR19 = 1; VAR19 < VAR2->VAR25; VAR19++)
        {
            VAR2->VAR24[VAR19] = FUN6(sizeof(VAR1));
            memcpy(VAR2->VAR24[VAR19], VAR2, sizeof(VAR1));
            VAR2->VAR26[VAR19] = FUN7(sizeof(VAR9));
            VAR2->VAR24[VAR19]->VAR11 = VAR2->VAR26[VAR19];
        }
    }
    VAR16 = (VAR10->VAR27.VAR28 >> 3);
    for (VAR20 = 0, VAR18 = 0, VAR17 = VAR16 + VAR2->VAR13.VAR29[0]; VAR20 < VAR4->VAR30; VAR20++)
    {
        if (VAR4->VAR31[VAR20] >= VAR16 && VAR4->VAR31[VAR20] < VAR17)
        {
            VAR17--;
            VAR18++;
        }
    }
    for (VAR19 = 1; VAR19 < VAR2->VAR13.VAR14; VAR19++)
    {
        VAR16 += (VAR2->VAR13.VAR29[VAR19 - 1] - VAR18);
        for (VAR20 = 0, VAR18 = 0, VAR17 = VAR16 + VAR2->VAR13.VAR29[VAR19]; VAR20 < VAR4->VAR30; VAR20++)
        {
            if (VAR4->VAR31[VAR20] >= VAR16 && VAR4->VAR31[VAR20] < VAR17)
            {
                VAR17--;
                VAR18++;
            }
        }
        VAR2->VAR13.VAR8[VAR19 - 1] = VAR2->VAR13.VAR29[VAR19] - VAR18;
        VAR2->VAR13.VAR16[VAR19 - 1] = VAR16;
    }
    if (VAR2->VAR13.VAR14 != 0)
    {
        VAR16 += VAR2->VAR13.VAR29[VAR2->VAR13.VAR14 - 1] - VAR18;
        if (VAR7 < VAR16)
        {
            FUN8(VAR2->VAR23, VAR32, "");
            VAR21 = VAR33;
            goto VAR34;
        }
        VAR2->VAR13.VAR8[VAR2->VAR13.VAR14 - 1] = VAR7 - VAR16;
        VAR2->VAR13.VAR16[VAR2->VAR13.VAR14 - 1] = VAR16;
    }
    VAR2->VAR6 = VAR6;
    for (VAR19 = 1; VAR19 < VAR2->VAR25; VAR19++)
    {
        VAR2->VAR24[VAR19]->VAR11->VAR35 = 1;
        VAR2->VAR24[VAR19]->VAR11->VAR36 = VAR2->VAR24[0]->VAR11->VAR36;
        memcpy(VAR2->VAR24[VAR19], VAR2, sizeof(VAR1));
        VAR2->VAR24[VAR19]->VAR11 = VAR2->VAR26[VAR19];
    }
    FUN9(&VAR2->VAR37, 0);
    FUN10(VAR2->VAR23);
    for (VAR19 = 0; VAR19 <= VAR2->VAR13.VAR14; VAR19++)
    {
        VAR15[VAR19] = VAR19;
        VAR12[VAR19] = 0;
    }
    if (VAR2->VAR38.VAR39->VAR40)
        VAR2->VAR23->FUN11(VAR2->VAR23, VAR41, VAR15, VAR12, VAR2->VAR13.VAR14 + 1);
    for (VAR19 = 0; VAR19 <= VAR2->VAR13.VAR14; VAR19++)
        VAR21 += VAR12[VAR19];
VAR34:
    FUN3(VAR12);
    FUN3(VAR15);
    return VAR21;
}