static unsigned int FUN1(const unsigned char *VAR1, int VAR2, unsigned char *VAR3, unsigned int VAR4)
{
    unsigned char *VAR5 = VAR3;
    unsigned char *VAR6 = VAR3 + VAR4;
    const unsigned char *VAR7 = VAR1 + VAR2;
    unsigned VAR8 = *VAR1++;
    unsigned VAR9 = 0x80;
    while (VAR1 < VAR7 && VAR3 < VAR6)
    {
        if (!(VAR8 & VAR9))
        {
            memcpy(VAR3, VAR1, 4);
            VAR3 += 4;
            VAR1 += 4;
        }
        else
        {
            unsigned VAR10 = FUN2(&VAR1);
            unsigned VAR11 = (VAR10 >> 11) + 1;
            VAR10 &= 0x7ff;
            VAR10 = FUN3(VAR10, VAR3 - VAR5);
            VAR11 *= 4;
            VAR11 = FUN3(VAR11, VAR6 - VAR3);
            FUN4(VAR3, VAR10, VAR11);
            VAR3 += VAR11;
        }
        VAR9 >>= 1;
        if (!VAR9)
        {
            VAR8 = *VAR1++;
            while (!VAR8)
            {
                if (VAR6 - VAR3 < 32 || VAR7 - VAR1 < 32)
                    break;
                memcpy(VAR3, VAR1, 32);
                VAR3 += 32;
                VAR1 += 32;
                VAR8 = *VAR1++;
            }
            VAR9 = 0x80;
        }
    }
    return VAR3 - VAR5;
}