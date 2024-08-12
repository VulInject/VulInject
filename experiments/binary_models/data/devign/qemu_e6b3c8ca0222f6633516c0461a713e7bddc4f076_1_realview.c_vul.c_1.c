static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, enum realview_board_type VAR7)
{
    VAR8 *VAR9 = NULL;
    ram_addr_t VAR10;
    VAR11 *VAR12, *VAR13, *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    qemu_irq VAR19[64];
    qemu_irq VAR20[2];
    VAR21 *VAR22;
    VAR23 *VAR24;
    VAR25 *VAR26;
    int VAR27;
    int VAR28 = 0;
    qemu_irq VAR29[4];
    int VAR30 = 0;
    int VAR31 = 0;
    uint32_t VAR32 = 0;
    uint32_t VAR33;
    ram_addr_t VAR34;
    switch (VAR7)
    {
    case VAR35:
        break;
    case VAR36:
        VAR30 = 1;
        break;
    case VAR37:
        VAR31 = 1;
        break;
    case VAR38:
        VAR30 = 1;
        VAR31 = 1;
        break;
    }
    for (VAR27 = 0; VAR27 < VAR39; VAR27++)
    {
        VAR9 = FUN2(VAR6);
        if (!VAR9)
        {
            fprintf(VAR40, "");
            FUN3(1);
        }
        VAR18 = FUN4(VAR9);
        VAR29[VAR27] = VAR18[VAR41];
    }
    if (FUN5(VAR9, VAR42))
    {
        if (VAR30)
        {
            VAR32 = 0x0c000000;
        }
        else
        {
            VAR32 = 0x0e000000;
        }
    }
    else if (FUN5(VAR9, VAR43))
    {
        VAR32 = 0x06000000;
    }
    else if (FUN5(VAR9, VAR44))
    {
        VAR32 = 0x04000000;
    }
    else
    {
        VAR32 = 0x02000000;
    }
    if (VAR31 && VAR1 > 0x20000000)
    {
        VAR34 = VAR1 - 0x20000000;
        VAR1 = 0x20000000;
        VAR10 = FUN6(NULL, "", VAR34);
        FUN7(0x20000000, VAR34, VAR10 | VAR45);
    }
    VAR10 = FUN6(NULL, "", VAR1);
    VAR34 = VAR1;
    if (VAR34 > 0x10000000)
        VAR34 = 0x10000000;
    FUN7(0, VAR34, VAR10 | VAR45);
    if (VAR31)
    {
        FUN7(0x70000000, VAR1, VAR10 | VAR45);
    }
    else
    {
        VAR1 = VAR34;
    }
    VAR33 = VAR31 ? 0x01780500 : 0xc1400400;
    VAR13 = FUN8(NULL, "");
    FUN9(VAR13, "", VAR33);
    FUN10(VAR13);
    FUN9(VAR13, "", VAR32);
    FUN11(FUN12(VAR13), 0, 0x10000000);
    if (VAR30)
    {
        VAR12 = FUN8(NULL, VAR31 ? "" : "");
        FUN9(VAR12, "", VAR39);
        FUN10(VAR12);
        VAR16 = FUN12(VAR12);
        if (VAR31)
        {
            VAR46.VAR47 = 0x1f000000;
        }
        else
        {
            VAR46.VAR47 = 0x10100000;
        }
        FUN11(VAR16, 0, VAR46.VAR47);
        for (VAR27 = 0; VAR27 < VAR39; VAR27++)
        {
            FUN13(VAR16, VAR27, VAR29[VAR27]);
        }
    }
    else
    {
        uint32_t VAR48 = VAR31 ? 0x1e000000 : 0x10040000;
        VAR12 = FUN14("", VAR48, VAR29[0]);
    }
    for (VAR27 = 0; VAR27 < 64; VAR27++)
    {
        VAR19[VAR27] = FUN15(VAR12, VAR27);
    }
    FUN14("", 0x10006000, VAR19[20]);
    FUN14("", 0x10007000, VAR19[21]);
    FUN14("", 0x10009000, VAR19[12]);
    FUN14("", 0x1000a000, VAR19[13]);
    FUN14("", 0x1000b000, VAR19[14]);
    FUN14("", 0x1000c000, VAR19[15]);
    FUN14("", 0x10030000, VAR19[24]);
    FUN14("", 0x10011000, VAR19[4]);
    FUN14("", 0x10012000, VAR19[5]);
    FUN14("", 0x10013000, VAR19[6]);
    FUN14("", 0x10014000, VAR19[7]);
    VAR14 = FUN14("", 0x10015000, VAR19[8]);
    FUN14("", 0x10020000, VAR19[23]);
    VAR12 = FUN16("", 0x10005000, VAR19[17], VAR19[18], NULL);
    VAR20[0] = FUN17(FUN15(VAR13, VAR49), FUN15(VAR14, 1));
    VAR20[1] = FUN17(FUN15(VAR13, VAR50), FUN18(FUN15(VAR14, 0)));
    FUN19(VAR12, 0, VAR20[0]);
    FUN19(VAR12, 1, VAR20[1]);
    FUN14("", 0x10017000, VAR19[10]);
    if (!VAR31)
    {
        VAR12 = FUN16("", 0x60000000, VAR19[48], VAR19[49], VAR19[50], VAR19[51], NULL);
        VAR22 = (VAR21 *)FUN20(VAR12, "");
        if (VAR51)
        {
            FUN21(VAR22, -1);
        }
        VAR27 = FUN22(VAR52);
        while (VAR27 >= 0)
        {
            FUN23(VAR22, -1, "");
            VAR27--;
        }
    }
    for (VAR27 = 0; VAR27 < VAR53; VAR27++)
    {
        VAR24 = &VAR54[VAR27];
        if ((!VAR24->VAR55 && !VAR28) || strcmp(VAR24->VAR55, VAR31 ? "" : "") == 0)
        {
            if (VAR31)
            {
                FUN24(VAR24, 0x4e000000, VAR19[28]);
            }
            else
            {
                FUN25(VAR24, 0x4e000000, VAR19[28]);
            }
            VAR28 = 1;
        }
        else
        {
            FUN26(VAR24, "", NULL);
        }
    }
    VAR12 = FUN14("", 0x10002000, NULL);
    VAR26 = (VAR25 *)FUN20(VAR12, "");
    FUN27(VAR26, "", 0x68);
    VAR10 = FUN6(NULL, "", 0x1000);
    FUN7(VAR56, 0x1000, VAR10 | VAR45);
    VAR46.VAR1 = VAR1;
    VAR46.VAR3 = VAR3;
    VAR46.VAR4 = VAR4;
    VAR46.VAR5 = VAR5;
    VAR46.VAR57 = VAR39;
    VAR46.VAR58 = VAR59[VAR7];
    VAR46.VAR60 = (VAR7 == VAR37 ? 0x70000000 : 0);
    FUN28(VAR61, &VAR46);
}