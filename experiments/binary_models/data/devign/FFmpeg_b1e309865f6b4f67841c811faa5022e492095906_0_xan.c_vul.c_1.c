static int FUN1(unsigned char *VAR1, const unsigned char *VAR2, int VAR3)
{
    unsigned char VAR4 = *VAR2++;
    unsigned char VAR5 = VAR4 + 0x16;
    const unsigned char *VAR6 = VAR2 + VAR4 * 2;
    unsigned char VAR7 = VAR5;
    unsigned char *VAR8 = VAR1 + VAR3;
    GetBitContext VAR9;
    FUN2(&VAR9, VAR6, 0);
    while (VAR7 != 0x16)
    {
        VAR7 = VAR2[VAR7 - 0x17 + FUN3(&VAR9) * VAR4];
        if (VAR7 < 0x16)
        {
            if (VAR1 + 1 > VAR8)
                return 0;
            *VAR1++ = VAR7;
            VAR7 = VAR5;
        }
    }
    return 0;
}