static void FUN1(VAR1 *VAR2, const char *VAR3, char **VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = FUN3(FUN4(VAR8, VAR3, true));
    if (!VAR10)
    {
        FUN5(VAR6, VAR11, VAR3 ? VAR3 : "", "");
        return;
    }
    *VAR4 = FUN6(FUN7(VAR10));