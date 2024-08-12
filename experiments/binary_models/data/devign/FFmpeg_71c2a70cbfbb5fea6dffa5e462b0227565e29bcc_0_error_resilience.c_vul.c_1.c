static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    FUN2(*VAR11)[4] = FUN3(VAR7 * VAR6 * sizeof(VAR3) * 4);
    FUN4(*VAR12)[4] = FUN3(VAR7 * VAR6 * sizeof(VAR13) * 4);
    for (VAR10 = 0; VAR10 < VAR6; VAR10++)
    {
        int VAR14 = 1024;
        int VAR15 = -1;
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            int VAR16 = (VAR9 >> VAR8) + (VAR10 >> VAR8) * VAR2->VAR17;
            int VAR18 = VAR2->VAR19[VAR16];
            int VAR20 = FUN5(VAR2->VAR21.VAR22.VAR23[VAR16]);
            if (VAR20 == 0 || !(VAR18 & VAR24))
            {
                VAR14 = VAR4[VAR9 + VAR10 * VAR7];
                VAR15 = VAR9;
            }
            VAR11[VAR9 + VAR10 * VAR7][1] = VAR14;
            VAR12[VAR9 + VAR10 * VAR7][1] = VAR15 >= 0 ? VAR9 - VAR15 : 9999;
        }
        VAR14 = 1024;
        VAR15 = -1;
        for (VAR9 = VAR5 - 1; VAR9 >= 0; VAR9--)
        {
            int VAR16 = (VAR9 >> VAR8) + (VAR10 >> VAR8) * VAR2->VAR17;
            int VAR18 = VAR2->VAR19[VAR16];
            int VAR20 = FUN5(VAR2->VAR21.VAR22.VAR23[VAR16]);
            if (VAR20 == 0 || !(VAR18 & VAR24))
            {
                VAR14 = VAR4[VAR9 + VAR10 * VAR7];
                VAR15 = VAR9;
            }
            VAR11[VAR9 + VAR10 * VAR7][0] = VAR14;
            VAR12[VAR9 + VAR10 * VAR7][0] = VAR15 >= 0 ? VAR15 - VAR9 : 9999;
        }
    }
    for (VAR9 = 0; VAR9 < VAR5; VAR9++)
    {
        int VAR14 = 1024;
        int VAR15 = -1;
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
        {
            int VAR16 = (VAR9 >> VAR8) + (VAR10 >> VAR8) * VAR2->VAR17;
            int VAR18 = VAR2->VAR19[VAR16];
            int VAR20 = FUN5(VAR2->VAR21.VAR22.VAR23[VAR16]);
            if (VAR20 == 0 || !(VAR18 & VAR24))
            {
                VAR14 = VAR4[VAR9 + VAR10 * VAR7];
                VAR15 = VAR10;
            }
            VAR11[VAR9 + VAR10 * VAR7][3] = VAR14;
            VAR12[VAR9 + VAR10 * VAR7][3] = VAR15 >= 0 ? VAR10 - VAR15 : 9999;
        }
        VAR14 = 1024;
        VAR15 = -1;
        for (VAR10 = VAR6 - 1; VAR10 >= 0; VAR10--)
        {
            int VAR16 = (VAR9 >> VAR8) + (VAR10 >> VAR8) * VAR2->VAR17;
            int VAR18 = VAR2->VAR19[VAR16];
            int VAR20 = FUN5(VAR2->VAR21.VAR22.VAR23[VAR16]);
            if (VAR20 == 0 || !(VAR18 & VAR24))
            {
                VAR14 = VAR4[VAR9 + VAR10 * VAR7];
                VAR15 = VAR10;
            }
            VAR11[VAR9 + VAR10 * VAR7][2] = VAR14;
            VAR12[VAR9 + VAR10 * VAR7][2] = VAR15 >= 0 ? VAR15 - VAR10 : 9999;
        }
    }
    for (VAR10 = 0; VAR10 < VAR6; VAR10++)
    {
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            int VAR25, VAR26, VAR27;
            int64_t VAR28, VAR29;
            VAR25 = (VAR9 >> VAR8) + (VAR10 >> VAR8) * VAR2->VAR17;
            VAR26 = VAR2->VAR19[VAR25];
            if (FUN6(VAR2->VAR21.VAR22.VAR23[VAR25]))
                continue;
            if (!(VAR26 & VAR24))
                continue;
            VAR29 = 0;
            VAR28 = 0;
            for (VAR27 = 0; VAR27 < 4; VAR27++)
            {
                int64_t VAR30 = 256 * 256 * 256 * 16 / VAR12[VAR9 + VAR10 * VAR7][VAR27];
                VAR28 += VAR30 * (VAR31)VAR11[VAR9 + VAR10 * VAR7][VAR27];
                VAR29 += VAR30;
            }
            VAR28 = (VAR28 + VAR29 / 2) / VAR29;
            VAR4[VAR9 + VAR10 * VAR7] = VAR28;
        }
    }
    FUN7(&VAR11);
    FUN7(&VAR12);
}