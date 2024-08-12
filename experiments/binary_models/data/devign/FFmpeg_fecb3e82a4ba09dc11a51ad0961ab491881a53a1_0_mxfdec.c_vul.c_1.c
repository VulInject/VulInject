static inline int FUN1(VAR1 *VAR2, int VAR3, char **VAR4, int VAR5)
{
    int VAR6;
    size_t VAR7;
    if (VAR3 < 0)
        return FUN2(VAR8);
    VAR7 = VAR3 + VAR3 / 2 + 1;
    *VAR4 = FUN3(VAR7);
    if (!*VAR4)
        return FUN2(VAR9);
    if (VAR5)
        VAR6 = FUN4(VAR2, VAR3, *VAR4, VAR7);
    else
        VAR6 = FUN5(VAR2, VAR3, *VAR4, VAR7);
    if (VAR6 < 0)
    {
        FUN6(VAR4);
        return VAR6;
    }
    return VAR6;
}