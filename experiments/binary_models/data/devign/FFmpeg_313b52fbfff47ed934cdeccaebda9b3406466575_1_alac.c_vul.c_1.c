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
    if (!VAR8 || !VAR10)
        return VAR10;
    if (!VAR13->VAR22)
    {
        if (VAR13->VAR2->VAR23 != VAR24)
        {
            FUN2(VAR2, VAR25, "", VAR24);
            return VAR10;
        }
        if (FUN3(VAR13))
        {
            FUN2(VAR2, VAR25, "");
            return VAR10;
        }
        VAR13->VAR22 = 1;
    }
    FUN4(&VAR13->VAR26, VAR8, VAR10 * 8);
    VAR15 = FUN5(&VAR13->VAR26, 3) + 1;
    if (VAR15 > VAR27)
    {
        FUN2(VAR2, VAR25, "", VAR27);
        return VAR10;
    }
    FUN6(&VAR13->VAR26, 4);
    FUN6(&VAR13->VAR26, 12);
    VAR17 = FUN7(&VAR13->VAR26);
    VAR13->VAR28 = FUN5(&VAR13->VAR26, 2) << 3;
    VAR19 = FUN7(&VAR13->VAR26);
    if (VAR17)
    {
        VAR16 = FUN8(&VAR13->VAR26, 32);
        if (VAR16 > VAR13->VAR29)
        {
            FUN2(VAR2, VAR25, "", VAR16, VAR13->VAR29);
            return -1;
        }
    }
    else
        VAR16 = VAR13->VAR29;
    switch (VAR13->VAR30)
    {
    case 16:
        VAR2->VAR31 = VAR32;
        VAR13->VAR33 = VAR15 << 1;
        break;
    case 24:
        VAR2->VAR31 = VAR34;
        VAR13->VAR33 = VAR15 << 2;
        break;
    default:
        FUN2(VAR2, VAR25, "", VAR13->VAR30);
        return -1;
    }
    if (VAR16 > *VAR4 / VAR13->VAR33)
    {
        FUN2(VAR2, VAR25, "");
        return -1;
    }
    *VAR4 = VAR16 * VAR13->VAR33;
    VAR18 = VAR13->VAR30 - (VAR13->VAR28) + VAR15 - 1;
    if (VAR18 > VAR35)
    {
        FUN2(VAR2, VAR25, "", VAR18);
        return -1;
    }
    if (!VAR19)
    {
        int16_t VAR36[VAR27][32];
        int VAR37[VAR27];
        int VAR38[VAR27];
        int VAR39[VAR27];
        int VAR40[VAR27];
        int VAR41, VAR42;
        VAR20 = FUN5(&VAR13->VAR26, 8);
        VAR21 = FUN5(&VAR13->VAR26, 8);
        for (VAR42 = 0; VAR42 < VAR15; VAR42++)
        {
            VAR38[VAR42] = FUN5(&VAR13->VAR26, 4);
            VAR39[VAR42] = FUN5(&VAR13->VAR26, 4);
            VAR40[VAR42] = FUN5(&VAR13->VAR26, 3);
            VAR37[VAR42] = FUN5(&VAR13->VAR26, 5);
            for (VAR41 = 0; VAR41 < VAR37[VAR42]; VAR41++)
                VAR36[VAR42][VAR41] = (VAR43)FUN5(&VAR13->VAR26, 16);
        }
        if (VAR13->VAR28)
        {
            int VAR41, VAR44;
            for (VAR41 = 0; VAR41 < VAR16; VAR41++)
            {
                for (VAR44 = 0; VAR44 < VAR15; VAR44++)
                    VAR13->VAR45[VAR44][VAR41] = FUN5(&VAR13->VAR26, VAR13->VAR28);
            }
        }
        for (VAR42 = 0; VAR42 < VAR15; VAR42++)
        {
            FUN9(VAR13, VAR13->VAR46[VAR42], VAR16, VAR18, VAR13->VAR47, VAR13->VAR48, VAR40[VAR42] * VAR13->VAR49 / 4, (1 << VAR13->VAR48) - 1);
            if (VAR38[VAR42] == 0)
            {
                FUN10(VAR13->VAR46[VAR42], VAR13->VAR50[VAR42], VAR16, VAR18, VAR36[VAR42], VAR37[VAR42], VAR39[VAR42]);
            }
            else
            {
                FUN2(VAR2, VAR25, "", VAR38[VAR42]);
            }
        }
    }
    else
    {
        int VAR41, VAR42;
        if (VAR13->VAR30 <= 16)
        {
            for (VAR41 = 0; VAR41 < VAR16; VAR41++)
                for (VAR42 = 0; VAR42 < VAR15; VAR42++)
                {
                    int32_t VAR51;
                    VAR51 = FUN11(&VAR13->VAR26, VAR13->VAR30);
                    VAR13->VAR50[VAR42][VAR41] = VAR51;
                }
        }
        else
        {
            for (VAR41 = 0; VAR41 < VAR16; VAR41++)
            {
                for (VAR42 = 0; VAR42 < VAR15; VAR42++)
                {
                    VAR13->VAR50[VAR42][VAR41] = FUN5(&VAR13->VAR26, VAR13->VAR30);
                    VAR13->VAR50[VAR42][VAR41] = FUN12(VAR13->VAR50[VAR42][VAR41], VAR13->VAR30);
                }
            }
        }
        VAR13->VAR28 = 0;
        VAR20 = 0;
        VAR21 = 0;
    }
    if (FUN5(&VAR13->VAR26, 3) != 7)
        FUN2(VAR2, VAR25, "");
    switch (VAR13->VAR30)
    {
    case 16:
        if (VAR15 == 2)
        {
            FUN13(VAR13->VAR50, (VAR43 *)VAR3, VAR13->VAR52, VAR16, VAR20, VAR21);
        }
        else
        {
            int VAR41;
            for (VAR41 = 0; VAR41 < VAR16; VAR41++)
            {
                ((VAR43 *)VAR3)[VAR41] = VAR13->VAR50[0][VAR41];
            }
        }
        break;
    case 24:
        if (VAR15 == 2)
        {
            FUN14(VAR13->VAR50, VAR3, VAR13->VAR45, VAR13->VAR28, VAR13->VAR52, VAR16, VAR20, VAR21);
        }
        else
        {
            int VAR41;
            for (VAR41 = 0; VAR41 < VAR16; VAR41++)
                ((VAR53 *)VAR3)[VAR41] = VAR13->VAR50[0][VAR41] << 8;
        }
        break;
    }
    if (VAR10 * 8 - FUN15(&VAR13->VAR26) > 8)
        FUN2(VAR2, VAR25, "", VAR10 * 8 - FUN15(&VAR13->VAR26));
    return VAR10;
}