static void FUN1(VAR1 *VAR2, enum realview_board_type VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = FUN2();
    VAR10 *VAR12 = FUN3(VAR10, 1);
    VAR10 *VAR13 = FUN3(VAR10, 1);
    VAR10 *VAR14 = FUN3(VAR10, 1);
    VAR10 *VAR15 = FUN3(VAR10, 1);
    VAR16 *VAR17, *VAR18, *VAR19, *VAR20;
    VAR21 *VAR22;
    qemu_irq VAR23[64];
    qemu_irq VAR24[2];
    VAR25 *VAR26 = NULL;
    VAR27 *VAR28;
    VAR29 *VAR30;
    int VAR31;
    int VAR32 = 0;
    qemu_irq VAR33[4];
    int VAR34 = 0;
    int VAR35 = 0;
    uint32_t VAR36 = 0;
    uint32_t VAR37;
    ram_addr_t VAR38;
    ram_addr_t VAR39 = VAR2->VAR39;
    hwaddr VAR40 = 0;
    switch (VAR3)
    {
    case VAR41:
        break;
    case VAR42:
        VAR34 = 1;
        VAR40 = 0x10100000;
        break;
    case VAR43:
        VAR35 = 1;
        break;
    case VAR44:
        VAR34 = 1;
        VAR35 = 1;
        VAR40 = 0x1f000000;
        break;
    }
    VAR9 = FUN4(VAR45, VAR2->VAR46);
    if (!VAR9)
    {
        fprintf(VAR47, "");
        FUN5(1);
    }
    for (VAR31 = 0; VAR31 < VAR48; VAR31++)
    {
        VAR49 *VAR50 = FUN6(FUN7(VAR9));
        VAR51 *VAR52 = NULL;
        if (VAR35 && VAR34)
        {
            FUN8(VAR50, VAR40, "", &VAR52);
            if (VAR52)
            {
                FUN9("", FUN10(VAR52));
                FUN5(1);
            }
        }
        FUN11(VAR50, true, "", &VAR52);
        if (VAR52)
        {
            FUN9("", FUN10(VAR52));
            FUN5(1);
        }
        VAR33[VAR31] = FUN12(FUN13(VAR50), VAR53);
    }
    VAR5 = FUN14(VAR54);
    VAR7 = &VAR5->VAR7;
    if (FUN15(VAR7, VAR55))
    {
        if (VAR34)
        {
            VAR36 = 0x0c000000;
        }
        else
        {
            VAR36 = 0x0e000000;
        }
    }
    else if (FUN15(VAR7, VAR56))
    {
        VAR36 = 0x06000000;
    }
    else if (FUN15(VAR7, VAR57))
    {
        VAR36 = 0x04000000;
    }
    else
    {
        VAR36 = 0x02000000;
    }
    if (VAR35 && VAR39 > 0x20000000)
    {
        VAR38 = VAR39 - 0x20000000;
        VAR39 = 0x20000000;
        FUN16(VAR12, NULL, "", VAR38, &VAR58);
        FUN17(VAR12);
        FUN18(VAR11, 0x20000000, VAR12);
    }
    FUN16(VAR13, NULL, "", VAR39, &VAR58);
    FUN17(VAR13);
    VAR38 = VAR39;
    if (VAR38 > 0x10000000)
        VAR38 = 0x10000000;
    FUN19(VAR14, NULL, "", VAR13, 0, VAR38);
    FUN18(VAR11, 0, VAR14);
    if (VAR35)
    {
        FUN18(VAR11, 0x70000000, VAR13);
    }
    else
    {
        VAR39 = VAR38;
    }
    VAR37 = VAR35 ? 0x01780500 : 0xc1400400;
    VAR18 = FUN20(NULL, "");
    FUN21(VAR18, "", VAR37);
    FUN21(VAR18, "", VAR36);
    FUN22(VAR18);
    FUN23(FUN24(VAR18), 0, 0x10000000);
    if (VAR34)
    {
        VAR17 = FUN20(NULL, VAR35 ? "" : "");
        FUN21(VAR17, "", VAR48);
        FUN22(VAR17);
        VAR22 = FUN24(VAR17);
        FUN23(VAR22, 0, VAR40);
        for (VAR31 = 0; VAR31 < VAR48; VAR31++)
        {
            FUN25(VAR22, VAR31, VAR33[VAR31]);
        }
        FUN26("", VAR40 + 0x2000, NULL);
        VAR59.VAR60 = VAR40 + 0x100;
    }
    else
    {
        uint32_t VAR61 = VAR35 ? 0x1e000000 : 0x10040000;
        VAR17 = FUN27("", VAR61, VAR33[0]);
    }
    for (VAR31 = 0; VAR31 < 64; VAR31++)
    {
        VAR23[VAR31] = FUN12(VAR17, VAR31);
    }
    VAR20 = FUN20(NULL, "");
    FUN21(VAR20, "", 512);
    FUN22(VAR20);
    FUN23(FUN24(VAR20), 0, 0x10004000);
    FUN25(FUN24(VAR20), 0, VAR23[19]);
    FUN27("", 0x10006000, VAR23[20]);
    FUN27("", 0x10007000, VAR23[21]);
    FUN27("", 0x10009000, VAR23[12]);
    FUN27("", 0x1000a000, VAR23[13]);
    FUN27("", 0x1000b000, VAR23[14]);
    FUN27("", 0x1000c000, VAR23[15]);
    FUN27("", 0x10030000, VAR23[24]);
    FUN27("", 0x10011000, VAR23[4]);
    FUN27("", 0x10012000, VAR23[5]);
    FUN27("", 0x10013000, VAR23[6]);
    FUN27("", 0x10014000, VAR23[7]);
    VAR19 = FUN27("", 0x10015000, VAR23[8]);
    FUN27("", 0x10020000, VAR23[23]);
    VAR17 = FUN26("", 0x10005000, VAR23[17], VAR23[18], NULL);
    VAR24[0] = FUN28(FUN12(VAR18, VAR62), FUN12(VAR19, 1));
    VAR24[1] = FUN28(FUN12(VAR18, VAR63), FUN29(FUN12(VAR19, 0)));
    FUN30(VAR17, 0, VAR24[0]);
    FUN30(VAR17, 1, VAR24[1]);
    FUN27("", 0x10017000, VAR23[10]);
    if (!VAR35)
    {
        VAR17 = FUN20(NULL, "");
        VAR22 = FUN24(VAR17);
        FUN22(VAR17);
        FUN23(VAR22, 0, 0x10019000);
        FUN23(VAR22, 1, 0x60000000);
        FUN23(VAR22, 2, 0x61000000);
        FUN23(VAR22, 3, 0x62000000);
        FUN23(VAR22, 4, 0x63000000);
        FUN23(VAR22, 5, 0x64000000);
        FUN23(VAR22, 6, 0x68000000);
        FUN25(VAR22, 0, VAR23[48]);
        FUN25(VAR22, 1, VAR23[49]);
        FUN25(VAR22, 2, VAR23[50]);
        FUN25(VAR22, 3, VAR23[51]);
        VAR26 = (VAR25 *)FUN31(VAR17, "");
        if (FUN32(false))
        {
            FUN33(VAR26, -1, "");
        }
        VAR31 = FUN34(VAR64);
        while (VAR31 >= 0)
        {
            FUN33(VAR26, -1, "");
            VAR31--;
        }
    }
    for (VAR31 = 0; VAR31 < VAR65; VAR31++)
    {
        VAR28 = &VAR66[VAR31];
        if (!VAR32 && (!VAR28->VAR67 || strcmp(VAR28->VAR67, VAR35 ? "" : "") == 0))
        {
            if (VAR35)
            {
                FUN35(VAR28, 0x4e000000, VAR23[28]);
            }
            else
            {
                FUN36(VAR28, 0x4e000000, VAR23[28]);
            }
            VAR32 = 1;
        }
        else
        {
            if (VAR26)
            {
                FUN37(VAR28, VAR26, "", NULL);
            }
        }
    }
    VAR17 = FUN27("", 0x10002000, NULL);
    VAR30 = (VAR29 *)FUN31(VAR17, "");
    FUN38(VAR30, "", 0x68);
    FUN16(VAR15, NULL, "", 0x1000, &VAR58);
    FUN17(VAR15);
    FUN18(VAR11, VAR68, VAR15);
    VAR59.VAR39 = VAR39;
    VAR59.VAR69 = VAR2->VAR69;
    VAR59.VAR70 = VAR2->VAR70;
    VAR59.VAR71 = VAR2->VAR71;
    VAR59.VAR72 = VAR48;
    VAR59.VAR73 = VAR74[VAR3];
    VAR59.VAR75 = (VAR3 == VAR43 ? 0x70000000 : 0);
    FUN39(FUN14(VAR54), &VAR59);
}