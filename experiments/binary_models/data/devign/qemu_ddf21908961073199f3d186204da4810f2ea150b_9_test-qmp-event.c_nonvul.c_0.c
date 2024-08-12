static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5, *VAR6, *VAR7;
    UserDefOne VAR8;
    VAR8.VAR9 = 2;
    VAR8.VAR10 = FUN2("");
    VAR8.VAR11 = false;
    VAR7 = FUN3();
    FUN4(VAR7, "", FUN5(2));
    FUN4(VAR7, "", FUN6(""));
    VAR6 = FUN3();
    FUN4(VAR6, "", FUN5(1));
    FUN4(VAR6, "", VAR7);
    FUN4(VAR6, "", FUN6(""));
    VAR5 = VAR2->VAR12;
    FUN4(VAR5, "", FUN6(""));
    FUN4(VAR5, "", VAR6);
    FUN7(true, 1, true, &VAR8, "", &VAR13);
    FUN8(VAR8.VAR10);
}