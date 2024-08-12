static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9)
{
    VAR10 *VAR11;
    int VAR12;
    uint64_t VAR13;
    target_ulong VAR14;
    VAR15 *VAR16;
    if (!VAR9)
        VAR9 = "";
    VAR11 = FUN2(VAR9);
    if (!VAR11)
    {
        fprintf(VAR17, "");
        FUN3(1);
    }
    VAR11->VAR18 = 0;
    FUN4(0x40000000, VAR1, FUN5(VAR1) | VAR19);
    FUN4(0x80000000, 16384, FUN5(16384) | VAR19);
    VAR16 = FUN6(0xfc048000, VAR11);
    FUN7(0xfc060000, VAR16[26], VAR20[0]);
    FUN7(0xfc064000, VAR16[27], VAR20[1]);
    FUN7(0xfc068000, VAR16[28], VAR20[2]);
    FUN8(VAR16);
    if (VAR21 > 1)
    {
        fprintf(VAR17, "");
        FUN3(1);
    }
    if (VAR22[0].VAR23)
        FUN9(&VAR22[0], 0xfc030000, VAR16 + 36);
    if (!VAR6)
    {
        fprintf(VAR17, "");
        FUN3(1);
    }
    VAR12 = FUN10(VAR6, 0, &VAR13, NULL, NULL);
    VAR14 = VAR13;
    if (VAR12 < 0)
    {
        VAR12 = FUN11(VAR6, &VAR14, NULL, NULL);
    }
    if (VAR12 < 0)
    {
        VAR12 = FUN12(VAR6, VAR24);
        VAR14 = 0x20000000;
    }
    if (VAR12 < 0)
    {
        fprintf(VAR17, "", VAR6);
        FUN3(1);
    }
    VAR11->VAR25 = VAR14;
}