static void FUN1(VAR1 *VAR2, float VAR3, int VAR4)
{
    int VAR5, VAR6;
    double VAR7;
    float VAR8, VAR9[5];
    float *VAR10 = VAR2->VAR11 + 36;
    memmove(VAR2->VAR11, VAR2->VAR11 + 5, 36 * sizeof(*VAR2->VAR11));
    for (VAR5 = 0; VAR5 < 5; VAR5++)
    {
        VAR10[VAR5] = 0.;
        for (VAR6 = 0; VAR6 < 36; VAR6++)
            VAR10[VAR5] -= VAR10[VAR5 - 1 - VAR6] * VAR2->VAR12[VAR6];
    }
    VAR8 = 32.;
    for (VAR5 = 0; VAR5 < 10; VAR5++)
        VAR8 -= VAR2->VAR13[9 - VAR5] * VAR2->VAR14[VAR5];
    VAR8 = FUN2(VAR8, 0, 60);
    VAR7 = FUN3(VAR8 * 0.1151292546497) * VAR3;
    for (VAR5 = 0; VAR5 < 5; VAR5++)
        VAR9[VAR5] = VAR15[VAR4][VAR5] * VAR7;
    VAR8 = FUN4(VAR9, VAR9, 5) / 5;
    VAR8 = FUN5(VAR8, 1);
    memmove(VAR2->VAR13, VAR2->VAR13 + 1, 9 * sizeof(*VAR2->VAR13));
    VAR2->VAR13[9] = 10 * FUN6(VAR8) - 32;
    for (VAR5 = 1; VAR5 < 5; VAR5++)
        for (VAR6 = VAR5 - 1; VAR6 >= 0; VAR6--)
            VAR9[VAR5] -= VAR2->VAR12[VAR5 - VAR6 - 1] * VAR9[VAR6];
    for (VAR5 = 0; VAR5 < 5; VAR5++)
        VAR10[VAR5] = FUN2(VAR10[VAR5] + VAR9[VAR5], -4095, 4095);
}