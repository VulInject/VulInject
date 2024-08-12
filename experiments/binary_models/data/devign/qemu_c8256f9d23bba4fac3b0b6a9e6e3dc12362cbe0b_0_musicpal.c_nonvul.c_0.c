static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    int VAR14;
    int VAR15;
    unsigned long VAR16;
    if (!VAR9)
        VAR9 = "";
    VAR11 = FUN2(VAR9);
    if (!VAR11)
    {
        fprintf(VAR17, "");
        FUN3(1);
    }
    VAR13 = FUN4(VAR11);
    FUN5(0, VAR18, FUN6(VAR18));
    VAR19 = FUN6(VAR20);
    FUN5(VAR21, VAR20, VAR19);
    VAR15 = FUN7(0, VAR22, VAR23, VAR11);
    FUN5(0x80000000, 0x10000, VAR15);
    VAR13 = FUN8(VAR24, VAR13[VAR25]);
    FUN9(VAR26, VAR13, VAR27);
    if (VAR28[0])
        FUN10(VAR29, 2, VAR13[VAR30], 1825000, VAR28[0], 1);
    if (VAR28[1])
        FUN10(VAR31, 2, VAR13[VAR32], 1825000, VAR28[1], 1);
    VAR14 = FUN11(VAR33, 0, 0);
    if (VAR14 != -1)
    {
        VAR16 = FUN12(VAR34[VAR14].VAR35);
        if (VAR16 != 8 * 1024 * 1024 && VAR16 != 16 * 1024 * 1024 && VAR16 != 32 * 1024 * 1024)
        {
            fprintf(VAR17, "");
            FUN3(1);
        }
        FUN13(0 - VAR36, FUN6(VAR16), VAR34[VAR14].VAR35, 0x10000, (VAR16 + 0xffff) >> 16, VAR36 / VAR16, 2, 0x00BF, 0x236D, 0x0000, 0x0000, 0x5555, 0x2AAA);
    }
    FUN14(VAR37);
    FUN15(VAR5, VAR38);
    FUN16(VAR39, VAR13[VAR40]);
    FUN17(&VAR41[0], VAR42, VAR13[VAR43]);
    VAR44 = FUN18(VAR45, VAR13[VAR46]);
    VAR47.VAR1 = VAR18;
    VAR47.VAR6 = VAR6;
    VAR47.VAR7 = VAR7;
    VAR47.VAR8 = VAR8;
    FUN19(VAR11, &VAR47);
}