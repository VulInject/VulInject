VAR1 *FUN1(unsigned int VAR2)
{
    VAR1 *VAR3;
    int VAR4, VAR5;
    VAR6 *VAR7;
    VAR3 = (VAR1 *)FUN2(sizeof(VAR1));
    VAR3->VAR8 = FUN3("");
    if (!VAR3->VAR8)
    {
        fprintf(VAR9, "");
        FUN4(1);
    }
    VAR3->VAR10 = FUN5(VAR11, VAR3, 1)[0];
    FUN6(VAR12, VAR2, FUN7(NULL, "", VAR2) | VAR13);
    FUN6(VAR14, VAR15, FUN7(NULL, "", VAR15) | VAR13);
    VAR3->VAR16 = FUN8(0x40d00000, VAR3->VAR8);
    VAR3->VAR17 = FUN9(0x40000000, FUN10(VAR3->VAR16, VAR18));
    FUN11(0x40a00000, VAR3->VAR16);
    VAR3->VAR19 = FUN12(0x40e00000, VAR3->VAR8, VAR3->VAR16, 85);
    VAR7 = FUN13(VAR20, 0, 0);
    if (!VAR7)
    {
        fprintf(VAR9, "");
        FUN4(1);
    }
    VAR3->VAR21 = FUN14(0x41100000, VAR7->VAR22, FUN10(VAR3->VAR16, VAR23), VAR3->VAR17);
    for (VAR5 = 0; VAR24[VAR5].VAR25; VAR5++)
        if (VAR26[VAR5])
        {
            FUN15(VAR24[VAR5].VAR25, 2, FUN10(VAR3->VAR16, VAR24[VAR5].VAR27), 14745600 / 16, VAR26[VAR5], 1, 1);
            FUN15(VAR24[VAR5].VAR25, 2, FUN10(VAR3->VAR16, VAR24[VAR5].VAR27), 14745600 / 16, VAR26[VAR5], 1, 0);
        }
        else
        {
            break;
        }
    if (VAR26[VAR5])
        VAR3->VAR28 = FUN16(0x40800000, FUN10(VAR3->VAR16, VAR29), VAR3->VAR17, VAR26[VAR5]);
    VAR3->VAR30 = FUN17(0x44000000, FUN10(VAR3->VAR16, VAR31));
    VAR3->VAR32 = 0x41300000;
    VAR3->VAR33[VAR34 >> 2] = 0x02000210;
    VAR3->VAR35 = 0x00000009;
    VAR4 = FUN18(VAR36, VAR37, VAR3, VAR38);
    FUN6(VAR3->VAR32, 0x1000, VAR4);
    FUN19(NULL, "", 0, 0, VAR39, VAR40, VAR3);
    FUN20(VAR3->VAR8, 14, VAR41, VAR42, VAR3);
    VAR3->VAR43 = 0x48000000;
    VAR3->VAR44[VAR45 >> 2] = 0x00020002;
    VAR3->VAR44[VAR46 >> 2] = 0x03ca4000;
    VAR3->VAR44[VAR47 >> 2] = 0x00000001;
    VAR4 = FUN18(VAR48, VAR49, VAR3, VAR38);
    FUN6(VAR3->VAR43, 0x1000, VAR4);
    FUN19(NULL, "", 0, 0, VAR50, VAR51, VAR3);
    VAR3->VAR52 = 0x40f00000;
    VAR4 = FUN18(VAR53, VAR54, VAR3, VAR38);
    FUN6(VAR3->VAR52, 0x100, VAR4);
    FUN19(NULL, "", 0, 0, VAR55, VAR56, VAR3);
    for (VAR5 = 0; VAR57[VAR5].VAR25; VAR5++)
        ;
    VAR3->VAR58 = (VAR59 **)FUN2(sizeof(VAR59 *) * VAR5);
    for (VAR5 = 0; VAR57[VAR5].VAR25; VAR5++)
    {
        VAR60 *VAR61;
        VAR61 = FUN21("", VAR57[VAR5].VAR25, FUN10(VAR3->VAR16, VAR57[VAR5].VAR27));
        VAR3->VAR58[VAR5] = (VAR59 *)FUN22(VAR61, "");
    }
    if (VAR62)
    {
        FUN21("", 0x4c000000, FUN10(VAR3->VAR16, VAR63));
    }
    VAR3->VAR64[0] = FUN23(0x20000000);
    VAR3->VAR64[1] = FUN23(0x30000000);
    VAR3->VAR65 = 0x40900000;
    VAR4 = FUN18(VAR66, VAR67, VAR3, VAR38);
    FUN6(VAR3->VAR65, 0x1000, VAR4);
    FUN24(VAR3);
    FUN19(NULL, "", 0, 0, VAR68, VAR69, VAR3);
    VAR3->VAR70[0] = FUN25(0x40301600, FUN10(VAR3->VAR16, VAR71), 0xffff);
    VAR3->VAR70[1] = FUN25(0x40f00100, FUN10(VAR3->VAR16, VAR72), 0xff);
    VAR3->VAR73 = FUN26(0x40400000, FUN10(VAR3->VAR16, VAR74), VAR3->VAR17);
    FUN27(VAR3->VAR19, 1, VAR3->VAR10);
    return VAR3;
}