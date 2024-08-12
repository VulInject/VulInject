static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR9;
    int VAR10 = VAR6->VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    int VAR15;
    unsigned int VAR16;
    int VAR17;
    unsigned int VAR18;
    int VAR19;
    uint8_t VAR20;
    uint8_t VAR21;
    int VAR22, VAR23;
    FUN2(&VAR13->VAR24, VAR8, VAR10 * 8);
    VAR15 = FUN3(&VAR13->VAR24, 3) + 1;
    if (VAR15 != VAR2->VAR15)
    {
        FUN4(VAR2, VAR25, "");
        return VAR26;
    }
    FUN5(&VAR13->VAR24, 4);
    FUN5(&VAR13->VAR24, 12);
    VAR17 = FUN6(&VAR13->VAR24);
    VAR13->VAR27 = FUN3(&VAR13->VAR24, 2) << 3;
    VAR19 = FUN6(&VAR13->VAR24);
    if (VAR17)
    {
        VAR16 = FUN7(&VAR13->VAR24, 32);
        if (VAR16 > VAR13->VAR28)
        {
            FUN4(VAR2, VAR25, "", VAR16, VAR13->VAR28);
            return -1;
        }
    }
    else
        VAR16 = VAR13->VAR28;
    VAR13->VAR29 = VAR15 * FUN8(VAR2->VAR30);
    if (VAR16 > *VAR4 / VAR13->VAR29)
    {
        FUN4(VAR2, VAR25, "");
        return -1;
    }
    *VAR4 = VAR16 * VAR13->VAR29;
    VAR18 = VAR13->VAR31 - VAR13->VAR27 + VAR15 - 1;
    if (VAR18 > VAR32)
    {
        FUN4(VAR2, VAR25, "", VAR18);
        return -1;
    }
    if (!VAR19)
    {
        int16_t VAR33[VAR34][32];
        int VAR35[VAR34];
        int VAR36[VAR34];
        int VAR37[VAR34];
        int VAR38[VAR34];
        VAR20 = FUN3(&VAR13->VAR24, 8);
        VAR21 = FUN3(&VAR13->VAR24, 8);
        for (VAR23 = 0; VAR23 < VAR15; VAR23++)
        {
            VAR36[VAR23] = FUN3(&VAR13->VAR24, 4);
            VAR37[VAR23] = FUN3(&VAR13->VAR24, 4);
            VAR38[VAR23] = FUN3(&VAR13->VAR24, 3);
            VAR35[VAR23] = FUN3(&VAR13->VAR24, 5);
            for (VAR22 = 0; VAR22 < VAR35[VAR23]; VAR22++)
                VAR33[VAR23][VAR22] = (VAR39)FUN3(&VAR13->VAR24, 16);
        }
        if (VAR13->VAR27)
        {
            for (VAR22 = 0; VAR22 < VAR16; VAR22++)
            {
                for (VAR23 = 0; VAR23 < VAR15; VAR23++)
                    VAR13->VAR40[VAR23][VAR22] = FUN3(&VAR13->VAR24, VAR13->VAR27);
            }
        }
        for (VAR23 = 0; VAR23 < VAR15; VAR23++)
        {
            FUN9(VAR13, VAR13->VAR41[VAR23], VAR16, VAR18, VAR13->VAR42, VAR13->VAR43, VAR38[VAR23] * VAR13->VAR44 / 4, (1 << VAR13->VAR43) - 1);
            if (VAR36[VAR23] == 0)
            {
                FUN10(VAR13->VAR41[VAR23], VAR13->VAR45[VAR23], VAR16, VAR18, VAR33[VAR23], VAR35[VAR23], VAR37[VAR23]);
            }
            else
            {
                FUN4(VAR2, VAR25, "", VAR36[VAR23]);
            }
        }
    }
    else
    {
        for (VAR22 = 0; VAR22 < VAR16; VAR22++)
        {
            for (VAR23 = 0; VAR23 < VAR15; VAR23++)
            {
                VAR13->VAR45[VAR23][VAR22] = FUN11(&VAR13->VAR24, VAR13->VAR31);
            }
        }
        VAR13->VAR27 = 0;
        VAR20 = 0;
        VAR21 = 0;
    }
    if (FUN3(&VAR13->VAR24, 3) != 7)
        FUN4(VAR2, VAR25, "");
    if (VAR15 == 2 && VAR21)
    {
        FUN12(VAR13->VAR45, VAR16, VAR20, VAR21);
    }
    if (VAR13->VAR27)
    {
        FUN13(VAR13->VAR45, VAR13->VAR40, VAR13->VAR27, VAR13->VAR46, VAR16);
    }
    switch (VAR13->VAR31)
    {
    case 16:
        if (VAR15 == 2)
        {
            FUN14(VAR13->VAR45, VAR3, VAR16);
        }
        else
        {
            for (VAR22 = 0; VAR22 < VAR16; VAR22++)
            {
                ((VAR39 *)VAR3)[VAR22] = VAR13->VAR45[0][VAR22];
            }
        }
        break;
    case 24:
        if (VAR15 == 2)
        {
            FUN15(VAR13->VAR45, VAR3, VAR16);
        }
        else
        {
            for (VAR22 = 0; VAR22 < VAR16; VAR22++)
                ((VAR47 *)VAR3)[VAR22] = VAR13->VAR45[0][VAR22] << 8;
        }
        break;
    }
    if (VAR10 * 8 - FUN16(&VAR13->VAR24) > 8)
        FUN4(VAR2, VAR25, "", VAR10 * 8 - FUN16(&VAR13->VAR24));
    return VAR10;
}