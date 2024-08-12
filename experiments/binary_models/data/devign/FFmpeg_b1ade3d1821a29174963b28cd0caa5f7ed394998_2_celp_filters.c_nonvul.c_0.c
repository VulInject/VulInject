int FUN1(VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        int VAR11 = VAR8;
        for (VAR9 = 1; VAR9 <= VAR6; VAR9++)
            VAR11 -= VAR3[VAR9 - 1] * VAR2[VAR10 - VAR9];
        VAR11 = (VAR11 >> 12) + VAR4[VAR10];
        if (VAR11 + 0x8000 > 0xFFFFU)
        {
            if (VAR7)
                return 1;
            VAR11 = (VAR11 >> 31) ^ 32767;
        }
        VAR2[VAR10] = VAR11;
    }
    return 0;
}