static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    unsigned char VAR5[2];
    unsigned int VAR6 = 0;
    FUN2(VAR2->VAR7, VAR2->VAR8, 2);
    VAR5[0] = *VAR2->VAR7++;
    VAR5[1] = *VAR2->VAR7++;
    if (VAR5[0] <= VAR5[1])
    {
        FUN2(VAR2->VAR7, VAR2->VAR8, 14);
        VAR2->VAR7 -= 2;
        for (VAR4 = 0; VAR4 < 16; VAR4++)
        {
            if (!(VAR4 & 3))
            {
                VAR5[0] = *VAR2->VAR7++;
                VAR5[1] = *VAR2->VAR7++;
                VAR6 = FUN3(&VAR2->VAR7);
            }
            for (VAR3 = 0; VAR3 < 4; VAR3++, VAR6 >>= 1)
                *VAR2->VAR9++ = VAR5[VAR6 & 1];
            VAR2->VAR9 += VAR2->VAR10 - 4;
            if (VAR4 == 7)
                VAR2->VAR9 -= 8 * VAR2->VAR10 - 4;
        }
    }
    else
    {
        FUN2(VAR2->VAR7, VAR2->VAR8, 10);
        if (VAR2->VAR7[4] <= VAR2->VAR7[5])
        {
            VAR6 = FUN4(&VAR2->VAR7);
            for (VAR4 = 0; VAR4 < 16; VAR4++)
            {
                for (VAR3 = 0; VAR3 < 4; VAR3++, VAR6 >>= 1)
                    *VAR2->VAR9++ = VAR5[VAR6 & 1];
                VAR2->VAR9 += VAR2->VAR10 - 4;
                if (VAR4 == 7)
                {
                    VAR2->VAR9 -= 8 * VAR2->VAR10 - 4;
                    VAR5[0] = *VAR2->VAR7++;
                    VAR5[1] = *VAR2->VAR7++;
                    VAR6 = FUN4(&VAR2->VAR7);
                }
            }
        }
        else
        {
            for (VAR4 = 0; VAR4 < 8; VAR4++)
            {
                if (VAR4 == 4)
                {
                    VAR5[0] = *VAR2->VAR7++;
                    VAR5[1] = *VAR2->VAR7++;
                }
                VAR6 = *VAR2->VAR7++ | 0x100;
                for (; VAR6 != 1; VAR6 >>= 1)
                    *VAR2->VAR9++ = VAR5[VAR6 & 1];
                VAR2->VAR9 += VAR2->VAR11;
            }
        }
    }
    return 0;
}