int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5 = VAR2->VAR6 * VAR2->VAR7;
    int VAR8 = (2 * VAR2->VAR9 + 1) * (2 * VAR2->VAR6 + 1);
    int VAR10 = VAR2->VAR7 * (VAR2->VAR6 + 1);
    int VAR11 = VAR8 + 2 * VAR10;
    int VAR12, VAR13, VAR14;
    FUN2(VAR2->VAR15, VAR2->VAR16[0], VAR2->VAR9 * 16 * 3 * sizeof(VAR17) * 2, VAR18)
    FUN2(VAR2->VAR15, VAR2->VAR16[1], VAR2->VAR9 * 16 * 3 * sizeof(VAR17) * 2, VAR18) VAR2->VAR19[0][VAR20[5] + 1] = VAR2->VAR19[0][VAR20[7] + 1] = VAR2->VAR19[0][VAR20[13] + 1] = VAR2->VAR19[1][VAR20[5] + 1] = VAR2->VAR19[1][VAR20[7] + 1] = VAR2->VAR19[1][VAR20[13] + 1] = VAR21;
    if (VAR22)
    {
        VAR4->VAR15 = VAR2->VAR15;
        VAR4->VAR23 = VAR24;
        VAR4->VAR25 = VAR2;
        VAR4->VAR26 = 1;
        VAR4->VAR27 = VAR2->VAR27;
        VAR4->VAR9 = VAR2->VAR9;
        VAR4->VAR6 = VAR2->VAR6;
        VAR4->VAR7 = VAR2->VAR7;
        VAR4->VAR28 = VAR2->VAR9 * 2 + 1;
        FUN2(VAR2->VAR15, VAR4->VAR29, (VAR2->VAR27 + 1) * sizeof(int), VAR18);
        for (VAR13 = 0; VAR13 < VAR2->VAR6; VAR13++)
            for (VAR12 = 0; VAR12 < VAR2->VAR9; VAR12++)
                VAR4->VAR29[VAR12 + VAR13 * VAR2->VAR9] = VAR12 + VAR13 * VAR2->VAR7;
        VAR4->VAR29[VAR2->VAR6 * VAR2->VAR9] = (VAR2->VAR6 - 1) * VAR2->VAR7 + VAR2->VAR9;
        FUN2(VAR2->VAR15, VAR4->VAR30, VAR5 * sizeof(VAR17), VAR18);
        FUN3(VAR2->VAR15, VAR4->VAR31, VAR5, VAR18);
        memset(VAR4->VAR31, 1, VAR5);
        FUN2(VAR2->VAR15, VAR4->VAR32, VAR5 + 2, VAR18);
        FUN3(VAR2->VAR15, VAR4->VAR33, VAR2->VAR6 * VAR2->VAR7, VAR18);
        FUN2(VAR2->VAR15, VAR2->VAR34, VAR11 * sizeof(VAR35), VAR18);
        VAR4->VAR36[0] = VAR2->VAR34 + VAR2->VAR9 * 2 + 2;
        VAR4->VAR36[1] = VAR2->VAR34 + VAR8 + VAR2->VAR7 + 1;
        VAR4->VAR36[2] = VAR4->VAR36[1] + VAR10;
        for (VAR14 = 0; VAR14 < VAR11; VAR14++)
            VAR2->VAR34[VAR14] = 1024;
    }
    return 0;
VAR18:
    return FUN4(VAR37);
}