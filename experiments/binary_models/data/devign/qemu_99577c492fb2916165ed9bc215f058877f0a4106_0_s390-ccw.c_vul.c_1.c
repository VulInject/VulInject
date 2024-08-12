static void FUN1(VAR1 *VAR2, char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = FUN3(VAR7);
    VAR10 *VAR11 = FUN4(VAR7);
    VAR12 *VAR13 = FUN5(VAR11);
    VAR14 *VAR15 = FUN6(VAR13);
    VAR16 *VAR17;
    int VAR18;
    VAR4 *VAR19 = NULL;
    FUN7(VAR2, VAR3, &VAR19);
    if (VAR19)
    {
        goto VAR20;
    }
    VAR17 = FUN8(VAR7->VAR21, false, VAR15->VAR22, &VAR19);
    if (!VAR17)
    {
        goto VAR23;
    }
    VAR17->VAR24 = VAR2;
    VAR17->VAR25 = VAR26;
    VAR7->VAR17 = VAR17;
    VAR18 = FUN9(VAR17, &VAR2->VAR27);
    if (VAR18)
    {
        FUN10(&VAR19, -VAR18, "", VAR28);
        goto VAR29;
    }
    VAR9->FUN11(VAR7, &VAR19);
    if (VAR19)
    {
        goto VAR29;
    }
    FUN12(VAR17->VAR30, VAR17->VAR31, VAR17->VAR32, VAR11->VAR33, 1);
    return;
VAR29:
    FUN13(VAR17->VAR30, VAR17->VAR31, VAR17->VAR32, VAR17->VAR21, NULL);
    VAR7->VAR17 = NULL;
    FUN14(VAR17);
VAR23:
    FUN14(VAR2->VAR34);
VAR20:
    FUN15(VAR5, VAR19);
}