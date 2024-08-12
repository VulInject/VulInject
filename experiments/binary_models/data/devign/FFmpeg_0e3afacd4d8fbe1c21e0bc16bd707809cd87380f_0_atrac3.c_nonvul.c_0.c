static int FUN1(float *VAR1, int VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7 = -1;
    float *VAR8, *VAR9;
    for (VAR5 = 0; VAR5 < VAR2; VAR5++)
    {
        VAR7 = FUN2(VAR4[VAR5].VAR10 + VAR4[VAR5].VAR11, VAR7);
        VAR8 = VAR4[VAR5].VAR12;
        VAR9 = &VAR1[VAR4[VAR5].VAR10];
        for (VAR6 = 0; VAR6 < VAR4[VAR5].VAR11; VAR6++)
            VAR9[VAR6] += VAR8[VAR6];
    }
    return VAR7;
}