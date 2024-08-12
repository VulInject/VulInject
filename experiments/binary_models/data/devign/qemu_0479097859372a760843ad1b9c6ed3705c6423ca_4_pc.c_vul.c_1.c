static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR5 *VAR9 = NULL;
    VAR10 *VAR11 = FUN2(VAR2);
    VAR12 *VAR13 = FUN3(VAR11);
    VAR14 *VAR15 = FUN4(VAR4);
    VAR16 *VAR17 = FUN5(VAR15);
    VAR18 *VAR19 = VAR17->FUN6(VAR15);
    uint64_t VAR20 = VAR21;
    bool VAR22 = FUN7(FUN8(VAR4), VAR23);
    if (FUN9(VAR19) && VAR13->VAR24)
    {
        VAR20 = FUN9(VAR19);
    }
    if (!VAR11->VAR25)
    {
        FUN10(&VAR9, "");
        goto VAR26;
    }
    if (VAR22 && !VAR11->VAR27.VAR28)
    {
        FUN10(&VAR9, "");
        goto VAR26;
    }
    FUN11(VAR4, &VAR11->VAR29, VAR19, VAR20, &VAR9);
    if (VAR9)
    {
        goto VAR26;
    }
    if (VAR22)
    {
        FUN12(&VAR11->VAR27);
    }
    VAR8 = FUN13(VAR11->VAR25);
    VAR8->FUN14(FUN15(VAR11->VAR25), VAR4, &VAR30);
VAR26:
    FUN16(VAR6, VAR9);
}