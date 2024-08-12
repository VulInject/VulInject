static const char *FUN1(const char *VAR1, int *VAR2, int *VAR3, int *VAR4, int *VAR5, int *VAR6, int *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    for (VAR8 = 0; VAR8 < 2; VAR8++)
    {
        int VAR15 = sscanf(VAR1, ""
                            "",
                       &VAR9, &VAR10, &VAR11, VAR2, &VAR12, &VAR13, &VAR14, VAR3, VAR4, VAR6, VAR5, VAR7);
        VAR1 += strcspn(VAR1, "") + 1;
        if (VAR15 >= 8)
        {
            *VAR2 = 100 * (VAR11 + 60 * (VAR10 + 60 * VAR9)) + *VAR2 / 10;
            *VAR3 = 100 * (VAR14 + 60 * (VAR13 + 60 * VAR12)) + *VAR3 / 10;
            return VAR1;
        }
    }
    return NULL;
}