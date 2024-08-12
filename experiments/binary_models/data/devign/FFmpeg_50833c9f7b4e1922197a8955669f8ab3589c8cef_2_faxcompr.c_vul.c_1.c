static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, const int *VAR5)
{
    PutBitContext VAR6;
    int VAR7, VAR8 = ~0, VAR9 = VAR4, VAR10 = 0;
    FUN2(&VAR6, VAR2, VAR3 * 8);
    while (VAR9 > 0)
    {
        VAR7 = VAR5[VAR10++];
        VAR8 = ~VAR8;
        VAR9 -= VAR7;
        for (; VAR7 > 16; VAR7 -= 16)
            FUN3(&VAR6, 16, VAR8);
        if (VAR7)
            FUN3(&VAR6, VAR7, VAR8);
    }
    FUN4(&VAR6);
}