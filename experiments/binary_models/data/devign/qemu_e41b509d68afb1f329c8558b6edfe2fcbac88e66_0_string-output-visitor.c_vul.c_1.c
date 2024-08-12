static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR2);
    static const char VAR11[] = {'', '', '', '', ''};
    uint64_t VAR12, VAR13;
    char *VAR14;
    int VAR15;
    if (!VAR9->VAR16)
    {
        VAR14 = FUN3("", (long long)*VAR4);
        FUN4(VAR9, VAR14);
        return;
    }
    VAR13 = *VAR4;
    VAR15 = 64 - FUN5(VAR13);
    VAR15 /= 10;
    if (VAR15 >= FUN6(VAR11))
    {
        VAR15 = FUN6(VAR11) - 1;
    }
    VAR12 = 1ULL << (VAR15 * 10);
    VAR14 = FUN3("", (double)VAR13 / VAR12, VAR11[VAR15]);
    FUN4(VAR9, VAR14);
}