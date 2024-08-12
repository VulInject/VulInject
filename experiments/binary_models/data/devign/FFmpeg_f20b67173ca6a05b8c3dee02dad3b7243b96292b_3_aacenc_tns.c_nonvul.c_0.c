static inline int FUN1(int *VAR1, int VAR2)
{
    int VAR3, VAR4 = 0;
    for (VAR3 = 0; VAR3 < VAR2; VAR3++)
        VAR4 += VAR1[VAR3] < 4 || VAR1[VAR3] > 11;
    return VAR4 == VAR2;
}