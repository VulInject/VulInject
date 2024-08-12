int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, size_t VAR6)
{
    int VAR7;
    int VAR8;
    assert(!FUN2(VAR2));
    VAR8 = VAR2->VAR9 + VAR6;
    VAR7 = VAR2->VAR10 - VAR8;
    if (VAR7 < VAR5)
    {
        FUN3(VAR2);
        VAR8 = VAR2->VAR9 + VAR6;
        VAR7 = VAR2->VAR10 - VAR8;
    }
    if (VAR7 <= 0)
    {
        return 0;
    }
    if (VAR5 > VAR7)
    {
        VAR5 = VAR7;
    }
    memcpy(VAR4, VAR2->VAR4 + VAR8, VAR5);
    return VAR5;
}