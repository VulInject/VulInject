static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = FUN3(VAR2);
    VAR7 *VAR13 = NULL;
    int64_t VAR14;
    if (VAR12->VAR15)
    {
        FUN4(VAR8, ""
                         "",
                   VAR5, FUN5(VAR2));
        return;
    }
    FUN6(VAR4, VAR5, &VAR14, &VAR13);
    if (VAR13)
    {
        FUN7(VAR8, VAR13);
        return;
    }
    VAR10->VAR16 = VAR14;
}