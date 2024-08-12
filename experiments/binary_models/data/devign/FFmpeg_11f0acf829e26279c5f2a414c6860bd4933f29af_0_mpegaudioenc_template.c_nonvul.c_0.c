static void FUN1(int *VAR1, int *VAR2)
{
    int VAR3, VAR4;
    int *VAR5, *VAR6, VAR7;
    const int *VAR8 = VAR9;
    for (VAR4 = 31; VAR4 >= 3; VAR4 -= 2)
        VAR2[VAR4] += VAR2[VAR4 - 2];
    VAR5 = VAR2 + 30;
    VAR6 = VAR2 + 2;
    do
    {
        VAR5[0] += VAR5[-4];
        VAR5[1] += VAR5[1 - 4];
        VAR5 -= 4;
    } while (VAR5 != VAR6);
    VAR5 = VAR2 + 28;
    VAR6 = VAR2 + 4;
    do
    {
        VAR5[0] += VAR5[-8];
        VAR5[1] += VAR5[1 - 8];
        VAR5[2] += VAR5[2 - 8];
        VAR5[3] += VAR5[3 - 8];
        VAR5 -= 8;
    } while (VAR5 != VAR6);
    VAR5 = VAR2;
    VAR6 = VAR2 + 32;
    do
    {
        VAR5[3] = -VAR5[3];
        VAR5[6] = -VAR5[6];
        VAR5[11] = -VAR5[11];
        VAR5[12] = -VAR5[12];
        VAR5[13] = -VAR5[13];
        VAR5[15] = -VAR5[15];
        VAR5 += 16;
    } while (VAR5 != VAR6);
    VAR5 = VAR2;
    VAR6 = VAR2 + 8;
    do
    {
        int VAR10, VAR11, VAR12, VAR13;
        VAR12 = FUN2(VAR5[16], FUN3(VAR14 * 0.5));
        VAR13 = VAR5[0] - VAR12;
        VAR12 = VAR5[0] + VAR12;
        VAR11 = FUN2(-(VAR5[24] + VAR5[8]), FUN3(VAR14 * 0.5));
        VAR10 = FUN2((VAR5[8] - VAR11), VAR8[0]);
        VAR11 = FUN2((VAR5[8] + VAR11), VAR8[1]);
        VAR5[0] = VAR12 + VAR10;
        VAR5[8] = VAR13 - VAR11;
        VAR5[16] = VAR13 + VAR11;
        VAR5[24] = VAR12 - VAR10;
        VAR5++;
    } while (VAR5 != VAR6);
    VAR8 += 2;
    VAR5 = VAR2;
    VAR6 = VAR2 + 4;
    do
    {
        VAR7 = FUN2(VAR5[28], VAR8[0]);
        VAR5[28] = (VAR5[0] - VAR7);
        VAR5[0] = (VAR5[0] + VAR7);
        VAR7 = FUN2(VAR5[4], VAR8[1]);
        VAR5[4] = (VAR5[24] - VAR7);
        VAR5[24] = (VAR5[24] + VAR7);
        VAR7 = FUN2(VAR5[20], VAR8[2]);
        VAR5[20] = (VAR5[8] - VAR7);
        VAR5[8] = (VAR5[8] + VAR7);
        VAR7 = FUN2(VAR5[12], VAR8[3]);
        VAR5[12] = (VAR5[16] - VAR7);
        VAR5[16] = (VAR5[16] + VAR7);
        VAR5++;
    } while (VAR5 != VAR6);
    VAR8 += 4;
    for (VAR3 = 0; VAR3 < 4; VAR3++)
    {
        VAR7 = FUN2(VAR2[30 - VAR3 * 4], VAR8[0]);
        VAR2[30 - VAR3 * 4] = (VAR2[VAR3 * 4] - VAR7);
        VAR2[VAR3 * 4] = (VAR2[VAR3 * 4] + VAR7);
        VAR7 = FUN2(VAR2[2 + VAR3 * 4], VAR8[1]);
        VAR2[2 + VAR3 * 4] = (VAR2[28 - VAR3 * 4] - VAR7);
        VAR2[28 - VAR3 * 4] = (VAR2[28 - VAR3 * 4] + VAR7);
        VAR7 = FUN2(VAR2[31 - VAR3 * 4], VAR8[0]);
        VAR2[31 - VAR3 * 4] = (VAR2[1 + VAR3 * 4] - VAR7);
        VAR2[1 + VAR3 * 4] = (VAR2[1 + VAR3 * 4] + VAR7);
        VAR7 = FUN2(VAR2[3 + VAR3 * 4], VAR8[1]);
        VAR2[3 + VAR3 * 4] = (VAR2[29 - VAR3 * 4] - VAR7);
        VAR2[29 - VAR3 * 4] = (VAR2[29 - VAR3 * 4] + VAR7);
        VAR8 += 2;
    }
    VAR5 = VAR2 + 30;
    VAR6 = VAR2 + 1;
    do
    {
        VAR7 = FUN2(VAR6[0], *VAR8);
        VAR6[0] = (VAR5[0] - VAR7);
        VAR5[0] = (VAR5[0] + VAR7);
        VAR5 -= 2;
        VAR6 += 2;
        VAR8++;
    } while (VAR5 >= VAR2);
    for (VAR3 = 0; VAR3 < 32; VAR3++)
    {
        VAR1[VAR3] = VAR2[VAR15[VAR3]];
    }
}