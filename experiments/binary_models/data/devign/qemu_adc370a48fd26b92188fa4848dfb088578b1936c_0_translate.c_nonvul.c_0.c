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
        TCGv_i32 VAR40 = FUN13(VAR38);
        TCGv VAR41 = FUN14();
        FUN15(VAR4, VAR41, VAR37, VAR36 << VAR39);
        switch (FUN4(VAR5))
        {
        case VAR28:
            FUN16(VAR42, VAR40, VAR41);
            break;
        case VAR29:
            FUN17(VAR42, VAR40, VAR41);
            break;
        case VAR30:
            FUN18(VAR42, VAR40, VAR41);
            break;
        case VAR31:
            FUN19(VAR42, VAR40, VAR41);
            break;
        case VAR32:
            FUN20(VAR42, VAR40, VAR41);
            break;
        case VAR33:
            FUN21(VAR42, VAR40, VAR41);
            break;
        case VAR34:
            FUN22(VAR42, VAR40, VAR41);
            break;
        case VAR35:
            FUN23(VAR42, VAR40, VAR41);
            break;
        }
        FUN24(VAR40);
        FUN25(VAR41);
    }
    break;
    default:
        FUN26("");
        FUN27(VAR4, VAR43);
        break;
    }
}