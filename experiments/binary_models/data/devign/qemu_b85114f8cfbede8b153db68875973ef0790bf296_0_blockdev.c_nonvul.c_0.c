void FUN1(bool VAR1, const char *VAR2, bool VAR3, const char *VAR4, const char *VAR5, bool VAR6, const char *VAR7, bool VAR8, BlockdevChangeReadOnlyMode VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13;
    VAR14 *VAR15 = NULL;
    int VAR16;
    bool VAR17;
    int VAR18;
    VAR19 *VAR20 = NULL;
    VAR10 *VAR21 = NULL;
    VAR13 = FUN2(VAR1 ? VAR2 : NULL, VAR3 ? VAR4 : NULL, VAR11);
    if (!VAR13)
    {
        goto VAR22;
    }
    if (FUN3(VAR13))
    {
        FUN4(VAR13);
    }
    VAR16 = FUN5(VAR13);
    VAR16 &= ~(VAR23 | VAR24 | VAR25 | VAR26);
    if (!VAR8)
    {
        VAR9 = VAR27;
    }
    switch (VAR9)
    {
    case VAR27:
        break;
    case VAR28:
        VAR16 &= ~VAR29;
        break;
    case VAR30:
        VAR16 |= VAR29;
        break;
    default:
        FUN6();
    }
    VAR20 = FUN7();
    VAR17 = FUN8(VAR13);
    FUN9(VAR20, "", FUN10(VAR17 ? "" : ""));
    if (VAR6)
    {
        FUN9(VAR20, "", FUN10(VAR7));
    }
    VAR15 = FUN11(VAR5, NULL, VAR20, VAR16, VAR11);
    if (!VAR15)
    {
        goto VAR22;
    }
    FUN12(VAR15, NULL, &VAR21);
    if (VAR21)
    {
        FUN13(VAR11, VAR21);
        goto VAR22;
    }
    VAR18 = FUN14(VAR1 ? VAR2 : NULL, VAR3 ? VAR4 : NULL, false, &VAR21);
    if (VAR18 && VAR18 != -VAR31)
    {
        FUN13(VAR11, VAR21);
        goto VAR22;
    }
    FUN15(VAR21);
    VAR21 = NULL;
    FUN16(VAR1, VAR2, VAR3, VAR4, &VAR21);
    if (VAR21)
    {
        FUN13(VAR11, VAR21);
        goto VAR22;
    }
    FUN17(VAR13, VAR15, &VAR21);
    if (VAR21)
    {
        FUN13(VAR11, VAR21);
        goto VAR22;
    }
    FUN18(VAR1, VAR2, VAR3, VAR4, VAR11);
VAR22:
    FUN19(VAR15);
}