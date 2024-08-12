void FUN1(const char *VAR1, const char *VAR2, bool VAR3, const char *VAR4, bool VAR5, BlockdevChangeReadOnlyMode VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    VAR11 *VAR12 = NULL;
    int VAR13, VAR14;
    VAR15 *VAR16 = NULL;
    VAR7 *VAR17 = NULL;
    VAR10 = FUN2(VAR1);
    if (!VAR10)
    {
        FUN3(VAR8, VAR18, "", VAR1);
        goto VAR19;
    }
    if (FUN4(VAR10))
    {
        FUN5(VAR10);
    }
    VAR13 = FUN6(VAR10);
    if (!VAR5)
    {
        VAR6 = VAR20;
    }
    switch (VAR6)
    {
    case VAR20:
        break;
    case VAR21:
        VAR13 &= ~VAR22;
        break;
    case VAR23:
        VAR13 |= VAR22;
        break;
    default:
        FUN7();
    }
    if (VAR3)
    {
        VAR16 = FUN8();
        FUN9(VAR16, "", FUN10(VAR4));
    }
    assert(!VAR12);
    VAR14 = FUN11(&VAR12, VAR2, NULL, VAR16, VAR13, VAR8);
    if (VAR14 < 0)
    {
        goto VAR19;
    }
    FUN12(VAR10, VAR12);
    FUN13(VAR12, NULL, &VAR17);
    if (VAR17)
    {
        FUN14(VAR8, VAR17);
        goto VAR19;
    }
    FUN15(VAR1, false, false, &VAR17);
    if (VAR17)
    {
        FUN14(VAR8, VAR17);
        goto VAR19;
    }
    FUN16(VAR1, &VAR17);
    if (VAR17)
    {
        FUN14(VAR8, VAR17);
        goto VAR19;
    }
    FUN17(VAR1, VAR12, &VAR17);
    if (VAR17)
    {
        FUN14(VAR8, VAR17);
        goto VAR19;
    }
    FUN18(VAR1, VAR8);
VAR19:
    FUN19(VAR12);