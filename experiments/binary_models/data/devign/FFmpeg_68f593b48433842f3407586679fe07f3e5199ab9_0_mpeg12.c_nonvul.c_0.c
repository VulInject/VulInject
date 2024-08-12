static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    float VAR17;
    FUN2(&VAR10->VAR18, VAR4, VAR5 * 8);
    VAR12 = FUN3(&VAR10->VAR18, 12);
    VAR13 = FUN3(&VAR10->VAR18, 12);
    VAR10->VAR19 = FUN3(&VAR10->VAR18, 4);
    if (!VAR10->VAR20)
    {
        VAR17 = VAR21[VAR10->VAR19];
        if (VAR17 != 0.0)
            VAR2->VAR22 = VAR12 / (VAR17 * VAR13);
    }
    VAR10->VAR23 = FUN3(&VAR10->VAR18, 4);
    if (VAR10->VAR23 == 0)
        return -1;
    VAR10->VAR24 = FUN3(&VAR10->VAR18, 18) * 400;
    if (FUN4(&VAR10->VAR18) == 0)
        return -1;
    if (VAR12 <= 0 || VAR13 <= 0 || (VAR12 % 2) != 0 || (VAR13 % 2) != 0)
        return -1;
    if (VAR12 != VAR10->VAR12 || VAR13 != VAR10->VAR13)
    {
        VAR10->VAR25 = VAR26;
        if (VAR7->VAR27)
        {
            FUN5(VAR10);
        }
        VAR10->VAR12 = VAR12;
        VAR10->VAR13 = VAR13;
        VAR2->VAR28 = 1;
        VAR10->VAR2 = VAR2;
        VAR2->VAR12 = VAR12;
        VAR2->VAR13 = VAR13;
        if (VAR10->VAR23 >= 9)
        {
            VAR2->VAR29 = 25 * VAR30;
        }
        else
        {
            VAR2->VAR29 = VAR31[VAR10->VAR23];
        }
        VAR10->VAR29 = VAR2->VAR29;
        VAR2->VAR24 = VAR10->VAR24;
        if (FUN6(VAR10) < 0)
            return -1;
        VAR7->VAR27 = 1;
    }
    FUN7(&VAR10->VAR18, 10);
    FUN7(&VAR10->VAR18, 1);
    if (FUN4(&VAR10->VAR18))
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            VAR15 = FUN3(&VAR10->VAR18, 8);
            VAR16 = VAR10->VAR32.VAR33[VAR14];
            VAR10->VAR34[VAR16] = VAR15;
            VAR10->VAR35[VAR16] = VAR15;
        }
        FUN8("");
        for (VAR14 = 0; VAR14 < 64; VAR14++)
            FUN8("", VAR10->VAR34[VAR10->VAR32.VAR33[VAR14]]);
        FUN9("");
    }
    else
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            int VAR16 = VAR10->VAR36[VAR14];
            VAR15 = VAR37[VAR14];
            VAR10->VAR34[VAR16] = VAR15;
            VAR10->VAR35[VAR16] = VAR15;
        }
    }
    if (FUN4(&VAR10->VAR18))
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            VAR15 = FUN3(&VAR10->VAR18, 8);
            VAR16 = VAR10->VAR32.VAR33[VAR14];
            VAR10->VAR38[VAR16] = VAR15;
            VAR10->VAR39[VAR16] = VAR15;
        }
        FUN8("");
        for (VAR14 = 0; VAR14 < 64; VAR14++)
            FUN8("", VAR10->VAR38[VAR10->VAR32.VAR33[VAR14]]);
        FUN9("");
    }
    else
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            int VAR16 = VAR10->VAR36[VAR14];
            VAR15 = VAR40[VAR14];
            VAR10->VAR38[VAR16] = VAR15;
            VAR10->VAR39[VAR16] = VAR15;
        }
    }
    VAR10->VAR41 = 1;
    VAR10->VAR42 = 1;
    VAR10->VAR43 = VAR44;
    VAR10->VAR45 = 1;
    VAR10->VAR20 = 0;
    VAR2->VAR46 = 1;
    return 0;
}