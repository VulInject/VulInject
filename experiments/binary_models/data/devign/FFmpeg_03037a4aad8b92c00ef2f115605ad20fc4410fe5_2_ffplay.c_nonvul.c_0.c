static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14, *VAR15, *VAR16;
    int VAR17, VAR18, VAR19, VAR20;
    const VAR3 *VAR21 = VAR4;
    VAR19 = FUN2(VAR4->VAR22, 0, VAR5);
    VAR20 = FUN2(VAR4->VAR23, 0, VAR6);
    VAR17 = FUN2(VAR4->VAR7, 0, VAR5 - VAR19);
    VAR18 = FUN2(VAR4->VAR8, 0, VAR6 - VAR20);
    VAR14 = VAR2->VAR24[0] + VAR17 + VAR18 * VAR2->VAR25[0];
    VAR15 = VAR2->VAR24[1] + VAR17 / 2 + (VAR18 >> 1) * VAR2->VAR25[1];
    VAR16 = VAR2->VAR24[2] + VAR17 / 2 + (VAR18 >> 1) * VAR2->VAR25[2];
    for (VAR8 = 0; VAR8 < VAR20; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR19; VAR7++)
        {
            VAR9 = VAR21->VAR24[0][VAR7 + VAR8 * VAR21->VAR25[0]];
            VAR12 = VAR21->VAR24[3][VAR7 + VAR8 * VAR21->VAR25[3]];
            VAR14[0] = FUN3(VAR12, VAR14[0], VAR9, 0);
            VAR14++;
        }
        VAR14 += VAR2->VAR25[0] - VAR19;
    }
    for (VAR8 = 0; VAR8 < VAR20 / 2; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR19 / 2; VAR7++)
        {
            VAR10 = VAR21->VAR24[1][VAR7 + VAR8 * VAR21->VAR25[1]];
            VAR11 = VAR21->VAR24[2][VAR7 + VAR8 * VAR21->VAR25[2]];
            VAR12 = VAR21->VAR24[3][2 * VAR7 + 2 * VAR8 * VAR21->VAR25[3]] + VAR21->VAR24[3][2 * VAR7 + 1 + 2 * VAR8 * VAR21->VAR25[3]] + VAR21->VAR24[3][2 * VAR7 + 1 + (2 * VAR8 + 1) * VAR21->VAR25[3]] + VAR21->VAR24[3][2 * VAR7 + (2 * VAR8 + 1) * VAR21->VAR25[3]];
            VAR15[0] = FUN3(VAR12 >> 2, VAR15[0], VAR10, 0);
            VAR16[0] = FUN3(VAR12 >> 2, VAR16[0], VAR11, 0);
            VAR15++;
            VAR16++;
        }
        VAR15 += VAR2->VAR25[1] - VAR19 / 2;
        VAR16 += VAR2->VAR25[2] - VAR19 / 2;
    }
}