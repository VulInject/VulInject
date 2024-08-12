static void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    VAR1 *VAR5;
    VAR6 *VAR7;
    VAR2 = FUN2("", NULL);
    VAR4 = FUN3(VAR2);
    FUN4(VAR4);
    FUN4(FUN5(VAR4) == true);
    VAR7 = FUN6(VAR2);
    FUN4(strcmp(FUN7(VAR7), "") == 0);
    FUN8(VAR7);
    FUN8(VAR4);
    VAR2 = FUN2("", NULL);
    VAR4 = FUN3(VAR2);
    FUN4(VAR4);
    FUN4(FUN5(VAR4) == false);
    VAR7 = FUN6(VAR2);
    FUN4(strcmp(FUN7(VAR7), "") == 0);
    FUN8(VAR7);
    FUN8(VAR4);
    VAR4 = FUN3(FUN9("", false));
    FUN4(VAR4);
    FUN4(FUN5(VAR4) == false);
    FUN8(VAR4);
    VAR4 = FUN3(FUN9("", 2));
    FUN4(VAR4);
    FUN4(FUN5(VAR4) == true);
    FUN8(VAR4);
    VAR2 = FUN2("", NULL);
    FUN4(VAR2 != NULL);
    FUN4(FUN10(VAR2) == VAR8);
    VAR5 = FUN11();
    FUN4(VAR5 == VAR2);
    FUN12(VAR2);
    FUN12(VAR5);
}