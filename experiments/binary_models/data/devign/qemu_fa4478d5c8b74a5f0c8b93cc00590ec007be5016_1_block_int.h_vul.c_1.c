void FUN1(VAR1 *VAR2, VAR1 *VAR3, const char *VAR4, int64_t VAR5, VAR6 *VAR7, void *VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR12 = FUN2(&VAR15, VAR2, VAR5, VAR7, VAR8, VAR10);
    if (!VAR12)
    {
        return;
    }
    VAR12->VAR3 = VAR3;
    if (VAR4)
    {
        FUN3(VAR12->VAR16, sizeof(VAR12->VAR16), VAR4);
    }
    VAR14 = FUN4(VAR17);
    FUN5(VAR2, VAR3, VAR12, VAR14, VAR8);
    FUN6(VAR14, VAR12);
}