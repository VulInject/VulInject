static void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    VAR5 *VAR6;
    FUN2(VAR7.VAR8 == 1);
    VAR2 = FUN3();
    VAR6 = FUN4(VAR2, true);
    FUN5(VAR2);
    FUN6(VAR6, NULL, &VAR9);
    FUN7(VAR6);
    VAR4 = FUN8();
    FUN6(FUN9(VAR4), NULL, &VAR9);
    VAR2 = FUN10(VAR4);
    FUN2(VAR2 == &VAR7);
    FUN5(VAR2);
    FUN7(FUN9(VAR4));
    FUN2(VAR7.VAR8 == 1);
}