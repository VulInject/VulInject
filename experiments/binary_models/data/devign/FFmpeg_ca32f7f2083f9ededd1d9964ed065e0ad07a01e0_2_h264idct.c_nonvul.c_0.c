void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    VAR1 *VAR7 = VAR8 + VAR9;
    VAR4[0] += 32;
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        const int VAR10 = VAR4[VAR6 + 0 * 8] + VAR4[VAR6 + 4 * 8];
        const int VAR11 = VAR4[VAR6 + 0 * 8] - VAR4[VAR6 + 4 * 8];
        const int VAR12 = (VAR4[VAR6 + 2 * 8] >> 1) - VAR4[VAR6 + 6 * 8];
        const int VAR13 = (VAR4[VAR6 + 6 * 8] >> 1) + VAR4[VAR6 + 2 * 8];
        const int VAR14 = VAR10 + VAR13;
        const int VAR15 = VAR11 + VAR12;
        const int VAR16 = VAR11 - VAR12;
        const int VAR17 = VAR10 - VAR13;
        const int VAR18 = -VAR4[VAR6 + 3 * 8] + VAR4[VAR6 + 5 * 8] - VAR4[VAR6 + 7 * 8] - (VAR4[VAR6 + 7 * 8] >> 1);
        const int VAR19 = VAR4[VAR6 + 1 * 8] + VAR4[VAR6 + 7 * 8] - VAR4[VAR6 + 3 * 8] - (VAR4[VAR6 + 3 * 8] >> 1);
        const int VAR20 = -VAR4[VAR6 + 1 * 8] + VAR4[VAR6 + 7 * 8] + VAR4[VAR6 + 5 * 8] + (VAR4[VAR6 + 5 * 8] >> 1);
        const int VAR21 = VAR4[VAR6 + 3 * 8] + VAR4[VAR6 + 5 * 8] + VAR4[VAR6 + 1 * 8] + (VAR4[VAR6 + 1 * 8] >> 1);
        const int VAR22 = (VAR21 >> 2) + VAR18;
        const int VAR23 = VAR19 + (VAR20 >> 2);
        const int VAR24 = (VAR19 >> 2) - VAR20;
        const int VAR25 = VAR21 - (VAR18 >> 2);
        VAR4[VAR6 + 0 * 8] = VAR14 + VAR25;
        VAR4[VAR6 + 7 * 8] = VAR14 - VAR25;
        VAR4[VAR6 + 1 * 8] = VAR15 + VAR24;
        VAR4[VAR6 + 6 * 8] = VAR15 - VAR24;
        VAR4[VAR6 + 2 * 8] = VAR16 + VAR23;
        VAR4[VAR6 + 5 * 8] = VAR16 - VAR23;
        VAR4[VAR6 + 3 * 8] = VAR17 + VAR22;
        VAR4[VAR6 + 4 * 8] = VAR17 - VAR22;
    }
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        const int VAR10 = VAR4[0 + VAR6 * 8] + VAR4[4 + VAR6 * 8];
        const int VAR11 = VAR4[0 + VAR6 * 8] - VAR4[4 + VAR6 * 8];
        const int VAR12 = (VAR4[2 + VAR6 * 8] >> 1) - VAR4[6 + VAR6 * 8];
        const int VAR13 = (VAR4[6 + VAR6 * 8] >> 1) + VAR4[2 + VAR6 * 8];
        const int VAR14 = VAR10 + VAR13;
        const int VAR15 = VAR11 + VAR12;
        const int VAR16 = VAR11 - VAR12;
        const int VAR17 = VAR10 - VAR13;
        const int VAR18 = -VAR4[3 + VAR6 * 8] + VAR4[5 + VAR6 * 8] - VAR4[7 + VAR6 * 8] - (VAR4[7 + VAR6 * 8] >> 1);
        const int VAR19 = VAR4[1 + VAR6 * 8] + VAR4[7 + VAR6 * 8] - VAR4[3 + VAR6 * 8] - (VAR4[3 + VAR6 * 8] >> 1);
        const int VAR20 = -VAR4[1 + VAR6 * 8] + VAR4[7 + VAR6 * 8] + VAR4[5 + VAR6 * 8] + (VAR4[5 + VAR6 * 8] >> 1);
        const int VAR21 = VAR4[3 + VAR6 * 8] + VAR4[5 + VAR6 * 8] + VAR4[1 + VAR6 * 8] + (VAR4[1 + VAR6 * 8] >> 1);
        const int VAR22 = (VAR21 >> 2) + VAR18;
        const int VAR23 = VAR19 + (VAR20 >> 2);
        const int VAR24 = (VAR19 >> 2) - VAR20;
        const int VAR25 = VAR21 - (VAR18 >> 2);
        VAR2[VAR6 + 0 * VAR5] = VAR7[VAR2[VAR6 + 0 * VAR5] + ((VAR14 + VAR25) >> 6)];
        VAR2[VAR6 + 1 * VAR5] = VAR7[VAR2[VAR6 + 1 * VAR5] + ((VAR15 + VAR24) >> 6)];
        VAR2[VAR6 + 2 * VAR5] = VAR7[VAR2[VAR6 + 2 * VAR5] + ((VAR16 + VAR23) >> 6)];
        VAR2[VAR6 + 3 * VAR5] = VAR7[VAR2[VAR6 + 3 * VAR5] + ((VAR17 + VAR22) >> 6)];
        VAR2[VAR6 + 4 * VAR5] = VAR7[VAR2[VAR6 + 4 * VAR5] + ((VAR17 - VAR22) >> 6)];
        VAR2[VAR6 + 5 * VAR5] = VAR7[VAR2[VAR6 + 5 * VAR5] + ((VAR16 - VAR23) >> 6)];
        VAR2[VAR6 + 6 * VAR5] = VAR7[VAR2[VAR6 + 6 * VAR5] + ((VAR15 - VAR24) >> 6)];
        VAR2[VAR6 + 7 * VAR5] = VAR7[VAR2[VAR6 + 7 * VAR5] + ((VAR14 - VAR25) >> 6)];
    }
}