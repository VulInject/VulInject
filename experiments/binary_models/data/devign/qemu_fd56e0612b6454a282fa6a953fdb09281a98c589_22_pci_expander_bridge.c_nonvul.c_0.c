static void FUN1(VAR1 *VAR2, bool VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9, *VAR10 = NULL;
    VAR11 *VAR12;
    const char *VAR13 = NULL;
    VAR4 *VAR14 = NULL;
    if (VAR7->VAR15 != VAR16 && VAR7->VAR15 >= VAR17)
    {
        FUN3(VAR5, "", VAR7->VAR15);
        return;
    }
    if (VAR2->VAR18.VAR19 && *VAR2->VAR18.VAR19)
    {
        VAR13 = VAR2->VAR18.VAR19;
    }
    VAR9 = FUN4(NULL, VAR20);
    if (VAR3)
    {
        VAR12 = FUN5(VAR9, VAR13, NULL, NULL, 0, VAR21);
    }
    else
    {
        VAR12 = FUN5(VAR9, "", NULL, NULL, 0, VAR22);
        VAR10 = FUN4(FUN6(VAR12), "");
        VAR10->VAR19 = VAR13;
        FUN7(VAR10, VAR23, VAR7->VAR24);
        FUN8(VAR10, VAR25, false);
    }
    VAR12->VAR26 = VAR2;
    VAR12->VAR27 = FUN9(VAR2)->VAR27;
    VAR12->VAR28 = FUN9(VAR2)->VAR28;
    VAR12->VAR29 = VAR30;
    FUN10(VAR9)->VAR12 = VAR12;
    FUN11(VAR2, VAR12, &VAR14);
    if (VAR14)
    {
        FUN12(VAR5, VAR14);
        goto VAR31;
    }
    FUN13(VAR9);
    if (VAR10)
    {
        FUN13(VAR10);
    }
    FUN14(VAR2->VAR32 + VAR33, VAR34 | VAR35);
    FUN15(VAR2->VAR32, VAR36);
    VAR37 = FUN16(VAR37, VAR7, VAR38);
    return;
VAR31:
    FUN17(FUN18(VAR10));
    FUN19(FUN18(VAR12));
    FUN17(FUN18(VAR9));
}