static void FUN1(void)
{
    VAR1 *VAR2 = NULL;
    VAR3 *VAR4, *VAR5;
    VAR4 = FUN2("", NULL, &VAR2);
    FUN3(&VAR2);
    FUN4(!VAR4);
    VAR4 = FUN2("", NULL, &VAR6);
    FUN5(FUN6(VAR4), ==, 1);
    FUN7(FUN8(VAR4, ""));
    FUN9(VAR4);
    VAR4 = FUN2("", NULL, &VAR6);
    FUN5(FUN6(VAR4), ==, 1);
    FUN7(FUN8(VAR4, ""));
    FUN9(VAR4);
    VAR4 = FUN2("", NULL, &VAR6);
    FUN5(FUN6(VAR4), ==, 1);
    VAR5 = FUN10(VAR4, "");
    FUN5(FUN6(VAR5), ==, 1);
    FUN7(FUN8(VAR5, ""));
    FUN9(VAR4);
    VAR4 = FUN2("", NULL, &VAR2);
    FUN3(&VAR2);
    FUN4(!VAR4);
    VAR4 = FUN2("", NULL, &VAR2);
    FUN3(&VAR2);
    FUN4(!VAR4);
    VAR4 = FUN2("", NULL, &VAR2);
    FUN3(&VAR2);
    FUN4(!VAR4);
    VAR4 = FUN2("", NULL, &VAR2);
    FUN3(&VAR2);
    FUN4(!VAR4);
}