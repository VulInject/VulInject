int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = VAR4->VAR6 * (VAR4->VAR7 + 1);
    int VAR8, VAR9;
    FUN2(VAR2->VAR4.VAR10, VAR2->VAR11, VAR5 * 8 * sizeof(VAR12), VAR13)
    FUN2(VAR2->VAR4.VAR10, VAR2->VAR14, VAR5 * 32 * sizeof(VAR12), VAR13) FUN2(VAR2->VAR4.VAR10, VAR2->VAR15, (VAR5 + VAR4->VAR6) * sizeof(*VAR2->VAR15), VAR13) FUN2(VAR2->VAR4.VAR10, VAR2->VAR16, VAR5 * sizeof(VAR17), VAR13) FUN2(VAR2->VAR4.VAR10, VAR2->VAR18, VAR5 * sizeof(VAR12), VAR13) FUN2(VAR2->VAR4.VAR10, VAR2->VAR19[0], 32 * VAR5 * sizeof(VAR17), VAR13);
    FUN2(VAR2->VAR4.VAR10, VAR2->VAR19[1], 32 * VAR5 * sizeof(VAR17), VAR13);
    FUN2(VAR2->VAR4.VAR10, VAR2->VAR20, 32 * VAR5 * sizeof(VAR12), VAR13);
    FUN2(VAR2->VAR4.VAR10, VAR2->VAR21, VAR5 * sizeof(VAR12), VAR13)
    memset(VAR2->VAR15, -1, (VAR5 + VAR4->VAR6) * sizeof(*VAR2->VAR15));
    VAR2->VAR22 = VAR2->VAR15 + VAR4->VAR6 * 2 + 1;
    FUN2(VAR2->VAR4.VAR10, VAR2->VAR23, VAR5 * sizeof(VAR24), VAR13);
    FUN2(VAR2->VAR4.VAR10, VAR2->VAR25, VAR5 * sizeof(VAR24), VAR13);
    for (VAR9 = 0; VAR9 < VAR4->VAR7; VAR9++)
    {
        for (VAR8 = 0; VAR8 < VAR4->VAR26; VAR8++)
        {
            const int VAR27 = VAR8 + VAR9 * VAR4->VAR6;
            const int VAR28 = 4 * VAR8 + 4 * VAR9 * VAR2->VAR29;
            const int VAR30 = 2 * VAR8 + 2 * VAR9 * VAR2->VAR31;
            VAR2->VAR23[VAR27] = VAR28;
            VAR2->VAR25[VAR27] = VAR30;
        }
    }
    VAR4->VAR32 = NULL;
    if (!VAR2->VAR33[0])
        FUN3(VAR2);
    return 0;
VAR13:
    FUN4(VAR2);
    return -1;
}