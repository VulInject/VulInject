static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = FUN2();
    VAR6 *VAR8 = FUN3(VAR6, 1);
    qemu_irq VAR9[32];
    qemu_irq VAR10[32];
    VAR11 *VAR12, *VAR13;
    VAR14 *VAR15;
    VAR11 *VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    int VAR23;
    int VAR24 = 0;
    VAR25 *VAR26;
    if (!VAR2->VAR27)
    {
        VAR2->VAR27 = "";
    }
    VAR5 = FUN4(VAR2->VAR27);
    if (!VAR5)
    {
        fprintf(VAR28, "");
        FUN5(1);
    }
    FUN6(VAR8, NULL, "", VAR2->VAR29, &VAR30);
    FUN7(VAR8);
    FUN8(VAR7, 0, VAR8);
    VAR13 = FUN9(NULL, "");
    FUN10(VAR13, "", 0x41007004);
    FUN10(VAR13, "", 0x02000000);
    FUN11(VAR13);
    FUN12(FUN13(VAR13), 0, 0x10000000);
    VAR12 = FUN14("", 0x10140000, FUN15(FUN16(VAR5), VAR31), FUN15(FUN16(VAR5), VAR32), NULL);
    for (VAR23 = 0; VAR23 < 32; VAR23++)
    {
        VAR9[VAR23] = FUN15(VAR12, VAR23);
    }
    VAR12 = FUN17(VAR33, 0x10003000, NULL);
    for (VAR23 = 0; VAR23 < 32; VAR23++)
    {
        FUN18(FUN13(VAR12), VAR23, VAR9[VAR23]);
        VAR10[VAR23] = FUN15(VAR12, VAR23);
    }
    FUN17("", 0x10006000, VAR10[3]);
    FUN17("", 0x10007000, VAR10[4]);
    VAR12 = FUN9(NULL, "");
    VAR15 = FUN13(VAR12);
    FUN11(VAR12);
    FUN12(VAR15, 0, 0x10001000);
    FUN12(VAR15, 1, 0x41000000);
    FUN12(VAR15, 2, 0x42000000);
    FUN12(VAR15, 3, 0x43000000);
    FUN12(VAR15, 4, 0x44000000);
    FUN12(VAR15, 5, 0x50000000);
    FUN12(VAR15, 6, 0x60000000);
    FUN18(VAR15, 0, VAR10[27]);
    FUN18(VAR15, 1, VAR10[28]);
    FUN18(VAR15, 2, VAR10[29]);
    FUN18(VAR15, 3, VAR10[30]);
    VAR18 = (VAR17 *)FUN19(VAR12, "");
    for (VAR23 = 0; VAR23 < VAR34; VAR23++)
    {
        VAR20 = &VAR35[VAR23];
        if (!VAR24 && (!VAR20->VAR36 || strcmp(VAR20->VAR36, "") == 0))
        {
            FUN20(VAR20, 0x10010000, VAR10[25]);
            VAR24 = 1;
        }
        else
        {
            FUN21(VAR20, VAR18, "", NULL);
        }
    }
    if (FUN22(false))
    {
        FUN23(VAR18, -1, "");
    }
    VAR23 = FUN24(VAR37);
    while (VAR23 >= 0)
    {
        FUN23(VAR18, -1, "");
        VAR23--;
    }
    FUN17("", 0x101f1000, VAR9[12]);
    FUN17("", 0x101f2000, VAR9[13]);
    FUN17("", 0x101f3000, VAR9[14]);
    FUN17("", 0x10009000, VAR10[6]);
    FUN17("", 0x10130000, VAR9[17]);
    FUN17("", 0x101e2000, VAR9[4]);
    FUN17("", 0x101e3000, VAR9[5]);
    FUN17("", 0x101e4000, VAR9[6]);
    FUN17("", 0x101e5000, VAR9[7]);
    FUN17("", 0x101e6000, VAR9[8]);
    FUN17("", 0x101e7000, VAR9[9]);
    VAR12 = FUN17("", 0x10120000, VAR9[16]);
    FUN25(VAR13, 0, FUN15(VAR12, 0));
    FUN14("", 0x10005000, VAR10[22], VAR10[1], NULL);
    FUN14("", 0x1000b000, VAR10[23], VAR10[2], NULL);
    FUN17("", 0x101e8000, VAR9[10]);
    VAR12 = FUN17("", 0x10002000, NULL);
    VAR22 = (VAR21 *)FUN19(VAR12, "");
    FUN26(VAR22, "", 0x68);
    VAR16 = FUN9(NULL, "");
    FUN10(VAR16, "", 512);
    FUN11(VAR16);
    FUN12(FUN13(VAR16), 0, 0x10004000);
    FUN18(FUN13(VAR16), 0, VAR10[24]);
    VAR26 = FUN27(VAR38, 0, 0);
    if (!FUN28(VAR39, NULL, "", VAR40, VAR26 ? FUN29(VAR26) : NULL, VAR41, VAR40 / VAR41, 4, 0x0089, 0x0018, 0x0000, 0x0, 0))
    {
        fprintf(VAR28, "");
    }
    VAR42.VAR29 = VAR2->VAR29;
    VAR42.VAR43 = VAR2->VAR43;
    VAR42.VAR44 = VAR2->VAR44;
    VAR42.VAR45 = VAR2->VAR45;
    VAR42.VAR3 = VAR3;
    FUN30(VAR5, &VAR42);
}