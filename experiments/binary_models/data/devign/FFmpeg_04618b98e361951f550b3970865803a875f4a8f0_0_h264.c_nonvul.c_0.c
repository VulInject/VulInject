static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5 = VAR2->VAR6[VAR3][VAR7[VAR4] - 1];
    int VAR8 = VAR2->VAR6[VAR3][VAR7[VAR4] - 8];
    int VAR9 = 0;
    int VAR10 = 0;
    if (VAR2->VAR11 == VAR12)
    {
        if (VAR5 > 0 && !VAR2->VAR13[VAR7[VAR4] - 1])
            VAR10++;
        if (VAR8 > 0 && !VAR2->VAR13[VAR7[VAR4] - 8])
            VAR10 += 2;
    }
    else
    {
        if (VAR5 > 0)
            VAR10++;
        if (VAR8 > 0)
            VAR10 += 2;
    }
    while (FUN2(&VAR2->VAR14, &VAR2->VAR15[54 + VAR10]))
    {
        VAR9++;
        if (VAR10 < 4)
            VAR10 = 4;
        else
            VAR10 = 5;
        if (VAR9 >= 32)
        {
            return -1;
        }
    }
    return VAR9;
}