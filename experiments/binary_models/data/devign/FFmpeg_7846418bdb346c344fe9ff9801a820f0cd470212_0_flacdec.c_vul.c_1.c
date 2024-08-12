static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    const int VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7[VAR3];
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    for (VAR12 = 0; VAR12 < VAR4; VAR12++)
    {
        VAR7[VAR12] = FUN2(&VAR2->VAR13, VAR2->VAR14);
    }
    if (FUN3(VAR2, VAR3, VAR4) < 0)
        return -1;
    if (VAR4 > 0)
        VAR8 = VAR7[VAR4 - 1];
    if (VAR4 > 1)
        VAR9 = VAR8 - VAR7[VAR4 - 2];
    if (VAR4 > 2)
        VAR10 = VAR9 - VAR7[VAR4 - 2] + VAR7[VAR4 - 3];
    if (VAR4 > 3)
        VAR11 = VAR10 - VAR7[VAR4 - 2] + 2 * VAR7[VAR4 - 3] - VAR7[VAR4 - 4];
    switch (VAR4)
    {
    case 0:
        break;
    case 1:
        for (VAR12 = VAR4; VAR12 < VAR5; VAR12++)
            VAR7[VAR12] = VAR8 += VAR7[VAR12];
        break;
    case 2:
        for (VAR12 = VAR4; VAR12 < VAR5; VAR12++)
            VAR7[VAR12] = VAR8 += VAR9 += VAR7[VAR12];
        break;
    case 3:
        for (VAR12 = VAR4; VAR12 < VAR5; VAR12++)
            VAR7[VAR12] = VAR8 += VAR9 += VAR10 += VAR7[VAR12];
        break;
    case 4:
        for (VAR12 = VAR4; VAR12 < VAR5; VAR12++)
            VAR7[VAR12] = VAR8 += VAR9 += VAR10 += VAR11 += VAR7[VAR12];
        break;
    default:
        FUN4(VAR2->VAR15, VAR16, "", VAR4);
        return -1;
    }
    return 0;
}