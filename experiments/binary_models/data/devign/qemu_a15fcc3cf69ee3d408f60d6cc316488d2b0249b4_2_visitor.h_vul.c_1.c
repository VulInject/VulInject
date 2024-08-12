void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, size_t VAR6, bool VAR7, VAR8 **VAR9)
{
    VAR8 *VAR10 = NULL;
    assert(VAR5 && VAR6 >= sizeof(VAR4));
    assert(VAR2->VAR11 != VAR12 || *VAR5);
    if (VAR2->VAR13)
    {
        VAR2->FUN2(VAR2, VAR3, VAR5, VAR6, VAR7, &VAR10);
    }
    if (VAR2->VAR11 == VAR14)
    {
        assert(VAR2->VAR13 && !VAR10 != !*VAR5);
    }
    FUN3(VAR9, VAR10);
}