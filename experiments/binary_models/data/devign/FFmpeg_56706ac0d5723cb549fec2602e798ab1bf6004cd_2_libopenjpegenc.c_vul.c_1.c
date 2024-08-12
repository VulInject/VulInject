static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    int *VAR12;
    int VAR13;
    const int VAR14 = VAR6->VAR14;
    for (VAR7 = 0; VAR7 < VAR14; ++VAR7)
    {
        if (VAR6->VAR15[VAR7].VAR16 > VAR4->VAR17[VAR7])
        {
            FUN2(VAR2, VAR18, "");
            return 0;
        }
    }
    for (VAR7 = 0; VAR7 < VAR14; ++VAR7)
    {
        VAR10 = VAR2->VAR10 / VAR6->VAR15[VAR7].VAR19;
        VAR11 = VAR2->VAR11 / VAR6->VAR15[VAR7].VAR20;
        for (VAR9 = 0; VAR9 < VAR11; ++VAR9)
        {
            VAR12 = VAR6->VAR15[VAR7].VAR21 + VAR9 * VAR6->VAR15[VAR7].VAR16;
            VAR13 = VAR9 * VAR4->VAR17[VAR7];
            for (VAR8 = 0; VAR8 < VAR10; ++VAR8)
                VAR12[VAR8] = VAR4->VAR21[VAR7][VAR13++];
            for (; VAR8 < VAR6->VAR15[VAR7].VAR16; ++VAR8)
            {
                VAR12[VAR8] = VAR12[VAR8 - 1];
            }
        }
        for (; VAR9 < VAR6->VAR15[VAR7].VAR22; ++VAR9)
        {
            VAR12 = VAR6->VAR15[VAR7].VAR21 + VAR9 * VAR6->VAR15[VAR7].VAR16;
            for (VAR8 = 0; VAR8 < VAR6->VAR15[VAR7].VAR16; ++VAR8)
            {
                VAR12[VAR8] = VAR12[VAR8 - VAR6->VAR15[VAR7].VAR16];
            }
        }
    }
    return 1;
}