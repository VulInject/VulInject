static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9;
    VAR5 *VAR10, *VAR11, *VAR12, *VAR13, *VAR14, *VAR15;
    int VAR16;
    if (VAR7 < VAR2->VAR17 * VAR2->VAR18 * 9L / 8)
    {
        FUN2(VAR2, VAR19, "");
        return VAR20;
    }
    VAR2->VAR21 = VAR22;
    if ((VAR16 = FUN3(VAR2, VAR4, 0)) < 0)
        return VAR16;
    VAR10 = VAR4->VAR23[0];
    VAR11 = VAR4->VAR23[0] + VAR4->VAR24[0];
    VAR12 = VAR4->VAR23[0] + VAR4->VAR24[0] * 2;
    VAR13 = VAR4->VAR23[0] + VAR4->VAR24[0] * 3;
    VAR14 = VAR4->VAR23[1];
    VAR15 = VAR4->VAR23[2];
    for (VAR8 = 0; VAR8 < VAR2->VAR18; VAR8 += 4)
    {
        for (VAR9 = 0; VAR9 < VAR2->VAR17; VAR9 += 4)
        {
            FUN4(VAR10 + VAR9, VAR6);
            FUN4(VAR11 + VAR9, VAR6 + 4);
            FUN4(VAR12 + VAR9, VAR6 + 8);
            FUN4(VAR13 + VAR9, VAR6 + 12);
            VAR14[VAR9 >> 2] = VAR6[16] + 0x80;
            VAR15[VAR9 >> 2] = VAR6[17] + 0x80;
            VAR6 += 18;
        }
        VAR10 += VAR4->VAR24[0] << 2;
        VAR11 += VAR4->VAR24[0] << 2;
        VAR12 += VAR4->VAR24[0] << 2;
        VAR13 += VAR4->VAR24[0] << 2;
        VAR14 += VAR4->VAR24[1];
        VAR15 += VAR4->VAR24[2];
    }
    return 0;
}