static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = FUN2();
    VAR10 *VAR12 = FUN3(VAR10, 1);
    VAR10 *VAR13 = FUN3(VAR10, 1);
    qemu_irq VAR14[32];
    VAR15 *VAR16;
    int VAR17;
    if (!VAR4)
    {
        VAR4 = "";
    }
    VAR9 = FUN4(VAR4);
    if (!VAR9)
    {
        fprintf(VAR18, "");
        FUN5(1);
    }
    FUN6(VAR12, NULL, "", VAR3);
    FUN7(VAR12);
    FUN8(VAR11, 0, VAR12);
    FUN9(VAR13, NULL, "", VAR12, 0, VAR3);
    FUN8(VAR11, 0x80000000, VAR13);
    VAR16 = FUN10(NULL, VAR19);
    FUN11(VAR16, "", VAR3 >> 20);
    FUN12(VAR16);
    FUN13((VAR20 *)VAR16, 0, 0x10000000);
    VAR16 = FUN14(VAR21, 0x14000000, FUN15(FUN16(VAR9), VAR22), FUN15(FUN16(VAR9), VAR23), NULL);
    for (VAR17 = 0; VAR17 < 32; VAR17++)
    {
        VAR14[VAR17] = FUN15(VAR16, VAR17);
    }
    FUN17(VAR21, 0xca000000, VAR14[26]);
    FUN14("", 0x13000000, VAR14[5], VAR14[6], VAR14[7], NULL);
    FUN17("", 0x15000000, VAR14[8]);
    FUN17("", 0x16000000, VAR14[1]);
    FUN17("", 0x17000000, VAR14[2]);
    FUN18(0xcb000000);
    FUN17("", 0x18000000, VAR14[3]);
    FUN17("", 0x19000000, VAR14[4]);
    FUN14("", 0x1c000000, VAR14[23], VAR14[24], NULL);
    if (VAR24[0].VAR25)
        FUN19(&VAR24[0], 0xc8000000, VAR14[27]);
    FUN17("", 0xc0000000, VAR14[22]);
    VAR26.VAR3 = VAR3;
    VAR26.VAR5 = VAR5;
    VAR26.VAR6 = VAR6;
    VAR26.VAR7 = VAR7;
    FUN20(VAR9, &VAR26);