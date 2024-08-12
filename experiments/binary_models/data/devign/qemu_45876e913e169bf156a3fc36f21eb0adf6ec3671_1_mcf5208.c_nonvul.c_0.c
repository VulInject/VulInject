static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    uint64_t VAR11;
    hwaddr VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16 = FUN2();
    VAR15 *VAR17 = FUN3(VAR15, 1);
    VAR15 *VAR18 = FUN3(VAR15, 1);
    if (!VAR4)
    {
        VAR4 = "";
    }
    VAR7 = FUN4(FUN5(VAR19, VAR4));
    VAR9 = &VAR7->VAR9;
    VAR9->VAR20 = 0;
    FUN6(VAR17, NULL, "", VAR3);
    FUN7(VAR16, 0x40000000, VAR17);
    FUN8(VAR18, NULL, "", 16384, &VAR21);
    FUN7(VAR16, 0x80000000, VAR18);
    VAR14 = FUN9(VAR16, 0xfc048000, VAR7);
    FUN10(0xfc060000, VAR14[26], VAR22[0]);
    FUN10(0xfc064000, VAR14[27], VAR22[1]);
    FUN10(0xfc068000, VAR14[28], VAR22[2]);
    FUN11(VAR16, VAR14);
    if (VAR23 > 1)
    {
        FUN12("");
        FUN13(1);
    }
    if (VAR24[0].VAR25)
    {
        FUN14(VAR16, &VAR24[0], 0xfc030000, VAR14 + 36);
    }
    if (!VAR5)
    {
        if (FUN15())
        {
            return;
        }
        FUN12("");
        FUN13(1);
    }
    VAR10 = FUN16(VAR5, NULL, NULL, &VAR11, NULL, NULL, 1, VAR26, 0, 0);
    VAR12 = VAR11;
    if (VAR10 < 0)
    {
        VAR10 = FUN17(VAR5, &VAR12, NULL, NULL, NULL, NULL);
    }
    if (VAR10 < 0)
    {
        VAR10 = FUN18(VAR5, 0x40000000, VAR3);
        VAR12 = 0x40000000;
    }
    if (VAR10 < 0)
    {
        FUN12("", VAR5);
        FUN13(1);
    }
    VAR9->VAR27 = VAR12;
}