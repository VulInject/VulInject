int FUN1(unsigned VAR1, unsigned *VAR2, size_t VAR3, VAR4 **VAR5, VAR6 ***VAR7, VAR4 *VAR8)
{
    VAR6 **VAR9;
    VAR4 *VAR10;
    unsigned VAR11;
    VAR1 = FUN2(VAR1, *VAR2);
    VAR10 = FUN3(*VAR5, *VAR2 + 1, sizeof(VAR4));
    VAR9 = FUN3(*VAR7, *VAR2 + 1, sizeof(VAR6 *));
    if (VAR10)
        *VAR5 = VAR10;
    if (VAR9)
        *VAR7 = VAR9;
    if (!VAR10 || !VAR9)
        return FUN4(VAR12);
    memmove(*VAR5 + VAR1 + 1, *VAR5 + VAR1, sizeof(VAR4) * (*VAR2 - VAR1));
    memmove(*VAR7 + VAR1 + 1, *VAR7 + VAR1, sizeof(VAR6 *) * (*VAR2 - VAR1));
    memcpy(*VAR5 + VAR1, VAR8, sizeof(VAR4));
    (*VAR7)[VAR1] = NULL;
    (*VAR2)++;
    for (VAR11 = VAR1 + 1; VAR11 < *VAR2; VAR11++)
        if (*VAR7[VAR11])
            (*(unsigned *)((VAR13 *)*VAR7[VAR11] + VAR3))++;
    return 0;
}