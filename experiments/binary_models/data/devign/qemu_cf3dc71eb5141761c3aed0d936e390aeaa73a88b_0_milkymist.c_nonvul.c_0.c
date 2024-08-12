FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15 = FUN2();
    VAR14 *VAR16 = FUN3(VAR14, 1);
    qemu_irq VAR17[32];
    int VAR18;
    char *VAR19;
    VAR20 *VAR21;
    hwaddr VAR22 = 0x00000000;
    size_t VAR23 = 128 * 1024;
    size_t VAR24 = 32 * 1024 * 1024;
    hwaddr VAR25 = 0x40000000;
    size_t VAR26 = 128 * 1024 * 1024;
    hwaddr VAR27 = VAR25 + 0x1002000;
    hwaddr VAR28 = VAR25 + 0x1000000;
    size_t VAR29 = VAR26 - 0x1002000;
    VAR21 = FUN4(sizeof(VAR20));
    if (VAR3 == NULL)
    {
        VAR3 = "";
    }
    VAR8 = FUN5(VAR3);
    if (VAR8 == NULL)
    {
        fprintf(VAR30, "", VAR3);
        FUN6(1);
    }
    VAR10 = &VAR8->VAR10;
    VAR21->VAR8 = VAR8;
    FUN7(VAR10, 1);
    FUN8(VAR16, NULL, "", VAR26);
    FUN9(VAR15, VAR25, VAR16);
    VAR13 = FUN10(VAR31, 0, 0);
    FUN11(VAR22, NULL, "", VAR24, VAR13 ? FUN12(VAR13) : NULL, VAR23, VAR24 / VAR23, 2, 0x00, 0x89, 0x00, 0x1d, 1);
    VAR10->VAR32 = FUN13(FUN14(VAR33, VAR8, 0));
    for (VAR18 = 0; VAR18 < 32; VAR18++)
    {
        VAR17[VAR18] = FUN15(VAR10->VAR32, VAR18);
    }
    if (VAR34 == NULL)
    {
        VAR34 = VAR35;
    }
    VAR19 = FUN16(VAR36, VAR34);
    if (VAR19)
    {
        FUN17(VAR19, VAR37, VAR38);
    }
    VAR21->VAR39 = VAR37;
    if (!VAR4 && !VAR13 && !VAR19 && !FUN18())
    {
        fprintf(VAR30, "", VAR34);
        FUN6(1);
    }
    FUN19(VAR19);
    FUN20(0x60000000, VAR17[0]);
    FUN21(0x60001000, VAR17[1], VAR17[2], VAR17[3], 80000000, 0x10014d31, 0x0000041f, 0x00000001);
    FUN22(0x60002000);
    FUN23(0x60003000, 0x40000000, 0x0fffffff);
    FUN24(0x60004000);
    FUN25(0x60005000, VAR17[4], VAR17[5], VAR17[6], VAR17[7]);
    FUN26(0x60006000, VAR17[8]);
    if (VAR40 != VAR41)
    {
        FUN27(0x60007000, VAR17[9]);
    }
    FUN28(0x60008000, 0x30000000, VAR17[10], VAR17[11]);
    FUN29(0x6000f000, VAR17[15], 0x20000000, 0x1000, 0x20020000, 0x2000);
    VAR10->VAR42 = FUN30();
    if (VAR4)
    {
        uint64_t VAR43;
        VAR11 = FUN31(VAR4, NULL, NULL, &VAR43, NULL, NULL, 1, VAR44, 0, 0);
        VAR21->VAR39 = VAR43;
        if (VAR11 < 0)
        {
            VAR11 = FUN17(VAR4, VAR25, VAR26);
            VAR21->VAR39 = VAR25;
        }
        if (VAR11 < 0)
        {
            fprintf(VAR30, "", VAR4);
            FUN6(1);
        }
    }
    if (VAR5 && strlen(VAR5))
    {
        FUN32("", VAR28, VAR45, VAR5);
        VAR21->VAR28 = (VAR46)VAR28;
    }
    if (VAR6)
    {
        size_t VAR47;
        VAR47 = FUN17(VAR6, VAR27, VAR29);
        VAR21->VAR27 = (VAR46)VAR27;
        VAR21->VAR47 = (VAR46)VAR47;
    }
    FUN33(VAR48, VAR21);
}