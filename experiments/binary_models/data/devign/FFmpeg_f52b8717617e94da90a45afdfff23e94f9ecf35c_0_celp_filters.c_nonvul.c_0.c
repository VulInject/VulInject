void FUN1(float *VAR1, const float *VAR2, const float *VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        VAR1[VAR7] = VAR3[VAR7];
        for (VAR6 = 1; VAR6 <= VAR5; VAR6++)
            VAR1[VAR7] -= VAR2[VAR6 - 1] * VAR1[VAR7 - VAR6];
    }
    float VAR8, VAR9, VAR10, VAR11;
    float VAR12, VAR13, VAR14, VAR15;
    float VAR16, VAR17, VAR18;
    VAR16 = VAR2[0];
    VAR17 = VAR2[1];
    VAR18 = VAR2[2];
    VAR17 -= VAR2[0] * VAR2[0];
    VAR18 -= VAR2[1] * VAR2[0];
    VAR18 -= VAR2[0] * VAR17;
    VAR12 = VAR1[-4];
    VAR13 = VAR1[-3];
    VAR14 = VAR1[-2];
    VAR15 = VAR1[-1];
    for (VAR7 = 0; VAR7 <= VAR4 - 4; VAR7 += 4)
    {
        float VAR19, VAR20, VAR21;
        float VAR22;
        VAR8 = VAR3[0];
        VAR9 = VAR3[1];
        VAR10 = VAR3[2];
        VAR11 = VAR3[3];
        VAR8 -= VAR2[2] * VAR13;
        VAR9 -= VAR2[2] * VAR14;
        VAR10 -= VAR2[2] * VAR15;
        VAR8 -= VAR2[1] * VAR14;
        VAR9 -= VAR2[1] * VAR15;
        VAR8 -= VAR2[0] * VAR15;
        VAR22 = VAR2[3];
        VAR8 -= VAR22 * VAR12;
        VAR9 -= VAR22 * VAR13;
        VAR10 -= VAR22 * VAR14;
        VAR11 -= VAR22 * VAR15;
        for (VAR6 = 5; VAR6 < VAR5; VAR6 += 2)
        {
            VAR15 = VAR1[-VAR6];
            VAR22 = VAR2[VAR6 - 1];
            VAR8 -= VAR22 * VAR15;
            VAR9 -= VAR22 * VAR12;
            VAR10 -= VAR22 * VAR13;
            VAR11 -= VAR22 * VAR14;
            VAR14 = VAR1[-VAR6 - 1];
            VAR22 = VAR2[VAR6];
            VAR8 -= VAR22 * VAR14;
            VAR9 -= VAR22 * VAR15;
            VAR10 -= VAR22 * VAR12;
            VAR11 -= VAR22 * VAR13;
            FUN2(float, VAR12, VAR14);
            VAR13 = VAR15;
        }
        VAR19 = VAR8;
        VAR20 = VAR9;
        VAR21 = VAR10;
        VAR11 -= VAR16 * VAR21;
        VAR10 -= VAR16 * VAR20;
        VAR9 -= VAR16 * VAR19;
        VAR11 -= VAR17 * VAR20;
        VAR10 -= VAR17 * VAR19;
        VAR11 -= VAR18 * VAR19;
        VAR1[0] = VAR8;
        VAR1[1] = VAR9;
        VAR1[2] = VAR10;
        VAR1[3] = VAR11;
        VAR12 = VAR8;
        VAR13 = VAR9;
        VAR14 = VAR10;
        VAR15 = VAR11;
        VAR1 += 4;
        VAR3 += 4;
    }
    VAR1 -= VAR7;
    VAR3 -= VAR7;
    for (; VAR7 < VAR4; VAR7++)
    {
        VAR1[VAR7] = VAR3[VAR7];
        for (VAR6 = 1; VAR6 <= VAR5; VAR6++)
            VAR1[VAR7] -= VAR2[VAR6 - 1] * VAR1[VAR7 - VAR6];
    }
}