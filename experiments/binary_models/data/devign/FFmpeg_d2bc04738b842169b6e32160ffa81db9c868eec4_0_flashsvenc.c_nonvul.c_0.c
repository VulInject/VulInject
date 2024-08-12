static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR6;
    VAR10 *const VAR12 = &VAR8->VAR13;
    VAR3 *VAR14;
    int VAR15;
    int VAR16 = 0;
    int VAR17, VAR18;
    *VAR12 = *VAR11;
    if (VAR2->VAR19 == 0)
    {
        VAR8->VAR20 = FUN2(FUN3(VAR12->VAR21[0]) * VAR8->VAR22);
        if (!VAR8->VAR20)
        {
            FUN4(VAR2, VAR23, "");
            return -1;
        }
        VAR16 = 1;
    }
    if (VAR12->VAR21[0] < 0)
        VAR14 = VAR8->VAR20 - ((VAR8->VAR22 - 1) * VAR12->VAR21[0]);
    else
        VAR14 = VAR8->VAR20;
    if (VAR2->VAR24 > 0)
    {
        if (VAR2->VAR19 >= VAR8->VAR25 + VAR2->VAR24)
        {
            VAR16 = 1;
        }
    }
    int VAR26, VAR27;
    int VAR28[16][16];
    int VAR29;
    for (VAR26 = 1; VAR26 < 17; VAR26++)
    {
        for (VAR27 = 1; VAR27 < 17; VAR27++)
        {
            VAR28[VAR26 - 1][VAR27 - 1] = FUN5(VAR8, VAR12, VAR8->VAR30, VAR8->VAR31 * VAR8->VAR22 * 4, VAR26 * 16, VAR27 * 16, VAR8->VAR20);
        }
    }
    VAR29 = VAR28[0][0];
    VAR17 = 0;
    VAR18 = 0;
    for (VAR26 = 0; VAR26 < 16; VAR26++)
    {
        for (VAR27 = 0; VAR27 < 16; VAR27++)
        {
            if (VAR28[VAR26][VAR27] < VAR29)
            {
                VAR29 = VAR28[VAR26][VAR27];
                VAR17 = VAR26;
                VAR18 = VAR27;
            }
        }
    }
    VAR15 = FUN5(VAR8, VAR12, VAR4, VAR5, (VAR17 + 1) * 16, (VAR18 + 1) * 16, VAR8->VAR20);
    FUN4(VAR2, VAR23, "", VAR17, VAR18, VAR29, VAR15);
    if (VAR5 < VAR15)
        FUN4(VAR2, VAR23, "", VAR5, VAR15);
    VAR17 = 1;
    VAR18 = 1;
    if (VAR5 < VAR8->VAR31 * VAR8->VAR22 * 3)
    {
        FUN4(VAR2, VAR23, "", VAR5, VAR8->VAR31 * VAR8->VAR22 * 3);
        return -1;
    }
    VAR15 = FUN5(VAR8, VAR12, VAR4, VAR5, VAR17 * 16, VAR18 * 16, VAR14, &VAR16);
    if (VAR12->VAR21[0] > 0)
        memcpy(VAR8->VAR20, VAR12->VAR6[0], VAR8->VAR22 * VAR12->VAR21[0]);
    else
        memcpy(VAR8->VAR20, VAR12->VAR6[0] + VAR12->VAR21[0] * (VAR8->VAR22 - 1), VAR8->VAR22 * FUN3(VAR12->VAR21[0]));
    if (VAR16)
    {
        VAR12->VAR32 = VAR33;
        VAR12->VAR34 = 1;
        VAR8->VAR25 = VAR2->VAR19;
        FUN4(VAR2, VAR35, "", VAR2->VAR19);
    }
    else
    {
        VAR12->VAR32 = VAR36;
        VAR12->VAR34 = 0;
    }
    VAR2->VAR37 = VAR12;
    return VAR15;
}