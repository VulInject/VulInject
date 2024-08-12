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
    if (FUN7(VAR19) && VAR13->VAR22)
    {
        VAR20 = FUN7(VAR19);
    }
    if (!VAR11->VAR23)
    {
        FUN8(&VAR9, "");
        goto VAR24;
    }
    FUN9(VAR4, &VAR11->VAR25, VAR19, VAR20, &VAR9);
    if (VAR9)
    {
        goto VAR24;
    }
    VAR8 = FUN10(VAR11->VAR23);
    VAR8->FUN11(FUN12(VAR11->VAR23), VAR4, &VAR26);
VAR24:
    FUN13(VAR6, VAR9);
}