static inline int FUN1(const int16_t VAR1[16], int VAR2)
{
    int VAR3, VAR4, VAR5 = 0;
    int32_t VAR6[2][16];
    int VAR7 = 1 << 30;
    VAR8 *VAR9 = VAR6[0], *VAR10;
    for (VAR3 = 0; VAR3 < VAR2; VAR3++)
    {
        VAR5 += VAR1[VAR3];
        VAR9[VAR3] = VAR1[VAR3] * 4096;
    }
    if (VAR5 >= 4096)
        return 0;
    for (VAR3 = VAR2 - 1; 1; VAR3--)
    {
        int VAR11;
        int VAR12;
        int VAR13;
        int VAR14;
        int VAR15;
        if (FUN2(VAR9[VAR3]) > 16773022)
            return 0;
        VAR11 = -(VAR9[VAR3] * 128);
        VAR12 = (1 << 30) - FUN3(VAR11, VAR11);
        VAR7 = FUN3(VAR7, VAR12) << 2;
        if (VAR3 == 0)
            return (VAR7 >= 107374);
        VAR14 = FUN4(VAR12);
        VAR13 = ((1 << 29) - 1) / (VAR12 >> (VAR14 + 1 - 16));
        VAR15 = (1 << 29) - FUN5(VAR12 << (15 + 16 - VAR14), VAR13, 16);
        VAR13 = ((VAR13 << 16) + (VAR15 * VAR13 >> 13));
        VAR10 = VAR9;
        VAR9 = VAR6[VAR3 & 1];
        for (VAR4 = 0; VAR4 < VAR3; VAR4++)
        {
            int VAR16 = VAR10[VAR4] - FUN6(VAR10[VAR3 - VAR4 - 1], VAR11, 31);
            VAR9[VAR4] = FUN6(VAR16, VAR13, VAR14);
        }
    }
}