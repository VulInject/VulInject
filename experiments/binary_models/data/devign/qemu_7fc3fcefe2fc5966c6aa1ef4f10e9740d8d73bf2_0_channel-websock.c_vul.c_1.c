static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    char VAR6[VAR7 + VAR8 + 1];
    char *VAR9 = NULL;
    char *VAR10 = FUN2();
    FUN3(VAR6, VAR3, VAR7 + 1);
    FUN4(VAR6, VAR11, VAR7 + VAR8 + 1);
    if (FUN5(VAR12, VAR6, VAR7 + VAR8, &VAR9, VAR5) < 0)
    {
        FUN6(VAR2, VAR13);
        return;
    }
    FUN7(VAR2, VAR14, VAR10, VAR9);
    FUN8(VAR10);
    FUN8(VAR9);
}