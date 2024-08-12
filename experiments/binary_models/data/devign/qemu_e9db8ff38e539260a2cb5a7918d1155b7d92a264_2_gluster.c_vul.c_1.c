static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = 0;
    int VAR12 = 0;
    VAR13 *VAR14 = NULL;
    VAR15 *VAR16;
    VAR6 *VAR17 = NULL;
    const char *VAR18;
    VAR16 = FUN2(&VAR19, NULL, 0, &VAR20);
    FUN3(VAR16, VAR4, &VAR17);
    if (VAR17)
    {
        FUN4(VAR7, VAR17);
        VAR12 = -VAR21;
        goto VAR22;
    }
    VAR18 = FUN5(VAR16, VAR23);
    VAR9->VAR24 = FUN6(VAR16, VAR25, VAR26);
    if (VAR9->VAR24 < 0)
    {
        VAR9->VAR24 = 0;
    }
    else if (VAR9->VAR24 > VAR27)
    {
        VAR9->VAR24 = VAR27;
    }
    VAR14 = FUN7(VAR13, 1);
    VAR14->VAR24 = VAR9->VAR24;
    VAR14->VAR28 = true;
    VAR9->VAR29 = FUN8(VAR14, VAR18, VAR4, VAR7);
    if (!VAR9->VAR29)
    {
        VAR12 = -VAR30;
        goto VAR22;
    }
    VAR12 = FUN9(VAR9->VAR29, "", "", "");
    if (VAR12 < 0)
    {
        FUN10(VAR7, VAR30, "");
        VAR12 = -VAR30;
        goto VAR22;
    }
    FUN11(VAR5, &VAR11);
    VAR9->VAR31 = FUN12(VAR9->VAR29, VAR14->VAR32, VAR11);
    if (!VAR9->VAR31)
    {
        VAR12 = -VAR30;
    }
    VAR9->VAR33 = FUN13(VAR9->VAR31);
VAR22:
    FUN14(VAR16);
    FUN15(VAR14);
    if (!VAR12)
    {
        return VAR12;
    }
    if (VAR9->VAR31)
    {
        FUN16(VAR9->VAR31);
    }
    if (VAR9->VAR29)
    {
        FUN17(VAR9->VAR29);
    }
    return VAR12;
}