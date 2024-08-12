static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    const int64_t VAR11 = 0;
    const int64_t VAR12 = VAR13;
    int64_t VAR14;
    FUN3(VAR4, &VAR14, VAR6, VAR8);
    if (FUN4(VAR8))
    {
        return;
    }
    if (VAR14 < VAR11 || VAR14 > VAR12)
    {
        FUN5(VAR8, VAR15, "", VAR6 ? VAR6 : "", VAR14, VAR11, VAR12);
        return;
    }
    VAR10->VAR16.VAR17 = VAR14 / 1000;
}