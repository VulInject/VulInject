void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, size_t VAR6, VAR7 **VAR8)
{
    VAR7 *VAR9 = NULL;
    assert(!VAR5 || VAR6 >= sizeof(VAR4));
    VAR2->FUN2(VAR2, VAR3, VAR5, VAR6, &VAR9);
    if (VAR5 && VAR2->VAR10 == VAR11)
    {
        assert(!(VAR9 && *VAR5));
    }
    FUN3(VAR8, VAR9);
}