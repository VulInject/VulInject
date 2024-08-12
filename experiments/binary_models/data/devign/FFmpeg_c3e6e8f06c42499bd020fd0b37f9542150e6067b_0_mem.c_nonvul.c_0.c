int FUN1(void *VAR1, size_t VAR2, size_t VAR3)
{
    void **VAR4 = VAR1;
    void *VAR5;
    if (!VAR3 || VAR2 >= VAR6 / VAR3)
        return FUN2(VAR7);
    if (!VAR2)
    {
        FUN3(VAR1);
        return 0;
    }
    VAR5 = FUN4(*VAR4, VAR2 * VAR3);
    if (!VAR5)
    {
        FUN3(VAR1);
        return FUN2(VAR7);
    }
    *VAR4 = VAR5;
    return 0;
}