static void FUN1(VAR1 *VAR2, float *VAR3, float *VAR4)
{
    int VAR5, VAR6;
    int VAR7[VAR8];
    float VAR9[1060];
    int VAR10, VAR11, VAR12;
    float VAR13, VAR14;
    float *VAR15;
    memset(VAR7, 0, sizeof(VAR7));
    memset(VAR9, 0, sizeof(VAR9));
    memset(VAR3, 0, 1024 * sizeof(float));
    memset(VAR4, 0, 1024 * sizeof(float));
    FUN2(VAR2, VAR7);
    FUN3(VAR2, VAR9);
    for (VAR5 = 0; VAR5 < VAR2->VAR16; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR8; VAR6++)
        {
            VAR3[VAR5 * 20 + VAR6] = VAR9[VAR5 * 40 + VAR6];
            VAR4[VAR5 * 20 + VAR6] = VAR9[VAR5 * 40 + 20 + VAR6];
        }
    }
    VAR10 = (1 << VAR2->VAR17) - 1;
    for (VAR5 = VAR2->VAR16; VAR5 < VAR2->VAR18; VAR5++)
    {
        VAR11 = VAR19[VAR5];
        VAR10 -= VAR7[VAR11];
        VAR15 = (float *)VAR20[VAR2->VAR17 - 2];
        VAR13 = VAR15[VAR7[VAR11]];
        VAR14 = VAR15[VAR10 - 1];
        for (VAR6 = 0; VAR6 < VAR8; VAR6++)
        {
            VAR12 = ((VAR2->VAR16 + VAR5) * 20) + VAR6;
            VAR3[20 * VAR5 + VAR6] = VAR13 * VAR9[VAR12];
            VAR4[20 * VAR5 + VAR6] = VAR14 * VAR9[VAR12];
        }
        VAR10 = (1 << VAR2->VAR17) - 1;
    }
}