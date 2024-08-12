static int FUN1(const float *VAR1, float *VAR2, int VAR3)
{
    int VAR4, VAR5;
    double VAR6, VAR7, VAR8;
    if (VAR1[VAR3] == 0)
        return -1;
    if ((VAR6 = *VAR1) <= 0)
        return -1;
    VAR1--;
    for (VAR4 = 1; VAR4 <= VAR3; VAR4++)
    {
        VAR7 = VAR1[VAR4 + 1];
        for (VAR5 = 0; VAR5 < VAR4 - 1; VAR5++)
            VAR7 += VAR1[VAR4 - VAR5] * VAR2[VAR5];
        VAR2[VAR4 - 1] = VAR8 = -VAR7 / VAR6;
        for (VAR5 = 0; VAR5 < VAR4 >> 1; VAR5++)
        {
            float VAR9 = VAR2[VAR5] + VAR2[VAR4 - VAR5 - 2] * VAR8;
            VAR2[VAR4 - VAR5 - 2] += VAR2[VAR5] * VAR8;
            VAR2[VAR5] = VAR9;
        }
        if ((VAR6 += VAR7 * VAR8) < 0)
            return -1;
    }
    return 0;
}