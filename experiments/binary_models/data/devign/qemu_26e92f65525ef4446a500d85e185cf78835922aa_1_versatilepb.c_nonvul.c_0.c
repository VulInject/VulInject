static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, int VAR7)
{
    VAR8 *VAR9;
    ram_addr_t VAR10;
    VAR11 *VAR12;
    qemu_irq VAR13[32];
    qemu_irq VAR14[32];
    VAR15 *VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20;
    int VAR21;
    int VAR22 = 0;
    if (!VAR6)
        VAR6 = "";
    VAR9 = FUN2(VAR6);
    if (!VAR9)
    {
        fprintf(VAR23, "");
        FUN3(1);
    }
    VAR10 = FUN4(VAR1);
    FUN5(0, VAR1, VAR10 | VAR24);
    FUN6(0x10000000, 0x41007004, 0x02000000);
    VAR12 = FUN7(VAR9);
    VAR16 = FUN8("", 0x10140000, VAR12[0], VAR12[1], NULL);
    for (VAR21 = 0; VAR21 < 32; VAR21++)
    {
        VAR13[VAR21] = FUN9(VAR16, VAR21);
    }
    VAR16 = FUN10("", 0x10003000, NULL);
    for (VAR21 = 0; VAR21 < 32; VAR21++)
    {
        FUN11(FUN12(VAR16), VAR21, VAR13[VAR21]);
        VAR14[VAR21] = FUN9(VAR16, VAR21);
    }
    FUN10("", 0x10006000, VAR14[3]);
    FUN10("", 0x10007000, VAR14[4]);
    VAR16 = FUN8("", 0x40000000, VAR14[27], VAR14[28], VAR14[29], VAR14[30], NULL);
    VAR18 = (VAR17 *)FUN13(VAR16, "");
    for (VAR21 = 0; VAR21 < VAR25; VAR21++)
    {
        VAR20 = &VAR26[VAR21];
        if ((!VAR20->VAR27 && !VAR22) || strcmp(VAR20->VAR27, "") == 0)
        {
            FUN14(VAR20, 0x10010000, VAR14[25]);
            VAR22 = 1;
        }
        else
        {
            FUN15(VAR20, "", NULL);
        }
    }
    if (VAR28)
    {
        FUN16(VAR18, -1);
    }
    VAR21 = FUN17(VAR29);
    while (VAR21 >= 0)
    {
        FUN18(VAR18, -1, "");
        VAR21--;
    }
    FUN10("", 0x101f1000, VAR13[12]);
    FUN10("", 0x101f2000, VAR13[13]);
    FUN10("", 0x101f3000, VAR13[14]);
    FUN10("", 0x10009000, VAR14[6]);
    FUN10("", 0x10130000, VAR13[17]);
    FUN10("", 0x101e2000, VAR13[4]);
    FUN10("", 0x101e3000, VAR13[5]);
    FUN10("", 0x10120000, VAR13[16]);
    FUN8("", 0x10005000, VAR14[22], VAR14[1], NULL);
    FUN8("", 0x1000b000, VAR14[23], VAR14[2], NULL);
    FUN10("", 0x101e8000, VAR13[10]);
    VAR30.VAR1 = VAR1;
    VAR30.VAR3 = VAR3;
    VAR30.VAR4 = VAR4;
    VAR30.VAR5 = VAR5;
    VAR30.VAR7 = VAR7;
    FUN19(VAR9, &VAR30);
}