static int FUN1(unsigned char *VAR1, VAR2 *VAR3, const VAR2 *VAR4, const VAR2 *VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10;
    const VAR2 *VAR11;
    unsigned int VAR12 = VAR7->VAR13 * VAR7->VAR14 * VAR7->VAR15;
    if (VAR12 * VAR7->VAR16 > VAR5 - VAR4)
    {
        return -1;
    }
    for (VAR9 = VAR7->VAR13 - 1; VAR9 >= 0; VAR9--)
    {
        VAR3 = VAR1 + (VAR9 * VAR7->VAR17);
        for (VAR8 = VAR7->VAR14; VAR8 > 0; VAR8--)
        {
            VAR11 = VAR4 += VAR7->VAR15;
            for (VAR10 = 0; VAR10 < VAR7->VAR16; VAR10++)
            {
                memcpy(VAR3, VAR11, VAR7->VAR15);
                VAR3 += VAR7->VAR15;
                VAR11 += VAR12;
            }
        }
    }
    return 0;
}