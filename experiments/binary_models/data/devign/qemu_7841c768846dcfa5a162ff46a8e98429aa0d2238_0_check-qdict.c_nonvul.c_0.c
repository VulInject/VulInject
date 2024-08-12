static void FUN1(void)
{
    VAR1 *VAR2 = FUN2();
    VAR1 *VAR3, *VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    FUN3(VAR2, "", FUN4(0));
    FUN3(VAR2, "", FUN4(1));
    FUN3(VAR2, "", FUN4(42));
    FUN3(VAR2, "", FUN4(7));
    FUN3(VAR2, "", FUN4(23));
    FUN3(VAR2, "", FUN4(66));
    FUN5(VAR2, &VAR8);
    VAR3 = FUN6(FUN7(VAR8));
    VAR4 = FUN6(FUN7(VAR8));
    VAR6 = FUN8(FUN7(VAR8));
    FUN9(VAR3);
    FUN9(VAR4);
    FUN9(VAR6);
    FUN9(FUN10(VAR8));
    FUN11(VAR8);
    FUN9(FUN12(VAR3, "") == 42);
    FUN9(FUN12(VAR3, "") == 23);
    FUN9(FUN13(VAR3) == 2);
    FUN11(VAR3);
    FUN9(FUN12(VAR4, "") == 0);
    FUN9(FUN13(VAR4) == 1);
    FUN11(VAR4);
    FUN9(FUN14(VAR6) == 66);
    FUN11(VAR6);
    FUN9(FUN12(VAR2, "") == 1);
    FUN9(FUN12(VAR2, "") == 7);
    FUN9(FUN13(VAR2) == 2);
    FUN11(VAR2);
}