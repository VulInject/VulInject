static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const float *VAR5, float *VAR6, const float *VAR7, int VAR8, int VAR9, int VAR10, const float VAR11, const float VAR12, int *VAR13, const float VAR14)
{
    int VAR15;
    if (VAR13)
        *VAR13 = 0;
    if (VAR6)
    {
        for (VAR15 = 0; VAR15 < VAR8; VAR15 += 4)
        {
            VAR6[VAR15] = 0.0f;
            VAR6[VAR15 + 1] = 0.0f;
            VAR6[VAR15 + 2] = 0.0f;
            VAR6[VAR15 + 3] = 0.0f;
        }
    }
}