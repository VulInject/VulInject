static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    VAR2->VAR6[0] = VAR2->VAR7[0];
    VAR2->VAR6[1] = VAR2->VAR7[1];
    for (VAR3 = 0; VAR3 < 2; VAR3++)
    {
        if (VAR3 && !memcmp(VAR2->VAR8.VAR9[0], VAR2->VAR8.VAR9[1], 64 * sizeof(VAR10)))
        {
            VAR2->VAR6[1] = VAR2->VAR7[0];
            break;
        }
        for (VAR4 = 0; VAR4 < 52; VAR4++)
        {
            int VAR11 = VAR12[VAR4];
            int VAR13 = VAR14[VAR4];
            for (VAR5 = 0; VAR5 < 64; VAR5++)
                VAR2->VAR6[VAR3][VAR4][(VAR5 >> 3) | ((VAR5 & 7) << 3)] = ((VAR15)VAR16[VAR13][VAR17[((VAR5 >> 1) & 12) | (VAR5 & 3)]] * VAR2->VAR8.VAR9[VAR3][VAR5]) << VAR11;
        }
    }
}