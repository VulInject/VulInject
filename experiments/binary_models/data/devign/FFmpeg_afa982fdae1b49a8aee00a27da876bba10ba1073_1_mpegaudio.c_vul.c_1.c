static void FUN1(VAR1 *VAR2, int VAR3, short *VAR4, int VAR5)
{
    short *VAR6, *VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    short VAR14[64];
    int VAR15[32];
    int *VAR16;
    VAR9 = VAR2->VAR17[VAR3];
    VAR16 = &VAR2->VAR18[VAR3][0][0][0];
    for (VAR11 = 0; VAR11 < 36; VAR11++)
    {
        for (VAR10 = 0; VAR10 < 32; VAR10++)
        {
            VAR2->VAR19[VAR3][VAR9 + (31 - VAR10)] = VAR4[0];
            VAR4 += VAR5;
        }
        VAR6 = VAR2->VAR19[VAR3] + VAR9;
        VAR7 = VAR20;
        for (VAR10 = 0; VAR10 < 64; VAR10++)
        {
            VAR8 = VAR6[0 * 64] * VAR7[0 * 64];
            VAR8 += VAR6[1 * 64] * VAR7[1 * 64];
            VAR8 += VAR6[2 * 64] * VAR7[2 * 64];
            VAR8 += VAR6[3 * 64] * VAR7[3 * 64];
            VAR8 += VAR6[4 * 64] * VAR7[4 * 64];
            VAR8 += VAR6[5 * 64] * VAR7[5 * 64];
            VAR8 += VAR6[6 * 64] * VAR7[6 * 64];
            VAR8 += VAR6[7 * 64] * VAR7[7 * 64];
            VAR14[VAR10] = VAR8 >> 14;
            VAR6++;
            VAR7++;
        }
        VAR15[0] = VAR14[16];
        for (VAR10 = 1; VAR10 <= 16; VAR10++)
            VAR15[VAR10] = VAR14[VAR10 + 16] + VAR14[16 - VAR10];
        for (VAR10 = 17; VAR10 <= 31; VAR10++)
            VAR15[VAR10] = VAR14[VAR10 + 16] - VAR14[80 - VAR10];
        VAR12 = 0;
        for (VAR10 = 0; VAR10 < 32; VAR10++)
        {
            VAR12 |= FUN2(VAR15[VAR10]);
        }
        VAR13 = FUN3(VAR12) - 12;
        if (VAR13 > 0)
        {
            for (VAR10 = 0; VAR10 < 32; VAR10++)
                VAR15[VAR10] >>= VAR13;
        }
        else
        {
            VAR13 = 0;
        }
        FUN4(VAR16, VAR15, VAR2->VAR21, VAR13);
        VAR9 -= 32;
        VAR16 += 32;
        if (VAR9 < 0)
        {
            memmove(VAR2->VAR19[VAR3] + VAR22 - (512 - 32), VAR2->VAR19[VAR3], (512 - 32) * 2);
            VAR9 = VAR22 - 512;
        }
    }
    VAR2->VAR17[VAR3] = VAR9;
}