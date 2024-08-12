void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    qemu_irq VAR17[30], VAR18[2];
    void *VAR19;
    struct VAR20 *VAR21;
    int VAR22;
    VAR23 *VAR24 = FUN2();
    VAR23 *VAR25 = FUN3(VAR23, 1);
    VAR23 *VAR26 = FUN3(VAR23, 1);
    if (VAR4 == NULL)
    {
        VAR4 = "";
    }
    VAR8 = FUN4(VAR4);
    VAR10 = &VAR8->VAR10;
    FUN5(VAR25, NULL, "", VAR3);
    FUN6(VAR24, 0x40000000, VAR25);
    FUN7(VAR26, NULL, "", VAR27, &VAR28);
    FUN8(VAR26);
    FUN6(VAR24, 0x38000000, VAR26);
    VAR16 = FUN9(VAR29, 0, 0);
    VAR30.VAR16 = FUN10(VAR16 ? FUN11(VAR16) : NULL, VAR31, 0x39);
    FUN12(&VAR30.VAR32, NULL, &VAR33, &VAR30, "", 0x05000000);
    FUN6(VAR24, 0x10000000, &VAR30.VAR32);
    VAR34.VAR16 = &VAR30;
    FUN12(&VAR34.VAR32, NULL, &VAR35, &VAR34, "", 0x5c);
    FUN6(VAR24, 0x3001a000, &VAR34.VAR32);
    VAR12 = FUN13(NULL, "");
    FUN14(VAR12, "", &VAR10->VAR36);
    FUN15(VAR12);
    VAR14 = FUN16(VAR12);
    FUN17(VAR14, 0, 0x3001c000);
    FUN18(VAR14, 0, FUN19(FUN20(VAR8), VAR37));
    FUN18(VAR14, 1, FUN19(FUN20(VAR8), VAR38));
    for (VAR22 = 0; VAR22 < 30; VAR22++)
    {
        VAR17[VAR22] = FUN19(VAR12, VAR22);
    }
    VAR18[0] = FUN19(VAR12, 30);
    VAR18[1] = FUN19(VAR12, 31);
    VAR19 = FUN21(0x30000000, 10);
    for (VAR22 = 0; VAR22 < 10; VAR22++)
    {
        FUN22(VAR19, VAR22, VAR17 + 7 + VAR22, VAR22 & 1);
    }
    VAR21 = FUN23(sizeof VAR21[0] * 4);
    FUN24(&VAR39[0], 0x30034000, 1, &VAR21[0], &VAR21[1]);
    if (VAR40 > 1)
    {
        FUN24(&VAR39[1], 0x30036000, 2, &VAR21[2], &VAR21[3]);
    }
    FUN25(VAR19, 0, &VAR21[0]);
    FUN25(VAR19, 1, &VAR21[1]);
    if (VAR40 > 1)
    {
        FUN25(VAR19, 6, &VAR21[2]);
        FUN25(VAR19, 7, &VAR21[3]);
    }
    FUN26("", 0x3001e000, VAR17[0x1b], VAR18[1], NULL);
    FUN26("", 0x3005e000, VAR17[0x1b], VAR18[1], NULL);
    for (VAR22 = 0; VAR22 < 4; VAR22++)
    {
        FUN27("", 0x30026000 + VAR22 * 0x2000, VAR17[0x14 + VAR22]);
    }
    if (VAR5)
    {
        VAR41.VAR42 = VAR5;
        VAR41.VAR43 = VAR6;
        FUN28(VAR8, &VAR41);
    }
    else if (!FUN29())
    {
        fprintf(VAR44, "");
        FUN30(1);
    }
}