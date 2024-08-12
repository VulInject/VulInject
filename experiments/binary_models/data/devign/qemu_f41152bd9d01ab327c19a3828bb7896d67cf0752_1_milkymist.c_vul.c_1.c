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
    qemu_irq VAR17[32], *VAR18;
    int VAR19;
    char *VAR20;
    VAR21 *VAR22;
    hwaddr VAR23 = 0x00000000;
    size_t VAR24 = 128 * 1024;
    size_t VAR25 = 32 * 1024 * 1024;
    hwaddr VAR26 = 0x40000000;
    size_t VAR27 = 128 * 1024 * 1024;
    hwaddr VAR28 = VAR26 + 0x1002000;
    hwaddr VAR29 = VAR26 + 0x1000000;
    size_t VAR30 = VAR27 - 0x1002000;
    VAR22 = FUN4(sizeof(VAR21));
    if (VAR3 == NULL)
    {
        VAR3 = "";
        VAR8 = FUN5(VAR3);
        VAR10 = &VAR8->VAR10;
        VAR22->VAR8 = VAR8;
        FUN6(VAR10, 1);
        FUN7(VAR16, NULL, "", VAR27);
        FUN8(VAR16);
        FUN9(VAR15, VAR26, VAR16);
        VAR13 = FUN10(VAR31, 0, 0);
        FUN11(VAR23, NULL, "", VAR25, VAR13 ? VAR13->VAR32 : NULL, VAR24, VAR25 / VAR24, 2, 0x00, 0x89, 0x00, 0x1d, 1);
        VAR18 = FUN12(VAR33, VAR8, 1);
        VAR10->VAR34 = FUN13(*VAR18);
        for (VAR19 = 0; VAR19 < 32; VAR19++)
        {
            VAR17[VAR19] = FUN14(VAR10->VAR34, VAR19);
            if (VAR35 == NULL)
            {
                VAR35 = VAR36;
                VAR20 = FUN15(VAR37, VAR35);
                if (VAR20)
                {
                    FUN16(VAR20, VAR38, VAR39);
                    VAR22->VAR40 = VAR38;
                    if (!VAR4 && !VAR13 && !VAR20 && !FUN17())
                    {
                        fprintf(VAR41, "", VAR35);
                        FUN18(0x60000000, VAR17[0]);
                        FUN19(0x60001000, VAR17[1], VAR17[2], VAR17[3], 80000000, 0x10014d31, 0x0000041f, 0x00000001);
                        FUN20(0x60002000);
                        FUN21(0x60003000, 0x40000000, 0x0fffffff);
                        FUN22(0x60004000);
                        FUN23(0x60005000, VAR17[4], VAR17[5], VAR17[6], VAR17[7]);
                        FUN24(0x60006000, VAR17[8]);
                        FUN25(0x60007000, VAR17[9]);
                        FUN26(0x60008000, 0x30000000, VAR17[10], VAR17[11]);
                        FUN27(0x6000f000, VAR17[15], 0x20000000, 0x1000, 0x20020000, 0x2000);
                        VAR10->VAR42 = FUN28();
                        if (VAR4)
                        {
                            uint64_t VAR43;
                            VAR11 = FUN29(VAR4, NULL, NULL, &VAR43, NULL, NULL, 1, VAR44, 0);
                            VAR22->VAR40 = VAR43;
                            if (VAR11 < 0)
                            {
                                VAR11 = FUN16(VAR4, VAR26, VAR27);
                                VAR22->VAR40 = VAR26;
                                if (VAR11 < 0)
                                {
                                    fprintf(VAR41, "", VAR4);
                                    if (VAR5 && strlen(VAR5))
                                    {
                                        FUN30("", VAR29, VAR45, VAR5);
                                        VAR22->VAR29 = (VAR46)VAR29;
                                        if (VAR6)
                                        {
                                            size_t VAR47;
                                            VAR47 = FUN16(VAR6, VAR28, VAR30);
                                            VAR22->VAR28 = (VAR46)VAR28;
                                            VAR22->VAR47 = (VAR46)VAR47;
                                            FUN31(VAR48, VAR22)