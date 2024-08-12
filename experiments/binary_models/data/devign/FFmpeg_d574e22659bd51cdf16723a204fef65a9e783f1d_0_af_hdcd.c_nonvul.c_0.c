static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, int VAR8)
{
    int VAR9;
    int VAR10 = 0;
    if (VAR4->VAR11 > 0)
    {
        VAR10 = 1;
        if (VAR4->VAR11 <= VAR7)
        {
            VAR4->VAR12 = 0;
            VAR7 = VAR4->VAR11;
        }
        VAR4->VAR11 -= VAR7;
    }
    VAR9 = 0;
    while (VAR9 < VAR7)
    {
        int VAR13;
        int VAR14 = FUN2(VAR2, VAR4, &VAR13, VAR6, VAR7 - VAR9, VAR8);
        VAR9 += VAR14;
        if (VAR13 > 0)
        {
            FUN3(VAR4);
            break;
        }
        VAR6 += VAR14 * VAR8;
    }
    if (VAR10 && VAR4->VAR11 == 0)
        VAR4->VAR15++;
    return VAR9;
}