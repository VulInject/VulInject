static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = VAR5;
    char **VAR13 = FUN3(VAR10, VAR12);
    VAR7 *VAR14 = NULL;
    char *VAR15;
    if (VAR10->VAR16)
    {
        FUN4(VAR10, VAR6, VAR8);
        return;
    }
    FUN5(VAR4, &VAR15, VAR6, &VAR14);
    if (VAR14)
    {
        FUN6(VAR8, VAR14);
        return;
    }
    FUN7(*VAR13);
    *VAR13 = VAR15;
}