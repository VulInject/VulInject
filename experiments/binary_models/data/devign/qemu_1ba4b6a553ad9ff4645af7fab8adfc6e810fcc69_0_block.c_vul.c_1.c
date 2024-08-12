void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    char VAR5[VAR6 + 1];
    int64_t VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR1 *VAR14;
    VAR3 *VAR15;
    int VAR16;
    VAR7 = FUN2(VAR2);
    if (VAR7 < 0)
    {
        FUN3(VAR4, -VAR7, "");
        return;
    }
    VAR7 &= VAR17;
    VAR16 = FUN4(VAR5, sizeof(VAR5));
    if (VAR16 < 0)
    {
        FUN3(VAR4, -VAR16, "");
        return;
    }
    VAR9 = FUN5("");
    VAR11 = FUN6("", VAR9->VAR11, NULL);
    FUN7(VAR11, VAR18, VAR7);
    VAR16 = FUN8(VAR9, VAR5, VAR11, &VAR15);
    FUN9(VAR11);
    if (VAR16 < 0)
    {
        FUN3(VAR4, -VAR16, ""
                                     "",
                         VAR5, FUN10(VAR15));
        FUN11(VAR15);
        return;
    }
    VAR13 = FUN12();
    FUN13(VAR13, "", FUN14(""));
    FUN13(VAR13, "", FUN14(VAR5));
    VAR14 = FUN15("", &VAR19);
    VAR14->VAR20 = 1;
    VAR16 = FUN16(&VAR14, NULL, NULL, VAR13, VAR2->VAR21 & ~VAR22, VAR9, &VAR15);
    if (VAR16 < 0)
    {
        FUN17(VAR4, VAR15);
        return;
    }
    FUN18(VAR14, VAR2);
}