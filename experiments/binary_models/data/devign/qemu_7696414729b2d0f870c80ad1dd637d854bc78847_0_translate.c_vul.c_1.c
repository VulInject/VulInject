static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int16_t VAR6)
{
    TCGv VAR7, VAR8, VAR9;
    int VAR10 = VAR2->VAR10;
    if (VAR4 == 0 && VAR2->VAR11 & (VAR12 | VAR13))
    {
        return;
    }
    VAR7 = FUN2();
    FUN3(VAR2, VAR7, VAR5, VAR6);
    switch (VAR3)
    {
    case VAR14:
        FUN4(VAR7, VAR7, VAR10, VAR15 | VAR2->VAR16);
        FUN5(VAR7, VAR4);
        break;
    case VAR17:
        FUN4(VAR7, VAR7, VAR10, VAR18 | VAR2->VAR16);
        FUN5(VAR7, VAR4);
        break;
    case VAR19:
    case VAR20:
        FUN6(VAR7, VAR7, VAR10, VAR2);
        FUN5(VAR7, VAR4);
        break;
    case VAR21:
        VAR8 = FUN2();
        FUN4(VAR8, VAR7, VAR10, VAR22);
        FUN7(VAR8, VAR7, 7);
        FUN8(VAR8, VAR8, 7);
        FUN9(VAR8, VAR8, 3);
        FUN7(VAR7, VAR7, ~7);
        FUN4(VAR7, VAR7, VAR10, VAR18);
        FUN10(VAR7, VAR7, VAR8);
        VAR9 = FUN11(-1);
        FUN10(VAR9, VAR9, VAR8);
        FUN12(VAR8, VAR4);
        FUN13(VAR8, VAR8, VAR9);
        FUN14(VAR9);
        FUN15(VAR7, VAR7, VAR8);
        FUN14(VAR8);
        FUN5(VAR7, VAR4);
        break;
    case VAR23:
        VAR8 = FUN2();
        FUN4(VAR8, VAR7, VAR10, VAR22);
        FUN7(VAR8, VAR7, 7);
        FUN8(VAR8, VAR8, 7);
        FUN9(VAR8, VAR8, 3);
        FUN7(VAR7, VAR7, ~7);
        FUN4(VAR7, VAR7, VAR10, VAR18);
        FUN16(VAR7, VAR7, VAR8);
        FUN8(VAR8, VAR8, 63);
        VAR9 = FUN11(0xfffffffffffffffeull);
        FUN10(VAR9, VAR9, VAR8);
        FUN12(VAR8, VAR4);
        FUN17(VAR8, VAR8, VAR9);
        FUN14(VAR9);
        FUN15(VAR7, VAR7, VAR8);
        FUN14(VAR8);
        FUN5(VAR7, VAR4);
        break;
    case VAR24:
        VAR8 = FUN11(FUN18(VAR2));
        FUN19(VAR2, VAR7, VAR7, VAR8);
        FUN14(VAR8);
        FUN4(VAR7, VAR7, VAR10, VAR18);
        FUN5(VAR7, VAR4);
        break;
    case VAR25:
        VAR8 = FUN11(FUN18(VAR2));
        FUN19(VAR2, VAR7, VAR7, VAR8);
        FUN14(VAR8);
        FUN4(VAR7, VAR7, VAR10, VAR26);
        FUN5(VAR7, VAR4);
        break;
    case VAR27:
    case VAR28:
        FUN4(VAR7, VAR7, VAR10, VAR26 | VAR2->VAR16);
        FUN5(VAR7, VAR4);
        break;
    case VAR29:
    case VAR30:
        FUN4(VAR7, VAR7, VAR10, VAR31 | VAR2->VAR16);
        FUN5(VAR7, VAR4);
        break;
    case VAR32:
    case VAR33:
        FUN4(VAR7, VAR7, VAR10, VAR34 | VAR2->VAR16);
        FUN5(VAR7, VAR4);
        break;
    case VAR35:
    case VAR36:
        FUN4(VAR7, VAR7, VAR10, VAR37);
        FUN5(VAR7, VAR4);
        break;
    case VAR38:
    case VAR39:
        FUN4(VAR7, VAR7, VAR10, VAR22);
        FUN5(VAR7, VAR4);
        break;
    case VAR40:
    case VAR41:
        VAR8 = FUN2();
        FUN4(VAR8, VAR7, VAR10, VAR22);
        FUN7(VAR8, VAR7, 3);
        FUN8(VAR8, VAR8, 3);
        FUN9(VAR8, VAR8, 3);
        FUN7(VAR7, VAR7, ~3);
        FUN4(VAR7, VAR7, VAR10, VAR15);
        FUN10(VAR7, VAR7, VAR8);
        VAR9 = FUN11(-1);
        FUN10(VAR9, VAR9, VAR8);
        FUN12(VAR8, VAR4);
        FUN13(VAR8, VAR8, VAR9);
        FUN14(VAR9);
        FUN15(VAR7, VAR7, VAR8);
        FUN14(VAR8);
        FUN20(VAR7, VAR7);
        FUN5(VAR7, VAR4);
        break;
    case VAR42:
        VAR8 = FUN2();
        FUN4(VAR8, VAR7, VAR10, VAR22);
        FUN7(VAR8, VAR7, 3);
        FUN8(VAR8, VAR8, 3);
        FUN9(VAR8, VAR8, 3);
        FUN7(VAR7, VAR7, ~3);
        FUN4(VAR7, VAR7, VAR10, VAR15);
        FUN16(VAR7, VAR7, VAR8);
        FUN8(VAR8, VAR8, 31);
        VAR9 = FUN11(0xfffffffeull);
        FUN10(VAR9, VAR9, VAR8);
        FUN12(VAR8, VAR4);
        FUN17(VAR8, VAR8, VAR9);
        FUN14(VAR9);
        FUN15(VAR7, VAR7, VAR8);
        FUN14(VAR8);
        FUN20(VAR7, VAR7);
        FUN5(VAR7, VAR4);
        break;
    case VAR43:
    case VAR44:
    case VAR45:
        FUN21(VAR7, VAR7, VAR10, VAR2);
        FUN5(VAR7, VAR4);
        break;
    }
    FUN14(VAR7);