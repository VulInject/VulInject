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
    VAR8 = FUN5(FUN6(VAR30, VAR3));
    if (VAR8 == NULL)
    {
        fprintf(VAR31, "", VAR3);
        FUN7(1);
    }
    VAR10 = &VAR8->VAR10;
    VAR21->VAR8 = VAR8;
    FUN8(VAR10, 1);
    FUN9(VAR16, NULL, "", VAR26);
    FUN10(VAR15, VAR25, VAR16);
    VAR13 = FUN11(VAR32, 0, 0);
    FUN12(VAR22, NULL, "", VAR24, VAR13 ? FUN13(VAR13) : NULL, VAR23, VAR24 / VAR23, 2, 0x00, 0x89, 0x00, 0x1d, 1);
    VAR10->VAR33 = FUN14(FUN15(VAR34, VAR8, 0));
    for (VAR18 = 0; VAR18 < 32; VAR18++)
    {
        VAR17[VAR18] = FUN16(VAR10->VAR33, VAR18);
    }
    if (VAR35 == NULL)
    {
        VAR35 = VAR36;
    }
    VAR19 = FUN17(VAR37, VAR35);
    if (VAR19)
    {
        FUN18(VAR19, VAR38, VAR39);
    }
    VAR21->VAR40 = VAR38;
    if (!VAR4 && !VAR13 && !VAR19 && !FUN19())
    {
        fprintf(VAR31, "", VAR35);
        FUN7(1);
    }
    FUN20(VAR19);
    FUN21(0x60000000, VAR17[0], VAR41[0]);
    FUN22(0x60001000, VAR17[1], VAR17[2], VAR17[3], 80000000, 0x10014d31, 0x0000041f, 0x00000001);
    FUN23(0x60002000);
    FUN24(0x60003000, 0x40000000, 0x0fffffff);
    FUN25(0x60004000);
    FUN26(0x60005000, VAR17[4], VAR17[5], VAR17[6], VAR17[7]);
    FUN27(0x60006000, VAR17[8]);
    if (VAR2->VAR42)
    {
        FUN28(0x60007000, VAR17[9]);
    }
    FUN29(0x60008000, 0x30000000, VAR17[10], VAR17[11]);
    FUN30(0x6000f000, VAR17[15], 0x20000000, 0x1000, 0x20020000, 0x2000);
    VAR10->VAR43 = FUN31(VAR41[1]);
    if (VAR4)
    {
        uint64_t VAR44;
        VAR11 = FUN32(VAR4, NULL, NULL, &VAR44, NULL, NULL, 1, VAR45, 0, 0);
        VAR21->VAR40 = VAR44;
        if (VAR11 < 0)
        {
            VAR11 = FUN18(VAR4, VAR25, VAR26);
            VAR21->VAR40 = VAR25;
        }
        if (VAR11 < 0)
        {
            fprintf(VAR31, "", VAR4);
            FUN7(1);
        }
    }
    if (VAR5 && strlen(VAR5))
    {
        FUN33("", VAR28, VAR46, VAR5);
        VAR21->VAR28 = (VAR47)VAR28;
    }
    if (VAR6)
    {
        size_t VAR48;
        VAR48 = FUN18(VAR6, VAR27, VAR29);
        VAR21->VAR27 = (VAR47)VAR27;
        VAR21->VAR48 = (VAR47)VAR48;
    }
    FUN34(VAR49, VAR21);
}