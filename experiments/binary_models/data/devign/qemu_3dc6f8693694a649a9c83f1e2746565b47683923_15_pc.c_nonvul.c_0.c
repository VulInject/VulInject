static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR7 *VAR11 = NULL;
    uint64_t VAR12;
    FUN3(VAR4, VAR5, &VAR12, &VAR11);
    if (VAR11)
    {
        FUN4(VAR8, VAR11);
        return;
    }
    if (VAR12 > (1ULL << 32))
    {
        FUN5(&VAR11, "" VAR13 "", VAR12);
        FUN4(VAR8, VAR11);
        return;
    }
    if (VAR12 < (1ULL << 20))
    {
        FUN6("" VAR13 "", VAR12);
    }
    VAR10->VAR14 = VAR12;
}