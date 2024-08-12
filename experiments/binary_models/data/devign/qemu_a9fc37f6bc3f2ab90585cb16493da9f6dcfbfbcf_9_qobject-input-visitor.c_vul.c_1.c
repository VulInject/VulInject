static void FUN1(VAR1 *VAR2, const char *VAR3, double *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = FUN3(VAR8, VAR3, true, VAR6);
    VAR11 *VAR12;
    VAR13 *VAR14;
    if (!VAR10)
    {
        return;
    }
    VAR12 = FUN4(VAR10);
    if (VAR12)
    {
        *VAR4 = FUN5(FUN4(VAR10));
        return;
    }
    VAR14 = FUN6(VAR10);
    if (VAR14)
    {
        *VAR4 = FUN7(FUN6(VAR10));
        return;
    }
    FUN8(VAR6, VAR15, VAR3 ? VAR3 : "", "");
}