static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11 = FUN3(VAR9, VAR5, true);
    if (!VAR11 || FUN4(VAR11) != VAR12)
    {
        FUN5(VAR7, VAR13, VAR5 ? VAR5 : "", "");
        return;
    }
    *VAR4 = FUN6(FUN7(VAR11));
}