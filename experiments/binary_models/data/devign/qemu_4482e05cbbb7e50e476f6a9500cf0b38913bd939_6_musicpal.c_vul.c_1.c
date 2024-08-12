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
    VAR8 = FUN4(FUN5(VAR28, VAR3));
    if (!VAR8)
    {
        fprintf(VAR29, "");
        FUN6(1);
    }
    FUN7(VAR26, NULL, "", VAR30);
    FUN8(VAR25, 0, VAR26);
    FUN9(VAR27, NULL, "", VAR31, &VAR32);
    FUN8(VAR25, VAR33, VAR27);
    VAR11 = FUN10(VAR34, VAR35, FUN11(FUN12(VAR8), VAR36));
    for (VAR20 = 0; VAR20 < 32; VAR20++)
    {
        VAR9[VAR20] = FUN11(VAR11, VAR20);
    }
    FUN13(VAR37, VAR38, VAR9[VAR39], VAR9[VAR40], VAR9[VAR41], VAR9[VAR42], NULL);
    if (VAR43[0])
    {
        FUN14(VAR25, VAR44, 2, VAR9[VAR45], 1825000, VAR43[0], VAR46);
    }
    if (VAR43[1])
    {
        FUN14(VAR25, VAR47, 2, VAR9[VAR48], 1825000, VAR43[1], VAR46);
    }
    VAR23 = FUN15(VAR49, 0, 0);
    if (VAR23)
    {
        VAR50 *VAR51 = FUN16(VAR23);
        VAR21 = FUN17(VAR51);
        if (VAR21 != 8 * 1024 * 1024 && VAR21 != 16 * 1024 * 1024 && VAR21 != 32 * 1024 * 1024)
        {
            fprintf(VAR29, "");
            FUN6(1);
        }
        FUN18(0x100000000ULL - VAR52, NULL, "", VAR21, VAR51, 0x10000, (VAR21 + 0xffff) >> 16, VAR52 / VAR21, 2, 0x00BF, 0x236D, 0x0000, 0x0000, 0x5555, 0x2AAA, 1);
        FUN18(0x100000000ULL - VAR52, NULL, "", VAR21, VAR51, 0x10000, (VAR21 + 0xffff) >> 16, VAR52 / VAR21, 2, 0x00BF, 0x236D, 0x0000, 0x0000, 0x5555, 0x2AAA, 0);
    }
    FUN10(VAR53, VAR54, NULL);
    FUN19(&VAR55[0], "");
    VAR11 = FUN20(NULL, VAR56);
    FUN21(VAR11, &VAR55[0]);
    FUN22(VAR11);
    FUN23(FUN24(VAR11), 0, VAR57);
    FUN25(FUN24(VAR11), 0, VAR9[VAR58]);
    FUN10("", VAR59, NULL);
    FUN10(VAR60, VAR61, NULL);
    VAR11 = FUN10(VAR62, VAR63, VAR9[VAR64]);
    VAR12 = FUN10("", -1, NULL);
    VAR19 = (VAR18 *)FUN26(VAR12, "");
    VAR13 = FUN10(VAR65, VAR66, NULL);
    VAR14 = FUN10(VAR67, -1, NULL);
    FUN27(VAR12, 0, FUN11(VAR11, VAR68));
    FUN27(VAR11, 3, FUN11(VAR12, 0));
    FUN27(VAR11, 4, FUN11(VAR12, 1));
    for (VAR20 = 0; VAR20 < 3; VAR20++)
    {
        FUN27(VAR11, VAR20, FUN11(VAR13, VAR20));
    }
    for (VAR20 = 0; VAR20 < 4; VAR20++)
    {
        FUN27(VAR14, VAR20, FUN11(VAR11, VAR20 + 8));
    }
    for (VAR20 = 4; VAR20 < 8; VAR20++)
    {
        FUN27(VAR14, VAR20, FUN11(VAR11, VAR20 + 15));
    }
    VAR15 = FUN28(VAR19, "", VAR69);
    VAR11 = FUN20(NULL, "");
    VAR17 = FUN24(VAR11);
    FUN29(VAR11, "", VAR15);
    FUN22(VAR11);
    FUN23(VAR17, 0, VAR70);
    FUN25(VAR17, 0, VAR9[VAR71]);
    VAR72.VAR73 = VAR30;
    VAR72.VAR4 = VAR4;
    VAR72.VAR5 = VAR5;
    VAR72.VAR6 = VAR6;
    FUN30(VAR8, &VAR72);
}