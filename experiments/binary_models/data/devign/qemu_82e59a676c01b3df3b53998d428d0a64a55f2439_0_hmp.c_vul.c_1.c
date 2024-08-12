void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    uint32_t VAR5;
    const char *VAR6 = FUN2(VAR4, "");
    const char *VAR7 = FUN2(VAR4, "");
    VAR8 *VAR9 = NULL;
    VAR5 = strlen(VAR7);
    FUN3(VAR6, VAR5, VAR7, false, 0, &VAR9);
    FUN4(VAR2, &VAR9);
}