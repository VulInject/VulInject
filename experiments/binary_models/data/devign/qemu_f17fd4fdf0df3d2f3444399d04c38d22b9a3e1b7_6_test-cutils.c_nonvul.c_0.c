static void FUN1(void)
{
    const char *VAR1;
    char *VAR2 = NULL;
    int VAR3;
    int64_t VAR4 = 0xbaadf00d;
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, -VAR5);
    FUN4(VAR2 == VAR1);
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, -VAR5);
    FUN4(VAR2 == VAR1);
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, -VAR5);
    FUN4(VAR2 == VAR1);
}