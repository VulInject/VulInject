static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    unsigned int VAR15;
    int VAR16;
    unsigned int VAR17;
    int VAR18;
    uint8_t VAR19;
    uint8_t VAR20;
    int VAR21, VAR22, VAR23;
    FUN2(&VAR12->VAR24, VAR8, VAR9 * 8);
    VAR14 = FUN3(&VAR12->VAR24, 3) + 1;
    if (VAR14 != VAR2->VAR14)
    {
        FUN4(VAR2, VAR25, "");
        return VAR26;
    }
    FUN5(&VAR12->VAR24, 4);
    FUN5(&VAR12->VAR24, 12);
    VAR16 = FUN6(&VAR12->VAR24);
    VAR12->VAR27 = FUN3(&VAR12->VAR24, 2) << 3;
    VAR18 = FUN6(&VAR12->VAR24);
    if (VAR16)
    {
        VAR15 = FUN7(&VAR12->VAR24, 32);
        if (VAR15 > VAR12->VAR28)
        {
            FUN4(VAR2, VAR25, "", VAR15, VAR12->VAR28);
            return -1;
        }
    }
    else
        VAR15 = VAR12->VAR28;
    if (VAR15 > VAR29)
    {
        FUN4(VAR2, VAR25, "", VAR15);
        return VAR26;
    }
    VAR12->VAR30.VAR31 = VAR15;
    if ((VAR23 = VAR2->FUN8(VAR2, &VAR12->VAR30)) < 0)
    {
        FUN4(VAR2, VAR25, "");
        return VAR23;
    }
    VAR17 = VAR12->VAR32 - VAR12->VAR27 + VAR14 - 1;
    if (VAR17 > VAR33)
    {
        FUN4(VAR2, VAR25, "", VAR17);
        return -1;
    }
    if (!VAR18)
    {
        int16_t VAR34[VAR35][32];
        int VAR36[VAR35];
        int VAR37[VAR35];
        int VAR38[VAR35];
        int VAR39[VAR35];
        VAR19 = FUN3(&VAR12->VAR24, 8);
        VAR20 = FUN3(&VAR12->VAR24, 8);
        for (VAR22 = 0; VAR22 < VAR14; VAR22++)
        {
            VAR37[VAR22] = FUN3(&VAR12->VAR24, 4);
            VAR38[VAR22] = FUN3(&VAR12->VAR24, 4);
            VAR39[VAR22] = FUN3(&VAR12->VAR24, 3);
            VAR36[VAR22] = FUN3(&VAR12->VAR24, 5);
            for (VAR21 = 0; VAR21 < VAR36[VAR22]; VAR21++)
                VAR34[VAR22][VAR21] = (VAR40)FUN3(&VAR12->VAR24, 16);
        }
        if (VAR12->VAR27)
        {
            for (VAR21 = 0; VAR21 < VAR15; VAR21++)
            {
                for (VAR22 = 0; VAR22 < VAR14; VAR22++)
                    VAR12->VAR41[VAR22][VAR21] = FUN3(&VAR12->VAR24, VAR12->VAR27);
            }
        }
        for (VAR22 = 0; VAR22 < VAR14; VAR22++)
        {
            FUN9(VAR12, VAR12->VAR42[VAR22], VAR15, VAR17, VAR12->VAR43, VAR12->VAR44, VAR39[VAR22] * VAR12->VAR45 / 4, (1 << VAR12->VAR44) - 1);
            if (VAR37[VAR22] == 0)
            {
                FUN10(VAR12->VAR42[VAR22], VAR12->VAR46[VAR22], VAR15, VAR17, VAR34[VAR22], VAR36[VAR22], VAR38[VAR22]);
            }
            else
            {
                FUN4(VAR2, VAR25, "", VAR37[VAR22]);
            }
        }
    }
    else
    {
        for (VAR21 = 0; VAR21 < VAR15; VAR21++)
        {
            for (VAR22 = 0; VAR22 < VAR14; VAR22++)
            {
                VAR12->VAR46[VAR22][VAR21] = FUN11(&VAR12->VAR24, VAR12->VAR32);
            }
        }
        VAR12->VAR27 = 0;
        VAR19 = 0;
        VAR20 = 0;
    }
    if (FUN3(&VAR12->VAR24, 3) != 7)
        FUN4(VAR2, VAR25, "");
    if (VAR14 == 2 && VAR20)
    {
        FUN12(VAR12->VAR46, VAR15, VAR19, VAR20);
    }
    if (VAR12->VAR27)
    {
        FUN13(VAR12->VAR46, VAR12->VAR41, VAR12->VAR27, VAR12->VAR47, VAR15);
    }
    switch (VAR12->VAR32)
    {
    case 16:
        if (VAR14 == 2)
        {
            FUN14(VAR12->VAR46, (VAR40 *)VAR12->VAR30.VAR3[0], VAR15);
        }
        else
        {
            VAR40 *VAR48 = (VAR40 *)VAR12->VAR30.VAR3[0];
            for (VAR21 = 0; VAR21 < VAR15; VAR21++)
            {
                VAR48[VAR21] = VAR12->VAR46[0][VAR21];
            }
        }
        break;
    case 24:
        if (VAR14 == 2)
        {
            FUN15(VAR12->VAR46, (VAR49 *)VAR12->VAR30.VAR3[0], VAR15);
        }
        else
        {
            VAR49 *VAR48 = (VAR49 *)VAR12->VAR30.VAR3[0];
            for (VAR21 = 0; VAR21 < VAR15; VAR21++)
                VAR48[VAR21] = VAR12->VAR46[0][VAR21] << 8;
        }
        break;
    }
    if (VAR9 * 8 - FUN16(&VAR12->VAR24) > 8)
        FUN4(VAR2, VAR25, "", VAR9 * 8 - FUN16(&VAR12->VAR24));
    *VAR4 = 1;
    *(VAR50 *)VAR3 = VAR12->VAR30;
    return VAR9;
}