int FUN1(VAR1 *VAR2, int VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int8_t VAR7, uint8_t xor)
{
    int VAR8, VAR9;
    VAR1 *VAR10;
    VAR10 = VAR2;
    for (VAR9 = 0; VAR9 < VAR6; VAR9 += VAR8)
    {
        if ((VAR8 = FUN2(VAR4, VAR6 - VAR9, VAR5, 1)) > 1)
        {
            if (VAR10 + VAR5 + 1 > VAR2 + VAR3)
                return -1;
            *VAR10++ = (VAR8 ^ xor) + VAR7;
            memcpy(VAR10, VAR4, VAR5);
            VAR10 += VAR5;
        }
        else
        {
            VAR8 = FUN2(VAR4, VAR6 - VAR9, VAR5, 0);
            *VAR10++ = VAR8 - 1;
            if (VAR10 + VAR5 * VAR8 > VAR2 + VAR3)
                return -1;
            memcpy(VAR10, VAR4, VAR5 * VAR8);
            VAR10 += VAR5 * VAR8;
        }
        VAR4 += VAR8 * VAR5;
    }
    return VAR10 - VAR2;
}