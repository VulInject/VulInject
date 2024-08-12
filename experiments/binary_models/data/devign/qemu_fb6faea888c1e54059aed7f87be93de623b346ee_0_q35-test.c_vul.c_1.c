static void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR2 = FUN2(NULL);
    FUN3(VAR2 != NULL);
    VAR4 = FUN4(VAR2, 0);
    FUN3(VAR4 != NULL);
    FUN5(VAR4, VAR7, false);
    FUN3(FUN6(VAR4, VAR7) == false);
    FUN5(VAR4, VAR7, true);
    FUN3(FUN6(VAR4, VAR7) == true);
    FUN5(VAR4, VAR8, true);
    FUN3(FUN6(VAR4, VAR7) == false);
    FUN5(VAR4, VAR7, true);
    FUN3(FUN6(VAR4, VAR7) == false);
    VAR6 = FUN7("");
    FUN3(VAR6);
    FUN3(!FUN8(VAR6, ""));
    FUN9(VAR6);
    FUN5(VAR4, VAR7, false);
    FUN3(FUN6(VAR4, VAR7) == false);
    FUN5(VAR4, VAR7, true);
    FUN3(FUN6(VAR4, VAR7) == true);