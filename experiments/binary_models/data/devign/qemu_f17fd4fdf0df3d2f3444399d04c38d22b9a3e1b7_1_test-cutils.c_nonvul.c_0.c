static void FUN1(void)
{
    const char *VAR1;
    char *VAR2 = NULL;
    int VAR3;
    int64_t VAR4 = 0xbaadf00d;
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, 0);
    FUN3(VAR4, ==, 0);
    FUN4(VAR2 == VAR1 + 1);
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, 0);
    FUN3(VAR4, ==, 12345);
    FUN4(VAR2 == VAR1 + 5);
    VAR3 = FUN2(VAR1, NULL, &VAR4);
    FUN3(VAR3, ==, 0);
    FUN3(VAR4, ==, 12345);
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, 0);
    FUN3(VAR4, ==, 0x1fffffffffffff);
    FUN4(VAR2 == VAR1 + 16);
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, 0);
    FUN3(VAR4, ==, 0x20000000000000);
    FUN4(VAR2 == VAR1 + 16);
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, 0);
    FUN3(VAR4, ==, 0x20000000000000);
    FUN4(VAR2 == VAR1 + 16);
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, 0);
    FUN3(VAR4, ==, 0x7ffffffffffffc00);
    FUN4(VAR2 == VAR1 + 19);
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2, &VAR4);
    FUN3(VAR3, ==, 0);
    FUN3(VAR4, ==, 0x7ffffffffffffc00);
    FUN4(VAR2 == VAR1 + 19);
}