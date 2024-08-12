FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = FUN2();
    VAR7 *VAR8, *VAR9, *VAR10;
    VAR11 *VAR12, *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    int VAR22;
    hwaddr VAR23 = VAR24;
    VAR5 *VAR25 = FUN3(VAR5, 1);
    VAR5 *VAR26 = FUN3(VAR5, 1);
    qemu_irq VAR27[32], *VAR28;
    if (VAR4 == NULL)
    {
        VAR4 = "";
    }
    VAR15 = FUN4(VAR4);
    VAR19 = &VAR15->VAR19;
    FUN5(VAR25, "", VAR29);
    FUN6(VAR25);
    FUN7(VAR6, 0x00000000, VAR25);
    FUN5(VAR26, "", VAR3);
    FUN6(VAR26);
    FUN7(VAR6, VAR23, VAR26);
    VAR21 = FUN8(VAR30, 0, 0);
    FUN9(VAR31, NULL, "", VAR32, VAR21 ? VAR21->VAR33 : NULL, (64 * 1024), VAR32 >> 16, 2, 0x89, 0x18, 0x0000, 0x0, 0);
    VAR28 = FUN10(VAR19);
    VAR8 = FUN11(VAR34, VAR28[0], 4);
    for (VAR22 = 0; VAR22 < 32; VAR22++)
    {
        VAR27[VAR22] = FUN12(VAR8, VAR22);
    }
    FUN13(VAR6, VAR35 + 0x1000, 2, VAR27[5], 115200, VAR36[0], VAR37);
    FUN14(VAR38, VAR27[2], 0, 100 * 1000000);
    FUN15(&VAR39[0], "");
    VAR10 = FUN16(NULL, "");
    VAR9 = FUN16(NULL, "");
    FUN17(FUN18(), "", FUN19(VAR10), NULL);
    FUN17(FUN18(), "", FUN19(VAR9), NULL);
    VAR12 = FUN20(FUN19(VAR9), "", NULL);
    VAR13 = FUN20(FUN19(VAR9), "", NULL);
    FUN21(VAR10, &VAR39[0], FUN22(VAR12), FUN22(VAR13), 0x82780000, VAR27[3], 0x1000, 0x1000);
    VAR12 = FUN20(FUN19(VAR10), "", NULL);
    VAR13 = FUN20(FUN19(VAR10), "", NULL);
    FUN23(VAR9, FUN22(VAR12), FUN22(VAR13), 0x84600000, VAR27[1], VAR27[0], 100 * 1000000);
    {
        VAR40 *VAR41;
        VAR8 = FUN16(NULL, "");
        FUN24(VAR8, "", VAR42);
        FUN25(VAR8);
        VAR17 = FUN26(VAR8);
        FUN27(VAR17, 0, 0x40a00000);
        FUN28(VAR17, 0, VAR27[4]);
        VAR41 = (VAR40 *)FUN29(VAR8, "");
        for (VAR22 = 0; VAR22 < VAR42; VAR22++)
        {
            qemu_irq VAR43;
            VAR8 = FUN30(VAR41, "");
            VAR43 = FUN12(VAR8, 0);
            FUN28(VAR17, VAR22 + 1, VAR43);
        }
    }
    FUN31(VAR15, VAR23, VAR3, VAR44, VAR45);
}