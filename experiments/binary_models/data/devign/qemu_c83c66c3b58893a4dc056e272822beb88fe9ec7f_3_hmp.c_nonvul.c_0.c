void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    const char *VAR7 = FUN2(VAR4, "");
    const char *VAR8 = FUN3(VAR4, "");
    int64_t VAR9 = FUN4(VAR4, "", 0);
    FUN5(VAR7, VAR8 != NULL, VAR8, FUN6(VAR4, ""), VAR9, &VAR6);
    FUN7(VAR2, &VAR6);
}