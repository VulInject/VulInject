static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR8 *VAR11[3];
    uint8_t VAR12[4][1024];
    uint8_t VAR13[3][256];
    int VAR14, VAR15, VAR16;
    for (VAR14 = 0; VAR14 < 1024; VAR14++)
    {
        VAR12[0][VAR14] = FUN2(((25 * VAR9[0] + 129 * VAR9[1] + 66 * VAR9[2]) / 255) + 16);
        VAR12[1][VAR14] = FUN2(((-38 * VAR9[0] + 112 * VAR9[1] + -74 * VAR9[2]) / 255) + 128);
        VAR12[2][VAR14] = FUN2(((-18 * VAR9[0] + 112 * VAR9[1] + -94 * VAR9[2]) / 255) + 128);
        VAR12[3][VAR14] = VAR9[3];
        VAR9 += 4;
    }
    for (VAR14 = 0; VAR14 < 32; VAR14 += 2)
        for (VAR15 = 0; VAR15 < 32; VAR15 += 2)
            for (VAR16 = 0; VAR16 < 3; VAR16++)
                VAR13[VAR16][16 * (VAR14 / 2) + VAR15 / 2] = (VAR12[VAR16 + 1][32 * VAR14 + VAR15] + VAR12[VAR16 + 1][32 * VAR14 + VAR15 + 1] + VAR12[VAR16 + 1][32 * (VAR14 + 1) + VAR15] + VAR12[VAR16 + 1][32 * (VAR14 + 1) + VAR15 + 1]) / 4;
    for (VAR14 = 0; VAR14 < 3; VAR14++)
        VAR11[VAR14] = VAR6->VAR17->VAR18[VAR14] + (VAR6->VAR17->VAR19[VAR14] * (VAR4 >> !!VAR14)) + (VAR3 >> !!VAR14) + !!VAR14;
    for (VAR14 = 0; VAR14 < FUN3(32, VAR2->VAR20 - VAR4) - 1; VAR14 += 2)
    {
        int VAR21 = FUN3(32, VAR2->VAR22 - VAR3);
        int VAR23 = VAR21 / 2;
        FUN4(VAR11[0], VAR12[0] + VAR14 * 32, VAR21, VAR12[3] + VAR14 * 32);
        FUN4(VAR11[0] + VAR6->VAR17->VAR19[0], VAR12[0] + (VAR14 + 1) * 32, VAR21, VAR12[3] + (VAR14 + 1) * 32);
        FUN4(VAR11[1], VAR13[0] + (VAR14 / 2) * 16, VAR23, VAR13[2] + (VAR14 / 2) * 16);
        FUN4(VAR11[2], VAR13[1] + (VAR14 / 2) * 16, VAR23, VAR13[2] + (VAR14 / 2) * 16);
        VAR11[0] += VAR6->VAR17->VAR19[0] * 2;
        VAR11[1] += VAR6->VAR17->VAR19[1];
        VAR11[2] += VAR6->VAR17->VAR19[2];
    }
}