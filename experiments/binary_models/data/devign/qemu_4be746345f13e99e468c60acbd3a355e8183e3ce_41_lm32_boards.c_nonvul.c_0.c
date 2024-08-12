static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14 = FUN2();
    VAR13 *VAR15 = FUN3(VAR13, 1);
    VAR16 *VAR17, VAR18[32];
    VAR19 *VAR20;
    VAR21 *VAR22;
    int VAR23;
    hwaddr VAR24 = 0x04000000;
    size_t VAR25 = 256 * 1024;
    size_t VAR26 = 32 * 1024 * 1024;
    hwaddr VAR27 = 0x08000000;
    size_t VAR28 = 64 * 1024 * 1024;
    hwaddr VAR29 = 0x80000000;
    hwaddr VAR30 = 0x80002000;
    hwaddr VAR31 = 0x80010000;
    hwaddr VAR32 = 0x80012000;
    int VAR33 = 0;
    int VAR34 = 1;
    int VAR35 = 20;
    int VAR36 = 21;
    hwaddr VAR37 = 0x0bffe000;
    hwaddr VAR38 = 0x0bfff000;
    hwaddr VAR39 = 0x08400000;
    size_t VAR40 = 0x01000000;
    VAR22 = FUN4(sizeof(VAR21));
    if (VAR3 == NULL)
    {
        VAR3 = "";
    }
    VAR8 = FUN5(VAR3);
    if (VAR8 == NULL)
    {
        fprintf(VAR41, "", VAR3);
        FUN6(1);
    }
    VAR10 = &VAR8->VAR10;
    VAR22->VAR8 = VAR8;
    VAR22->VAR24 = VAR24;
    FUN7(VAR15, NULL, "", VAR28, &VAR42);
    FUN8(VAR15);
    FUN9(VAR14, VAR27, VAR15);
    VAR12 = FUN10(VAR43, 0, 0);
    FUN11(VAR24, NULL, "", VAR26, VAR12 ? FUN12(VAR12) : NULL, VAR25, VAR26 / VAR25, 1, 2, 0x01, 0x7e, 0x43, 0x00, 0x555, 0x2aa, 1);
    VAR17 = FUN13(VAR44, VAR10, 1);
    VAR10->VAR45 = FUN14(*VAR17);
    for (VAR23 = 0; VAR23 < 32; VAR23++)
    {
        VAR18[VAR23] = FUN15(VAR10->VAR45, VAR23);
    }
    FUN16("", VAR29, VAR18[VAR33]);
    FUN16("", VAR30, VAR18[VAR34]);
    FUN16("", VAR31, VAR18[VAR35]);
    FUN16("", VAR32, VAR18[VAR36]);
    VAR10->VAR46 = FUN17();
    VAR22->VAR47 = VAR24;
    if (VAR4)
    {
        uint64_t VAR48;
        int VAR49;
        VAR49 = FUN18(VAR4, NULL, NULL, &VAR48, NULL, NULL, 1, VAR50, 0);
        VAR22->VAR47 = VAR48;
        if (VAR49 < 0)
        {
            VAR49 = FUN19(VAR4, VAR27, VAR28);
            VAR22->VAR47 = VAR27;
        }
        if (VAR49 < 0)
        {
            fprintf(VAR41, "", VAR4);
            FUN6(1);
        }
    }
    VAR20 = FUN20();
    FUN21(VAR20, "", 75000000);
    FUN22(VAR20, "", VAR24, VAR26);
    FUN23(VAR20, "", VAR27, VAR28);
    FUN24(VAR20, "", VAR30, VAR34);
    FUN24(VAR20, "", VAR31, VAR35);
    FUN24(VAR20, "", VAR32, VAR36);
    FUN25(VAR20, "", VAR29, VAR33);
    FUN26(VAR20);
    FUN27(VAR20, VAR37);
    FUN28(VAR20);
    VAR22->VAR37 = VAR37;
    if (VAR5 && strlen(VAR5))
    {
        FUN29("", VAR38, VAR51, VAR5);
        VAR22->VAR38 = VAR38;
    }
    if (VAR6)
    {
        size_t VAR52;
        VAR52 = FUN19(VAR6, VAR39, VAR40);
        VAR22->VAR39 = VAR39;
        VAR22->VAR52 = VAR52;
    }
    FUN30(VAR53, VAR22);
}