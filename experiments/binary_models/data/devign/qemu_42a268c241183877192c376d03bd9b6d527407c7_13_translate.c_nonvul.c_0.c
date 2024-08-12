static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int VAR6)
{
    const char *VAR7 = "";
    TCGv VAR8, VAR9;
    if (VAR4 == 0)
    {
        FUN2("");
        return;
    }
    switch (VAR3)
    {
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
        VAR8 = FUN3();
        VAR9 = FUN3();
        break;
    default:
        VAR8 = FUN4();
        VAR9 = FUN4();
        break;
    }
    FUN5(VAR8, VAR5);
    FUN5(VAR9, VAR6);
    switch (VAR3)
    {
    case VAR10:
    case VAR11:
        FUN6(VAR18[VAR4], VAR8, VAR9);
        FUN7(VAR18[VAR4], VAR18[VAR4]);
        VAR7 = "";
        break;
    case VAR12:
    case VAR13:
        FUN8(VAR8, VAR8);
        FUN8(VAR9, VAR9);
        FUN6(VAR18[VAR4], VAR8, VAR9);
        FUN7(VAR18[VAR4], VAR18[VAR4]);
        VAR7 = "";
        break;
    case VAR19:
    case VAR20:
    {
        VAR21 *VAR22 = FUN9();
        VAR21 *VAR23 = FUN9();
        VAR21 *VAR24 = FUN9();
        FUN7(VAR8, VAR8);
        FUN7(VAR9, VAR9);
        FUN10(VAR25, VAR9, 0, VAR22);
        FUN11(VAR18[VAR4], 0);
        FUN12(VAR24);
        FUN13(VAR22);
        FUN10(VAR25, VAR8, VAR26, VAR23);
        FUN10(VAR25, VAR9, -1, VAR23);
        FUN14(VAR18[VAR4], VAR8);
        FUN12(VAR24);
        FUN13(VAR23);
        FUN15(VAR18[VAR4], VAR8, VAR9);
        FUN7(VAR18[VAR4], VAR18[VAR4]);
        FUN13(VAR24);
    }
        VAR7 = "";
        break;
    case VAR27:
    case VAR28:
    {
        VAR21 *VAR22 = FUN9();
        VAR21 *VAR23 = FUN9();
        FUN8(VAR8, VAR8);
        FUN8(VAR9, VAR9);
        FUN10(VAR25, VAR9, 0, VAR22);
        FUN11(VAR18[VAR4], 0);
        FUN12(VAR23);
        FUN13(VAR22);
        FUN16(VAR18[VAR4], VAR8, VAR9);
        FUN7(VAR18[VAR4], VAR18[VAR4]);
        FUN13(VAR23);
    }
        VAR7 = "";
        break;
    case VAR29:
    case VAR30:
    {
        VAR21 *VAR22 = FUN9();
        VAR21 *VAR23 = FUN9();
        VAR21 *VAR24 = FUN9();
        FUN8(VAR8, VAR8);
        FUN8(VAR9, VAR9);
        FUN10(VAR31, VAR9, 0, VAR22);
        FUN10(VAR25, VAR8, VAR26, VAR23);
        FUN10(VAR25, VAR9, -1, VAR23);
        FUN13(VAR22);
        FUN11(VAR18[VAR4], 0);
        FUN12(VAR24);
        FUN13(VAR23);
        FUN17(VAR18[VAR4], VAR8, VAR9);
        FUN7(VAR18[VAR4], VAR18[VAR4]);
        FUN13(VAR24);
    }
        VAR7 = "";
        break;
    case VAR32:
    case VAR33:
    {
        VAR21 *VAR22 = FUN9();
        VAR21 *VAR23 = FUN9();
        FUN8(VAR8, VAR8);
        FUN8(VAR9, VAR9);
        FUN10(VAR25, VAR9, 0, VAR22);
        FUN11(VAR18[VAR4], 0);
        FUN12(VAR23);
        FUN13(VAR22);
        FUN18(VAR18[VAR4], VAR8, VAR9);
        FUN7(VAR18[VAR4], VAR18[VAR4]);
        FUN13(VAR23);
    }
        VAR7 = "";
        break;
    case VAR14:
    case VAR15:
        FUN6(VAR18[VAR4], VAR8, VAR9);
        VAR7 = "";
        break;
    case VAR16:
    case VAR17:
        FUN6(VAR18[VAR4], VAR8, VAR9);
        VAR7 = "";
        break;
    case VAR34:
    case VAR35:
    {
        VAR21 *VAR22 = FUN9();
        VAR21 *VAR23 = FUN9();
        VAR21 *VAR24 = FUN9();
        FUN10(VAR25, VAR9, 0, VAR22);
        FUN11(VAR18[VAR4], 0);
        FUN12(VAR24);
        FUN13(VAR22);
        FUN10(VAR25, VAR8, -1LL << 63, VAR23);
        FUN10(VAR25, VAR9, -1LL, VAR23);
        FUN14(VAR18[VAR4], VAR8);
        FUN12(VAR24);
        FUN13(VAR23);
        FUN15(VAR18[VAR4], VAR8, VAR9);
        FUN13(VAR24);
    }
        VAR7 = "";
        break;
    case VAR36:
    case VAR37:
    {
        VAR21 *VAR22 = FUN9();
        VAR21 *VAR23 = FUN9();
        FUN10(VAR25, VAR9, 0, VAR22);
        FUN11(VAR18[VAR4], 0);
        FUN12(VAR23);
        FUN13(VAR22);
        FUN16(VAR18[VAR4], VAR8, VAR9);
        FUN13(VAR23);
    }
        VAR7 = "";
        break;
    case VAR38:
    case VAR39:
    {
        VAR21 *VAR22 = FUN9();
        VAR21 *VAR23 = FUN9();
        VAR21 *VAR24 = FUN9();
        FUN10(VAR31, VAR9, 0, VAR22);
        FUN10(VAR25, VAR8, -1LL << 63, VAR23);
        FUN10(VAR25, VAR9, -1LL, VAR23);
        FUN13(VAR22);
        FUN11(VAR18[VAR4], 0);
        FUN12(VAR24);
        FUN13(VAR23);
        FUN17(VAR18[VAR4], VAR8, VAR9);
        FUN13(VAR24);
    }
        VAR7 = "";
        break;
    case VAR40:
    case VAR41:
    {
        VAR21 *VAR22 = FUN9();
        VAR21 *VAR23 = FUN9();
        FUN10(VAR25, VAR9, 0, VAR22);
        FUN11(VAR18[VAR4], 0);
        FUN12(VAR23);
        FUN13(VAR22);
        FUN18(VAR18[VAR4], VAR8, VAR9);
        FUN13(VAR23);
    }
        VAR7 = "";
        break;
    }
    (void)VAR7;
    FUN2("", VAR7, VAR42[VAR4], VAR42[VAR5]);
    FUN19(VAR8);
    FUN19(VAR9);
}