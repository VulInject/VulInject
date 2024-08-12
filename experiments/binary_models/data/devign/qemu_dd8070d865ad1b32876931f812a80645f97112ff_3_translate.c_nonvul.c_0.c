static VAR1 FUN1(VAR2 *VAR3, tilegx_bundle_bits VAR4)
{
    unsigned VAR5 = FUN2(VAR4);
    unsigned VAR6 = FUN3(VAR4);
    unsigned VAR7 = FUN4(VAR4);
    unsigned VAR8, VAR9;
    int VAR10;
    switch (VAR5)
    {
    case VAR11:
        VAR8 = FUN5(VAR4);
        VAR9 = FUN6(VAR4);
        switch (VAR8)
        {
        case VAR12:
            VAR8 = FUN7(VAR4);
            return FUN8(VAR3, FUN9(VAR5, VAR8, VAR13), VAR6, VAR7, VAR4);
        case VAR14:
            return FUN10(VAR3, VAR6, VAR7, VAR9, VAR15, "");
        case VAR16:
            return FUN10(VAR3, VAR6, VAR7, VAR9, VAR17, "");
        case VAR18:
            return FUN10(VAR3, VAR6, VAR7, VAR9, VAR19, "");
        case VAR20:
            return FUN10(VAR3, VAR6, VAR7, VAR9, VAR15, "");
        case VAR21:
            return FUN10(VAR3, VAR6, VAR7, VAR9, VAR17, "");
        case VAR22:
            return FUN10(VAR3, VAR6, VAR7, VAR9, VAR19, "");
        case VAR23:
            return FUN10(VAR3, VAR6, VAR7, VAR9, VAR24, "");
        case VAR25:
            return FUN10(VAR3, VAR6, VAR7, VAR9, VAR24, "");
        }
        return FUN11(VAR3, FUN9(VAR5, VAR8, VAR13), VAR6, VAR7, VAR9);
    case VAR26:
        VAR8 = FUN12(VAR4);
        VAR10 = FUN13(VAR4);
        return FUN14(VAR3, FUN9(VAR5, VAR8, VAR13), VAR6, VAR7, VAR10);
    case VAR27:
        VAR8 = FUN15(VAR4);
        VAR10 = (VAR28)FUN16(VAR4);
        VAR9 = FUN6(VAR4);
        switch (VAR8)
        {
        case VAR29:
            return FUN17(VAR3, VAR7, VAR9, VAR10, VAR15, "");
        case VAR30:
            return FUN17(VAR3, VAR7, VAR9, VAR10, VAR17, "");
        case VAR31:
            return FUN17(VAR3, VAR7, VAR9, VAR10, VAR19, "");
        case VAR32:
            return FUN17(VAR3, VAR7, VAR9, VAR10, VAR15, "");
        case VAR33:
            return FUN17(VAR3, VAR7, VAR9, VAR10, VAR17, "");
        case VAR34:
            return FUN17(VAR3, VAR7, VAR9, VAR10, VAR19, "");
        case VAR35:
            return FUN17(VAR3, VAR7, VAR9, VAR10, VAR24, "");
        case VAR36:
            return FUN17(VAR3, VAR7, VAR9, VAR10, VAR24, "");
        case VAR37:
            return FUN18(VAR3, VAR6, FUN19(VAR4));
        case VAR38:
            return FUN20(VAR3, FUN21(VAR4), VAR7);
        }
        VAR10 = (VAR28)FUN22(VAR4);
        return FUN14(VAR3, FUN9(VAR5, VAR8, VAR13), VAR6, VAR7, VAR10);
    case VAR39:
        VAR8 = FUN23(VAR4);
        VAR10 = FUN24(FUN25(VAR4), 0, 17);
        return FUN26(VAR3, VAR8, VAR7, VAR10);
    case VAR40:
        VAR8 = FUN27(VAR4);
        VAR10 = FUN24(FUN28(VAR4), 0, 27);
        return FUN29(VAR3, VAR8, VAR10);
    case VAR41:
    case VAR42:
    case VAR43:
        VAR10 = (VAR44)FUN30(VAR4);
        return FUN14(VAR3, FUN9(VAR5, 0, VAR13), VAR6, VAR7, VAR10);
    default:
        return VAR45;
    }
}