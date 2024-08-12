int FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, VAR1 *VAR5, int VAR6)
{
    uint32_t VAR7 = 0, VAR8 = 0;
    int VAR9 = 0, VAR10 = 0;
    long VAR11, xor;
    VAR1 *VAR12 = NULL;
    FUN2(!(((VAR13)VAR2 | (VAR13)VAR3 | VAR4) % sizeof(long)));
    while (VAR10 < VAR4)
    {
        if (VAR9 + 2 > VAR6)
        {
            return -1;
        }
        VAR11 = (VAR4 - VAR10) % sizeof(long);
        while (VAR11 && VAR2[VAR10] == VAR3[VAR10])
        {
            VAR7++;
            VAR10++;
            VAR11--;
        }
        if (!VAR11)
        {
            while (VAR10 < VAR4 && (*(long *)(VAR2 + VAR10)) == (*(long *)(VAR3 + VAR10)))
            {
                VAR10 += sizeof(long);
                VAR7 += sizeof(long);
            }
            while (VAR10 < VAR4 && VAR2[VAR10] == VAR3[VAR10])
            {
                VAR7++;
                VAR10++;
            }
        }
        if (VAR7 == VAR4)
        {
            return 0;
        }
        if (VAR10 == VAR4)
        {
            return VAR9;
        }
        VAR9 += FUN3(VAR5 + VAR9, VAR7);
        VAR7 = 0;
        VAR12 = VAR3 + VAR10;
        if (VAR9 + 2 > VAR6)
        {
            return -1;
        }
        VAR11 = (VAR4 - VAR10) % sizeof(long);
        while (VAR11 && VAR2[VAR10] != VAR3[VAR10])
        {
            VAR10++;
            VAR8++;
            VAR11--;
        }
        if (!VAR11)
        {
            long VAR14 = (long)0x0101010101010101ULL;
            while (VAR10 < VAR4)
            {
                xor = *(long *)(VAR2 + VAR10) ^ *(long *)(VAR3 + VAR10);
                if ((xor-VAR14) & ~xor&(VAR14 << 7))
                {
                    while (VAR2[VAR10] != VAR3[VAR10])
                    {
                        VAR8++;
                        VAR10++;
                    }
                    break;
                }
                else
                {
                    VAR10 += sizeof(long);
                    VAR8 += sizeof(long);
                }
            }
        }
        VAR9 += FUN3(VAR5 + VAR9, VAR8);
        if (VAR9 + VAR8 > VAR6)
        {
            return -1;
        }
        memcpy(VAR5 + VAR9, VAR12, VAR8);
        VAR9 += VAR8;
        VAR8 = 0;
    }
    return VAR9;
}