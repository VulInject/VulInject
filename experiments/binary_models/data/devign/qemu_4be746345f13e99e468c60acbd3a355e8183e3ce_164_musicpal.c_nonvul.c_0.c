static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    VAR7 *VAR8;
    qemu_irq VAR9[32];
    VAR10 *VAR11;
    VAR10 *VAR12;
    VAR10 *VAR13;
    VAR10 *VAR14;
    VAR10 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    int VAR20;
    unsigned long VAR21;
    VAR22 *VAR23;
    VAR24 *VAR25 = FUN2();
    VAR24 *VAR26 = FUN3(VAR24, 1);
    VAR24 *VAR27 = FUN3(VAR24, 1);
    if (!VAR3)
    {
        VAR3 = "";
    }
    VAR8 = FUN4(VAR3);
    if (!VAR8)
    {
        fprintf(VAR28, "");
        FUN5(1);
    }
    FUN6(VAR26, NULL, "", VAR29, &VAR30);
    FUN7(VAR26);
    FUN8(VAR25, 0, VAR26);
    FUN6(VAR27, NULL, "", VAR31, &VAR30);
    FUN7(VAR27);
    FUN8(VAR25, VAR32, VAR27);
    VAR11 = FUN9(VAR33, VAR34, FUN10(FUN11(VAR8), VAR35));
    for (VAR20 = 0; VAR20 < 32; VAR20++)
    {
        VAR9[VAR20] = FUN10(VAR11, VAR20);
    }
    FUN12(VAR36, VAR37, VAR9[VAR38], VAR9[VAR39], VAR9[VAR40], VAR9[VAR41], NULL);
    if (VAR42[0])
    {
        FUN13(VAR25, VAR43, 2, VAR9[VAR44], 1825000, VAR42[0], VAR45);
    }
    if (VAR42[1])
    {
        FUN13(VAR25, VAR46, 2, VAR9[VAR47], 1825000, VAR42[1], VAR45);
    }
    VAR23 = FUN14(VAR48, 0, 0);
    if (VAR23)
    {
        VAR49 *VAR50 = FUN15(VAR23);
        VAR21 = FUN16(VAR50);
        if (VAR21 != 8 * 1024 * 1024 && VAR21 != 16 * 1024 * 1024 && VAR21 != 32 * 1024 * 1024)
        {
            fprintf(VAR28, "");
            FUN5(1);
        }
        FUN17(0x100000000ULL - VAR51, NULL, "", VAR21, VAR50, 0x10000, (VAR21 + 0xffff) >> 16, VAR51 / VAR21, 2, 0x00BF, 0x236D, 0x0000, 0x0000, 0x5555, 0x2AAA, 1);
        FUN17(0x100000000ULL - VAR51, NULL, "", VAR21, VAR50, 0x10000, (VAR21 + 0xffff) >> 16, VAR51 / VAR21, 2, 0x00BF, 0x236D, 0x0000, 0x0000, 0x5555, 0x2AAA, 0);
    }
    FUN9(VAR52, VAR53, NULL);
    FUN18(&VAR54[0], "");
    VAR11 = FUN19(NULL, VAR55);
    FUN20(VAR11, &VAR54[0]);
    FUN21(VAR11);
    FUN22(FUN23(VAR11), 0, VAR56);
    FUN24(FUN23(VAR11), 0, VAR9[VAR57]);
    FUN9("", VAR58, NULL);
    FUN9(VAR59, VAR60, NULL);
    VAR11 = FUN9(VAR61, VAR62, VAR9[VAR63]);
    VAR12 = FUN9("", -1, NULL);
    VAR19 = (VAR18 *)FUN25(VAR12, "");
    VAR13 = FUN9(VAR64, VAR65, NULL);
    VAR14 = FUN9(VAR66, -1, NULL);
    FUN26(VAR12, 0, FUN10(VAR11, VAR67));
    FUN26(VAR11, 3, FUN10(VAR12, 0));
    FUN26(VAR11, 4, FUN10(VAR12, 1));
    for (VAR20 = 0; VAR20 < 3; VAR20++)
    {
        FUN26(VAR11, VAR20, FUN10(VAR13, VAR20));
    }
    for (VAR20 = 0; VAR20 < 4; VAR20++)
    {
        FUN26(VAR14, VAR20, FUN10(VAR11, VAR20 + 8));
    }
    for (VAR20 = 4; VAR20 < 8; VAR20++)
    {
        FUN26(VAR14, VAR20, FUN10(VAR11, VAR20 + 15));
    }
    VAR15 = FUN27(VAR19, "", VAR68);
    VAR11 = FUN19(NULL, "");
    VAR17 = FUN23(VAR11);
    FUN28(VAR11, "", VAR15);
    FUN21(VAR11);
    FUN22(VAR17, 0, VAR69);
    FUN24(VAR17, 0, VAR9[VAR70]);
    VAR71.VAR72 = VAR29;
    VAR71.VAR4 = VAR4;
    VAR71.VAR5 = VAR5;
    VAR71.VAR6 = VAR6;
    FUN29(VAR8, &VAR71);
}