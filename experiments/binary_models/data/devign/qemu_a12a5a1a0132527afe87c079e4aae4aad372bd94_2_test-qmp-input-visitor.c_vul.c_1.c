static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    VAR5 = FUN2(VAR2, "");
    FUN3(VAR5, &VAR9, NULL, &VAR10);
    FUN4(VAR9->VAR11, ==, VAR12);
    FUN4(VAR9->VAR13.VAR14, ==, 42);
    FUN5(VAR9);
    VAR5 = FUN2(VAR2, "");
    FUN3(VAR5, &VAR9, NULL, &VAR10);
    FUN4(VAR9->VAR11, ==, VAR15);
    FUN6(VAR9->VAR13.VAR16, ==, "");
    FUN5(VAR9);
    VAR5 = FUN2(VAR2, "");
    FUN3(VAR5, &VAR9, NULL, &VAR7);
    FUN7(VAR7);
    FUN8(VAR7);
    VAR7 = NULL;
    FUN5(VAR9);
}