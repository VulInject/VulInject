static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    int64_t VAR4 = -1;
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8;
    VAR8 = FUN2(VAR2, "");
    FUN3(VAR8, NULL, NULL, 0, &VAR9);
    FUN4(VAR8, NULL, &VAR4, &VAR9);
    FUN5(VAR4, ==, 1);
    FUN4(VAR8, NULL, &VAR4, &VAR9);
    FUN5(VAR4, ==, 2);
    FUN6(VAR8, &VAR6);
    FUN7(&VAR6);
    FUN8(VAR8, NULL);
}