static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    hwaddr VAR7 = 0;
    int VAR8 = 0;
    VAR9 *VAR10 = FUN2();
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    hwaddr VAR17 = 0;
    VAR18 *VAR19;
    VAR9 *VAR20 = FUN3(VAR9, 1);
    qemu_irq VAR21[32], *VAR22;
    int VAR23;
    int VAR24;
    if (VAR4 == NULL)
    {
        VAR4 = "";
    }
    VAR14 = FUN4(&VAR3, 1, VAR4, 400000000);
    VAR16 = &VAR14->VAR16;
    FUN5(VAR25, VAR14);
    FUN6(VAR20, NULL, "", VAR3);
    FUN7(VAR10, VAR17, VAR20);
    VAR19 = FUN8(VAR26, 0, 0);
    FUN9(VAR27, NULL, "", VAR28, VAR19 ? FUN10(VAR19) : NULL, (64 * 1024), VAR28 >> 16, 1, 0x89, 0x18, 0x0000, 0x0, 1);
    VAR22 = (VAR29 *)&VAR16->VAR30[VAR31];
    VAR12 = FUN11(NULL, "");
    FUN12(VAR12, "", 0);
    FUN13(VAR12);
    FUN14(FUN15(VAR12), 0, VAR32);
    FUN16(FUN15(VAR12), 0, VAR22[0]);
    for (VAR24 = 0; VAR24 < 32; VAR24++)
    {
        VAR21[VAR24] = FUN17(VAR12, VAR24);
    }
    FUN18(VAR10, VAR33, 2, VAR21[VAR34], 115200, VAR35[0], VAR36);
    VAR12 = FUN11(NULL, "");
    FUN12(VAR12, "", 0);
    FUN12(VAR12, "", 62 * 1000000);
    FUN13(VAR12);
    FUN14(FUN15(VAR12), 0, VAR37);
    FUN16(FUN15(VAR12), 0, VAR21[VAR38]);
    if (VAR5)
    {
        uint64_t VAR39, VAR40, VAR41;
        hwaddr VAR42;
        VAR23 = FUN19(VAR5, NULL, NULL, &VAR39, &VAR40, &VAR41, 1, VAR43, 0);
        VAR44.VAR45 = VAR39 & 0x00ffffff;
        if (VAR23 < 0)
        {
            VAR42 = 0x1200000;
            VAR23 = FUN20(VAR5, VAR42, VAR3);
            VAR44.VAR45 = VAR42;
            VAR41 = VAR44.VAR45 + VAR23 + 8192;
        }
        VAR44.VAR46 = VAR23;
        if (VAR2->VAR47)
        {
            VAR7 = VAR41 = FUN21(VAR41, 4);
            VAR8 = FUN20(VAR2->VAR47, VAR41, VAR3 - VAR41);
            if (VAR8 < 0)
            {
                FUN22("", VAR2->VAR47);
                FUN23(1);
            }
            VAR41 = FUN21(VAR41 + VAR8, 4);
        }
        VAR44.VAR48 = VAR41 + (8192 * 2);
        VAR44.VAR48 &= ~8191;
        FUN24(VAR44.VAR48, VAR3, VAR7, VAR8, VAR6);
    }
    VAR16->VAR49 = &VAR44;
}