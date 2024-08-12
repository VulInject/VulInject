static void FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7, VAR8, *VAR9 = &VAR8;
    DisplayChangeListener VAR10;
    FUN2(VAR2);
    VAR7 = VAR2->VAR9;
    memset(VAR9, 0, sizeof(VAR6));
    memset(&VAR10, 0, sizeof(VAR11));
    VAR10.VAR12 = VAR13;
    VAR10.VAR14 = VAR15;
    VAR10.VAR16 = VAR17;
    FUN3(VAR9, &VAR10);
    VAR9->VAR18 = FUN4(VAR9, VAR4, VAR5);
    VAR2->VAR9 = VAR9;
    VAR2->VAR19 = -1;
    FUN5(VAR2);
    FUN6(VAR3, VAR9->VAR18);
    FUN7(VAR9);
    VAR2->VAR9 = VAR7;