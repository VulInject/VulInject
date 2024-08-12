static void FUN1(void)
{
    VAR1 *VAR2;
    VAR1 *VAR3;
    VAR4 *VAR5;
    FUN2(VAR6);
    VAR2 = FUN3(NULL, false);
    VAR3 = FUN3("", false);
    FUN4(VAR2, VAR5)
    {
        VAR7 *VAR8 = FUN5(FUN6(VAR5));
        FUN7(FUN8(VAR3, FUN9(VAR8, "")));
    }
    FUN10(VAR2);
    FUN10(VAR3);
    FUN11();
}