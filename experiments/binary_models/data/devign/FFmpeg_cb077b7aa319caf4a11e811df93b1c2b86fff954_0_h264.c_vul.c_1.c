static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = VAR4->VAR6 * (VAR4->VAR7 + 1);
    int VAR8, VAR9;
    FUN2(VAR2->VAR10, VAR5 * 8 * sizeof(VAR11))
    FUN2(VAR2->VAR12, VAR5 * 16 * sizeof(VAR11)) FUN2(VAR2->VAR13, (VAR5 + VAR4->VAR6) * sizeof(VAR11)) FUN2(VAR2->VAR14, VAR5 * sizeof(VAR15)) if (VAR2->VAR16.VAR17)
    {
        FUN2(VAR2->VAR18, VAR5 * sizeof(VAR11))
        FUN2(VAR2->VAR19[0], 32 * VAR5 * sizeof(VAR15));
        FUN2(VAR2->VAR19[1], 32 * VAR5 * sizeof(VAR15));
        FUN2(VAR2->VAR20, 32 * VAR5 * sizeof(VAR11));
    }
    memset(VAR2->VAR13, -1, (VAR5 + VAR4->VAR6) * sizeof(VAR11));
    VAR2->VAR21 = VAR2->VAR13 + VAR4->VAR6 * 2 + 1;
    FUN2(VAR2->VAR22, VAR5 * sizeof(VAR23));
    FUN2(VAR2->VAR24, VAR5 * sizeof(VAR23));
    for (VAR9 = 0; VAR9 < VAR4->VAR7; VAR9++)
    {
        for (VAR8 = 0; VAR8 < VAR4->VAR25; VAR8++)
        {
            const int VAR26 = VAR8 + VAR9 * VAR4->VAR6;
            const int VAR27 = 4 * VAR8 + 4 * VAR9 * VAR2->VAR28;
            const int VAR29 = 2 * VAR8 + 2 * VAR9 * VAR2->VAR30;
            VAR2->VAR22[VAR26] = VAR27;
            VAR2->VAR24[VAR26] = VAR29;
        }
    }
    VAR4->VAR31 = NULL;
    if (!VAR2->VAR32[0])
        FUN3(VAR2);
    return 0;
VAR33:
    FUN4(VAR2);
    return -1;
}