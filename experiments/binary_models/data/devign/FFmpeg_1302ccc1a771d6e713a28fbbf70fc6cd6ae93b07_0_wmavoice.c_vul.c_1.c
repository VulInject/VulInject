static void FUN1(VAR1 *VAR2, int VAR3, float *VAR4, int VAR5, const float *VAR6)
{
    int VAR7, VAR8, VAR9;
    if (VAR3 != VAR10)
    {
        float *VAR11 = VAR2->VAR12, *VAR13 = VAR2->VAR14, VAR15 = 0;
        VAR11[0] = 1.0;
        memcpy(&VAR11[1], VAR6, sizeof(VAR6[0]) * VAR2->VAR16);
        memset(&VAR11[VAR2->VAR16 + 1], 0, sizeof(VAR11[0]) * (128 - VAR2->VAR16 - 1));
        FUN2(&VAR15, 0.7 * FUN3(VAR6, VAR2->VAR16), VAR11, VAR2->VAR16 + 2);
        VAR7 = FUN4(127 - VAR5, VAR5 - 1);
        FUN5(VAR2, VAR11, VAR3, VAR13, VAR7);
        memset(&VAR4[VAR5], 0, sizeof(VAR4[0]) * (128 - VAR5));
        FUN6(&VAR2->VAR17, VAR4);
        FUN6(&VAR2->VAR17, VAR13);
        VAR4[0] *= VAR13[0];
        VAR4[1] *= VAR13[1];
        for (VAR9 = 1; VAR9 < 128; VAR9++)
        {
            float VAR18 = VAR4[VAR9 * 2], VAR19 = VAR4[VAR9 * 2 + 1];
            VAR4[VAR9 * 2] = VAR18 * VAR13[VAR9 * 2] - VAR19 * VAR13[VAR9 * 2 + 1];
            VAR4[VAR9 * 2 + 1] = VAR19 * VAR13[VAR9 * 2] + VAR18 * VAR13[VAR9 * 2 + 1];
        }
        FUN6(&VAR2->VAR20, VAR4);
    }
    if (VAR2->VAR21)
    {
        VAR8 = FUN4(VAR2->VAR21, VAR5);
        for (VAR9 = 0; VAR9 < VAR8; VAR9++)
            VAR4[VAR9] += VAR2->VAR22[VAR9];
        VAR2->VAR21 -= VAR8;
        memmove(VAR2->VAR22, &VAR2->VAR22[VAR5], sizeof(VAR2->VAR22[0]) * VAR2->VAR21);
    }
    if (VAR3 != VAR10)
    {
        VAR8 = FUN4(VAR7, VAR2->VAR21);
        for (VAR9 = 0; VAR9 < VAR8; VAR9++)
            VAR2->VAR22[VAR9] += VAR4[VAR5 + VAR9];
        if (VAR8 < VAR7)
        {
            memcpy(&VAR2->VAR22[VAR8], &VAR4[VAR5 + VAR8], sizeof(VAR2->VAR22[0]) * (VAR7 - VAR8));
            VAR2->VAR21 = VAR7;
        }
    }
}