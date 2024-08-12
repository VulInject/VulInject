static int FUN1(VAR1 *VAR2, void **VAR3, VAR4 *VAR5, int64_t VAR6)
{
    int64_t VAR7, VAR8;
    void *VAR9;
    VAR7 = FUN2(VAR2, FUN3(VAR2, *VAR5)) * VAR2->VAR10;
    VAR8 = FUN2(VAR2, FUN3(VAR2, VAR6)) * VAR2->VAR10;
    if (VAR8 == VAR7)
    {
        *VAR5 = VAR6;
        return 0;
    }
    assert(VAR8 > 0);
    if (VAR8 > VAR11)
    {
        return -VAR12;
    }
    VAR9 = FUN4(*VAR3, VAR8);
    if (!VAR9)
    {
        return -VAR12;
    }
    if (VAR8 > VAR7)
    {
        memset((char *)VAR9 + VAR7, 0, VAR8 - VAR7);
    }
    *VAR3 = VAR9;
    *VAR5 = VAR6;
    return 0;
}