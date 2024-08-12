static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    int32_t VAR10[512];
    for (VAR5 = 0; VAR5 < 256; VAR5++)
        for (VAR9 = 0; VAR9 < VAR11; VAR9++)
            VAR2->VAR12[VAR9][VAR5] = -2047;
    for (VAR9 = 0; VAR9 < VAR11; VAR9++)
        for (VAR8 = 0; VAR8 < VAR2->VAR13; VAR8++)
        {
            const int VAR14 = VAR2->VAR15[VAR8];
            for (VAR5 = 0, VAR6 = 128 + 256 * VAR9; VAR6 < 512; VAR5++, VAR6++)
                VAR10[VAR5] = VAR2->VAR16[VAR8][VAR6];
            for (VAR6 -= 512; VAR5 < 512; VAR5++, VAR6++)
                VAR10[VAR5] = VAR4[VAR6 * VAR2->VAR17 + VAR14];
            FUN2(VAR2->VAR18, VAR10, VAR2->VAR12[VAR9]);
        }
    for (VAR5 = 0; VAR5 < 256; VAR5++)
    {
        int32_t VAR19 = 2048;
        for (VAR9 = 0; VAR9 < VAR11; VAR9++)
            if (VAR2->VAR12[VAR9][VAR5] < VAR19)
                VAR19 = VAR2->VAR12[VAR9][VAR5];
        VAR2->VAR20[VAR5] = VAR19;
    }
    for (VAR7 = 0; VAR7 < 32; VAR7++)
    {
        VAR2->VAR21[VAR7] = 2048;
        FUN3(VAR2, VAR7, 0, VAR22, NULL);
        FUN4(VAR2, VAR7, 0, VAR22, NULL);
    }
}