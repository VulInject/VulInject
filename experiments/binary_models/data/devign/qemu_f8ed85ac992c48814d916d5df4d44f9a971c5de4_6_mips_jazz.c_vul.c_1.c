static void FUN1(VAR1 *VAR2, enum jazz_model_e VAR3)
{
    VAR4 *VAR5 = FUN2();
    const char *VAR6 = VAR2->VAR6;
    char *VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR4 *VAR20;
    VAR4 *VAR21 = FUN3(VAR4, 1);
    VAR4 *VAR22 = FUN3(VAR4, 1);
    VAR4 *VAR23 = FUN3(VAR4, 1);
    VAR4 *VAR24 = FUN3(VAR4, 1);
    VAR4 *VAR25 = FUN3(VAR4, 1);
    VAR26 *VAR27;
    VAR28 *VAR29, *VAR30;
    VAR31 *VAR32;
    VAR33 *VAR34;
    VAR35 *VAR36;
    VAR37 *VAR38[VAR39];
    qemu_irq VAR40, VAR41;
    VAR4 *VAR42 = FUN3(VAR4, 1);
    VAR4 *VAR43 = FUN3(VAR4, 1);
    VAR4 *VAR44 = FUN3(VAR4, 1);
    if (VAR6 == NULL)
    {
        VAR6 = "";
    }
    VAR11 = FUN4(VAR6);
    if (VAR11 == NULL)
    {
        fprintf(VAR45, "");
        FUN5(1);
    }
    VAR15 = &VAR11->VAR15;
    FUN6(VAR46, VAR11);
    VAR13 = FUN7(VAR11);
    VAR47 = VAR13->VAR48;
    VAR13->VAR48 = VAR49;
    FUN8(VAR42, NULL, "", VAR2->VAR50);
    FUN9(VAR5, 0, VAR42);
    FUN10(VAR43, NULL, "", VAR51, &VAR52);
    FUN11(VAR43);
    FUN12(VAR43, true);
    FUN13(VAR44, NULL, "", VAR43, 0, VAR51);
    FUN9(VAR5, 0x1fc00000LL, VAR43);
    FUN9(VAR5, 0xfff00000LL, VAR44);
    if (VAR53 == NULL)
        VAR53 = VAR54;
    VAR7 = FUN14(VAR55, VAR53);
    if (VAR7)
    {
        VAR8 = FUN15(VAR7, 0xfff00000LL, VAR51);
        FUN16(VAR7);
    }
    else
    {
        VAR8 = -1;
    }
    if ((VAR8 < 0 || VAR8 > VAR51) && !FUN17())
    {
        FUN18("", VAR53);
        FUN5(1);
    }
    FUN19(VAR15);
    FUN20(VAR15);
    VAR30 = FUN21(&VAR19, &VAR20);
    VAR32 = FUN22(VAR30);
    FUN23(VAR32, 0, VAR15->VAR56[6]);
    FUN23(VAR32, 1, VAR15->VAR56[3]);
    FUN9(VAR5, 0x80000000, FUN24(VAR32, 0));
    FUN9(VAR5, 0xf0000000, FUN24(VAR32, 1));
    FUN25(VAR25, NULL, &VAR57, NULL, "", 0x1000);
    FUN9(VAR5, 0x8000d000, VAR25);
    FUN26(VAR22, NULL, "", 0x00010000);
    FUN26(VAR21, NULL, "", 0x01000000);
    FUN9(VAR5, 0x90000000, VAR22);
    FUN9(VAR5, 0x91000000, VAR21);
    VAR34 = FUN27(NULL, VAR21, VAR22);
    VAR17 = FUN28(VAR34, VAR15->VAR56[4]);
    FUN29(VAR34, VAR17);
    FUN30(0);
    VAR36 = FUN31(VAR34, 0x40, 0, NULL);
    FUN32(VAR34, VAR36);
    switch (VAR3)
    {
    case VAR58:
        VAR29 = FUN33(NULL, "");
        FUN34(VAR29);
        VAR32 = FUN22(VAR29);
        FUN35(VAR32, 0, 0x60080000);
        FUN35(VAR32, 1, 0x40000000);
        FUN23(VAR32, 0, FUN36(VAR30, 3));
        {
            VAR4 *VAR59 = FUN3(VAR4, 1);
            FUN10(VAR59, NULL, "", 0x80000, &VAR52);
            FUN11(VAR59);
            FUN12(VAR59, true);
            VAR60 *VAR61 = FUN37(VAR59);
            FUN9(VAR5, 0x60000000, VAR59);
            VAR61[0] = 0x10;
        }
        break;
    case VAR62:
        FUN38(0x40000000, 0x60000000, 0, FUN2());
        break;
    default:
        break;
    }
    for (VAR9 = 0; VAR9 < VAR63; VAR9++)
    {
        VAR27 = &VAR64[VAR9];
        if (!VAR27->VAR65)
            VAR27->VAR65 = FUN39("");
        if (strcmp(VAR27->VAR65, "") == 0)
        {
            FUN40(VAR27, "");
            VAR29 = FUN33(NULL, "");
            FUN41(VAR29, VAR27);
            FUN42(VAR29, "", 2);
            FUN43(VAR29, "", VAR20);
            FUN34(VAR29);
            VAR32 = FUN22(VAR29);
            FUN35(VAR32, 0, 0x80001000);
            FUN35(VAR32, 1, 0x8000b000);
            FUN23(VAR32, 0, FUN36(VAR30, 4));
            break;
        }
        else if (FUN44(VAR27->VAR65))
        {
            fprintf(VAR45, "");
            FUN5(1);
        }
        else
        {
            fprintf(VAR45, "", VAR27->VAR65);
            FUN5(1);
        }
    }
    FUN45(0x80002000, 0, VAR66, VAR67, VAR19[0], FUN36(VAR30, 5), &VAR40, &VAR41);
    if (FUN46(VAR68) >= VAR39)
    {
        fprintf(VAR45, "");
        FUN5(1);
    }
    for (VAR9 = 0; VAR9 < VAR39; VAR9++)
    {
        VAR38[VAR9] = FUN47(VAR68, 0, VAR9);
    }
    FUN48(FUN36(VAR30, 1), 0, 0x80003000, VAR38);
    FUN49(VAR34, 1980, NULL);
    FUN25(VAR23, NULL, &VAR69, NULL, "", 0x1000);
    FUN9(VAR5, 0x80004000, VAR23);
    FUN50(FUN36(VAR30, 6), FUN36(VAR30, 7), VAR24, 0x1000, 0x1);
    FUN9(VAR5, 0x80005000, VAR24);
    if (VAR70[0])
    {
        FUN51(VAR5, 0x80006000, 0, FUN36(VAR30, 8), 8000000 / 16, VAR70[0], VAR71);
    }
    if (VAR70[1])
    {
        FUN51(VAR5, 0x80007000, 0, FUN36(VAR30, 9), 8000000 / 16, VAR70[1], VAR71);
    }
    if (VAR72[0])
        FUN52(VAR5, 0x80008000, 0, FUN36(VAR30, 0), VAR72[0]);
    VAR29 = FUN33(NULL, "");
    FUN34(VAR29);
    VAR32 = FUN22(VAR29);
    FUN35(VAR32, 0, 0x80009000);
    FUN53("", 0x8000f000, NULL);
}