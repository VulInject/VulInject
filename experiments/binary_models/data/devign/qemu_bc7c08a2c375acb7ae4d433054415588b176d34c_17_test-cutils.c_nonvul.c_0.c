static void FUN1(void)
{
    char *VAR1 = FUN2("", VAR2);
    char VAR3 = '';
    const char *VAR4 = &VAR3;
    unsigned long VAR5 = 999;
    int VAR6;
    VAR6 = FUN3(VAR1, &VAR4, 0, &VAR5);
    FUN4(VAR6, ==, 0);
    FUN5(VAR5, ==, VAR2);
    FUN6(VAR4 == VAR1 + strlen(VAR1));
    FUN7(VAR1);
}