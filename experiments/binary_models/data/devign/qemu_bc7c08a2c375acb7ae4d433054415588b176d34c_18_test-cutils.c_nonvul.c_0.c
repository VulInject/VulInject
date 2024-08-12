static void FUN1(void)
{
    const char *VAR1 = "";
    char VAR2 = '';
    const char *VAR3 = &VAR2;
    uint64_t VAR4 = 999;
    int VAR5;
    VAR5 = FUN2(VAR1, &VAR3, 8, &VAR4);
    FUN3(VAR5, ==, 0);
    FUN4(VAR4, ==, 0123);
    FUN5(VAR3 == VAR1 + strlen(VAR1));
    VAR3 = &VAR2;
    VAR4 = 999;
    VAR5 = FUN2(VAR1, &VAR3, 0, &VAR4);
    FUN3(VAR5, ==, 0);
    FUN4(VAR4, ==, 0123);
    FUN5(VAR3 == VAR1 + strlen(VAR1));
}