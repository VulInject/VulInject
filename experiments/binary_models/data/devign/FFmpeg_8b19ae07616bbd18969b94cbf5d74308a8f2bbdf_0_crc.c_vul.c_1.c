int FUN1(VAR1 *VAR2, int VAR3, int VAR4, uint32_t VAR5, int VAR6)
{
    int VAR7, VAR8;
    uint32_t VAR9;
    if (VAR4 < 8 || VAR4 > 32 || VAR5 >= (1LL << VAR4))
        return -1;
    if (VAR6 != sizeof(VAR1) * 257 && VAR6 != sizeof(VAR1) * 1024)
        return -1;
    for (VAR7 = 0; VAR7 < 256; VAR7++)
    {
        if (VAR3)
        {
            for (VAR9 = VAR7, VAR8 = 0; VAR8 < 8; VAR8++)
                VAR9 = (VAR9 >> 1) ^ (VAR5 & (-(VAR9 & 1)));
            VAR2[VAR7] = VAR9;
        }
        else
        {
            for (VAR9 = VAR7 << 24, VAR8 = 0; VAR8 < 8; VAR8++)
                VAR9 = (VAR9 << 1) ^ ((VAR5 << (32 - VAR4)) & (((VAR10)VAR9) >> 31));
            VAR2[VAR7] = FUN2(VAR9);
        }
    }
    VAR2[256] = 1;
    if (VAR6 >= sizeof(VAR1) * 1024)
        for (VAR7 = 0; VAR7 < 256; VAR7++)
            for (VAR8 = 0; VAR8 < 3; VAR8++)
                VAR2[256 * (VAR8 + 1) + VAR7] = (VAR2[256 * VAR8 + VAR7] >> 8) ^ VAR2[VAR2[256 * VAR8 + VAR7] & 0xFF];
    return 0;
}