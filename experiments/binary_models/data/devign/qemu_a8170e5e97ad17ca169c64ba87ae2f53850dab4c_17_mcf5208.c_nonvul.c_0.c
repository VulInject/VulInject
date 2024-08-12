static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8;
    uint64_t VAR9;
    hwaddr VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14 = FUN2();
    VAR13 *VAR15 = FUN3(VAR13, 1);
    VAR13 *VAR16 = FUN3(VAR13, 1);
    if (!VAR4)
        VAR4 = "";
    VAR7 = FUN4(VAR4);
    if (!VAR7)
    {
        fprintf(VAR17, "");
        FUN5(1);
    }
    VAR7->VAR18 = 0;
    FUN6(VAR15, "", VAR3);
    FUN7(VAR15);
    FUN8(VAR14, 0x40000000, VAR15);
    FUN6(VAR16, "", 16384);
    FUN7(VAR16);
    FUN8(VAR14, 0x80000000, VAR16);
    VAR12 = FUN9(VAR14, 0xfc048000, VAR7);
    FUN10(VAR14, 0xfc060000, VAR12[26], VAR19[0]);
    FUN10(VAR14, 0xfc064000, VAR12[27], VAR19[1]);
    FUN10(VAR14, 0xfc068000, VAR12[28], VAR19[2]);
    FUN11(VAR14, VAR12);
    if (VAR20 > 1)
    {
        fprintf(VAR17, "");
        FUN5(1);
    }
    if (VAR21[0].VAR22)
        FUN12(VAR14, &VAR21[0], 0xfc030000, VAR12 + 36);
    if (!VAR5)
    {
        fprintf(VAR17, "");
        FUN5(1);
    }
    VAR8 = FUN13(VAR5, NULL, NULL, &VAR9, NULL, NULL, 1, VAR23, 0);
    VAR10 = VAR9;
    if (VAR8 < 0)
    {
        VAR8 = FUN14(VAR5, &VAR10, NULL, NULL);
    }
    if (VAR8 < 0)
    {
        VAR8 = FUN15(VAR5, 0x40000000, VAR3);
        VAR10 = 0x40000000;
    }
    if (VAR8 < 0)
    {
        fprintf(VAR17, "", VAR5);
        FUN5(1);
    }
    VAR7->VAR24 = VAR10;
}