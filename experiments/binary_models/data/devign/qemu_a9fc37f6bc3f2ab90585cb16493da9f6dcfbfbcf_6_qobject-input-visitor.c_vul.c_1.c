static void FUN1(VAR1 *VAR2, const char *VAR3, char **VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = FUN3(VAR8, VAR3, true, VAR6);
    VAR11 *VAR12;
    *VAR4 = NULL;
    if (!VAR10)
    {
        return;
    }
    VAR12 = FUN4(VAR10);
    if (!VAR12)
    {
        FUN5(VAR6, VAR13, VAR3 ? VAR3 : "", "");
        return;
    }
    *VAR4 = FUN6(FUN7(VAR12));
}