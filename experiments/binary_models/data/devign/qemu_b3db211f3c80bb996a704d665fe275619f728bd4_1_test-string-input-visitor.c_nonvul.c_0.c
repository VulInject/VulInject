static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    int64_t VAR4 = 0, VAR5 = -42;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    VAR9 = FUN2(VAR2, "");
    FUN3(VAR9, NULL, &VAR4, &VAR7);
    FUN4(!VAR7);
    FUN5(VAR4, ==, VAR5);
    FUN6(VAR2, VAR3);
    VAR9 = FUN2(VAR2, "");
    FUN3(VAR9, NULL, &VAR4, &VAR7);
    FUN7(&VAR7);
}