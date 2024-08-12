void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    qemu_irq VAR13[30], VAR14[2], *VAR15;
    void *VAR16;
    struct VAR17 *VAR18[2] = {NULL, NULL};
    int VAR19;
    VAR20 *VAR21;
    int VAR22;
    ram_addr_t VAR23;
    ram_addr_t VAR24;
    ram_addr_t VAR25;
    if (VAR6 == NULL)
    {
        VAR6 = "";
    }
    VAR12 = FUN2(VAR6);
    FUN3(VAR26, VAR12);
    VAR23 = FUN4(VAR1);
    FUN5(0x40000000, VAR1, VAR23 | VAR27);
    VAR25 = FUN4(VAR28);
    FUN5(0x38000000, VAR28, VAR25 | VAR27);
    VAR24 = FUN4(VAR29);
    VAR21 = FUN6(VAR30, 0, 0);
    FUN7(0x0, VAR24, VAR21 ? VAR21->VAR31 : NULL, (64 * 1024), VAR29 >> 16, 1, 2, 0x0000, 0x0000, 0x0000, 0x0000, 0x555, 0x2aa);
    VAR15 = FUN8(VAR12);
    VAR8 = FUN9(NULL, "");
    FUN10(VAR8, "", &VAR12->VAR32);
    FUN11(VAR8);
    VAR10 = FUN12(VAR8);
    FUN13(VAR10, 0, 0x3001c000);
    FUN14(VAR10, 0, VAR15[0]);
    FUN14(VAR10, 1, VAR15[1]);
    for (VAR22 = 0; VAR22 < 30; VAR22++)
    {
        VAR13[VAR22] = FUN15(VAR8, VAR22);
    }
    VAR14[0] = FUN15(VAR8, 30);
    VAR14[1] = FUN15(VAR8, 31);
    VAR16 = FUN16(0x30000000, 10);
    for (VAR22 = 0; VAR22 < 10; VAR22++)
    {
        FUN17(VAR16, VAR22, VAR13 + 7 + VAR22, VAR22 & 1);
    }
    VAR18[0] = FUN18(&VAR33[0], 0x30034000, 1);
    if (VAR34 > 1)
        VAR18[1] = FUN18(&VAR33[1], 0x30036000, 2);
    FUN19(VAR16, 0, VAR18[0]);
    FUN19(VAR16, 1, VAR18[0] + 1);
    if (VAR18[1])
    {
        FUN19(VAR16, 6, VAR18[1]);
        FUN19(VAR16, 7, VAR18[1] + 1);
    }
    FUN20("", 0x3001e000, VAR13[0x1b], VAR14[1], NULL);
    FUN20("", 0x3005e000, VAR13[0x1b], VAR14[1], NULL);
    for (VAR22 = 0; VAR22 < 4; VAR22++)
    {
        FUN21("", 0x30026000 + VAR22 * 0x2000, VAR13[0x14 + VAR22]);
    }
    if (VAR3)
    {
        uint64_t VAR35, VAR36;
        int VAR37;
        VAR19 = FUN22(VAR3, -0x80000000LL, &VAR35, NULL, &VAR36, 0, VAR38, 0);
        VAR39 = VAR35;
        if (VAR19 < 0)
        {
            VAR19 = FUN23(VAR3, 0x40004000, VAR1);
            VAR39 = 0x40004000;
            VAR12->VAR40[9] = 0x40004000 + VAR19;
        }
        VAR12->VAR40[8] = 0x56902387;
        if (VAR4 && (VAR37 = strlen(VAR4)))
        {
            if (VAR37 > 256)
            {
                fprintf(VAR41, "");
                FUN24(1);
            }
            VAR12->VAR40[10] = 0x87109563;
            VAR12->VAR40[11] = 0x40000000;
            FUN25(VAR12->VAR40[11], 256, VAR4);
        }
    }
    VAR12->VAR42 = VAR39;
    FUN26("", VAR12->VAR42);
    FUN26("", VAR1);
}