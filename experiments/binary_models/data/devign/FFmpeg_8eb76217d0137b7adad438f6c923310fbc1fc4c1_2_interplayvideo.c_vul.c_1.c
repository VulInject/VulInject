static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    unsigned char VAR7[4];
    unsigned int VAR8 = 0;
    VAR7[0] = FUN2(&VAR2->VAR9);
    VAR7[1] = FUN2(&VAR2->VAR9);
    if (VAR7[0] <= VAR7[1])
    {
        for (VAR6 = 0; VAR6 < 16; VAR6++)
        {
            if (!(VAR6 & 3))
            {
                if (VAR6)
                {
                    VAR7[0] = FUN2(&VAR2->VAR9);
                    VAR7[1] = FUN2(&VAR2->VAR9);
                    VAR8 = FUN3(&VAR2->VAR9);
                    for (VAR5 = 0; VAR5 < 4; VAR5++, VAR8 >>= 1)
                        *VAR2->VAR10++ = VAR7[VAR8 & 1];
                    VAR2->VAR10 += VAR2->VAR11 - 4;
                    if (VAR6 == 7)
                        VAR2->VAR10 -= 8 * VAR2->VAR11 - 4;
                }
                else
                {
                    VAR8 = FUN4(&VAR2->VAR9);
                    VAR7[2] = FUN2(&VAR2->VAR9);
                    VAR7[3] = FUN2(&VAR2->VAR9);
                    if (VAR7[2] <= VAR7[3])
                    {
                        for (VAR6 = 0; VAR6 < 16; VAR6++)
                        {
                            for (VAR5 = 0; VAR5 < 4; VAR5++, VAR8 >>= 1)
                                *VAR2->VAR10++ = VAR7[VAR8 & 1];
                            VAR2->VAR10 += VAR2->VAR11 - 4;
                            if (VAR6 == 7)
                            {
                                VAR2->VAR10 -= 8 * VAR2->VAR11 - 4;
                                VAR7[0] = VAR7[2];
                                VAR7[1] = VAR7[3];
                                VAR8 = FUN4(&VAR2->VAR9);
                            }
                            else
                            {
                                for (VAR6 = 0; VAR6 < 8; VAR6++)
                                {
                                    if (VAR6 == 4)
                                    {
                                        VAR7[0] = VAR7[2];
                                        VAR7[1] = VAR7[3];
                                        VAR8 = FUN4(&VAR2->VAR9);
                                        for (VAR5 = 0; VAR5 < 8; VAR5++, VAR8 >>= 1)
                                            *VAR2->VAR10++ = VAR7[VAR8 & 1];
                                        VAR2->VAR10 += VAR2->VAR12;
                                        return 0