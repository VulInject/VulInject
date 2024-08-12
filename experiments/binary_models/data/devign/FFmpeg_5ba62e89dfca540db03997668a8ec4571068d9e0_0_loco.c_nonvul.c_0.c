static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, const VAR3 *VAR8, int VAR9, int VAR10)
{
    RICEContext VAR11;
    int VAR12;
    int VAR13;
    int VAR14, VAR15;
    if (VAR9 <= 0)
        return -1;
    if ((VAR13 = FUN2(&VAR11.VAR16, VAR8, VAR9)) < 0)
        return VAR13;
    VAR11.VAR17 = 0;
    VAR11.VAR18 = 0;
    VAR11.VAR19 = 0;
    VAR11.VAR20 = VAR2->VAR20;
    VAR11.VAR21 = 8;
    VAR11.VAR22 = 1;
    VAR12 = FUN3(&VAR11);
    VAR4[0] = 128 + VAR12;
    for (VAR14 = 1; VAR14 < VAR5; VAR14++)
    {
        VAR12 = FUN3(&VAR11);
        VAR4[VAR14 * VAR10] = VAR4[VAR14 * VAR10 - VAR10] + VAR12;
    }
    VAR4 += VAR7;
    for (VAR15 = 1; VAR15 < VAR6; VAR15++)
    {
        VAR12 = FUN3(&VAR11);
        VAR4[0] = VAR4[-VAR7] + VAR12;
        for (VAR14 = 1; VAR14 < VAR5; VAR14++)
        {
            VAR12 = FUN3(&VAR11);
            VAR4[VAR14 * VAR10] = FUN4(&VAR4[VAR14 * VAR10], VAR7, VAR10) + VAR12;
        }
        VAR4 += VAR7;
    }
    return (FUN5(&VAR11.VAR16) + 7) >> 3;
}