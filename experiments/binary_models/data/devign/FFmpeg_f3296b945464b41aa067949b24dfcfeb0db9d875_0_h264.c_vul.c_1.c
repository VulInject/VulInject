static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int *VAR6)
{
    int VAR7, VAR8 = 0;
    if (*VAR6 >= VAR5 - VAR2->VAR9)
        return -1;
    for (VAR7 = 0; VAR7 < VAR2->VAR9; VAR7++)
        VAR8 = (VAR8 << 8) | VAR4[(*VAR6)++];
    if (VAR8 <= 0 || VAR8 > VAR5 - *VAR6)
    {
        FUN2(VAR2->VAR10, VAR11, "", VAR8);
        return -1;
    }
    return VAR8;
}