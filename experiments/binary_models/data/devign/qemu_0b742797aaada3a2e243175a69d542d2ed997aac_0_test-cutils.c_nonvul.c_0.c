static void FUN1(void)
{
    const char *VAR1;
    char *VAR2 = NULL;
    int64_t VAR3;
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2);
    FUN3(VAR3, ==, -VAR4);
    FUN4(VAR2 == VAR1 + 2);
    VAR1 = "";
    VAR3 = FUN5(VAR1, &VAR2, VAR5);
    FUN3(VAR3, ==, -VAR4);
    FUN4(VAR2 == VAR1 + 19);
    VAR1 = "";
    VAR3 = FUN5(VAR1, &VAR2, VAR5);
    FUN3(VAR3, ==, -VAR4);
    FUN4(VAR2 == VAR1 + 19);
    VAR1 = "";
    VAR3 = FUN5(VAR1, &VAR2, VAR5);
    FUN3(VAR3, ==, -VAR4);
    FUN4(VAR2 == VAR1 + 19);
    VAR1 = "";
    VAR3 = FUN2(VAR1, &VAR2);
    FUN3(VAR3, ==, -VAR4);
    FUN4(VAR2 == VAR1 + 3);
}