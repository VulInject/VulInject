static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7[VAR3];
    int VAR8;
    if (VAR4)
    {
        int VAR9 = 0;
        if (VAR2->VAR10[0] && !FUN2(VAR2->VAR10[0]))
            VAR9++;
        if (VAR2->VAR11 && !FUN2(VAR2->VAR11))
            VAR9++;
        if (FUN3(&VAR2->VAR12, &VAR6[VAR9]) == 0)
            return 0;
        VAR6 += 2;
    }
    else
    {
        if (FUN3(&VAR2->VAR12, VAR6) == 0)
            return 0;
    }
    if (FUN4(&VAR2->VAR12))
        return 25;
    VAR8 = 1;
    VAR8 += 12 * FUN3(&VAR2->VAR12, &VAR6[1]);
    if (FUN3(&VAR2->VAR12, &VAR6[2]))
        VAR8 += 4 + 4 * FUN3(&VAR2->VAR12, &VAR6[2 + VAR4]);
    VAR8 += 2 * FUN3(&VAR2->VAR12, &VAR6[3 + VAR4]);
    VAR8 += 1 * FUN3(&VAR2->VAR12, &VAR6[3 + 2 * VAR4]);
    return VAR8;
}