static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    int VAR8;
    int VAR9;
    int *VAR10;
    int VAR11;
    const int VAR12 = VAR6->VAR12;
    for (VAR7 = 0; VAR7 < VAR12; ++VAR7)
    {
        if (VAR6->VAR13[VAR7].VAR14 > VAR4->VAR15[0] / VAR12)
        {
            FUN2(VAR2, VAR16, "");
            return 0;
        }
    }
    for (VAR7 = 0; VAR7 < VAR12; ++VAR7)
    {
        for (VAR9 = 0; VAR9 < VAR2->VAR17; ++VAR9)
        {
            VAR10 = VAR6->VAR13[VAR7].VAR18 + VAR9 * VAR6->VAR13[VAR7].VAR14;
            VAR11 = VAR9 * VAR4->VAR15[0] + VAR7;
            for (VAR8 = 0; VAR8 < VAR2->VAR19; ++VAR8)
            {
                VAR10[VAR8] = VAR4->VAR18[0][VAR11];
                VAR11 += VAR12;
            }
            for (; VAR8 < VAR6->VAR13[VAR7].VAR14; ++VAR8)
            {
                VAR10[VAR8] = VAR10[VAR8 - 1];
            }
        }
        for (; VAR9 < VAR6->VAR13[VAR7].VAR20; ++VAR9)
        {
            VAR10 = VAR6->VAR13[VAR7].VAR18 + VAR9 * VAR6->VAR13[VAR7].VAR14;
            for (VAR8 = 0; VAR8 < VAR6->VAR13[VAR7].VAR14; ++VAR8)
            {
                VAR10[VAR8] = VAR10[VAR8 - VAR6->VAR13[VAR7].VAR14];
            }
        }
    }
    return 1;
}