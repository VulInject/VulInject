static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int *VAR6)
{
    int VAR7;
    if (VAR4)
    {
        VAR1 *VAR8 = VAR2 + VAR9;
        for (VAR7 = 0; VAR7 < VAR4; VAR7++)
            VAR3[VAR7] = VAR8[VAR7 - VAR4] * 3 >> 2;
        FUN2((VAR10 *)(VAR3 + VAR4), VAR4 * sizeof(*VAR3), (VAR11 - VAR4) * sizeof(*VAR3));
    }
    else
    {
        for (VAR7 = 0; VAR7 < VAR11; VAR7++)
        {
            *VAR6 = *VAR6 * 521 + 259;
            VAR3[VAR7] = VAR5 * *VAR6 >> 15;
        }
        memset(VAR2, 0, (VAR11 + VAR9) * sizeof(*VAR2));
    }
}