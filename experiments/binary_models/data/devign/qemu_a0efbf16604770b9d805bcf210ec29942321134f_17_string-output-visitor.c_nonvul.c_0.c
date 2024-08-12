FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, size_t VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    assert(VAR10->VAR11 == VAR12);
    assert(VAR5);
    if (*VAR5 && (*VAR5)->VAR13)
    {
        VAR10->VAR11 = VAR14;
    }
}