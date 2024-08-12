static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8;
    ram_addr_t VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    qemu_irq VAR14[64];
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19;
    int VAR20 = 0;
    qemu_irq VAR21[4];
    int VAR22;
    uint32_t VAR23 = 0;
    if (!VAR6)
        VAR6 = "";
    if (strcmp(VAR6, "") == 0)
    {
        VAR22 = 4;
    }
    else
    {
        VAR22 = 1;
    }
    for (VAR19 = 0; VAR19 < VAR22; VAR19++)
    {
        VAR8 = FUN2(VAR6);
        if (!VAR8)
        {
            fprintf(VAR24, "");
            FUN3(1);
        }
        VAR13 = FUN4(VAR8);
        VAR21[VAR19] = VAR13[VAR25];
        if (VAR19 > 0)
        {
            FUN5(VAR26, VAR8);
        }
    }
    if (FUN6(VAR8, VAR27))
    {
        VAR23 = 0x0e000000;
    }
    else if (FUN6(VAR8, VAR28))
    {
        VAR23 = 0x06000000;
    }
    else if (FUN6(VAR8, VAR29))
    {
        VAR23 = 0x04000000;
    }
    else
    {
        VAR23 = 0x02000000;
    }
    VAR9 = FUN7(VAR1);
    FUN8(0, VAR1, VAR9 | VAR30);
    FUN9(0x10000000, 0xc1400400, VAR23);
    if (VAR22 == 1)
    {
        VAR11 = FUN10("", 0x10040000, VAR21[0]);
    }
    else
    {
        VAR11 = FUN11("", -1, VAR21[0], VAR21[1], VAR21[2], VAR21[3], NULL);
    }
    for (VAR19 = 0; VAR19 < 64; VAR19++)
    {
        VAR14[VAR19] = FUN12(VAR11, VAR19);
    }
    FUN10("", 0x10006000, VAR14[20]);
    FUN10("", 0x10007000, VAR14[21]);
    FUN10("", 0x10009000, VAR14[12]);
    FUN10("", 0x1000a000, VAR14[13]);
    FUN10("", 0x1000b000, VAR14[14]);
    FUN10("", 0x1000c000, VAR14[15]);
    FUN10("", 0x10030000, VAR14[24]);
    FUN10("", 0x10011000, VAR14[4]);
    FUN10("", 0x10012000, VAR14[5]);
    FUN10("", 0x10020000, VAR14[23]);
    FUN11("", 0x10005000, VAR14[17], VAR14[18], NULL);
    FUN10("", 0x10017000, VAR14[10]);
    VAR11 = FUN11("", 0x60000000, VAR14[48], VAR14[49], VAR14[50], VAR14[51], NULL);
    VAR16 = (VAR15 *)FUN13(VAR11, "");
    if (VAR31)
    {
        FUN14(VAR16, -1);
    }
    VAR19 = FUN15(VAR32);
    while (VAR19 >= 0)
    {
        FUN16(VAR16, -1, "");
        VAR19--;
    }
    for (VAR19 = 0; VAR19 < VAR33; VAR19++)
    {
        VAR18 = &VAR34[VAR19];
        if ((!VAR18->VAR35 && !VAR20) || strcmp(VAR18->VAR35, "") == 0)
        {
            FUN17(VAR18, 0x4e000000, VAR14[28]);
            VAR20 = 1;
        }
        else
        {
            FUN18(VAR18, "", NULL);
        }
    }
    VAR9 = FUN7(0x1000);
    FUN8(0x80000000, 0x1000, VAR9 | VAR30);
    VAR36.VAR1 = VAR1;
    VAR36.VAR3 = VAR3;
    VAR36.VAR4 = VAR4;
    VAR36.VAR5 = VAR5;
    VAR36.VAR37 = VAR22;
    FUN19(VAR38, &VAR36);
}