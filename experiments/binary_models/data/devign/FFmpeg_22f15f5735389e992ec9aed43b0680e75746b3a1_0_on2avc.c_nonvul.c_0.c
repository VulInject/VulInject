static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR2->VAR6 ? 5 : 3;
    int VAR7 = (1 << VAR5) - 1;
    int VAR8 = VAR2->VAR8 * VAR2->VAR9;
    int VAR10 = 0, VAR11, VAR12, VAR13, VAR14;
    while (VAR10 < VAR8)
    {
        VAR12 = FUN2(VAR4, 4);
        VAR13 = 1;
        do
        {
            VAR14 = FUN2(VAR4, VAR5);
            if (VAR14 > VAR8 - VAR10 - VAR13)
            {
                FUN3(VAR2->VAR15, VAR16, "");
                return VAR17;
            }
            VAR13 += VAR14;
        } while (VAR14 == VAR7);
        for (VAR11 = VAR10; VAR11 < VAR10 + VAR13; VAR11++)
        {
            VAR2->VAR12[VAR11] = VAR12;
            VAR2->VAR18[VAR11] = VAR10 + VAR13;
        }
        VAR10 += VAR13;
    }
    return 0;
}