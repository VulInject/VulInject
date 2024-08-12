static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = FUN2();
    VAR11 *VAR13 = FUN3(VAR11, 1);
    qemu_irq VAR14[32];
    VAR15 *VAR16;
    int VAR17;
    hwaddr VAR18 = 0x04000000;
    size_t VAR19 = 256 * 1024;
    size_t VAR20 = 32 * 1024 * 1024;
    hwaddr VAR21 = 0x08000000;
    size_t VAR22 = 64 * 1024 * 1024;
    hwaddr VAR23 = 0x80002000;
    hwaddr VAR24 = 0x80006000;
    hwaddr VAR25 = 0x8000a000;
    int VAR26 = 0;
    int VAR27 = 1;
    int VAR28 = 3;
    VAR16 = FUN4(sizeof(VAR15));
    if (VAR3 == NULL)
    {
        VAR3 = "";
    }
    VAR6 = FUN5(FUN6(VAR29, VAR3));
    if (VAR6 == NULL)
    {
        fprintf(VAR30, "", VAR3);
        FUN7(1);
    }
    VAR8 = &VAR6->VAR8;
    VAR16->VAR6 = VAR6;
    VAR16->VAR18 = VAR18;
    FUN8(VAR13, NULL, "", VAR22);
    FUN9(VAR12, VAR21, VAR13);
    VAR10 = FUN10(VAR31, 0, 0);
    FUN11(VAR18, NULL, "", VAR20, VAR10 ? FUN12(VAR10) : NULL, VAR19, VAR20 / VAR19, 1, 2, 0x01, 0x7e, 0x43, 0x00, 0x555, 0x2aa, 1);
    VAR8->VAR32 = FUN13(FUN14(VAR33, VAR6, 0));
    for (VAR17 = 0; VAR17 < 32; VAR17++)
    {
        VAR14[VAR17] = FUN15(VAR8->VAR32, VAR17);
    }
    FUN16(VAR24, VAR14[VAR26], VAR34[0]);
    FUN17("", VAR23, VAR14[VAR27]);
    FUN17("", VAR25, VAR14[VAR28]);
    VAR8->VAR35 = FUN18(VAR34[1]);
    VAR16->VAR36 = VAR18;
    if (VAR4)
    {
        uint64_t VAR37;
        int VAR38;
        VAR38 = FUN19(VAR4, NULL, NULL, &VAR37, NULL, NULL, 1, VAR39, 0, 0);
        VAR16->VAR36 = VAR37;
        if (VAR38 < 0)
        {
            VAR38 = FUN20(VAR4, VAR21, VAR22);
            VAR16->VAR36 = VAR21;
        }
        if (VAR38 < 0)
        {
            fprintf(VAR30, "", VAR4);
            FUN7(1);
        }
    }
    FUN21(VAR40, VAR16);
}