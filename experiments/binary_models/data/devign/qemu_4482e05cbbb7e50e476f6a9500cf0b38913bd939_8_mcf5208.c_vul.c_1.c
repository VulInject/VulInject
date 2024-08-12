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
    if (!VAR7)
    {
        fprintf(VAR20, "");
        FUN6(1);
    }
    VAR9 = &VAR7->VAR9;
    VAR9->VAR21 = 0;
    FUN7(VAR17, NULL, "", VAR3);
    FUN8(VAR16, 0x40000000, VAR17);
    FUN9(VAR18, NULL, "", 16384, &VAR22);
    FUN8(VAR16, 0x80000000, VAR18);
    VAR14 = FUN10(VAR16, 0xfc048000, VAR7);
    FUN11(0xfc060000, VAR14[26], VAR23[0]);
    FUN11(0xfc064000, VAR14[27], VAR23[1]);
    FUN11(0xfc068000, VAR14[28], VAR23[2]);
    FUN12(VAR16, VAR14);
    if (VAR24 > 1)
    {
        fprintf(VAR20, "");
        FUN6(1);
    }
    if (VAR25[0].VAR26)
    {
        FUN13(VAR16, &VAR25[0], 0xfc030000, VAR14 + 36);
    }
    if (!VAR5)
    {
        if (FUN14())
        {
            return;
        }
        fprintf(VAR20, "");
        FUN6(1);
    }
    VAR10 = FUN15(VAR5, NULL, NULL, &VAR11, NULL, NULL, 1, VAR27, 0, 0);
    VAR12 = VAR11;
    if (VAR10 < 0)
    {
        VAR10 = FUN16(VAR5, &VAR12, NULL, NULL, NULL, NULL);
    }
    if (VAR10 < 0)
    {
        VAR10 = FUN17(VAR5, 0x40000000, VAR3);
        VAR12 = 0x40000000;
    }
    if (VAR10 < 0)
    {
        fprintf(VAR20, "", VAR5);
        FUN6(1);
    }
    VAR9->VAR28 = VAR12;
}