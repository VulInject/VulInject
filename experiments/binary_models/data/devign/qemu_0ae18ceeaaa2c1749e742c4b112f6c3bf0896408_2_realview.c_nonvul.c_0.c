static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    void *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19;
    int VAR20 = 0;
    qemu_irq VAR21[4];
    int VAR22;
    int VAR23;
    if (!VAR9)
        VAR9 = "";
    if (strcmp(VAR9, "") == 0)
    {
        VAR22 = 4;
    }
    else
    {
        VAR22 = 1;
    }
    for (VAR19 = 0; VAR19 < VAR22; VAR19++)
    {
        VAR11 = FUN2(VAR9);
        if (!VAR11)
        {
            fprintf(VAR24, "");
            FUN3(1);
        }
        VAR13 = FUN4(VAR11);
        VAR21[VAR19] = VAR13[VAR25];
        if (VAR19 > 0)
        {
            VAR11->VAR26[15] = 0x80000000;
        }
    }
    FUN5(0, VAR1, VAR27);
    FUN6(0x10000000, 0xc1400400);
    if (VAR22 == 1)
    {
        VAR13 = FUN7(0x10040000, VAR21[0]);
    }
    else
    {
        VAR13 = FUN8(VAR21);
    }
    FUN9(0x10006000, VAR13[20], 0);
    FUN9(0x10007000, VAR13[21], 1);
    FUN10(0x10009000, VAR13[12], VAR28[0], VAR29);
    FUN10(0x1000a000, VAR13[13], VAR28[1], VAR29);
    FUN10(0x1000b000, VAR13[14], VAR28[2], VAR29);
    FUN10(0x1000c000, VAR13[15], VAR28[3], VAR29);
    FUN11(0x10030000, VAR13[24], 2);
    FUN12(0x10011000, VAR13[4]);
    FUN12(0x10012000, VAR13[5]);
    FUN13(VAR5, 0x10020000, VAR13[23], 1);
    VAR23 = FUN14(VAR30, 0, 0);
    if (VAR23 == -1)
    {
        fprintf(VAR24, "");
        FUN3(1);
    }
    FUN15(0x10005000, VAR31[VAR23].VAR32, VAR13[17], VAR13[18]);
    FUN16(0x10017000, VAR13[10]);
    VAR16 = FUN17(VAR13, 48, 1);
    if (VAR33)
    {
        FUN18(VAR16, 3, -1);
    }
    if (FUN19(VAR34) > 0)
    {
        fprintf(VAR24, "");
        FUN3(1);
    }
    VAR14 = FUN20(VAR16, -1);
    for (VAR19 = 0; VAR19 < VAR35; VAR19++)
    {
        VAR23 = FUN14(VAR34, 0, VAR19);
        if (VAR23 == -1)
            continue;
        FUN21(VAR14, VAR31[VAR23].VAR32, VAR19);
    }
    for (VAR19 = 0; VAR19 < VAR36; VAR19++)
    {
        VAR18 = &VAR37[VAR19];
        if ((!VAR18->VAR38 && !VAR20) || strcmp(VAR18->VAR38, "") == 0)
        {
            FUN22(VAR18, 0x4e000000, VAR13[28]);
            VAR20 = 1;
        }
        else
        {
            if (!VAR18->VAR38)
                VAR18->VAR38 = "";
            FUN23(VAR16, VAR18, -1);
        }
    }
    VAR39.VAR1 = VAR1;
    VAR39.VAR6 = VAR6;
    VAR39.VAR7 = VAR7;
    VAR39.VAR8 = VAR8;
    VAR39.VAR40 = VAR22;
    FUN24(VAR41, &VAR39);
    FUN5(0x80000000, 0x1000, VAR27 + VAR1);
}