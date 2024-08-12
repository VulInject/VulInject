static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5 = VAR4->VAR5;
    FUN2(VAR4, VAR6);
    FUN3(VAR4);
    switch (FUN4(VAR5))
    {
    case VAR7:
    case VAR8:
    case VAR9:
        FUN5(VAR2, VAR4);
        break;
    case VAR10:
    case VAR11:
        FUN6(VAR2, VAR4);
        break;
    case VAR12:
    case VAR13:
        FUN7(VAR2, VAR4);
        break;
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
        FUN8(VAR2, VAR4);
        break;
    case VAR23:
        FUN9(VAR2, VAR4);
        break;
    case VAR24:
    case VAR25:
    case VAR26:
        FUN10(VAR2, VAR4);
        break;
    case VAR27:
        FUN11(VAR2, VAR4);
        break;
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    {
        int32_t VAR36 = FUN12(VAR4->VAR5, 16, 10);
        uint8_t VAR37 = (VAR4->VAR5 >> 11) & 0x1f;
        uint8_t VAR38 = (VAR4->VAR5 >> 6) & 0x1f;
        uint8_t VAR39 = (VAR4->VAR5 >> 0) & 0x3;
        TCGv_i32 VAR40 = FUN13(VAR39);
        TCGv_i32 VAR41 = FUN13(VAR38);
        TCGv_i32 VAR42 = FUN13(VAR37);
        TCGv_i32 VAR43 = FUN13(VAR36);
        switch (FUN4(VAR5))
        {
        case VAR28:
        case VAR29:
        case VAR30:
        case VAR31:
            FUN14(VAR44, VAR40, VAR41, VAR42, VAR43);
            break;
        case VAR32:
        case VAR33:
        case VAR34:
        case VAR35:
            FUN15(VAR44, VAR40, VAR41, VAR42, VAR43);
            break;
        }
        FUN16(VAR41);
        FUN16(VAR40);
        FUN16(VAR42);
        FUN16(VAR43);
    }
    break;
    default:
        FUN17("");
        FUN18(VAR4, VAR45);
        break;
    }