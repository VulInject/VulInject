static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    const int VAR7 = VAR2->VAR7;
    unsigned FUN2(VAR8), FUN2(VAR9), FUN2(VAR10), FUN2(VAR11);
    int VAR12;
    int VAR13;
    for (VAR12 = 0; VAR12 < VAR5; VAR12++)
    {
        VAR4[VAR12] = FUN3(&VAR2->VAR14, VAR6);
    }
    if ((VAR13 = FUN4(VAR2, VAR4, VAR5)) < 0)
        return VAR13;
    if (VAR5 > 0)
        VAR8 = VAR4[VAR5 - 1];
    if (VAR5 > 1)
        VAR9 = VAR8 - VAR4[VAR5 - 2];
    if (VAR5 > 2)
        VAR10 = VAR9 - VAR4[VAR5 - 2] + VAR4[VAR5 - 3];
    if (VAR5 > 3)
        VAR11 = VAR10 - VAR4[VAR5 - 2] + 2 * VAR4[VAR5 - 3] - VAR4[VAR5 - 4];
    switch (VAR5)
    {
    case 0:
        break;
    case 1:
        for (VAR12 = VAR5; VAR12 < VAR7; VAR12++)
            VAR4[VAR12] = VAR8 += VAR4[VAR12];
        break;
    case 2:
        for (VAR12 = VAR5; VAR12 < VAR7; VAR12++)
            VAR4[VAR12] = VAR8 += VAR9 += VAR4[VAR12];
        break;
    case 3:
        for (VAR12 = VAR5; VAR12 < VAR7; VAR12++)
            VAR4[VAR12] = VAR8 += VAR9 += VAR10 += VAR4[VAR12];
        break;
    case 4:
        for (VAR12 = VAR5; VAR12 < VAR7; VAR12++)
            VAR4[VAR12] = VAR8 += VAR9 += VAR10 += VAR11 += VAR4[VAR12];
        break;
    default:
        FUN5(VAR2->VAR15, VAR16, "", VAR5);
        return VAR17;
    }
    return 0;
}