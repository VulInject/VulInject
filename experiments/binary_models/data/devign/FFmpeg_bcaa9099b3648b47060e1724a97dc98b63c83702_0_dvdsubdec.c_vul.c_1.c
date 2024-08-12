static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, const VAR1 *VAR6, int VAR7, int VAR8, int VAR9)
{
    GetBitContext VAR10;
    int VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    VAR1 *VAR16;
    if (VAR7 >= VAR8)
        VAR11 = (VAR8 - VAR7) * 8;
    FUN2(&VAR10, VAR6 + VAR7, VAR11);
    VAR12 = 0;
    VAR13 = 0;
    VAR16 = VAR2;
    for (;;)
    {
        if (FUN3(&VAR10) > VAR11)
            if (VAR9)
                VAR14 = FUN4(&VAR10, &VAR15);
            else
                VAR14 = FUN5(&VAR10, &VAR15);
        VAR14 = FUN6(VAR14, VAR4 - VAR12);
        memset(VAR16 + VAR12, VAR15, VAR14);
        VAR12 += VAR14;
        if (VAR12 >= VAR4)
        {
            VAR13++;
            if (VAR13 >= VAR5)
                break;
            VAR16 += VAR3;
            VAR12 = 0;
            FUN7(&VAR10);
        }
    }
    return 0;