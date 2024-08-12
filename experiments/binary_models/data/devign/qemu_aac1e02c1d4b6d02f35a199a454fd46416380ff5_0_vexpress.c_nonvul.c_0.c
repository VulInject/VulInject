static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10 = FUN2();
    VAR9 *VAR11 = FUN3(VAR9, 1);
    VAR9 *VAR12 = FUN3(VAR9, 1);
    VAR9 *VAR13 = FUN3(VAR9, 1);
    VAR9 *VAR14 = FUN3(VAR9, 1);
    VAR15 *VAR16, *VAR17, *VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    qemu_irq VAR23[64];
    int VAR24;
    qemu_irq VAR25[4];
    uint32_t VAR26;
    uint32_t VAR27;
    ram_addr_t VAR28, VAR29, VAR30;
    VAR31 *VAR32 = VAR33;
    if (!VAR6)
    {
        VAR6 = "";
    }
    for (VAR24 = 0; VAR24 < VAR34; VAR24++)
    {
        VAR8 = FUN4(VAR6);
        if (!VAR8)
        {
            fprintf(VAR35, "");
            FUN5(1);
        }
        VAR22 = FUN6(VAR8);
        VAR25[VAR24] = VAR22[VAR36];
    }
    if (VAR1 > 0x40000000)
    {
        fprintf(VAR35, "");
        FUN5(1);
    }
    FUN7(VAR11, "", VAR1);
    FUN8(VAR11);
    VAR28 = VAR1;
    if (VAR28 > 0x4000000)
    {
        VAR28 = 0x4000000;
    }
    FUN9(VAR12, "", VAR11, 0, VAR28);
    FUN10(VAR10, 0x0, VAR12);
    FUN10(VAR10, 0x60000000, VAR11);
    VAR16 = FUN11(NULL, "");
    FUN12(VAR16, "", VAR34);
    FUN13(VAR16);
    VAR20 = FUN14(VAR16);
    VAR37.VAR38 = 0x1e000000;
    FUN15(VAR20, 0, VAR37.VAR38);
    for (VAR24 = 0; VAR24 < VAR34; VAR24++)
    {
        FUN16(VAR20, VAR24, VAR25[VAR24]);
    }
    for (VAR24 = 0; VAR24 < 64; VAR24++)
    {
        VAR23[VAR24] = FUN17(VAR16, VAR24);
    }
    VAR27 = 0x1190f500;
    VAR26 = 0x0c000191;
    VAR17 = FUN11(NULL, "");
    FUN12(VAR17, "", VAR27);
    FUN12(VAR17, "", VAR26);
    FUN13(VAR17);
    FUN15(FUN14(VAR17), 0, VAR32[VAR39]);
    VAR18 = FUN11(NULL, "");
    FUN12(VAR18, "", 512);
    FUN13(VAR18);
    FUN15(FUN14(VAR18), 0, VAR32[VAR40]);
    FUN16(FUN14(VAR18), 0, VAR23[11]);
    VAR16 = FUN18("", VAR32[VAR41], VAR23[9], VAR23[10], NULL);
    FUN19(VAR16, 0, FUN17(VAR17, VAR42));
    FUN19(VAR16, 1, FUN17(VAR17, VAR43));
    FUN20("", VAR32[VAR44], VAR23[12]);
    FUN20("", VAR32[VAR45], VAR23[13]);
    FUN20("", VAR32[VAR46], VAR23[5]);
    FUN20("", VAR32[VAR47], VAR23[6]);
    FUN20("", VAR32[VAR48], VAR23[7]);
    FUN20("", VAR32[VAR49], VAR23[8]);
    FUN20("", VAR32[VAR50], VAR23[2]);
    FUN20("", VAR32[VAR51], VAR23[3]);
    FUN20("", VAR32[VAR52], VAR23[4]);
    FUN20("", 0x10020000, VAR23[44]);
    FUN20("", 0x100e4000, VAR23[48]);
    FUN18("", 0x1e00a000, NULL);
    VAR30 = 0x2000000;
    FUN7(VAR14, "", VAR30);
    FUN8(VAR14);
    FUN10(VAR10, VAR32[VAR53], VAR14);
    VAR29 = 0x800000;
    FUN7(VAR13, "", VAR29);
    FUN8(VAR13);
    FUN10(VAR10, VAR32[VAR54], VAR13);
    if (VAR55[0].VAR56)
    {
        FUN21(&VAR55[0], VAR32[VAR57], VAR23[15]);
    }
    VAR37.VAR1 = VAR1;
    VAR37.VAR3 = VAR3;
    VAR37.VAR4 = VAR4;
    VAR37.VAR5 = VAR5;
    VAR37.VAR58 = VAR34;
    VAR37.VAR59 = VAR60;
    VAR37.VAR61 = 0x60000000;
    VAR37.VAR62 = VAR32[VAR53];
    VAR37.VAR63 = VAR32[VAR39] + 0x30;
    FUN22(VAR64, &VAR37);
}