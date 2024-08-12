int FUN1(VAR1 *VAR2, int VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11, VAR12;
    VAR1 *VAR13 = VAR2;
    for (VAR12 = 0; VAR12 < VAR6; VAR12 += VAR11)
    {
        if ((VAR11 = FUN2(VAR4, VAR6 - VAR12, VAR5, 1)) > 1)
        {
            if (VAR13 + VAR5 + 1 > VAR2 + VAR3)
                return -1;
            *VAR13++ = (VAR11 ^ VAR8) + VAR7;
            memcpy(VAR13, VAR4, VAR5);
            VAR13 += VAR5;
        }
        else
        {
            VAR11 = FUN2(VAR4, VAR6 - VAR12, VAR5, 0);
            if (VAR13 + VAR5 * VAR11 >= VAR2 + VAR3)
                return -1;
            *VAR13++ = (VAR11 ^ VAR10) + VAR9;
            memcpy(VAR13, VAR4, VAR5 * VAR11);
            VAR13 += VAR5 * VAR11;
        }
        VAR4 += VAR11 * VAR5;
    }
    return VAR13 - VAR2;
}