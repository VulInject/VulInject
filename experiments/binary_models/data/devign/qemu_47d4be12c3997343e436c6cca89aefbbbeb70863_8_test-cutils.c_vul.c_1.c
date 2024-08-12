static void FUN1(void)
{
    const char *VAR1 = "";
    char VAR2 = '';
    const char *VAR3 = &VAR2;
    unsigned long VAR4 = 999;
    int VAR5;
    VAR5 = FUN2(VAR1, &VAR3, 0, &VAR4);
    FUN3(VAR5, ==, 0);
    FUN3(VAR4, ==, 0);
    FUN4(VAR3 == VAR1);
}