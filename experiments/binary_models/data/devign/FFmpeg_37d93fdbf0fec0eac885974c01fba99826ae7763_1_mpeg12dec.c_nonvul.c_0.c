static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    int VAR12, VAR13;
    int VAR14, VAR15, VAR16;
    FUN2(&VAR10->VAR17, VAR4, VAR5 * 8);
    VAR12 = FUN3(&VAR10->VAR17, 12);
    VAR13 = FUN3(&VAR10->VAR17, 12);
    if (VAR12 == 0 || VAR13 == 0)
    {
        FUN4(VAR2, VAR18, "");
        if (VAR2->VAR19 & (VAR20 | VAR21))
            return VAR22;
    }
    VAR10->VAR23 = FUN3(&VAR10->VAR17, 4);
    if (VAR10->VAR23 == 0)
    {
        FUN4(VAR2, VAR24, "");
        if (VAR2->VAR19 & (VAR20 | VAR21))
            return VAR22;
    }
    VAR10->VAR25 = FUN3(&VAR10->VAR17, 4);
    if (VAR10->VAR25 == 0 || VAR10->VAR25 > 13)
    {
        FUN4(VAR2, VAR18, "", VAR10->VAR25);
        VAR10->VAR25 = 1;
    }
    VAR10->VAR26 = FUN3(&VAR10->VAR17, 18) * 400;
    if (FUN5(&VAR10->VAR17, "") == 0)
    {
        return VAR22;
    }
    VAR10->VAR12 = VAR12;
    VAR10->VAR13 = VAR13;
    VAR10->VAR2->VAR27 = FUN3(&VAR10->VAR17, 10) * 1024 * 16;
    FUN6(&VAR10->VAR17, 1);
    if (FUN7(&VAR10->VAR17))
    {
        FUN8(VAR10, VAR10->VAR28, VAR10->VAR29, 1);
    }
    else
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            VAR16 = VAR10->VAR30.VAR31[VAR14];
            VAR15 = VAR32[VAR14];
            VAR10->VAR29[VAR16] = VAR15;
            VAR10->VAR28[VAR16] = VAR15;
        }
    }
    if (FUN7(&VAR10->VAR17))
    {
        FUN8(VAR10, VAR10->VAR33, VAR10->VAR34, 0);
    }
    else
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            int VAR16 = VAR10->VAR30.VAR31[VAR14];
            VAR15 = VAR35[VAR14];
            VAR10->VAR34[VAR16] = VAR15;
            VAR10->VAR33[VAR16] = VAR15;
        }
    }
    if (FUN9(&VAR10->VAR17, 23) != 0)
    {
        FUN4(VAR10->VAR2, VAR24, "");
        return VAR22;
    }
    VAR10->VAR36 = 1;
    VAR10->VAR37 = 1;
    VAR10->VAR38 = VAR39;
    VAR10->VAR40 = 0;
    VAR10->VAR41 = 1;
    VAR10->VAR42 = 1;
    VAR10->VAR43 = VAR10->VAR2->VAR43 = VAR44;
    VAR10->VAR45 = VAR46;
    VAR10->VAR47 = 0;
    if (VAR10->VAR48 & VAR49)
        VAR10->VAR50 = 1;
    if (VAR10->VAR2->VAR51 & VAR52)
        FUN4(VAR10->VAR2, VAR53, "", VAR10->VAR2->VAR27, VAR10->VAR26, VAR10->VAR23);
    return 0;
}