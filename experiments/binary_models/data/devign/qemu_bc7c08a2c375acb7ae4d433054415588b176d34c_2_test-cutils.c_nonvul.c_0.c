static void FUN1(void)
{
    const char *VAR1 = "";
    char VAR2 = '';
    const char *VAR3 = &VAR2;
    unsigned long VAR4 = 999;
    int VAR5;
    VAR5 = FUN2(VAR1, &VAR3, 16, &VAR4);
    FUN3(VAR5, ==, 0);
    FUN4(VAR4, ==, 0x123);
    FUN5(VAR3 == VAR1 + strlen(VAR1));
    VAR1 = "";
    VAR4 = 999;
    VAR3 = &VAR2;
    VAR5 = FUN2(VAR1, &VAR3, 0, &VAR4);
    FUN3(VAR5, ==, 0);
    FUN4(VAR4, ==, 0x123);
    FUN5(VAR3 == VAR1 + strlen(VAR1));
}