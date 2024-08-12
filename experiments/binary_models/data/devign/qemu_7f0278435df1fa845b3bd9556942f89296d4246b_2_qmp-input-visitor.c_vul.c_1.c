static void FUN1(VAR1 *VAR2, char **VAR3, const char *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = FUN3(VAR8, VAR4, true);
    if (!VAR10 || FUN4(VAR10) != VAR11)
    {
        FUN5(VAR6, VAR12, VAR4 ? VAR4 : "", "");
        return;
    }
    *VAR3 = FUN6(FUN7(FUN8(VAR10)));
}