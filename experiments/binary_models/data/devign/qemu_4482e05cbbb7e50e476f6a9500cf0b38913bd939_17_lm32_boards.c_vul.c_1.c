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
    qemu_irq VAR16[32];
    VAR17 *VAR18;
    VAR19 *VAR20;
    int VAR21;
    hwaddr VAR22 = 0x04000000;
    size_t VAR23 = 256 * 1024;
    size_t VAR24 = 32 * 1024 * 1024;
    hwaddr VAR25 = 0x08000000;
    size_t VAR26 = 64 * 1024 * 1024;
    hwaddr VAR27 = 0x80000000;
    hwaddr VAR28 = 0x80002000;
    hwaddr VAR29 = 0x80010000;
    hwaddr VAR30 = 0x80012000;
    int VAR31 = 0;
    int VAR32 = 1;
    int VAR33 = 20;
    int VAR34 = 21;
    hwaddr VAR35 = 0x0bffe000;
    hwaddr VAR36 = 0x0bfff000;
    hwaddr VAR37 = 0x08400000;
    size_t VAR38 = 0x01000000;
    VAR20 = FUN4(sizeof(VAR19));
    if (VAR3 == NULL)
    {
        VAR3 = "";
    }
    VAR8 = FUN5(FUN6(VAR39, VAR3));
    if (VAR8 == NULL)
    {
        fprintf(VAR40, "", VAR3);
        FUN7(1);
    }
    VAR10 = &VAR8->VAR10;
    VAR20->VAR8 = VAR8;
    VAR20->VAR22 = VAR22;
    FUN8(VAR15, NULL, "", VAR26);
    FUN9(VAR14, VAR25, VAR15);
    VAR12 = FUN10(VAR41, 0, 0);
    FUN11(VAR22, NULL, "", VAR24, VAR12 ? FUN12(VAR12) : NULL, VAR23, VAR24 / VAR23, 1, 2, 0x01, 0x7e, 0x43, 0x00, 0x555, 0x2aa, 1);
    VAR10->VAR42 = FUN13(FUN14(VAR43, VAR10, 0));
    for (VAR21 = 0; VAR21 < 32; VAR21++)
    {
        VAR16[VAR21] = FUN15(VAR10->VAR42, VAR21);
    }
    FUN16(VAR27, VAR16[VAR31], VAR44[0]);
    FUN17("", VAR28, VAR16[VAR32]);
    FUN17("", VAR29, VAR16[VAR33]);
    FUN17("", VAR30, VAR16[VAR34]);
    VAR10->VAR45 = FUN18(VAR44[1]);
    VAR20->VAR46 = VAR22;
    if (VAR4)
    {
        uint64_t VAR47;
        int VAR48;
        VAR48 = FUN19(VAR4, NULL, NULL, &VAR47, NULL, NULL, 1, VAR49, 0, 0);
        VAR20->VAR46 = VAR47;
        if (VAR48 < 0)
        {
            VAR48 = FUN20(VAR4, VAR25, VAR26);
            VAR20->VAR46 = VAR25;
        }
        if (VAR48 < 0)
        {
            fprintf(VAR40, "", VAR4);
            FUN7(1);
        }
    }
    VAR18 = FUN21();
    FUN22(VAR18, "", 75000000);
    FUN23(VAR18, "", VAR22, VAR24);
    FUN24(VAR18, "", VAR25, VAR26);
    FUN25(VAR18, "", VAR28, VAR32);
    FUN25(VAR18, "", VAR29, VAR33);
    FUN25(VAR18, "", VAR30, VAR34);
    FUN26(VAR18, "", VAR27, VAR31);
    FUN27(VAR18);
    FUN28(VAR18, VAR35);
    FUN29(VAR18);
    VAR20->VAR35 = VAR35;
    if (VAR5 && strlen(VAR5))
    {
        FUN30("", VAR36, VAR50, VAR5);
        VAR20->VAR36 = VAR36;
    }
    if (VAR6)
    {
        size_t VAR51;
        VAR51 = FUN20(VAR6, VAR37, VAR38);
        VAR20->VAR37 = VAR37;
        VAR20->VAR51 = VAR51;
    }
    FUN31(VAR52, VAR20);
}