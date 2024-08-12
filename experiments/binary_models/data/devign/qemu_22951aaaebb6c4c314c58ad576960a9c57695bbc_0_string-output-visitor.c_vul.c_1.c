static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    static const char VAR10[] = {'', '', '', '', '', '', ''};
    uint64_t VAR11, VAR12;
    char *VAR13;
    int VAR14;
    if (!VAR9->VAR15)
    {
        VAR13 = FUN3("" VAR16, *VAR5);
        FUN4(VAR9, VAR13);
        return;
    }
    VAR12 = *VAR5;
    FUN5(VAR12 / (1000.0 / 1024.0), &VAR14);
    VAR14 = (VAR14 - 1) / 10;
    assert(VAR14 < FUN6(VAR10));
    VAR11 = 1ULL << (VAR14 * 10);
    VAR13 = FUN3("" VAR16 "", VAR12, (double)VAR12 / VAR11, VAR10[VAR14], VAR14 ? "" : "");
    FUN4(VAR9, VAR13);
}