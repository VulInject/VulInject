static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, enum spitz_model_e VAR7, int VAR8)
{
    struct VAR9 *VAR10;
    struct VAR11 *VAR12, *VAR13 = NULL;
    if (!VAR6)
        VAR6 = (VAR7 == VAR14) ? "" : "";
    VAR10 = FUN2(VAR15.VAR1, VAR6);
    FUN3(VAR10, (VAR7 == VAR16) ? VAR17 : VAR18);
    FUN4(0, VAR19, FUN5(VAR19) | VAR20);
    FUN6(VAR10);
    FUN7(VAR10);
    VAR12 = FUN8(VAR10, 0, 0x10800000);
    if (VAR7 != VAR21)
    {
        VAR13 = FUN8(VAR10, 1, 0x08800040);
    }
    FUN9(VAR10, VAR12, VAR13);
    FUN10(VAR10, (VAR7 == VAR21) ? 1 : 2);
    FUN11(VAR10);
    if (VAR7 == VAR21)
        FUN12(VAR10);
    if (VAR7 == VAR14)
        FUN13(VAR10, 1);
    else if (VAR7 != VAR21)
        FUN13(VAR10, 0);
    VAR10->VAR22->VAR23[15] = VAR15.VAR24;
    VAR15.VAR3 = VAR3;
    VAR15.VAR4 = VAR4;
    VAR15.VAR5 = VAR5;
    VAR15.VAR25 = VAR8;
    FUN14(VAR10->VAR22, &VAR15);
    FUN15(VAR26);
}