static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    unsigned char VAR7[2];
    unsigned int VAR8;
    VAR7[0] = FUN2(&VAR2->VAR9);
    VAR7[1] = FUN2(&VAR2->VAR9);
    if (VAR7[0] <= VAR7[1])
    {
        for (VAR6 = 0; VAR6 < 8; VAR6++)
        {
            VAR8 = FUN2(&VAR2->VAR9) | 0x100;
            for (; VAR8 != 1; VAR8 >>= 1)
                *VAR2->VAR10++ = VAR7[VAR8 & 1];
            VAR2->VAR10 += VAR2->VAR11;
        }
        else
        {
            VAR8 = FUN3(&VAR2->VAR9);
            for (VAR6 = 0; VAR6 < 8; VAR6 += 2)
            {
                for (VAR5 = 0; VAR5 < 8; VAR5 += 2, VAR8 >>= 1)
                {
                    VAR2->VAR10[VAR5] = VAR2->VAR10[VAR5 + 1] = VAR2->VAR10[VAR5 + VAR2->VAR12] = VAR2->VAR10[VAR5 + 1 + VAR2->VAR12] = VAR7[VAR8 & 1];
                    VAR2->VAR10 += VAR2->VAR12 * 2;
                    return 0