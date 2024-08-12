static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR5;
    VAR7 *VAR11 = NULL;
    int64_t VAR12;
    FUN2(VAR4, &VAR12, VAR6, &VAR11);
    if (VAR11)
    {
        FUN3(VAR8, VAR11);
        return;
    }
    if (VAR12 < 0)
    {
        FUN4(VAR8, "");
        return;
    }
    if (VAR12 > VAR13)
    {
        FUN4(VAR8, "");
        return;
    }
    if (VAR12 == VAR10->VAR14)
    {
        return;
    }
    if (VAR12 == 0)
    {
        FUN5(VAR10);
        return;
    }
    if (FUN6(VAR10))
    {
        VAR10->VAR14 = VAR12;
        FUN7(VAR10, VAR12);
        return;
    }
    FUN8(VAR10->VAR15 == NULL);
    VAR10->VAR15 = FUN9(VAR16, VAR17, VAR10);
    VAR10->VAR14 = VAR12;
    FUN7(VAR10, 0);
}