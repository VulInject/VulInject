static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = FUN2();
    VAR6 *VAR8 = FUN3(VAR6, 1);
    VAR9 *VAR10;
    qemu_irq VAR11[32];
    qemu_irq VAR12[32];
    VAR13 *VAR14, *VAR15;
    VAR16 *VAR17;
    VAR13 *VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    VAR23 *VAR24;
    int VAR25;
    int VAR26 = 0;
    VAR27 *VAR28;
    if (!VAR2->VAR29)
    {
        VAR2->VAR29 = "";
    }
    VAR5 = FUN4(VAR2->VAR29);
    if (!VAR5)
    {
        fprintf(VAR30, "");
        FUN5(1);
    }
    FUN6(VAR8, "", VAR2->VAR31);
    FUN7(VAR8);
    FUN8(VAR7, 0, VAR8);
    VAR15 = FUN9(NULL, "");
    FUN10(VAR15, "", 0x41007004);
    FUN10(VAR15, "", 0x02000000);
    FUN11(VAR15);
    FUN12(FUN13(VAR15), 0, 0x10000000);
    VAR10 = FUN14(VAR5);
    VAR14 = FUN15("", 0x10140000, VAR10[VAR32], VAR10[VAR33], NULL);
    for (VAR25 = 0; VAR25 < 32; VAR25++)
    {
        VAR11[VAR25] = FUN16(VAR14, VAR25);
    }
    VAR14 = FUN17("", 0x10003000, NULL);
    for (VAR25 = 0; VAR25 < 32; VAR25++)
    {
        FUN18(FUN13(VAR14), VAR25, VAR11[VAR25]);
        VAR12[VAR25] = FUN16(VAR14, VAR25);
    }
    FUN17("", 0x10006000, VAR12[3]);
    FUN17("", 0x10007000, VAR12[4]);
    VAR14 = FUN9(NULL, "");
    VAR17 = FUN13(VAR14);
    FUN11(VAR14);
    FUN12(VAR17, 0, 0x41000000);
    FUN12(VAR17, 1, 0x42000000);
    FUN12(VAR17, 2, 0x43000000);
    FUN18(VAR17, 0, VAR12[27]);
    FUN18(VAR17, 1, VAR12[28]);
    FUN18(VAR17, 2, VAR12[29]);
    FUN18(VAR17, 3, VAR12[30]);
    VAR20 = (VAR19 *)FUN19(VAR14, "");
    for (VAR25 = 0; VAR25 < VAR34; VAR25++)
    {
        VAR22 = &VAR35[VAR25];
        if (!VAR26 && (!VAR22->VAR36 || strcmp(VAR22->VAR36, "") == 0))
        {
            FUN20(VAR22, 0x10010000, VAR12[25]);
            VAR26 = 1;
        }
        else
        {
            FUN21(VAR22, "", NULL);
        }
    }
    if (FUN22(false))
    {
        FUN23(VAR20, -1, "");
    }
    VAR25 = FUN24(VAR37);
    while (VAR25 >= 0)
    {
        FUN23(VAR20, -1, "");
        VAR25--;
    }
    FUN17("", 0x101f1000, VAR11[12]);
    FUN17("", 0x101f2000, VAR11[13]);
    FUN17("", 0x101f3000, VAR11[14]);
    FUN17("", 0x10009000, VAR12[6]);
    FUN17("", 0x10130000, VAR11[17]);
    FUN17("", 0x101e2000, VAR11[4]);
    FUN17("", 0x101e3000, VAR11[5]);
    FUN17("", 0x101e4000, VAR11[6]);
    FUN17("", 0x101e5000, VAR11[7]);
    FUN17("", 0x101e6000, VAR11[8]);
    FUN17("", 0x101e7000, VAR11[9]);
    VAR14 = FUN17("", 0x10120000, VAR11[16]);
    FUN25(VAR15, 0, FUN16(VAR14, 0));
    FUN15("", 0x10005000, VAR12[22], VAR12[1], NULL);
    FUN15("", 0x1000b000, VAR12[23], VAR12[2], NULL);
    FUN17("", 0x101e8000, VAR11[10]);
    VAR14 = FUN17("", 0x10002000, NULL);
    VAR24 = (VAR23 *)FUN19(VAR14, "");
    FUN26(VAR24, "", 0x68);
    VAR18 = FUN9(NULL, "");
    FUN10(VAR18, "", 512);
    FUN11(VAR18);
    FUN12(FUN13(VAR18), 0, 0x10004000);
    FUN18(FUN13(VAR18), 0, VAR12[24]);
    VAR28 = FUN27(VAR38, 0, 0);
    if (!FUN28(VAR39, NULL, "", VAR40, VAR28 ? VAR28->VAR41 : NULL, VAR42, VAR40 / VAR42, 4, 0x0089, 0x0018, 0x0000, 0x0, 0))
    {
        fprintf(VAR30, "");
    }
    VAR43.VAR31 = VAR2->VAR31;
    VAR43.VAR44 = VAR2->VAR44;
    VAR43.VAR45 = VAR2->VAR45;
    VAR43.VAR46 = VAR2->VAR46;
    VAR43.VAR3 = VAR3;
    FUN29(VAR5, &VAR43);
}