static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    unsigned char VAR5[4];
    int VAR6 = 0;
    FUN2(VAR2->VAR7, VAR2->VAR8, 24);
    if (VAR2->VAR7[0] <= VAR2->VAR7[1])
    {
        FUN2(VAR2->VAR7, VAR2->VAR8, 32);
        for (VAR4 = 0; VAR4 < 16; VAR4++)
        {
            if (!(VAR4 & 3))
            {
                memcpy(VAR5, VAR2->VAR7, 4);
                VAR2->VAR7 += 4;
                VAR6 = FUN3(&VAR2->VAR7);
            }
            for (VAR3 = 0; VAR3 < 4; VAR3++, VAR6 >>= 2)
                *VAR2->VAR9++ = VAR5[VAR6 & 0x03];
            VAR2->VAR9 += VAR2->VAR10 - 4;
            if (VAR4 == 7)
                VAR2->VAR9 -= 8 * VAR2->VAR10 - 4;
        }
    }
    else
    {
        int VAR11 = VAR2->VAR7[12] <= VAR2->VAR7[13];
        uint64_t VAR6 = 0;
        for (VAR4 = 0; VAR4 < 16; VAR4++)
        {
            if (!(VAR4 & 7))
            {
                memcpy(VAR5, VAR2->VAR7, 4);
                VAR2->VAR7 += 4;
                VAR6 = FUN4(&VAR2->VAR7);
            }
            for (VAR3 = 0; VAR3 < 4; VAR3++, VAR6 >>= 2)
                *VAR2->VAR9++ = VAR5[VAR6 & 0x03];
            if (VAR11)
            {
                VAR2->VAR9 += VAR2->VAR10 - 4;
                if (VAR4 == 7)
                    VAR2->VAR9 -= 8 * VAR2->VAR10 - 4;
            }
            else if (VAR4 & 1)
                VAR2->VAR9 += VAR2->VAR12;
        }
    }
    return 0;
}