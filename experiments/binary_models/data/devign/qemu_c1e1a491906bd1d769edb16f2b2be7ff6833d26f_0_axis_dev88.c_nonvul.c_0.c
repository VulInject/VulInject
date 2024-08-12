void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9)
{
    VAR10 *VAR11;
    struct VAR12 *VAR13;
    void *VAR14;
    struct VAR15 *VAR16[2] = {NULL, NULL};
    int VAR17;
    int VAR18;
    int VAR19;
    int VAR20;
    ram_addr_t VAR21;
    ram_addr_t VAR22;
    if (VAR9 == NULL)
    {
        VAR9 = "";
    }
    VAR11 = FUN2(VAR9);
    FUN3(VAR23, VAR11);
    VAR21 = FUN4(VAR1);
    FUN5(0x40000000, VAR1, VAR21 | VAR24);
    VAR22 = FUN4(VAR25);
    FUN5(0x38000000, VAR25, VAR22 | VAR24);
    VAR26.VAR27 = FUN6(VAR28, 0x39);
    VAR19 = FUN7(0, VAR29, VAR30, &VAR26);
    FUN5(0x10000000, 0x05000000, VAR19);
    VAR31.VAR27 = &VAR26;
    VAR20 = FUN7(0, VAR32, VAR33, &VAR31);
    FUN5(0x3001a000, 0x5c, VAR20);
    VAR13 = FUN8(VAR11, 0x3001c000);
    VAR14 = FUN9(VAR11, 0x30000000, 10);
    for (VAR18 = 0; VAR18 < 10; VAR18++)
    {
        FUN10(VAR14, VAR18, VAR13->VAR34 + 7 + VAR18, VAR18 & 1);
    }
    VAR35[0].VAR36 = VAR35[0].VAR36 ? VAR35[0].VAR36 : "";
    VAR16[0] = FUN11(&VAR35[0], VAR11, VAR13->VAR34 + 25, 0x30034000);
    if (VAR37 > 1)
    {
        VAR35[1].VAR36 = VAR35[1].VAR36 ? VAR35[1].VAR36 : "";
        VAR16[1] = FUN11(&VAR35[1], VAR11, VAR13->VAR34 + 26, 0x30036000);
    }
    FUN12(VAR14, 0, VAR16[0]);
    FUN12(VAR14, 1, VAR16[0] + 1);
    if (VAR16[1])
    {
        FUN12(VAR14, 6, VAR16[1]);
        FUN12(VAR14, 7, VAR16[1] + 1);
    }
    FUN13(VAR11, VAR13->VAR34 + 0x1b, VAR13->VAR38 + 1, 0x3001e000);
    FUN13(VAR11, VAR13->VAR34 + 0x1b, VAR13->VAR38 + 1, 0x3005e000);
    for (VAR18 = 0; VAR18 < 4; VAR18++)
    {
        if (VAR39[VAR18])
        {
            FUN14(VAR11, VAR13->VAR34 + 0x14 + VAR18, VAR39[VAR18], 0x30026000 + VAR18 * 0x2000);
        }
    }
    if (VAR6)
    {
        uint64_t VAR40, VAR41;
        int VAR42;
        VAR17 = FUN15(VAR6, -0x80000000LL, &VAR40, NULL, &VAR41);
        VAR43 = VAR40;
        if (VAR17 < 0)
        {
            VAR17 = FUN16(VAR6, VAR44 + 0x4000);
            VAR43 = 0x40004000;
            VAR11->VAR45[9] = 0x40004000 + VAR17;
        }
        VAR11->VAR45[8] = 0x56902387;
        if (VAR7 && (VAR42 = strlen(VAR7)))
        {
            if (VAR42 > 256)
            {
                fprintf(VAR46, "");
                FUN17(1);
            }
            FUN18(VAR41, 256, VAR7);
            VAR11->VAR45[10] = 0x87109563;
            VAR11->VAR45[11] = VAR41;
        }
    }
    VAR11->VAR47 = VAR43;
    FUN19("", VAR11->VAR47);
    FUN19("", VAR1);
}