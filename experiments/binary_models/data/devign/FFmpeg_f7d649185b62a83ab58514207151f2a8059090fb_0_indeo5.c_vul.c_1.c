static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    uint16_t VAR15;
    VAR5->VAR16 = VAR5->VAR17[VAR2->VAR18];
    VAR5->VAR19 = VAR5->VAR17[VAR2->VAR19];
    VAR5->VAR20 = VAR2->VAR21 + (FUN2(&VAR2->VAR22) >> 3);
    VAR8 = FUN3(VAR2, VAR5, VAR7);
    if (VAR8)
    {
        FUN4(VAR7, VAR23, "", VAR8);
        return -1;
    }
    if (VAR5->VAR24)
    {
        FUN4(VAR7, VAR23, "");
        return -1;
    }
    VAR5->VAR25 = &VAR2->VAR26[VAR5->VAR27];
    for (VAR9 = 0; VAR9 < VAR5->VAR28; VAR9++)
    {
        VAR11 = VAR5->VAR29[VAR9 * 2];
        VAR12 = VAR5->VAR29[VAR9 * 2 + 1];
        FUN5(VAR30, VAR5->VAR25->VAR31[VAR11], VAR5->VAR25->VAR31[VAR12]);
        FUN5(VAR32, VAR5->VAR25->VAR33[VAR11], VAR5->VAR25->VAR33[VAR12]);
    }
    for (VAR10 = 0; VAR10 < VAR5->VAR34; VAR10++)
    {
        VAR14 = &VAR5->VAR35[VAR10];
        VAR14->VAR24 = FUN6(&VAR2->VAR22);
        if (VAR14->VAR24)
        {
            FUN7(VAR7, VAR5, VAR14, (VAR2->VAR36[0].VAR37[0].VAR38 >> 3) - (VAR5->VAR38 >> 3));
            FUN8(&VAR2->VAR22);
        }
        else
        {
            VAR14->VAR39 = FUN9(&VAR2->VAR22);
            VAR8 = FUN10(VAR2, VAR5, VAR14, VAR7);
            if (VAR8 < 0)
                break;
            if (VAR5->VAR40 == 8)
            {
                VAR5->VAR41 = &VAR42[VAR5->VAR43][0];
                VAR5->VAR44 = &VAR45[VAR5->VAR43][0];
                VAR5->VAR46 = &VAR47[VAR5->VAR43][0];
                VAR5->VAR48 = &VAR49[VAR5->VAR43][0];
            }
            else
            {
                VAR5->VAR41 = VAR50;
                VAR5->VAR44 = VAR51;
                VAR5->VAR46 = VAR52;
                VAR5->VAR48 = VAR53;
            }
            VAR8 = FUN11(&VAR2->VAR22, VAR5, VAR14);
            if (VAR8 < 0)
            {
                FUN4(VAR7, VAR23, "");
                break;
            }
        }
    }
    for (VAR9 = VAR5->VAR28 - 1; VAR9 >= 0; VAR9--)
    {
        VAR11 = VAR5->VAR29[VAR9 * 2];
        VAR12 = VAR5->VAR29[VAR9 * 2 + 1];
        FUN5(VAR30, VAR5->VAR25->VAR31[VAR11], VAR5->VAR25->VAR31[VAR12]);
        FUN5(VAR32, VAR5->VAR25->VAR33[VAR11], VAR5->VAR25->VAR33[VAR12]);
    }
    if (VAR54 && VAR5->VAR55)
    {
        VAR15 = FUN12(VAR5);
        if (VAR15 != VAR5->VAR56)
        {
            FUN4(VAR7, VAR23, "", VAR5->VAR57, VAR5->VAR58, VAR5->VAR56, VAR15);
        }
    }
    return VAR8;
}