static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    FUN2(*VAR11)[4] = FUN3(VAR7 * VAR6 * sizeof(VAR3) * 4);
    FUN4(*VAR12)[4] = FUN3(VAR7 * VAR6 * sizeof(VAR13) * 4);
    if (!VAR11 || !VAR12)
    {
        FUN5(VAR2->VAR14, VAR15, "");
        goto VAR16;
    }
    for (VAR10 = 0; VAR10 < VAR6; VAR10++)
    {
        int VAR17 = 1024;
        int VAR18 = -1;
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            int VAR19 = (VAR9 >> VAR8) + (VAR10 >> VAR8) * VAR2->VAR20;
            int VAR21 = VAR2->VAR22[VAR19];
            int VAR23 = FUN6(VAR2->VAR24.VAR25.VAR26[VAR19]);
            if (VAR23 == 0 || !(VAR21 & VAR27))
            {
                VAR17 = VAR4[VAR9 + VAR10 * VAR7];
                VAR18 = VAR9;
            }
            VAR11[VAR9 + VAR10 * VAR7][1] = VAR17;
            VAR12[VAR9 + VAR10 * VAR7][1] = VAR18 >= 0 ? VAR9 - VAR18 : 9999;
        }
        VAR17 = 1024;
        VAR18 = -1;
        for (VAR9 = VAR5 - 1; VAR9 >= 0; VAR9--)
        {
            int VAR19 = (VAR9 >> VAR8) + (VAR10 >> VAR8) * VAR2->VAR20;
            int VAR21 = VAR2->VAR22[VAR19];
            int VAR23 = FUN6(VAR2->VAR24.VAR25.VAR26[VAR19]);
            if (VAR23 == 0 || !(VAR21 & VAR27))
            {
                VAR17 = VAR4[VAR9 + VAR10 * VAR7];
                VAR18 = VAR9;
            }
            VAR11[VAR9 + VAR10 * VAR7][0] = VAR17;
            VAR12[VAR9 + VAR10 * VAR7][0] = VAR18 >= 0 ? VAR18 - VAR9 : 9999;
        }
    }
    for (VAR9 = 0; VAR9 < VAR5; VAR9++)
    {
        int VAR17 = 1024;
        int VAR18 = -1;
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
        {
            int VAR19 = (VAR9 >> VAR8) + (VAR10 >> VAR8) * VAR2->VAR20;
            int VAR21 = VAR2->VAR22[VAR19];
            int VAR23 = FUN6(VAR2->VAR24.VAR25.VAR26[VAR19]);
            if (VAR23 == 0 || !(VAR21 & VAR27))
            {
                VAR17 = VAR4[VAR9 + VAR10 * VAR7];
                VAR18 = VAR10;
            }
            VAR11[VAR9 + VAR10 * VAR7][3] = VAR17;
            VAR12[VAR9 + VAR10 * VAR7][3] = VAR18 >= 0 ? VAR10 - VAR18 : 9999;
        }
        VAR17 = 1024;
        VAR18 = -1;
        for (VAR10 = VAR6 - 1; VAR10 >= 0; VAR10--)
        {
            int VAR19 = (VAR9 >> VAR8) + (VAR10 >> VAR8) * VAR2->VAR20;
            int VAR21 = VAR2->VAR22[VAR19];
            int VAR23 = FUN6(VAR2->VAR24.VAR25.VAR26[VAR19]);
            if (VAR23 == 0 || !(VAR21 & VAR27))
            {
                VAR17 = VAR4[VAR9 + VAR10 * VAR7];
                VAR18 = VAR10;
            }
            VAR11[VAR9 + VAR10 * VAR7][2] = VAR17;
            VAR12[VAR9 + VAR10 * VAR7][2] = VAR18 >= 0 ? VAR18 - VAR10 : 9999;
        }
    }
    for (VAR10 = 0; VAR10 < VAR6; VAR10++)
    {
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            int VAR28, VAR29, VAR30;
            int64_t VAR31, VAR32;
            VAR28 = (VAR9 >> VAR8) + (VAR10 >> VAR8) * VAR2->VAR20;
            VAR29 = VAR2->VAR22[VAR28];
            if (FUN7(VAR2->VAR24.VAR25.VAR26[VAR28]))
                continue;
            if (!(VAR29 & VAR27))
                continue;
            VAR32 = 0;
            VAR31 = 0;
            for (VAR30 = 0; VAR30 < 4; VAR30++)
            {
                int64_t VAR33 = 256 * 256 * 256 * 16 / FUN8(VAR12[VAR9 + VAR10 * VAR7][VAR30], 1);
                VAR31 += VAR33 * (VAR34)VAR11[VAR9 + VAR10 * VAR7][VAR30];
                VAR32 += VAR33;
            }
            VAR31 = (VAR31 + VAR32 / 2) / VAR32;
            VAR4[VAR9 + VAR10 * VAR7] = VAR31;
        }
    }
    FUN9(&VAR11);
    FUN9(&VAR12);