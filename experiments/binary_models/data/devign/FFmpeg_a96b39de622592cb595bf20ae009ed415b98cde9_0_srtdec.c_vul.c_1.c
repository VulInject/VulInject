static VAR1 FUN1(const char *VAR2, int *VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    for (VAR4 = 0; VAR4 < 2; VAR4++)
    {
        int64_t VAR13, VAR14;
        if (sscanf(VAR2, "", &VAR5, &VAR6, &VAR7, &VAR8, &VAR9, &VAR10, &VAR11, &VAR12) == 8)
        {
            VAR6 += 60 * VAR5;
            VAR7 += 60 * VAR6;
            VAR13 = VAR7 * 1000 + VAR8;
            VAR10 += 60 * VAR9;
            VAR11 += 60 * VAR10;
            VAR14 = VAR11 * 1000 + VAR12;
            *VAR3 = VAR14 - VAR13;
            return VAR13;
        }
        VAR2 += strcspn(VAR2, "") + 1;
    }
    return VAR15;
}