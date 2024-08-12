static void FUN1(void)
{
    const char *VAR1 = "";
    int VAR2;
    char *VAR3 = NULL;
    int64_t VAR4 = 0xbaadf00d;
    VAR2 = FUN2(VAR1, &VAR3, &VAR4);
    FUN3(VAR2, ==, 0);
    FUN3(VAR4, ==, 12345000);
    FUN4(VAR3 == VAR1 + 6);
}