static void FUN1(VAR1 *VAR2, VAR1 *VAR3, ram_addr_t VAR4, const char *VAR5, enum jazz_model_e VAR6)
{
    char *VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15, *VAR16;
    VAR17 *VAR18;
    void *VAR19;
    VAR1 *VAR20 = FUN2(VAR1, 1);
    VAR1 *VAR21 = FUN2(VAR1, 1);
    VAR1 *VAR22 = FUN2(VAR1, 1);
    VAR23 *VAR24;
    VAR25 *VAR26;
    VAR27 *VAR28;
    VAR29 *VAR30;
    VAR31 *VAR32;
    VAR33 *VAR34[VAR35];
    qemu_irq VAR36, VAR37;
    VAR14 *VAR38;
    VAR1 *VAR39 = FUN2(VAR1, 1);
    VAR1 *VAR40 = FUN2(VAR1, 1);
    VAR1 *VAR41 = FUN2(VAR1, 1);
    if (VAR5 == NULL)
    {
        VAR5 = "";
        VAR5 = "";
    }
    VAR11 = FUN3(VAR5);
    if (VAR11 == NULL)
    {
        fprintf(VAR42, "");
        FUN4(1);
    }
    VAR13 = &VAR11->VAR13;
    FUN5(VAR43, VAR11);
    FUN6(VAR39, "", VAR4);
    FUN7(VAR39);
    FUN8(VAR2, 0, VAR39);
    FUN6(VAR40, "", VAR44);
    FUN7(VAR40);
    FUN9(VAR40, true);
    FUN10(VAR41, "", VAR40, 0, VAR44);
    FUN8(VAR2, 0x1fc00000LL, VAR40);
    FUN8(VAR2, 0xfff00000LL, VAR41);
    if (VAR45 == NULL)
        VAR45 = VAR46;
    VAR7 = FUN11(VAR47, VAR45);
    if (VAR7)
    {
        VAR8 = FUN12(VAR7, 0xfff00000LL, VAR44);
        FUN13(VAR7);
    }
    else
    {
        VAR8 = -1;
    }
    if (VAR8 < 0 || VAR8 > VAR44)
    {
        fprintf(VAR42, "", VAR45);
        FUN4(1);
    }
    FUN14(VAR13);
    FUN15(VAR13);
    VAR19 = FUN16(VAR13->VAR48[6], VAR13->VAR48[3], &VAR15, &VAR18, VAR2);
    FUN17(VAR22, &VAR49, NULL, "", 0x1000);
    FUN8(VAR2, 0x8000d000, VAR22);
    VAR30 = FUN18(NULL, VAR3);
    VAR16 = FUN19(VAR30, VAR13->VAR48[4]);
    FUN20(VAR30, VAR16);
    VAR38 = FUN21(VAR50, NULL, 1);
    FUN22(0, VAR38);
    VAR32 = FUN23(VAR30, 0x40, 0, NULL);
    FUN24(VAR30, VAR32);
    FUN25(0x90000000, 0x01000000);
    VAR51 = 0x11000000;
    switch (VAR6)
    {
    case VAR52:
        VAR26 = FUN26(NULL, "");
        FUN27(VAR26);
        VAR28 = FUN28(VAR26);
        FUN29(VAR28, 0, 0x60080000);
        FUN29(VAR28, 1, 0x40000000);
        FUN30(VAR28, 0, VAR15[3]);
        {
            VAR1 *VAR53 = FUN2(VAR1, 1);
            FUN6(VAR53, "", 0x80000);
            FUN7(VAR53);
            FUN9(VAR53, true);
            VAR54 *VAR55 = FUN31(VAR53);
            FUN8(VAR2, 0x60000000, VAR53);
            VAR55[0] = 0x10;
        }
        break;
    case VAR56:
        FUN32(0x40000000, 0x60000000, 0, FUN33());
        break;
    default:
        break;
    }
    for (VAR9 = 0; VAR9 < VAR57; VAR9++)
    {
        VAR24 = &VAR58[VAR9];
        if (!VAR24->VAR59)
            VAR24->VAR59 = FUN34("");
        if (strcmp(VAR24->VAR59, "") == 0)
        {
            FUN35(VAR24, 0x80001000, 2, FUN33(), VAR15[4], VAR19, VAR60);
            break;
        }
        else if (strcmp(VAR24->VAR59, "") == 0)
        {
            fprintf(VAR42, "");
            FUN4(1);
        }
        else
        {
            fprintf(VAR42, "", VAR24->VAR59);
            FUN4(1);
        }
    }
    FUN36(0x80002000, 0, VAR61, VAR62, VAR18[0], VAR15[5], &VAR36, &VAR37);
    if (FUN37(VAR63) >= VAR35)
    {
        fprintf(VAR42, "");
        FUN4(1);
    }
    for (VAR9 = 0; VAR9 < VAR35; VAR9++)
    {
        VAR34[VAR9] = FUN38(VAR63, 0, VAR9);
    }
    FUN39(VAR15[1], 0, 0x80003000, VAR34);
    FUN40(VAR30, 1980, NULL);
    FUN17(VAR20, &VAR64, NULL, "", 0x1000);
    FUN8(VAR2, 0x80004000, VAR20);
    FUN41(VAR15[6], VAR15[7], VAR21, 0x1000, 0x1);
    FUN8(VAR2, 0x80005000, VAR21);
    if (VAR65[0])
    {
        FUN42(VAR2, 0x80006000, 0, VAR15[8], 8000000 / 16, VAR65[0], VAR66);
    }
    if (VAR65[1])
    {
        FUN42(VAR2, 0x80007000, 0, VAR15[9], 8000000 / 16, VAR65[1], VAR66);
    }
    if (VAR67[0])
        FUN43(VAR2, 0x80008000, 0, VAR15[0], VAR67[0]);
    FUN44(VAR30, NULL);
    VAR26 = FUN26(NULL, "");
    FUN27(VAR26);
    VAR28 = FUN28(VAR26);
    FUN29(VAR28, 0, 0x80009000);
    FUN45("", 0x8000f000, NULL);
}