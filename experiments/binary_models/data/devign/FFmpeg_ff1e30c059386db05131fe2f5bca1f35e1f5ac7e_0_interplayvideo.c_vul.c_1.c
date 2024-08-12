static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    unsigned char VAR7[8];
    int VAR8 = 0;
    FUN2(&VAR2->VAR9, VAR7, 4);
    if (VAR7[0] <= VAR7[1])
    {
        for (VAR6 = 0; VAR6 < 16; VAR6++)
        {
            if (!(VAR6 & 3))
            {
                if (VAR6)
                    FUN2(&VAR2->VAR9, VAR7, 4);
                VAR8 = FUN3(&VAR2->VAR9);
                for (VAR5 = 0; VAR5 < 4; VAR5++, VAR8 >>= 2)
                    *VAR2->VAR10++ = VAR7[VAR8 & 0x03];
                VAR2->VAR10 += VAR2->VAR11 - 4;
                if (VAR6 == 7)
                    VAR2->VAR10 -= 8 * VAR2->VAR11 - 4;
            }
            else
            {
                int VAR12;
                uint64_t VAR8 = FUN4(&VAR2->VAR9);
                FUN2(&VAR2->VAR9, VAR7 + 4, 4);
                VAR12 = VAR7[4] <= VAR7[5];
                for (VAR6 = 0; VAR6 < 16; VAR6++)
                {
                    for (VAR5 = 0; VAR5 < 4; VAR5++, VAR8 >>= 2)
                        *VAR2->VAR10++ = VAR7[VAR8 & 0x03];
                    if (VAR12)
                    {
                        VAR2->VAR10 += VAR2->VAR11 - 4;
                        if (VAR6 == 7)
                            VAR2->VAR10 -= 8 * VAR2->VAR11 - 4;
                    }
                    else if (VAR6 & 1)
                        VAR2->VAR10 += VAR2->VAR13;
                    if (VAR6 == 7)
                    {
                        memcpy(VAR7, VAR7 + 4, 4);
                        VAR8 = FUN4(&VAR2->VAR9);
                        return 0