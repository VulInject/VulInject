static inline void FUN1(double *VAR1, int *VAR2, float *VAR3, int VAR4, int VAR5)
{
    int VAR6;
    const float *VAR7 = VAR8[VAR5];
    for (VAR6 = 0; VAR6 < VAR4; VAR6++)
    {
        VAR2[VAR6] = FUN2(VAR1[VAR6], VAR7, VAR5 ? 16 : 8);
        VAR3[VAR6] = VAR7[VAR2[VAR6]];
    }
}