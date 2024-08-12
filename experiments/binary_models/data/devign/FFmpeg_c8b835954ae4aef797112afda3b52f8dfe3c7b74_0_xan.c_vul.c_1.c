static int FUN1(unsigned char *VAR1, int VAR2, const unsigned char *VAR3, int VAR4)
{
    unsigned char VAR5 = *VAR3++;
    unsigned char VAR6 = VAR5 + 0x16;
    const unsigned char *VAR7 = VAR3 + VAR5 * 2;
    int VAR8 = VAR4 - 1 - VAR5 * 2;
    unsigned char VAR9 = VAR6;
    unsigned char *VAR10 = VAR1 + VAR2;
    GetBitContext VAR11;
    if (VAR8 < 0)
        return VAR12;
    FUN2(&VAR11, VAR7, VAR8 * 8);
    while (VAR9 != 0x16)
    {
        VAR9 = VAR3[VAR9 - 0x17 + FUN3(&VAR11) * VAR5];
        if (VAR9 < 0x16)
        {
            if (VAR1 >= VAR10)
                return 0;
            *VAR1++ = VAR9;
            VAR9 = VAR6;
        }
    }
    return 0;
}