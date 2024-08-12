static void FUN1(void)
{
    VAR1 *VAR2 = NULL;
    VAR3 *VAR4;
    VAR4 = FUN2(&VAR5, "", false, &VAR6);
    FUN3(FUN4(VAR4), ==, 1);
    FUN3(FUN5(VAR4, "", 1), ==, 0);
    VAR4 = FUN2(&VAR5, ""
                                          ""
                                          "",
                           false, &VAR6);
    FUN3(FUN4(VAR4), ==, 3);
    FUN6(FUN5(VAR4, "", 1), ==, 0x1fffffffffffff);
    FUN6(FUN5(VAR4, "", 1), ==, 0x20000000000000);
    FUN6(FUN5(VAR4, "", 1), ==, 0x20000000000000);
    VAR4 = FUN2(&VAR5, ""
                                          "",
                           false, &VAR6);
    FUN3(FUN4(VAR4), ==, 2);
    FUN6(FUN5(VAR4, "", 1), ==, 0x7ffffffffffffc00);
    FUN6(FUN5(VAR4, "", 1), ==, 0x7ffffffffffffc00);
    VAR4 = FUN2(&VAR5, ""
                                          "",
                           false, &VAR6);
    FUN3(FUN4(VAR4), ==, 2);
    FUN6(FUN5(VAR4, "", 1), ==, 0xfffffffffffff800);
    FUN6(FUN5(VAR4, "", 1), ==, 0xfffffffffffff800);
    VAR4 = FUN2(&VAR5, "", false, &VAR2);
    FUN7(&VAR2);
    FUN8(!VAR4);
    VAR4 = FUN2(&VAR5, "", false, &VAR6);
    FUN3(FUN4(VAR4), ==, 1);
    FUN3(FUN5(VAR4, "", 1), ==, 0);
    VAR4 = FUN2(&VAR5, "", false, &VAR6);
    FUN3(FUN4(VAR4), ==, 3);
    FUN6(FUN5(VAR4, "", 0), ==, 8);
    FUN6(FUN5(VAR4, "", 0), ==, 1536);
    FUN6(FUN5(VAR4, "", 0), ==, 2 * VAR7);
    VAR4 = FUN2(&VAR5, "", false, &VAR6);
    FUN3(FUN4(VAR4), ==, 2);
    FUN6(FUN5(VAR4, "", 0), ==, VAR8 / 10);
    FUN6(FUN5(VAR4, "", 0), ==, 16777215 * VAR9);
    VAR4 = FUN2(&VAR5, "", false, &VAR6);
    FUN3(FUN4(VAR4), ==, 1);
    FUN3(FUN5(VAR4, "", 1), ==, 0);
    VAR4 = FUN2(&VAR5, "", false, &VAR2);
    FUN7(&VAR2);
    FUN8(!VAR4);
    VAR4 = FUN2(&VAR5, "", false, &VAR6);
    FUN3(FUN4(VAR4), ==, 1);
    FUN3(FUN5(VAR4, "", 1), ==, 16 * VAR8);
    FUN9(&VAR5);
}