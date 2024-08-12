static void FUN1(int VAR1, int VAR2, VAR3 *VAR4, const char *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, enum spitz_model_e VAR9, int VAR10)
{
    uint32_t VAR11 = 0x04000000;
    uint32_t VAR12 = 0x00800000;
    struct VAR13 *VAR14;
    struct VAR15 *VAR16;
    if (!VAR8)
        VAR8 = (VAR9 == VAR17) ? "" : "";
    VAR14 = FUN2(VAR4, VAR8);
    if (VAR1 < VAR11 + VAR12)
    {
        fprintf(VAR18, "", VAR11 + VAR12);
        FUN3(1);
    }
    FUN4(VAR19, VAR11, VAR20);
    FUN5(VAR14, (VAR9 == VAR21) ? VAR22 : VAR23);
    FUN4(0, VAR12, VAR11 | VAR24);
    FUN6(VAR14);
    FUN7(VAR14);
    VAR16 = FUN8(VAR14, (VAR9 == VAR25) ? 1 : 2);
    FUN9(VAR14, VAR16, (VAR9 == VAR25) ? 1 : 2);
    FUN10(VAR14, (VAR9 == VAR25) ? 1 : 2);
    if (VAR9 == VAR17)
        FUN11(VAR14);
    else if (VAR9 != VAR25)
        FUN11(VAR14);
    VAR14->VAR26->VAR27[15] = VAR19;
    FUN12(VAR14->VAR26, VAR1, VAR5, VAR6, VAR7, VAR10, VAR19);
    FUN13(VAR28 - VAR19);
}