static void FUN1(void)
{
    VAR1 *VAR2 = NULL;
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR6 = FUN2("", NULL, &VAR11);
    VAR4 = FUN3(FUN4(VAR6));
    FUN5(VAR6);
    FUN6(VAR4, NULL, NULL, 0, &VAR11);
    FUN7(VAR4, "", &VAR8, &VAR11);
    FUN8(VAR8->VAR12, ==, VAR13);
    FUN9(VAR8->VAR14.VAR15, ==, "");
    FUN10(VAR8);
    FUN11(VAR4, "", &VAR10, &VAR2);
    FUN12(&VAR2);
    FUN13(VAR4, NULL);
    FUN14(VAR4);
}