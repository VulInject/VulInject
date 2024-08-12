static int FUN1(VAR1 *VAR2, VAR3 *VAR4, float *VAR5, float *VAR6)
{
    int VAR7, VAR8, VAR9;
    int VAR10[VAR11];
    float *VAR12 = VAR2->VAR13;
    int VAR14, VAR15;
    float VAR16, VAR17;
    const float *VAR18;
    memset(VAR10, 0, sizeof(VAR10));
    memset(VAR12, 0, sizeof(VAR2->VAR13));
    memset(VAR5, 0, 1024 * sizeof(*VAR5));
    memset(VAR6, 0, 1024 * sizeof(*VAR6));
    if ((VAR9 = FUN2(VAR2, VAR4, VAR10)) < 0)
        return VAR9;
    if ((VAR9 = FUN3(VAR2, VAR4, VAR12)) < 0)
        return VAR9;
    for (VAR7 = 0; VAR7 < VAR4->VAR19; VAR7++)
    {
        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
        {
            VAR5[VAR7 * 20 + VAR8] = VAR12[VAR7 * 40 + VAR8];
            VAR6[VAR7 * 20 + VAR8] = VAR12[VAR7 * 40 + 20 + VAR8];
        }
    }
    VAR14 = (1 << VAR4->VAR20) - 1;
    for (VAR7 = VAR4->VAR19; VAR7 < VAR4->VAR21; VAR7++)
    {
        VAR15 = VAR22[VAR7];
        VAR14 -= VAR10[VAR15];
        VAR18 = VAR2->VAR23[VAR4->VAR20 - 2];
        VAR16 = VAR18[VAR10[VAR15]];
        VAR17 = VAR18[VAR14 - 1];
        VAR2->FUN4(VAR2, VAR4, VAR7, VAR16, VAR17, VAR12, VAR5, VAR6);
        VAR14 = (1 << VAR4->VAR20) - 1;
    }
    return 0;
}