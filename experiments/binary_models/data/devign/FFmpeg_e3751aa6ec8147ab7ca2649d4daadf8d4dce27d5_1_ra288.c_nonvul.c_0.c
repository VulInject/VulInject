static void FUN1(int VAR1, int VAR2, int VAR3, const float *VAR4, float *VAR5, float *VAR6, float *VAR7, const float *VAR8)
{
    int VAR9;
    float VAR10[VAR1 + 1];
    float VAR11[VAR1 + 1];
    float VAR12[VAR1 + VAR2 + VAR3];
    memmove(VAR6, VAR6 + VAR2, (VAR1 + VAR3) * sizeof(*VAR6));
    memcpy(VAR6 + VAR1 + VAR3, VAR4, VAR2 * sizeof(*VAR6));
    FUN2(VAR12, VAR8, VAR6, VAR1 + VAR2 + VAR3);
    FUN3(VAR10, VAR12 + VAR1, VAR2, VAR1);
    FUN3(VAR11, VAR12 + VAR1 + VAR2, VAR3, VAR1);
    for (VAR9 = 0; VAR9 <= VAR1; VAR9++)
    {
        VAR7[VAR9] = VAR7[VAR9] * 0.5625 + VAR10[VAR9];
        VAR5[VAR9] = VAR7[VAR9] + VAR11[VAR9];
    }
    *VAR5 *= 257. / 256.;
}