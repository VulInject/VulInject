static void FUN1(void)
{
    const char *VAR1;
    char *VAR2 = NULL;
    int VAR3;
    int64_t VAR4 = 0xbaadf00d;
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR4, ==, 123 * VAR5);
    FUN4(VAR2 == VAR1 + 3);
    VAR3 = FUN5(VAR1, NULL, &VAR4);
    FUN3(VAR3, ==, -VAR6);
    VAR1 = "";
    VAR3 = FUN5(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, 0);
    FUN3(VAR4, ==, 1024);
    FUN4(VAR2 == VAR1 + 2);
    VAR3 = FUN5(VAR1, NULL, &VAR4);
    FUN3(VAR3, ==, -VAR6);
}