void FUN1(VAR1 *VAR2, const char *VAR3, void **VAR4, size_t VAR5, VAR6 **VAR7)
{
    VAR6 *VAR8 = NULL;
    if (VAR4)
    {
        assert(VAR5);
        assert(VAR2->VAR9 != VAR10 || *VAR4);
    }
    VAR2->FUN2(VAR2, VAR3, VAR4, VAR5, &VAR8);
    if (VAR4 && VAR2->VAR9 == VAR11)
    {
        assert(!VAR8 != !*VAR4);
    }
    FUN3(VAR7, VAR8);
}