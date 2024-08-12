VAR1 FUN1(const VAR2 *VAR3, uint32_t VAR4, const VAR5 *VAR6, size_t VAR7)
{
    const VAR5 *VAR8 = VAR6 + VAR7;
    if (!VAR3[256])
        while (VAR6 < VAR8 - 3)
        {
            VAR4 ^= FUN2(*(const VAR1 *)VAR6);
            VAR6 += 4;
            VAR4 = VAR3[3 * 256 + (VAR4 & 0xFF)] ^ VAR3[2 * 256 + ((VAR4 >> 8) & 0xFF)] ^ VAR3[1 * 256 + ((VAR4 >> 16) & 0xFF)] ^ VAR3[0 * 256 + ((VAR4 >> 24))];
        }
    while (VAR6 < VAR8)
        VAR4 = VAR3[((VAR5)VAR4) ^ *VAR6++] ^ (VAR4 >> 8);
    return VAR4;
}