static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    unsigned char VAR5[2];
    unsigned int VAR6;
    FUN2(VAR2->VAR7, VAR2->VAR8, 2);
    VAR5[0] = *VAR2->VAR7++;
    VAR5[1] = *VAR2->VAR7++;
    if (VAR5[0] <= VAR5[1])
    {
        FUN2(VAR2->VAR7, VAR2->VAR8, 8);
        for (VAR4 = 0; VAR4 < 8; VAR4++)
        {
            VAR6 = *VAR2->VAR7++ | 0x100;
            for (; VAR6 != 1; VAR6 >>= 1)
                *VAR2->VAR9++ = VAR5[VAR6 & 1];
            VAR2->VAR9 += VAR2->VAR10;
        }
    }
    else
    {
        FUN2(VAR2->VAR7, VAR2->VAR8, 2);
        VAR6 = FUN3(&VAR2->VAR7);
        for (VAR4 = 0; VAR4 < 8; VAR4 += 2)
        {
            for (VAR3 = 0; VAR3 < 8; VAR3 += 2, VAR6 >>= 1)
            {
                VAR2->VAR9[VAR3] = VAR2->VAR9[VAR3 + 1] = VAR2->VAR9[VAR3 + VAR2->VAR11] = VAR2->VAR9[VAR3 + 1 + VAR2->VAR11] = VAR5[VAR6 & 1];
            }
            VAR2->VAR9 += VAR2->VAR11 * 2;
        }
    }
    return 0;
}