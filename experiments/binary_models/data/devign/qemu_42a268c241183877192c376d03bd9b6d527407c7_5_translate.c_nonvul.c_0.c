static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    const char *VAR6 = "";
    uint32_t VAR7, VAR8;
    TCGv_i64 VAR9, VAR10;
    VAR7 = FUN2(VAR2->VAR11);
    switch (VAR7)
    {
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
        VAR9 = FUN3();
        VAR10 = FUN3();
        break;
    default:
        VAR9 = FUN4();
        VAR10 = FUN4();
        break;
    }
    FUN5(VAR2, VAR9, VAR4);
    FUN5(VAR2, VAR10, VAR5);
case VAR16##VAR17:
    VAR18##FUN6(VAR9, VAR9, VAR10);
    VAR6 = #VAR19;
    break case VAR16##VAR17 : VAR18##FUN6(VAR9, VAR9);
    VAR6 = #VAR19;
    break case VAR16##VAR17 : VAR20##VAR21##FUN7(VAR9, VAR9, VAR10);
    VAR6 = #VAR19;
    break switch (VAR7)
    {
        FUN8(VAR22, VAR23);
        FUN8(VAR24, VAR25);
        FUN8(VAR26, VAR27);
        FUN8(VAR28, VAR29);
        FUN8(VAR30, VAR31);
        FUN8(VAR32, VAR33);
        FUN8(VAR34, VAR35);
        FUN8(VAR36, VAR37);
        FUN8(VAR38, VAR39);
        FUN8(VAR40, VAR41);
        FUN8(VAR42, VAR43);
        FUN8(VAR44, VAR45);
        FUN8(VAR46, VAR47);
        FUN8(VAR48, VAR49);
        FUN8(VAR50, VAR51);
        FUN8(VAR52, VAR53);
        FUN8(VAR54, VAR55);
        FUN8(VAR56, VAR57);
        FUN8(VAR58, VAR59);
        FUN8(VAR60, VAR61);
        FUN8(VAR62, VAR63);
        FUN8(VAR64, VAR65);
        FUN8(VAR66, VAR67);
        FUN8(VAR68, VAR69);
        FUN8(VAR70, VAR71);
        FUN8(VAR72, VAR73);
        FUN8(VAR74, VAR75);
        FUN8(VAR76, VAR77);
        FUN8(VAR78, VAR79);
        FUN8(VAR80, VAR81);
        FUN8(VAR82, VAR83);
        FUN8(VAR84, VAR85);
        FUN8(VAR86, VAR87);
        FUN8(VAR88, VAR89);
        FUN8(VAR90, VAR91);
        FUN8(VAR92, VAR93);
        FUN8(VAR94, VAR95);
        FUN8(VAR96, VAR97);
        FUN8(VAR98, VAR99);
        FUN8(VAR100, VAR101);
        FUN8(VAR102, VAR103);
        FUN8(VAR104, VAR105);
        FUN8(VAR106, VAR107);
        FUN8(VAR108, VAR109);
        FUN8(VAR110, VAR111);
        FUN8(VAR112, VAR113);
        FUN8(VAR114, VAR115);
        FUN9(VAR116, VAR117);
        FUN9(VAR118, VAR119);
        FUN10(VAR120, VAR121, VAR122);
        FUN10(VAR123, VAR124, VAR125);
        FUN10(VAR126, xor, xor);
        FUN10(VAR127, VAR128, VAR128);
        FUN10(VAR129, and, and);
        FUN10(VAR130, VAR131, VAR132);
        FUN10(VAR133, or, or);
    case VAR134:
        FUN11(VAR9, VAR9, VAR10, 0, 16);
        VAR6 = "";
        break;
    case VAR135:
        FUN11(VAR9, VAR9, VAR10, 16, 16);
        VAR6 = "";
        break;
    case VAR136:
        FUN11(VAR9, VAR9, VAR10, 32, 16);
        VAR6 = "";
        break;
    case VAR137:
        FUN11(VAR9, VAR9, VAR10, 48, 16);
        VAR6 = "";
        break;
    case VAR138:
        FUN12(VAR10, VAR10, 3);
        FUN13(VAR10, VAR10, 4);
        FUN14(VAR9, VAR9, VAR10);
        FUN15(VAR9, VAR9);
        VAR6 = "";
        break;
    case VAR139:
        FUN16(VAR9, VAR9, VAR10);
        FUN17(VAR9, VAR9);
        VAR6 = "";
        break;
    case VAR140:
        FUN18(VAR9, VAR9, VAR10);
        FUN17(VAR9, VAR9);
        VAR6 = "";
        break;
    case VAR141:
        VAR6 = "";
        VAR8 = 32;
        goto VAR142;
    case VAR143:
        VAR6 = "";
        VAR8 = 32;
        goto VAR142;
    case VAR144:
        VAR6 = "";
        VAR8 = 32;
        goto VAR142;
    case VAR145:
        VAR6 = "";
        VAR8 = 64;
        goto VAR142;
    case VAR146:
        VAR6 = "";
        VAR8 = 64;
        goto VAR142;
    case VAR147:
        VAR6 = "";
        VAR8 = 64;
        goto VAR142;
    VAR142:
        FUN12(VAR10, VAR10, VAR8 - 1);
        switch (VAR7)
        {
        case VAR141:
        case VAR145:
            FUN19(VAR9, VAR9, VAR10);
            break;
        case VAR144:
        case VAR147:
            FUN20(VAR9, VAR9, VAR10);
            break;
        case VAR143:
            FUN21(VAR9, VAR9);
        case VAR146:
            FUN14(VAR9, VAR9, VAR10);
            break;
        }
        if (VAR8 == 32)
        {
            FUN17(VAR9, VAR9);
        }
        FUN22(VAR148, VAR10, VAR10, VAR8);
        FUN23(VAR10, VAR10);
        FUN24(VAR9, VAR9, VAR10);
        break;
    case VAR12:
    case VAR14:
    {
        TCGv_i64 VAR149 = FUN4();
        VAR150 *VAR151 = FUN25();
        FUN26(VAR149, VAR9);
        FUN16(VAR9, VAR10, VAR149);
        if (VAR7 == VAR12)
        {
            FUN17(VAR9, VAR9);
        }
        FUN27(VAR10, VAR10, VAR149);
        FUN27(VAR149, VAR149, VAR9);
        FUN28(VAR10, VAR149, VAR10);
        FUN29(VAR149);
        FUN30(VAR152, VAR10, 0, VAR151);
        FUN31(VAR2, VAR153);
        FUN32(VAR151);
        VAR6 = (VAR7 == VAR12 ? "" : "");
        break;
    }
    case VAR13:
    case VAR15:
    {
        TCGv_i64 VAR149 = FUN4();
        VAR150 *VAR151 = FUN25();
        FUN26(VAR149, VAR9);
        FUN18(VAR9, VAR10, VAR149);
        if (VAR7 == VAR13)
        {
            FUN17(VAR9, VAR9);
        }
        FUN27(VAR10, VAR10, VAR149);
        FUN27(VAR149, VAR149, VAR9);
        FUN24(VAR10, VAR10, VAR149);
        FUN29(VAR149);
        FUN30(VAR152, VAR10, 0, VAR151);
        FUN31(VAR2, VAR153);
        FUN32(VAR151);
        VAR6 = (VAR7 == VAR13 ? "" : "");
        break;
    }
    case VAR154:
        FUN21(VAR9, VAR9);
        FUN21(VAR10, VAR10);
        FUN33(VAR9, VAR9, VAR10);
        VAR6 = "";
        break;
    case VAR155:
    case VAR156:
    case VAR157:
    case VAR158:
    case VAR159:
    case VAR160:
    default:
        FUN34(VAR6);
        FUN31(VAR2, VAR161);
        return;
    }
    FUN35(VAR2, VAR9, VAR3);
    (void)VAR6;
    FUN36("", VAR6, VAR162[VAR3], VAR162[VAR4], VAR162[VAR5]);
    FUN29(VAR9);
    FUN29(VAR10);
}