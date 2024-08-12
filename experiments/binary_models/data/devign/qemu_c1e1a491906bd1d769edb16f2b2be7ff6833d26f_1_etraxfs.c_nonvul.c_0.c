void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9)
{
    VAR10 *VAR11;
    struct VAR12 *VAR13;
    void *VAR14;
    struct VAR15 *VAR16[2] = {NULL, NULL};
    int VAR17;
    int VAR18;
    ram_addr_t VAR19;
    ram_addr_t VAR20;
    ram_addr_t VAR21;
    if (VAR9 == NULL)
    {
        VAR9 = "";
    }
    VAR11 = FUN2(VAR9);
    FUN3(VAR22, VAR11);
    VAR19 = FUN4(VAR1);
    FUN5(0x40000000, VAR1, VAR19 | VAR23);
    VAR21 = FUN4(VAR24);
    FUN5(0x38000000, VAR24, VAR21 | VAR23);
    VAR20 = FUN4(VAR25);
    VAR18 = FUN6(VAR26, 0, 0);
    FUN7(0x0, VAR20, VAR18 != -1 ? VAR27[VAR18].VAR28 : NULL, (64 * 1024), VAR25 >> 16, 1, 2, 0x0000, 0x0000, 0x0000, 0x0000, 0x555, 0x2aa);
    VAR13 = FUN8(VAR11, 0x3001c000);
    VAR14 = FUN9(VAR11, 0x30000000, 10);
    for (VAR18 = 0; VAR18 < 10; VAR18++)
    {
        FUN10(VAR14, VAR18, VAR13->VAR29 + 7 + VAR18, VAR18 & 1);
    }
    VAR30[0].VAR31 = VAR30[0].VAR31 ? VAR30[0].VAR31 : "";
    VAR16[0] = FUN11(&VAR30[0], VAR11, VAR13->VAR29 + 25, 0x30034000);
    if (VAR32 > 1)
    {
        VAR30[1].VAR31 = VAR30[1].VAR31 ? VAR30[1].VAR31 : "";
        VAR16[1] = FUN11(&VAR30[1], VAR11, VAR13->VAR29 + 26, 0x30036000);
    }
    FUN12(VAR14, 0, VAR16[0]);
    FUN12(VAR14, 1, VAR16[0] + 1);
    if (VAR16[1])
    {
        FUN12(VAR14, 6, VAR16[1]);
        FUN12(VAR14, 7, VAR16[1] + 1);
    }
    FUN13(VAR11, VAR13->VAR29 + 0x1b, VAR13->VAR33 + 1, 0x3001e000);
    FUN13(VAR11, VAR13->VAR29 + 0x1b, VAR13->VAR33 + 1, 0x3005e000);
    for (VAR18 = 0; VAR18 < 4; VAR18++)
    {
        if (VAR34[VAR18])
        {
            FUN14(VAR11, VAR13->VAR29 + 0x14 + VAR18, VAR34[VAR18], 0x30026000 + VAR18 * 0x2000);
        }
    }
    if (VAR6)
    {
        uint64_t VAR35, VAR36;
        int VAR37;
        VAR17 = FUN15(VAR6, -0x80000000LL, &VAR35, NULL, &VAR36);
        VAR38 = VAR35;
        if (VAR17 < 0)
        {
            VAR17 = FUN16(VAR6, VAR39 + 0x4000);
            VAR38 = 0x40004000;
            VAR11->VAR40[9] = 0x40004000 + VAR17;
        }
        VAR11->VAR40[8] = 0x56902387;
        if (VAR7 && (VAR37 = strlen(VAR7)))
        {
            if (VAR37 > 256)
            {
                fprintf(VAR41, "");
                FUN17(1);
            }
            FUN18(VAR36, 256, VAR7);
            VAR11->VAR40[10] = 0x87109563;
            VAR11->VAR40[11] = VAR36;
        }
    }
    VAR11->VAR42 = VAR38;
    FUN19("", VAR11->VAR42);
    FUN19("", VAR1);
}