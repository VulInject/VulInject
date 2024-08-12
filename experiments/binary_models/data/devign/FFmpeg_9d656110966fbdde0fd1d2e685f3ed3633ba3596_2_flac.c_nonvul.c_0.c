static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        VAR2->VAR6[VAR3][VAR5] = FUN2(&VAR2->VAR7, VAR2->VAR8);
    }
    if (FUN3(VAR2, VAR3, VAR4) < 0)
        return -1;
    switch (VAR4)
    {
    case 0:
        break;
    case 1:
        for (VAR5 = VAR4; VAR5 < VAR2->VAR9; VAR5++)
            VAR2->VAR6[VAR3][VAR5] += VAR2->VAR6[VAR3][VAR5 - 1];
        break;
    case 2:
        for (VAR5 = VAR4; VAR5 < VAR2->VAR9; VAR5++)
            VAR2->VAR6[VAR3][VAR5] += 2 * VAR2->VAR6[VAR3][VAR5 - 1] - VAR2->VAR6[VAR3][VAR5 - 2];
        break;
    case 3:
        for (VAR5 = VAR4; VAR5 < VAR2->VAR9; VAR5++)
            VAR2->VAR6[VAR3][VAR5] += 3 * VAR2->VAR6[VAR3][VAR5 - 1] - 3 * VAR2->VAR6[VAR3][VAR5 - 2] + VAR2->VAR6[VAR3][VAR5 - 3];
        break;
    case 4:
        for (VAR5 = VAR4; VAR5 < VAR2->VAR9; VAR5++)
            VAR2->VAR6[VAR3][VAR5] += 4 * VAR2->VAR6[VAR3][VAR5 - 1] - 6 * VAR2->VAR6[VAR3][VAR5 - 2] + 4 * VAR2->VAR6[VAR3][VAR5 - 3] - VAR2->VAR6[VAR3][VAR5 - 4];
        break;
    default:
        FUN4(VAR2->VAR10, VAR11, "", VAR4);
        return -1;
    }
    return 0;
}