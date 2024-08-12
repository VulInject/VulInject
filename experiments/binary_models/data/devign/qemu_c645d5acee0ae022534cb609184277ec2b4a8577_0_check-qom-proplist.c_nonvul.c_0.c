static void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    VAR5 *VAR6 = NULL;
    const char *VAR7 = VAR8
        ""
        "";
    FUN2(&VAR9);
    VAR2 = FUN3(&VAR9, VAR7, true, &VAR6);
    FUN4(VAR6 == NULL);
    FUN4(VAR2);
    VAR4 = FUN5(FUN6(VAR2, &VAR6));
    FUN4(VAR6 == NULL);
    FUN4(VAR4);
    FUN7(VAR4->VAR10, ==, "");
    FUN4(VAR4->VAR11 == true);
    FUN4(VAR4->VAR12 == VAR13);
    FUN8("", &VAR6);
    FUN4(VAR6 == NULL);
    FUN9(VAR6);
    FUN10(FUN11(&VAR9, ""));
}