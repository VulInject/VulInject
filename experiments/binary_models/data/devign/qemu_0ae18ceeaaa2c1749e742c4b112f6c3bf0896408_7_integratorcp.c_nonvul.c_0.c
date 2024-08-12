static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9)
{
    VAR10 *VAR11;
    uint32_t VAR12;
    VAR13 *VAR14;
    VAR13 *VAR15;
    int VAR16;
    if (!VAR9)
        VAR9 = "";
    VAR11 = FUN2(VAR9);
    if (!VAR11)
    {
        fprintf(VAR17, "");
        FUN3(1);
    }
    VAR12 = FUN4(VAR1);
    FUN5(0, VAR1, VAR12 | VAR18);
    FUN5(0x80000000, VAR1, VAR12 | VAR18);
    FUN6(VAR1 >> 20);
    VAR15 = FUN7(VAR11);
    VAR14 = FUN8(0x14000000, VAR15[VAR19], VAR15[VAR20]);
    FUN8(0xca000000, VAR14[26], NULL);
    FUN9(0x13000000, VAR14, 5);
    FUN10(0x15000000, VAR14[8]);
    FUN11(0x16000000, VAR14[1], VAR21[0], VAR22);
    FUN11(0x17000000, VAR14[2], VAR21[1], VAR22);
    FUN12(0xcb000000);
    FUN13(0x18000000, VAR14[3], 0);
    FUN13(0x19000000, VAR14[4], 1);
    VAR16 = FUN14(VAR23, 0, 0);
    if (VAR16 == -1)
    {
        fprintf(VAR17, "");
        FUN3(1);
    }
    FUN15(0x1c000000, VAR24[VAR16].VAR25, VAR14[23], VAR14[24]);
    if (VAR26[0].VAR27)
        FUN16(&VAR26[0], 0xc8000000, VAR14[27]);
    FUN17(VAR5, 0xc0000000, VAR14[22], 0);
    VAR28.VAR1 = VAR1;
    VAR28.VAR6 = VAR6;
    VAR28.VAR7 = VAR7;
    VAR28.VAR8 = VAR8;
    FUN18(VAR11, &VAR28);
}