static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7, int *VAR8, const VAR6 *VAR9, int VAR10, int VAR11)
{
    unsigned int *VAR12 = VAR2->VAR13;
    int VAR14 = VAR5 ? FUN2(VAR5) : (*VAR12 % 10001 + 1);
    int VAR15;
    *VAR7 = FUN3(VAR10 + VAR16);
    memcpy(*VAR7, VAR9, VAR10 + VAR16);
    for (VAR15 = 0; VAR15 < VAR10; VAR15++)
    {
        (*VAR12) += (*VAR7)[VAR15] + 1;
        if (*VAR12 % VAR14 == 0)
            (*VAR7)[VAR15] = *VAR12;
    }
    return 1;