static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    qemu_irq VAR11[32];
    VAR12 *VAR13;
    VAR12 *VAR14;
    VAR12 *VAR15;
    VAR12 *VAR16;
    VAR12 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    int VAR22;
    unsigned long VAR23;
    VAR24 *VAR25;
    ram_addr_t VAR26;
    if (!VAR6)
    {
        VAR6 = "";
    }
    VAR8 = FUN2(VAR6);
    if (!VAR8)
    {
        fprintf(VAR27, "");
        FUN3(1);
    }
    VAR10 = FUN4(VAR8);
    FUN5(0, VAR28, FUN6(VAR28));
    VAR26 = FUN6(VAR29);
    FUN5(VAR30, VAR29, VAR26);
    VAR13 = FUN7("", VAR31, VAR10[VAR32]);
    for (VAR22 = 0; VAR22 < 32; VAR22++)
    {
        VAR11[VAR22] = FUN8(VAR13, VAR22);
    }
    FUN9("", VAR33, VAR11[VAR34], VAR11[VAR35], VAR11[VAR36], VAR11[VAR37], NULL);
    if (VAR38[0])
    {
        FUN10(VAR39, 2, VAR11[VAR40], 1825000, VAR38[0], 1, 1);
        FUN10(VAR39, 2, VAR11[VAR40], 1825000, VAR38[0], 1, 0);
    }
    if (VAR38[1])
    {
        FUN10(VAR41, 2, VAR11[VAR42], 1825000, VAR38[1], 1, 1);
        FUN10(VAR41, 2, VAR11[VAR42], 1825000, VAR38[1], 1, 0);
    }
    VAR25 = FUN11(VAR43, 0, 0);
    if (VAR25)
    {
        VAR23 = FUN12(VAR25->VAR44);
        if (VAR23 != 8 * 1024 * 1024 && VAR23 != 16 * 1024 * 1024 && VAR23 != 32 * 1024 * 1024)
        {
            fprintf(VAR27, "");
            FUN3(1);
        }
        FUN13(0 - VAR45, FUN6(VAR23), VAR25->VAR44, 0x10000, (VAR23 + 0xffff) >> 16, VAR45 / VAR23, 2, 0x00BF, 0x236D, 0x0000, 0x0000, 0x5555, 0x2AAA, 1);
        FUN13(0 - VAR45, FUN6(VAR23), VAR25->VAR44, 0x10000, (VAR23 + 0xffff) >> 16, VAR45 / VAR23, 2, 0x00BF, 0x236D, 0x0000, 0x0000, 0x5555, 0x2AAA, 0);
    }
    FUN7("", VAR46, NULL);
    FUN14(&VAR47[0], "");
    VAR13 = FUN15(NULL, "");
    FUN16(VAR13, &VAR47[0]);
    FUN17(VAR13);
    FUN18(FUN19(VAR13), 0, VAR48);
    FUN20(FUN19(VAR13), 0, VAR11[VAR49]);
    FUN7("", VAR50, NULL);
    FUN21();
    VAR13 = FUN7("", VAR51, VAR11[VAR52]);
    VAR14 = FUN7("", 0, NULL);
    VAR21 = (VAR20 *)FUN22(VAR14, "");
    VAR15 = FUN7("", VAR53, NULL);
    VAR16 = FUN7("", 0, NULL);
    FUN23(VAR14, 0, FUN8(VAR13, VAR54));
    FUN23(VAR13, 3, FUN8(VAR14, 0));
    FUN23(VAR13, 4, FUN8(VAR14, 1));
    for (VAR22 = 0; VAR22 < 3; VAR22++)
    {
        FUN23(VAR13, VAR22, FUN8(VAR15, VAR22));
    }
    for (VAR22 = 0; VAR22 < 4; VAR22++)
    {
        FUN23(VAR16, VAR22, FUN8(VAR13, VAR22 + 8));
    }
    for (VAR22 = 4; VAR22 < 8; VAR22++)
    {
        FUN23(VAR16, VAR22, FUN8(VAR13, VAR22 + 15));
    }
    VAR17 = FUN24(VAR21, "", VAR55);
    VAR13 = FUN15(NULL, "");
    VAR19 = FUN19(VAR13);
    FUN25(VAR13, "", VAR17);
    FUN17(VAR13);
    FUN18(VAR19, 0, VAR56);
    FUN20(VAR19, 0, VAR11[VAR57]);
    VAR58.VAR1 = VAR28;
    VAR58.VAR3 = VAR3;
    VAR58.VAR4 = VAR4;
    VAR58.VAR5 = VAR5;
    FUN26(VAR8, &VAR58);
}