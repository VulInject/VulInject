static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int32_t VAR6, VAR7, VAR8;
    int32_t VAR9, VAR10;
    int8_t VAR11, VAR12;
    int32_t VAR13;
    TCGv VAR14, VAR15, VAR16;
    VAR5 = FUN2(VAR4->VAR17);
    if (FUN3((VAR5 & 0x7f) == VAR18))
    {
        VAR5 = VAR18;
    }
    switch (VAR5)
    {
    case VAR19:
        FUN4(VAR2, VAR4);
        break;
    case VAR20:
        FUN5(VAR2, VAR4);
        break;
    case VAR21:
        FUN6(VAR2, VAR4);
        break;
    case VAR22:
        FUN7(VAR2, VAR4);
        break;
    case VAR23:
        FUN8(VAR2, VAR4);
        break;
    case VAR24:
        FUN9(VAR2, VAR4);
        break;
    case VAR25:
        VAR9 = FUN10(VAR4->VAR17);
        VAR6 = FUN11(VAR4->VAR17);
        VAR14 = FUN12(FUN13(VAR9));
        VAR15 = FUN14();
        FUN15(VAR15, VAR26[VAR6], 16);
        FUN16(VAR15, VAR14, VAR4->VAR27, VAR28);
        FUN17(VAR15);
        FUN17(VAR14);
        break;
    case VAR29:
        VAR9 = FUN10(VAR4->VAR17);
        VAR6 = FUN11(VAR4->VAR17);
        VAR14 = FUN12(FUN13(VAR9));
        FUN18(VAR26[VAR6], VAR14, VAR4->VAR27, VAR28);
        FUN19(VAR26[VAR6], VAR26[VAR6], 16);
        FUN17(VAR14);
        break;
    case VAR30:
        VAR9 = FUN10(VAR4->VAR17);
        VAR6 = FUN11(VAR4->VAR17);
        FUN20(VAR31[VAR6], FUN13(VAR9));
        break;
    case VAR32:
        VAR9 = FUN10(VAR4->VAR17);
        VAR11 = FUN21(VAR4->VAR17);
        VAR13 = FUN22(VAR4->VAR17);
        VAR14 = FUN12(FUN13(VAR9));
        VAR15 = FUN14();
        FUN18(VAR15, VAR14, VAR4->VAR27, VAR33);
        FUN23(VAR15, VAR15, ~(0x1u << VAR13));
        FUN24(VAR15, VAR15, (VAR11 << VAR13));
        FUN16(VAR15, VAR14, VAR4->VAR27, VAR33);
        FUN17(VAR14);
        FUN17(VAR15);
        break;
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
    case VAR38:
    case VAR39:
        VAR9 = FUN25(VAR4->VAR17);
        FUN26(VAR4, VAR5, 0, 0, 0, VAR9);
        break;
    case VAR40:
        FUN27(VAR2, VAR4);
        break;
    case VAR41:
        FUN28(VAR2, VAR4);
        break;
    case VAR42:
        FUN29(VAR2, VAR4);
        break;
    case VAR43:
        FUN30(VAR2, VAR4);
        break;
    case VAR44:
        FUN31(VAR2, VAR4);
        break;
    case VAR45:
        FUN32(VAR2, VAR4);
        break;
    case VAR46:
        FUN33(VAR2, VAR4);
        break;
    case VAR47:
        FUN34(VAR2, VAR4);
        break;
    case VAR48:
        FUN35(VAR2, VAR4);
        break;
    case VAR49:
        FUN36(VAR2, VAR4);
        break;
    case VAR50:
        FUN37(VAR2, VAR4);
        break;
    case VAR51:
        FUN38(VAR2, VAR4);
        break;
    case VAR52:
        FUN39(VAR2, VAR4);
        break;
    case VAR53:
    case VAR54:
    case VAR55:
    case VAR56:
    case VAR57:
        FUN40(VAR2, VAR4, VAR5);
        break;
    case VAR58:
    case VAR59:
    case VAR60:
    case VAR61:
        VAR12 = FUN41(VAR4->VAR17);
        VAR9 = FUN42(VAR4->VAR17);
        VAR6 = FUN43(VAR4->VAR17);
        FUN26(VAR4, VAR5, VAR6, 0, VAR12, VAR9);
        break;
    case VAR18:
        VAR9 = FUN44(VAR4->VAR17);
        VAR6 = FUN45(VAR4->VAR17);
        FUN26(VAR4, VAR5, VAR6, 0, 0, VAR9);
        break;
    case VAR62:
    case VAR63:
    case VAR64:
    case VAR65:
    case VAR66:
    case VAR67:
    case VAR68:
        VAR9 = FUN46(VAR4->VAR17);
        VAR7 = FUN47(VAR4->VAR17);
        VAR6 = FUN48(VAR4->VAR17);
        FUN26(VAR4, VAR5, VAR6, VAR7, 0, VAR9);
        break;
    case VAR69:
        FUN49(VAR2, VAR4);
        break;
    case VAR70:
        FUN50(VAR2, VAR4);
        break;
    case VAR71:
        FUN51(VAR2, VAR4);
        break;
    case VAR72:
        FUN52(VAR2, VAR4);
        break;
    case VAR73:
        FUN53(VAR2, VAR4);
        break;
    case VAR74:
        VAR6 = FUN54(VAR4->VAR17);
        VAR7 = FUN55(VAR4->VAR17);
        VAR8 = FUN56(VAR4->VAR17);
        VAR10 = FUN57(VAR4->VAR17);
        VAR14 = FUN12(VAR10);
        VAR15 = FUN14();
        VAR16 = FUN14();
        FUN23(VAR15, VAR26[VAR8 + 1], 0x1f);
        FUN23(VAR16, VAR26[VAR8], 0x1f);
        FUN58(VAR26[VAR7], VAR26[VAR6], VAR14, VAR15, VAR16);
        FUN17(VAR14);
        FUN17(VAR15);
        FUN17(VAR16);
        break;
    case VAR75:
        FUN59(VAR2, VAR4);
        break;
    case VAR76:
        FUN60(VAR2, VAR4);
        break;
    case VAR77:
        FUN61(VAR2, VAR4);
        break;
    case VAR78:
        FUN62(VAR2, VAR4);
        break;
    case VAR79:
    case VAR80:
    case VAR81:
    case VAR82:
    case VAR83:
    case VAR84:
    case VAR85:
    case VAR86:
    case VAR87:
    case VAR88:
        FUN63(VAR2, VAR4, VAR5);
        break;
    }
}