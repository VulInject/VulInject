static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    unsigned char VAR5[4];
    FUN2(VAR2->VAR6, VAR2->VAR7, 4);
    memcpy(VAR5, VAR2->VAR6, 4);
    VAR2->VAR6 += 4;
    if (VAR5[0] <= VAR5[1])
    {
        if (VAR5[2] <= VAR5[3])
        {
            FUN2(VAR2->VAR6, VAR2->VAR7, 16);
            for (VAR4 = 0; VAR4 < 8; VAR4++)
            {
                int VAR8 = FUN3(&VAR2->VAR6);
                for (VAR3 = 0; VAR3 < 8; VAR3++, VAR8 >>= 2)
                    *VAR2->VAR9++ = VAR5[VAR8 & 0x03];
                VAR2->VAR9 += VAR2->VAR10;
            }
        }
        else
        {
            uint32_t VAR8;
            FUN2(VAR2->VAR6, VAR2->VAR7, 4);
            VAR8 = FUN4(&VAR2->VAR6);
            for (VAR4 = 0; VAR4 < 8; VAR4 += 2)
            {
                for (VAR3 = 0; VAR3 < 8; VAR3 += 2, VAR8 >>= 2)
                {
                    VAR2->VAR9[VAR3] = VAR2->VAR9[VAR3 + 1] = VAR2->VAR9[VAR3 + VAR2->VAR11] = VAR2->VAR9[VAR3 + 1 + VAR2->VAR11] = VAR5[VAR8 & 0x03];
                }
                VAR2->VAR9 += VAR2->VAR11 * 2;
            }
        }
    }
    else
    {
        uint64_t VAR8;
        FUN2(VAR2->VAR6, VAR2->VAR7, 8);
        VAR8 = FUN5(&VAR2->VAR6);
        if (VAR5[2] <= VAR5[3])
        {
            for (VAR4 = 0; VAR4 < 8; VAR4++)
            {
                for (VAR3 = 0; VAR3 < 8; VAR3 += 2, VAR8 >>= 2)
                {
                    VAR2->VAR9[VAR3] = VAR2->VAR9[VAR3 + 1] = VAR5[VAR8 & 0x03];
                }
                VAR2->VAR9 += VAR2->VAR11;
            }
        }
        else
        {
            for (VAR4 = 0; VAR4 < 8; VAR4 += 2)
            {
                for (VAR3 = 0; VAR3 < 8; VAR3++, VAR8 >>= 2)
                {
                    VAR2->VAR9[VAR3] = VAR2->VAR9[VAR3 + VAR2->VAR11] = VAR5[VAR8 & 0x03];
                }
                VAR2->VAR9 += VAR2->VAR11 * 2;
            }
        }
    }
    return 0;
}