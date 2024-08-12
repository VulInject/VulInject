void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8 = FUN2(&VAR6);
    VAR7 *VAR9 = VAR8;
    VAR10 *VAR11;
    char *VAR12;
    int VAR13 = 0;
    while (VAR9)
    {
        VAR11 = FUN3(false);
        FUN4(FUN5(VAR11), &VAR9->VAR14->VAR15, NULL, NULL);
        FUN6(VAR2, "", VAR13);
        FUN6(VAR2, "" VAR16 "", VAR9->VAR14->VAR17);
        FUN6(VAR2, "", VAR9->VAR14->VAR18 ? "" : "");
        FUN6(VAR2, "", VAR9->VAR14->VAR19 ? "" : "");
        FUN6(VAR2, "", VAR9->VAR14->VAR20 ? "" : "");
        FUN6(VAR2, "", VAR21[VAR9->VAR14->VAR22]);
        VAR12 = FUN7(VAR11);
        FUN6(VAR2, "", VAR12);
        FUN8(VAR12);
        FUN9(VAR11);
        VAR9 = VAR9->VAR23;
        VAR13++;
    }
    FUN6(VAR2, "");