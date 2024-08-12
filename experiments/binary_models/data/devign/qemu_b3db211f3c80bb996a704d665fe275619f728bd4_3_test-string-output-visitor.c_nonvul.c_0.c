static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5 = NULL;
    bool VAR6 = true;
    char *VAR7;
    FUN2(VAR2->VAR8, NULL, &VAR6, &VAR5);
    FUN3(!VAR5);
    VAR7 = FUN4(VAR2);
    FUN5(VAR7, ==, "");
}