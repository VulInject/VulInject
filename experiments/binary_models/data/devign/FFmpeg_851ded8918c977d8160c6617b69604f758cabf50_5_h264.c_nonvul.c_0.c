static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5;
    int VAR6 = 0;
    int VAR7 = 0;
    if (VAR4->VAR8 > 0)
        VAR5 = VAR4->VAR8 + VAR4->VAR9 * VAR4->VAR10 - 1;
    else
        VAR5 = VAR4->VAR11 - 1 + (VAR4->VAR9 - 1) * VAR4->VAR10;
    if (VAR2->VAR12 != 0)
        VAR6++;
    while (FUN2(&VAR2->VAR13, &VAR2->VAR14[60 + VAR6]))
    {
        if (VAR6 < 2)
            VAR6 = 2;
        else
            VAR6 = 3;
        VAR7++;
        if (VAR7 > 102)
            return VAR15;
    }
    if (VAR7 & 0x01)
        return (VAR7 + 1) / 2;
    else
        return -(VAR7 + 1) / 2;
}