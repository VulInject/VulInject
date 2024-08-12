static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9)
{
    int VAR10;
    int VAR11, VAR12;
    VAR8->VAR13 = 0;
    for (VAR10 = 0; VAR10 < 5; VAR10++)
    {
        VAR6[VAR10] = FUN2(&VAR2->VAR4, 10);
        VAR8->VAR13 += VAR6[VAR10];
    }
    VAR8->VAR14 = FUN3(VAR8->VAR13 / 10) + 1;
    for (; VAR10 < 64; VAR10++)
    {
        VAR6[VAR10] = FUN2(&VAR2->VAR4, VAR8->VAR14);
        VAR8->VAR13 += VAR6[VAR10];
        VAR8->VAR14 = FUN3(VAR8->VAR13 / ((VAR10 + 1) * 2)) + 1;
    }
    VAR11 = 1 << VAR8->VAR14 + 7;
    VAR12 = VAR8->VAR14 ? (1 << VAR8->VAR14 + 6) : 0;
    for (; VAR10 < VAR9; VAR10++)
    {
        VAR6[VAR10] = FUN2(&VAR2->VAR4, VAR8->VAR14);
        VAR8->VAR13 += VAR6[VAR10] - VAR6[VAR10 - 64];
        while (VAR8->VAR13 < VAR12)
        {
            VAR8->VAR14--;
            VAR12 = VAR8->VAR14 ? VAR12 >> 1 : 0;
            VAR11 >>= 1;
        }
        while (VAR8->VAR13 >= VAR11)
        {
            VAR8->VAR14++;
            if (VAR8->VAR14 > 24)
                VAR11 <<= 1;
            VAR12 = VAR12 ? VAR12 << 1 : 128;
        }
    }
    for (VAR10 = 0; VAR10 < VAR9; VAR10++)
    {
        if (VAR6[VAR10] & 1)
            VAR6[VAR10] = (VAR6[VAR10] >> 1) + 1;
        else
            VAR6[VAR10] = -(VAR6[VAR10] >> 1);
    }