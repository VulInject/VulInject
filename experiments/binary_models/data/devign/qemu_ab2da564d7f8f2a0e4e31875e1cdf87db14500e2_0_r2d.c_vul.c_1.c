static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const char *VAR7)
{
    VAR8 *VAR9;
    struct VAR10 *VAR11;
    ram_addr_t VAR12, VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    int VAR18;
    if (!VAR7)
        VAR7 = "";
    VAR9 = FUN2(VAR7);
    if (!VAR9)
    {
        fprintf(VAR19, "");
        FUN3(1);
    }
    VAR12 = FUN4(VAR20);
    FUN5(VAR21, VAR20, VAR12);
    VAR11 = FUN6(VAR9);
    VAR15 = FUN7(0x04000000, FUN8(VAR11));
    VAR17 = FUN9(VAR22, VAR23, VAR15, 0, 4);
    VAR13 = FUN4(VAR24);
    FUN10(0x10000000, VAR13, VAR24, VAR25[2]);
    FUN11(0x14001000, 0x1400080c, VAR15[VAR26], 1, VAR27[FUN12(VAR28, 0, 0)].VAR29, NULL);
    FUN13(VAR17, &VAR30[0], 2 << 3, "");
    for (VAR18 = 1; VAR18 < VAR31; VAR18++)
        FUN13(VAR17, &VAR30[VAR18], -1, "");
    {
        int VAR32;
        FUN14(VAR33, 1 << 3);
        FUN15(VAR34, 3 << (3 * 2));
        VAR32 = FUN16(VAR4, VAR35);
        if (VAR32 < 0)
        {
            fprintf(VAR19, "", VAR4);
            FUN3(1);
        }
        VAR9->VAR36 = VAR21 | 0xa0000000;
    }
}