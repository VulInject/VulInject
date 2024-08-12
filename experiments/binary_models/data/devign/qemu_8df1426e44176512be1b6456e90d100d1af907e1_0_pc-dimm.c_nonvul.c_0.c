void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint64_t VAR7, VAR8 **VAR9)
{
    int VAR10;
    VAR11 *VAR12 = FUN2(FUN3());
    VAR13 *VAR14 = FUN4(VAR2);
    VAR15 *VAR16 = FUN5(VAR14);
    VAR5 *VAR17 = VAR16->FUN6(VAR14);
    VAR8 *VAR18 = NULL;
    uint64_t VAR19 = 0;
    uint64_t VAR20;
    VAR20 = FUN7(FUN8(VAR14), VAR21, &VAR18);
    if (VAR18)
    {
        goto VAR22;
    }
    VAR20 = FUN9(VAR4->VAR23, FUN10(&VAR4->VAR6), !VAR20 ? NULL : &VAR20, VAR7, FUN10(VAR6), &VAR18);
    if (VAR18)
    {
        goto VAR22;
    }
    VAR19 = FUN11(&VAR18);
    if (VAR18)
    {
        goto VAR22;
    }
    if (VAR19 + FUN10(VAR6) > VAR12->VAR24 - VAR12->VAR25)
    {
        FUN12(&VAR18, "" VAR26 "" VAR27, VAR19, VAR12->VAR24 - VAR12->VAR25);
        goto VAR22;
    }
    FUN13(FUN8(VAR2), VAR20, VAR21, &VAR18);
    if (VAR18)
    {
        goto VAR22;
    }
    FUN14(VAR20);
    VAR10 = FUN7(FUN8(VAR2), VAR28, &VAR18);
    if (VAR18)
    {
        goto VAR22;
    }
    VAR10 = FUN15(VAR10 == VAR29 ? NULL : &VAR10, VAR12->VAR30, &VAR18);
    if (VAR18)
    {
        goto VAR22;
    }
    FUN13(FUN8(VAR2), VAR10, VAR28, &VAR18);
    if (VAR18)
    {
        goto VAR22;
    }
    FUN16(VAR10);
    if (FUN17() && !FUN18(VAR12))
    {
        FUN12(&VAR18, "");
        goto VAR22;
    }
    if (!FUN19())
    {
        FUN12(&VAR18, ""
                               "");
        goto VAR22;
    }
    FUN20(&VAR4->VAR6, VAR20 - VAR4->VAR23, VAR6);
    FUN21(VAR17, VAR2);
    FUN22(VAR20, FUN10(VAR6), VAR14->VAR31);
VAR22:
    FUN23(VAR9, VAR18);
}