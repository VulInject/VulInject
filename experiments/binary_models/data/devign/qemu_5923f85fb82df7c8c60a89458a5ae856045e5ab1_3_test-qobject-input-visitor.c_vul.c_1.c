static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5 = NULL;
    uint64_t VAR6 = 0;
    int64_t VAR7;
    double VAR8;
    int VAR9 = 42;
    VAR10 *VAR11;
    VAR11 = FUN2(VAR2, "", VAR9);
    FUN3(VAR11, NULL, &VAR6, &VAR12);
    FUN4(VAR6, ==, (VAR13)VAR9);
    FUN5(VAR11, NULL, &VAR7, &VAR12);
    FUN6(VAR7, ==, VAR9);
    FUN7(VAR11, NULL, &VAR8, &VAR12);
    FUN8(VAR8, ==, VAR9);
    VAR11 = FUN2(VAR2, "", -VAR9);
    FUN3(VAR11, NULL, &VAR6, &VAR12);
    FUN4(VAR6, ==, (VAR13)-VAR9);
    VAR11 = FUN2(VAR2, "");
    FUN3(VAR11, NULL, &VAR6, &VAR5);
    FUN9(&VAR5);
    FUN7(VAR11, NULL, &VAR8, &VAR12);
    FUN8(VAR8, ==, 18446744073709552000.0);
}