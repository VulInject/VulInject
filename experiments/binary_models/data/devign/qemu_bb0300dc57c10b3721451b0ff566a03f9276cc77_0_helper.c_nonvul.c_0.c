static void FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, VAR2 *VAR6, VAR2 *VAR7)
{
    int VAR8;
    int VAR9 = 0;
    for (VAR8 = 0; VAR8 < 32; VAR8++)
        if (VAR10[VAR8] && !strcmp(VAR1, VAR10[VAR8]))
        {
            *VAR3 |= 1 << VAR8;
            VAR9 = 1;
        }
    for (VAR8 = 0; VAR8 < 32; VAR8++)
        if (VAR11[VAR8] && !strcmp(VAR1, VAR11[VAR8]))
        {
            *VAR4 |= 1 << VAR8;
            VAR9 = 1;
        }
    for (VAR8 = 0; VAR8 < 32; VAR8++)
        if (VAR12[VAR8] && !strcmp(VAR1, VAR12[VAR8]))
        {
            *VAR5 |= 1 << VAR8;
            VAR9 = 1;
        }
    for (VAR8 = 0; VAR8 < 32; VAR8++)
        if (VAR13[VAR8] && !strcmp(VAR1, VAR13[VAR8]))
        {
            *VAR6 |= 1 << VAR8;
            VAR9 = 1;
        }
    for (VAR8 = 0; VAR8 < 32; VAR8++)
        if (VAR14[VAR8] && !strcmp(VAR1, VAR14[VAR8]))
        {
            *VAR7 |= 1 << VAR8;
            VAR9 = 1;
        }
    if (!VAR9)
    {
        fprintf(VAR15, "", VAR1);
    }
}