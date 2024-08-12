static int FUN1(VAR1 *VAR2)
{
    const int VAR3 = VAR2->VAR4[0];
    const int VAR5 = VAR2->VAR6;
    int VAR7 = 0;
    if (VAR2->VAR8[VAR3] == VAR2->VAR9 && VAR2->VAR10[VAR3] != 0)
        VAR7++;
    if (VAR2->VAR8[VAR5] == VAR2->VAR9 && VAR2->VAR10[VAR5] != 0)
        VAR7++;
    if (FUN2(&VAR2->VAR11, &VAR2->VAR12[64 + VAR7]) == 0)
        return 0;
    if (FUN2(&VAR2->VAR11, &VAR2->VAR12[64 + 3]) == 0)
        return 1;
    if (FUN2(&VAR2->VAR11, &VAR2->VAR12[64 + 3]) == 0)
        return 2;
    else
        return 3;
}