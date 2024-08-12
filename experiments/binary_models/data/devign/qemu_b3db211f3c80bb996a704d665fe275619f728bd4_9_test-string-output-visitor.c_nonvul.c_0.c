static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    int64_t VAR4 = 42;
    VAR5 *VAR6 = NULL;
    char *VAR7;
    FUN2(VAR2->VAR8, NULL, &VAR4, &VAR6);
    FUN3(!VAR6);
    VAR7 = FUN4(VAR2);
    if (VAR2->VAR9)
    {
        FUN5(VAR7, ==, "");
    }
    else
    {
        FUN5(VAR7, ==, "");
    }
}