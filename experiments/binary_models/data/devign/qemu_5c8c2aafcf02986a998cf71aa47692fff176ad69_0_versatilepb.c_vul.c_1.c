static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = FUN2();
    VAR10 *VAR12 = FUN3(VAR10, 1);
    qemu_irq VAR13[32];
    qemu_irq VAR14[32];
    VAR15 *VAR16, *VAR17;
    VAR18 *VAR19;
    VAR15 *VAR20;
    VAR21 *VAR22;
    VAR23 *VAR24;
    VAR25 *VAR26;
    int VAR27;
    int VAR28 = 0;
    VAR29 *VAR30;
    if (!VAR2->VAR31)
    {
        VAR2->VAR31 = "";
        VAR5 = FUN4(VAR32, VAR2->VAR31);
        if (!VAR5)
        {
            fprintf(VAR33, "");
            VAR7 = FUN5(FUN6(VAR5));
            FUN7(VAR11, 0, VAR12);
            VAR17 = FUN8(NULL, "");
            FUN9(VAR17, "", 0x41007004);
            FUN9(VAR17, "", 0x02000000);
            FUN10(VAR17);
            FUN11(FUN12(VAR17), 0, 0x10000000);
            VAR16 = FUN13("", 0x10140000, FUN14(FUN15(VAR9), VAR34), FUN14(FUN15(VAR9), VAR35), NULL);
            for (VAR27 = 0; VAR27 < 32; VAR27++)
            {
                VAR13[VAR27] = FUN14(VAR16, VAR27);
                VAR16 = FUN16(VAR36, 0x10003000, NULL);
                for (VAR27 = 0; VAR27 < 32; VAR27++)
                {
                    FUN17(FUN12(VAR16), VAR27, VAR13[VAR27]);
                    VAR14[VAR27] = FUN14(VAR16, VAR27);
                    FUN16("", 0x10006000, VAR14[3]);
                    FUN16("", 0x10007000, VAR14[4]);
                    VAR16 = FUN8(NULL, "");
                    VAR19 = FUN12(VAR16);
                    FUN10(VAR16);
                    FUN11(VAR19, 0, 0x10001000);
                    FUN11(VAR19, 1, 0x41000000);
                    FUN11(VAR19, 2, 0x42000000);
                    FUN11(VAR19, 3, 0x43000000);
                    FUN11(VAR19, 4, 0x44000000);
                    FUN11(VAR19, 5, 0x50000000);
                    FUN11(VAR19, 6, 0x60000000);
                    FUN17(VAR19, 0, VAR14[27]);
                    FUN17(VAR19, 1, VAR14[28]);
                    FUN17(VAR19, 2, VAR14[29]);
                    FUN17(VAR19, 3, VAR14[30]);
                    VAR22 = (VAR21 *)FUN18(VAR16, "");
                    for (VAR27 = 0; VAR27 < VAR37; VAR27++)
                    {
                        VAR24 = &VAR38[VAR27];
                        if (!VAR28 && (!VAR24->VAR39 || strcmp(VAR24->VAR39, "") == 0))
                        {
                            FUN19(VAR24, 0x10010000, VAR14[25]);
                            VAR28 = 1;
                        }
                        else
                        {
                            FUN20(VAR24, VAR22, "", NULL);
                            if (FUN21(VAR2))
                            {
                                FUN22(VAR22, -1, "");
                                VAR27 = FUN23(VAR40);
                                while (VAR27 >= 0)
                                {
                                    FUN22(VAR22, -1, "");
                                    VAR27--;
                                    FUN24(0x101f1000, VAR13[12], VAR41[0]);
                                    FUN24(0x101f2000, VAR13[13], VAR41[1]);
                                    FUN24(0x101f3000, VAR13[14], VAR41[2]);
                                    FUN24(0x10009000, VAR14[6], VAR41[3]);
                                    FUN16("", 0x10130000, VAR13[17]);
                                    FUN16("", 0x101e2000, VAR13[4]);
                                    FUN16("", 0x101e3000, VAR13[5]);
                                    FUN16("", 0x101e4000, VAR13[6]);
                                    FUN16("", 0x101e5000, VAR13[7]);
                                    FUN16("", 0x101e6000, VAR13[8]);
                                    FUN16("", 0x101e7000, VAR13[9]);
                                    VAR16 = FUN16("", 0x10120000, VAR13[16]);
                                    FUN25(VAR17, 0, FUN14(VAR16, 0));
                                    FUN13("", 0x10005000, VAR14[22], VAR14[1], NULL);
                                    FUN13("", 0x1000b000, VAR14[23], VAR14[2], NULL);
                                    FUN16("", 0x101e8000, VAR13[10]);
                                    VAR16 = FUN16("", 0x10002000, NULL);
                                    VAR26 = (VAR25 *)FUN18(VAR16, "");
                                    FUN26(VAR26, "", 0x68);
                                    VAR20 = FUN8(NULL, "");
                                    FUN9(VAR20, "", 512);
                                    FUN10(VAR20);
                                    FUN11(FUN12(VAR20), 0, 0x10004000);
                                    FUN17(FUN12(VAR20), 0, VAR14[24]);
                                    VAR30 = FUN27(VAR42, 0, 0);
                                    if (!FUN28(VAR43, NULL, "", VAR44, VAR30 ? FUN29(VAR30) : NULL, VAR45, VAR44 / VAR45, 4, 0x0089, 0x0018, 0x0000, 0x0, 0))
                                    {
                                        fprintf(VAR33, "");
                                        VAR46.VAR47 = VAR2->VAR47;
                                        VAR46.VAR48 = VAR2->VAR48;
                                        VAR46.VAR49 = VAR2->VAR49;
                                        VAR46.VAR50 = VAR2->VAR50;
                                        VAR46.VAR3 = VAR3;
                                        FUN30(VAR9, &VAR46)