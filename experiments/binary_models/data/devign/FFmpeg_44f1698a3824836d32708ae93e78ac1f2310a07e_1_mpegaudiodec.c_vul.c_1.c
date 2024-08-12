static void FUN1(int *VAR1, int *VAR2, int *VAR3, int *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15[18], *VAR16, *VAR17;
    for (VAR5 = 17; VAR5 >= 1; VAR5--)
        VAR3[VAR5] += VAR3[VAR5 - 1];
    for (VAR5 = 17; VAR5 >= 3; VAR5 -= 2)
        VAR3[VAR5] += VAR3[VAR5 - 2];
    for (VAR6 = 0; VAR6 < 2; VAR6++)
    {
        VAR16 = VAR15 + VAR6;
        VAR17 = VAR3 + VAR6;
        int64_t VAR7, VAR8, VAR9, VAR10;
        VAR9 = VAR17[2 * 4] + VAR17[2 * 8] - VAR17[2 * 2];
        VAR10 = (VAR17[2 * 0] + (VAR18)(VAR17[2 * 6] >> 1)) << 32;
        VAR8 = VAR17[2 * 0] - VAR17[2 * 6];
        VAR16[6] = VAR8 - (VAR9 >> 1);
        VAR16[16] = VAR8 + VAR9;
        VAR7 = FUN2(2 * (VAR17[2 * 2] + VAR17[2 * 4]), VAR19);
        VAR8 = FUN2(VAR17[2 * 4] - VAR17[2 * 8], -2 * VAR20);
        VAR9 = FUN2(2 * (VAR17[2 * 2] + VAR17[2 * 8]), -VAR21);
        VAR16[10] = (VAR10 - VAR7 - VAR9) >> 32;
        VAR16[2] = (VAR10 + VAR7 + VAR8) >> 32;
        VAR16[14] = (VAR10 + VAR9 - VAR8) >> 32;
        VAR16[4] = FUN3(2 * (VAR17[2 * 5] + VAR17[2 * 7] - VAR17[2 * 1]), -VAR22);
        VAR9 = FUN2(2 * (VAR17[2 * 1] + VAR17[2 * 5]), VAR23);
        VAR10 = FUN2(VAR17[2 * 5] - VAR17[2 * 7], -2 * VAR24);
        VAR7 = FUN2(2 * VAR17[2 * 3], VAR22);
        VAR8 = FUN2(2 * (VAR17[2 * 1] + VAR17[2 * 7]), -VAR25);
        VAR16[0] = (VAR9 + VAR10 + VAR7) >> 32;
        VAR16[12] = (VAR9 + VAR8 - VAR7) >> 32;
        VAR16[8] = (VAR10 - VAR8 - VAR7) >> 32;
        VAR9 = VAR17[2 * 4] + VAR17[2 * 8] - VAR17[2 * 2];
        VAR10 = VAR17[2 * 0] + (VAR17[2 * 6] >> 1);
        VAR8 = VAR17[2 * 0] - VAR17[2 * 6];
        VAR16[6] = VAR8 - (VAR9 >> 1);
        VAR16[16] = VAR8 + VAR9;
        VAR7 = FUN3(2 * (VAR17[2 * 2] + VAR17[2 * 4]), VAR19);
        VAR8 = FUN3(VAR17[2 * 4] - VAR17[2 * 8], -2 * VAR20);
        VAR9 = FUN3(2 * (VAR17[2 * 2] + VAR17[2 * 8]), -VAR21);
        VAR16[10] = VAR10 - VAR7 - VAR9;
        VAR16[2] = VAR10 + VAR7 + VAR8;
        VAR16[14] = VAR10 + VAR9 - VAR8;
        VAR16[4] = FUN3(2 * (VAR17[2 * 5] + VAR17[2 * 7] - VAR17[2 * 1]), -VAR22);
        VAR9 = FUN3(2 * (VAR17[2 * 1] + VAR17[2 * 5]), VAR23);
        VAR10 = FUN3(VAR17[2 * 5] - VAR17[2 * 7], -2 * VAR24);
        VAR7 = FUN3(2 * VAR17[2 * 3], VAR22);
        VAR8 = FUN3(2 * (VAR17[2 * 1] + VAR17[2 * 7]), -VAR25);
        VAR16[0] = VAR9 + VAR10 + VAR7;
        VAR16[12] = VAR9 + VAR8 - VAR7;
        VAR16[8] = VAR10 - VAR8 - VAR7;
    }
    VAR5 = 0;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        VAR7 = VAR15[VAR5];
        VAR8 = VAR15[VAR5 + 2];
        VAR11 = VAR8 + VAR7;
        VAR13 = VAR8 - VAR7;
        VAR9 = VAR15[VAR5 + 1];
        VAR10 = VAR15[VAR5 + 3];
        VAR12 = FUN4(VAR10 + VAR9, VAR26[VAR6]);
        VAR14 = FUN4(VAR10 - VAR9, VAR26[8 - VAR6]);
        VAR7 = (VAR11 + VAR12) << 5;
        VAR8 = (VAR11 - VAR12) << 5;
        VAR1[(9 + VAR6) * VAR27] = FUN3(VAR8, VAR4[9 + VAR6]) + VAR2[9 + VAR6];
        VAR1[(8 - VAR6) * VAR27] = FUN3(VAR8, VAR4[8 - VAR6]) + VAR2[8 - VAR6];
        VAR2[9 + VAR6] = FUN3(VAR7, VAR4[18 + 9 + VAR6]);
        VAR2[8 - VAR6] = FUN3(VAR7, VAR4[18 + 8 - VAR6]);
        VAR7 = (VAR13 + VAR14) << 5;
        VAR8 = (VAR13 - VAR14) << 5;
        VAR1[(9 + 8 - VAR6) * VAR27] = FUN3(VAR8, VAR4[9 + 8 - VAR6]) + VAR2[9 + 8 - VAR6];
        VAR1[(VAR6)*VAR27] = FUN3(VAR8, VAR4[VAR6]) + VAR2[VAR6];
        VAR2[9 + 8 - VAR6] = FUN3(VAR7, VAR4[18 + 9 + 8 - VAR6]);
        VAR2[+VAR6] = FUN3(VAR7, VAR4[18 + VAR6]);
        VAR5 += 4;
    }
    VAR11 = VAR15[16];
    VAR12 = FUN4(VAR15[17], VAR26[4]);
    VAR7 = (VAR11 + VAR12) << 5;
    VAR8 = (VAR11 - VAR12) << 5;
    VAR1[(9 + 4) * VAR27] = FUN3(VAR8, VAR4[9 + 4]) + VAR2[9 + 4];
    VAR1[(8 - 4) * VAR27] = FUN3(VAR8, VAR4[8 - 4]) + VAR2[8 - 4];
    VAR2[9 + 4] = FUN3(VAR7, VAR4[18 + 9 + 4]);
    VAR2[8 - 4] = FUN3(VAR7, VAR4[18 + 8 - 4]);
}