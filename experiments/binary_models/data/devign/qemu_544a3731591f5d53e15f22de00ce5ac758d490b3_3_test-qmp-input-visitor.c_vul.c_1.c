static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR5 = FUN2(VAR2, ""
                                      ""
                                      ""
                                      "");
    FUN3(VAR5, NULL, &VAR7, &VAR10);
    FUN4(VAR7->VAR11, ==, VAR12);
    FUN5(VAR7->VAR13, ==, "");
    FUN4(VAR7->VAR14, ==, 41);
    FUN4(VAR7->VAR15.VAR16->VAR17, ==, true);
    VAR9 = FUN6(VAR7);
    FUN7(&VAR9->VAR11 == &VAR7->VAR11);
    FUN8(VAR7);
}