static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    UserDefOne VAR4;
    EventStructOne VAR5;
    VAR6 *VAR7, *VAR8, *VAR9, *VAR10;
    VAR4.VAR11 = 2;
    VAR4.VAR12 = FUN2("");
    VAR4.VAR13 = true;
    VAR4.VAR14 = VAR15;
    VAR5.VAR4 = &VAR4;
    VAR5.VAR12 = FUN2("");
    VAR5.VAR16 = true;
    VAR5.VAR17 = VAR18;
    VAR10 = FUN3();
    FUN4(VAR10, "", FUN5(2));
    FUN4(VAR10, "", FUN6(""));
    FUN4(VAR10, "", FUN6(""));
    VAR9 = FUN3();
    FUN4(VAR9, "", VAR10);
    FUN4(VAR9, "", FUN6(""));
    FUN4(VAR9, "", FUN6(""));
    VAR8 = FUN3();
    FUN4(VAR8, "", VAR9);
    FUN4(VAR8, "", FUN6(""));
    FUN4(VAR8, "", FUN6(""));
    VAR7 = VAR2->VAR19;
    FUN4(VAR7, "", FUN6(""));
    FUN4(VAR7, "", VAR8);
    FUN7(&VAR5, "", false, NULL, true, VAR20, &VAR21);
    FUN8(VAR4.VAR12);
    FUN8(VAR5.VAR12);
}