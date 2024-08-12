static void FUN1(VAR1 *VAR2, float *VAR3)
{
    int VAR4;
    int VAR5 = VAR2->VAR6[VAR2->VAR7 - 1][0];
    float *VAR8 = VAR2->VAR9;
    float *VAR10 = VAR3;
    VAR8 += 5;
    for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++)
    {
        int VAR11 = VAR2->VAR6[VAR4][0], VAR12 = VAR2->VAR6[VAR4][1], VAR13 = VAR2->VAR14[VAR4][0], VAR15 = VAR2->VAR14[VAR4][1], VAR16;
        float *VAR17;
        VAR17 = VAR8 + VAR13;
        for (VAR16 = 0; VAR16 < VAR12; VAR16++)
        {
            int VAR18, VAR19 = 0;
            for (VAR18 = VAR13; VAR18 < VAR11; VAR18 += 2, VAR19++)
                VAR17[VAR18] = VAR10[VAR5 * VAR16 + VAR19] * VAR20;
            for (VAR18 = 1 - VAR13; VAR18 < VAR11; VAR18 += 2, VAR19++)
                VAR17[VAR18] = VAR10[VAR5 * VAR16 + VAR19];
            FUN2(VAR8, VAR13, VAR13 + VAR11);
            for (VAR18 = 0; VAR18 < VAR11; VAR18++)
                VAR10[VAR5 * VAR16 + VAR18] = VAR17[VAR18];
        }
        VAR17 = VAR8 + VAR15;
        for (VAR16 = 0; VAR16 < VAR11; VAR16++)
        {
            int VAR18, VAR19 = 0;
            for (VAR18 = VAR15; VAR18 < VAR12; VAR18 += 2, VAR19++)
                VAR17[VAR18] = VAR10[VAR5 * VAR19 + VAR16] * VAR20;
            for (VAR18 = 1 - VAR15; VAR18 < VAR12; VAR18 += 2, VAR19++)
                VAR17[VAR18] = VAR10[VAR5 * VAR19 + VAR16];
            FUN2(VAR8, VAR15, VAR15 + VAR12);
            for (VAR18 = 0; VAR18 < VAR12; VAR18++)
                VAR10[VAR5 * VAR18 + VAR16] = VAR17[VAR18];
        }
    }
}