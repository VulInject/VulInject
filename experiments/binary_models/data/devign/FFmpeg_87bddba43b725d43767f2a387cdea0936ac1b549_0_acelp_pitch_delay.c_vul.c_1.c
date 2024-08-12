float FUN1(float VAR1, float VAR2, float *VAR3, float VAR4, const float *VAR5)
{
    float VAR6 = VAR1 * FUN2(0.05 * (FUN3(VAR5, VAR3, 4) + VAR4)) / FUN4(VAR2);
    memmove(&VAR3[0], &VAR3[1], 3 * sizeof(VAR3[0]));
    VAR3[3] = 20.0 * FUN5(VAR1);
    return VAR6;
}