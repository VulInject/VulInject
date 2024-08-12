static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const int VAR5 = VAR6[VAR2->VAR7];
    int VAR8, VAR9, VAR10;
    int32_t VAR11[512];
    int32_t VAR12;
    int VAR13 = 0;
    memcpy(VAR11, &VAR2->VAR14[VAR2->VAR15 - 1][0], 512 * sizeof(VAR3));
    for (VAR10 = 0; VAR10 < VAR16; VAR10++)
    {
        VAR12 = 0;
        for (VAR8 = VAR13, VAR9 = 0; VAR8 < 512; VAR8++, VAR9++)
            VAR12 += FUN2(VAR11[VAR8], VAR17[VAR9]);
        for (VAR8 = 0; VAR8 < VAR13; VAR8++, VAR9++)
            VAR12 += FUN2(VAR11[VAR8], VAR17[VAR9]);
        VAR2->VAR18[VAR10] = VAR12;
        for (VAR8 = 0; VAR8 < 64; VAR8++)
            VAR11[VAR8 + VAR13] = VAR4[(VAR10 * 64 + VAR8) * VAR2->VAR15 + VAR5];
        VAR13 = (VAR13 + 64) & 511;
    }
}