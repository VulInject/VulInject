int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7 = VAR2->VAR8 * VAR2->VAR9;
    int VAR10 = (2 * VAR2->VAR11 + 1) * (2 * VAR2->VAR8 + 1);
    int VAR12 = VAR2->VAR9 * (VAR2->VAR8 + 1);
    int VAR13 = VAR10 + 2 * VAR12;
    int VAR14, VAR15, VAR16;
    VAR4->VAR17[0][VAR18[5] + 1] = VAR4->VAR17[0][VAR18[7] + 1] = VAR4->VAR17[0][VAR18[13] + 1] = VAR4->VAR17[1][VAR18[5] + 1] = VAR4->VAR17[1][VAR18[7] + 1] = VAR4->VAR17[1][VAR18[13] + 1] = VAR19;
    if (VAR4 != VAR2->VAR20)
    {
        memset(VAR6, 0, sizeof(*VAR6));
    }
    else if (VAR21)
    {
        VAR6->VAR22 = VAR2->VAR22;
        VAR6->VAR23 = VAR24;
        VAR6->VAR25 = VAR2;
        VAR6->VAR26 = 1;
        VAR6->VAR27 = VAR2->VAR27;
        VAR6->VAR11 = VAR2->VAR11;
        VAR6->VAR8 = VAR2->VAR8;
        VAR6->VAR9 = VAR2->VAR9;
        VAR6->VAR28 = VAR2->VAR11 * 2 + 1;
        FUN2(VAR2->VAR22, VAR6->VAR29, (VAR2->VAR27 + 1) * sizeof(int), VAR30);
        for (VAR15 = 0; VAR15 < VAR2->VAR8; VAR15++)
            for (VAR14 = 0; VAR14 < VAR2->VAR11; VAR14++)
                VAR6->VAR29[VAR14 + VAR15 * VAR2->VAR11] = VAR14 + VAR15 * VAR2->VAR9;
        VAR6->VAR29[VAR2->VAR8 * VAR2->VAR11] = (VAR2->VAR8 - 1) * VAR2->VAR9 + VAR2->VAR11;
        FUN2(VAR2->VAR22, VAR6->VAR31, VAR7 * sizeof(VAR32), VAR30);
        FUN3(VAR2->VAR22, VAR6->VAR33, VAR2->VAR8 * VAR2->VAR9, VAR30);
        FUN2(VAR2->VAR22, VAR4->VAR34, VAR13 * sizeof(VAR35), VAR30);
        VAR6->VAR36[0] = VAR4->VAR34 + VAR2->VAR11 * 2 + 2;
        VAR6->VAR36[1] = VAR4->VAR34 + VAR10 + VAR2->VAR9 + 1;
        VAR6->VAR36[2] = VAR6->VAR36[1] + VAR12;
        for (VAR16 = 0; VAR16 < VAR13; VAR16++)
            VAR4->VAR34[VAR16] = 1024;
    }
    return 0;
VAR30:
    return FUN4(VAR37);
}