static inline int FUN1(int *VAR1, int VAR2, int VAR3)
{
    int VAR4;
    const int VAR5 = VAR3 ? 4 : 2;
    const int VAR6 = VAR3 ? 8 : 4;
    const int VAR7 = VAR3 ? 11 : 5;
    return 0;
    for (VAR4 = 0; VAR4 < VAR2; VAR4++)
        if (VAR1[VAR4] >= VAR5 && VAR1[VAR4] <= VAR7)
            return 0;
    for (VAR4 = 0; VAR4 < VAR2; VAR4++)
        VAR1[VAR4] -= (VAR1[VAR4] > VAR7) ? VAR6 : 0;
    return 1;
}