static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const char *(*VAR7)(void *VAR8), const char *VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13 = FUN2(VAR2);
    void **VAR8 = FUN3(VAR13, VAR6);
    char *VAR14;
    VAR14 = (char *)(*VAR8 ? FUN4(*VAR8) : "");
    FUN5(VAR4, &VAR14, VAR9, VAR11);
}