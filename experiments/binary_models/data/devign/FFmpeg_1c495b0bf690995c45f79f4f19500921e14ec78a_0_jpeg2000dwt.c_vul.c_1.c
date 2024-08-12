static void FUN1(VAR1 *VAR2, int *VAR3)
{
    int VAR4, VAR5 = VAR2->VAR6[VAR2->VAR7 - 1][0];
    int *VAR8 = VAR2->VAR9;
    VAR8 += 5;
    for (VAR4 = VAR2->VAR7 - 1; VAR4 >= 0; VAR4--)
    {
        int VAR10 = VAR2->VAR6[VAR4][0], VAR11 = VAR2->VAR6[VAR4][1], VAR12 = VAR2->VAR13[VAR4][0], VAR14 = VAR2->VAR13[VAR4][1], VAR15;
        int *VAR16;
        VAR16 = VAR8 + VAR14;
        for (VAR15 = 0; VAR15 < VAR10; VAR15++)
        {
            int VAR17, VAR18 = 0;
            for (VAR17 = 0; VAR17 < VAR11; VAR17++)
                VAR16[VAR17] = VAR3[VAR5 * VAR17 + VAR15];
            FUN2(VAR8, VAR14, VAR14 + VAR11);
            for (VAR17 = VAR14; VAR17 < VAR11; VAR17 += 2, VAR18++)
                VAR3[VAR5 * VAR18 + VAR15] = ((VAR16[VAR17] * VAR19) + (1 << 16)) >> 17;
            for (VAR17 = 1 - VAR14; VAR17 < VAR11; VAR17 += 2, VAR18++)
                VAR3[VAR5 * VAR18 + VAR15] = ((VAR16[VAR17] * VAR20) + (1 << 16)) >> 17;
        }
        VAR16 = VAR8 + VAR12;
        for (VAR15 = 0; VAR15 < VAR11; VAR15++)
        {
            int VAR17, VAR18 = 0;
            for (VAR17 = 0; VAR17 < VAR10; VAR17++)
                VAR16[VAR17] = VAR3[VAR5 * VAR15 + VAR17];
            FUN2(VAR8, VAR12, VAR12 + VAR10);
            for (VAR17 = VAR12; VAR17 < VAR10; VAR17 += 2, VAR18++)
                VAR3[VAR5 * VAR15 + VAR18] = ((VAR16[VAR17] * VAR19) + (1 << 16)) >> 17;
            for (VAR17 = 1 - VAR12; VAR17 < VAR10; VAR17 += 2, VAR18++)
                VAR3[VAR5 * VAR15 + VAR18] = ((VAR16[VAR17] * VAR20) + (1 << 16)) >> 17;
        }
    }
}