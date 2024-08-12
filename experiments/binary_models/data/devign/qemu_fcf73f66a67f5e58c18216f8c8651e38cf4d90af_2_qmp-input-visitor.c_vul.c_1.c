static void FUN1(VAR1 *VAR2, double *VAR3, const char *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = FUN3(VAR8, VAR4, true);
    if (!VAR10 || (FUN4(VAR10) != VAR11 && FUN4(VAR10) != VAR12))
    {
        FUN5(VAR6, VAR13, VAR4 ? VAR4 : "", "");
        return;
    }
    if (FUN4(VAR10) == VAR12)
    {
        *VAR3 = FUN6(FUN7(VAR10));
    }
    else
    {
        *VAR3 = FUN8(FUN9(VAR10));
    }
}