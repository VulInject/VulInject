static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    unsigned char VAR7[4];
    FUN2(&VAR2->VAR8, VAR7, 4);
    if (VAR7[0] <= VAR7[1])
    {
        if (VAR7[2] <= VAR7[3])
        {
            for (VAR6 = 0; VAR6 < 8; VAR6++)
            {
                int VAR9 = FUN3(&VAR2->VAR8);
                for (VAR5 = 0; VAR5 < 8; VAR5++, VAR9 >>= 2)
                    *VAR2->VAR10++ = VAR7[VAR9 & 0x03];
                VAR2->VAR10 += VAR2->VAR11;
            }
            else
            {
                uint32_t VAR9;
                VAR9 = FUN4(&VAR2->VAR8);
                for (VAR6 = 0; VAR6 < 8; VAR6 += 2)
                {
                    for (VAR5 = 0; VAR5 < 8; VAR5 += 2, VAR9 >>= 2)
                    {
                        VAR2->VAR10[VAR5] = VAR2->VAR10[VAR5 + 1] = VAR2->VAR10[VAR5 + VAR2->VAR12] = VAR2->VAR10[VAR5 + 1 + VAR2->VAR12] = VAR7[VAR9 & 0x03];
                        VAR2->VAR10 += VAR2->VAR12 * 2;
                    }
                    else
                    {
                        uint64_t VAR9;
                        VAR9 = FUN5(&VAR2->VAR8);
                        if (VAR7[2] <= VAR7[3])
                        {
                            for (VAR6 = 0; VAR6 < 8; VAR6++)
                            {
                                for (VAR5 = 0; VAR5 < 8; VAR5 += 2, VAR9 >>= 2)
                                {
                                    VAR2->VAR10[VAR5] = VAR2->VAR10[VAR5 + 1] = VAR7[VAR9 & 0x03];
                                    VAR2->VAR10 += VAR2->VAR12;
                                }
                                else
                                {
                                    for (VAR6 = 0; VAR6 < 8; VAR6 += 2)
                                    {
                                        for (VAR5 = 0; VAR5 < 8; VAR5++, VAR9 >>= 2)
                                        {
                                            VAR2->VAR10[VAR5] = VAR2->VAR10[VAR5 + VAR2->VAR12] = VAR7[VAR9 & 0x03];
                                            VAR2->VAR10 += VAR2->VAR12 * 2;
                                            return 0