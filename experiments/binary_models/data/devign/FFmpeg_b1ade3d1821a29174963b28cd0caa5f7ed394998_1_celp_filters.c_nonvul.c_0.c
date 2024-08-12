void FUN1(float *VAR1, const float *VAR2, const float *VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        VAR1[VAR7] = VAR3[VAR7];
        for (VAR6 = 1; VAR6 <= VAR5; VAR6++)
            VAR1[VAR7] += VAR2[VAR6 - 1] * VAR3[VAR7 - VAR6];
    }
}