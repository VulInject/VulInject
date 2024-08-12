static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9, const VAR3 *VAR10, int VAR11, int VAR12, int VAR13)
{
    int VAR14, VAR15, VAR16;
    const int VAR17 = 1 << VAR2->VAR18;
    const int VAR19 = VAR12 ? VAR2->VAR20 : FUN2(VAR8 + 16, 16);
    FUN3(16, VAR21, VAR22)
    [32];
    VAR23 *VAR24 = (VAR23 *)VAR22;
    VAR23 *VAR25 = (VAR23 *)(VAR22 + 16);
    VAR26 *VAR27 = (VAR26 *)VAR2->VAR5;
    for (VAR15 = 0; VAR15 < VAR9; VAR15++)
    {
        int VAR28 = 8 + 8 * VAR19 + VAR15 * VAR19;
        memcpy(VAR2->VAR5 + VAR28 * VAR13, VAR5 + VAR15 * VAR7, VAR8 * VAR13);
        if (VAR13 == 1)
        {
            for (VAR14 = 0; VAR14 < 8; VAR14++)
            {
                VAR2->VAR5[VAR28 - VAR14 - 1] = VAR2->VAR5[VAR28 + VAR14];
                VAR2->VAR5[VAR28 + VAR8 + VAR14] = VAR2->VAR5[VAR28 + VAR8 - VAR14 - 1];
            }
        }
        else
        {
            for (VAR14 = 0; VAR14 < 8; VAR14++)
            {
                VAR27[VAR28 - VAR14 - 1] = VAR27[VAR28 + VAR14];
                VAR27[VAR28 + VAR8 + VAR14] = VAR27[VAR28 + VAR8 - VAR14 - 1];
            }
        }
    }
    for (VAR15 = 0; VAR15 < 8; VAR15++)
    {
        memcpy(VAR2->VAR5 + (7 - VAR15) * VAR19 * VAR13, VAR2->VAR5 + (VAR15 + 8) * VAR19 * VAR13, VAR19 * VAR13);
        memcpy(VAR2->VAR5 + (VAR9 + 8 + VAR15) * VAR19 * VAR13, VAR2->VAR5 + (VAR9 - VAR15 + 7) * VAR19 * VAR13, VAR19 * VAR13);
    }
    for (VAR15 = 0; VAR15 < VAR9 + 8; VAR15 += 8)
    {
        memset(VAR2->VAR29 + (8 + VAR15) * VAR19, 0, 8 * VAR19 * sizeof(*VAR2->VAR29));
        for (VAR14 = 0; VAR14 < VAR8 + 8; VAR14 += 8)
        {
            int VAR30;
            if (VAR2->VAR30)
            {
                VAR30 = VAR2->VAR30;
            }
            else
            {
                const int VAR31 = 3 + VAR12;
                VAR30 = VAR10[(FUN4(VAR14, VAR8 - 1) >> VAR31) + (FUN4(VAR15, VAR9 - 1) >> VAR31) * VAR11];
                VAR30 = FUN5(1, FUN6(VAR30, VAR2->VAR32));
            }
            for (VAR16 = 0; VAR16 < VAR17; VAR16++)
            {
                const int VAR33 = VAR14 + VAR34[VAR16 + VAR17 - 1][0];
                const int VAR35 = VAR15 + VAR34[VAR16 + VAR17 - 1][1];
                const int VAR28 = VAR33 + VAR35 * VAR19;
                VAR2->VAR36->FUN7(VAR24, VAR2->VAR5 + VAR13 * VAR28, VAR13 * VAR19);
                VAR2->VAR36->FUN8(VAR24);
                VAR2->FUN9(VAR25, VAR24, VAR30, VAR2->VAR36->VAR37);
                VAR2->VAR36->FUN10(VAR25);
                FUN11(VAR2->VAR29 + VAR28, VAR19, VAR25);
            }
        }
        if (VAR15)
        {
            if (VAR13 == 1)
            {
                VAR2->FUN12(VAR4 + (VAR15 - 8) * VAR6, VAR2->VAR29 + 8 + VAR15 * VAR19, VAR6, VAR19, VAR8, FUN4(8, VAR9 + 8 - VAR15), VAR38 - VAR2->VAR18, VAR39);
            }
            else
            {
                FUN13((VAR26 *)(VAR4 + (VAR15 - 8) * VAR6), VAR2->VAR29 + 8 + VAR15 * VAR19, VAR6 / 2, VAR19, VAR8, FUN4(8, VAR9 + 8 - VAR15), VAR38 - VAR2->VAR18, VAR39);
            }
        }
    }
}