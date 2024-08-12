static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = VAR6->VAR8;
    VAR9 *VAR10, *VAR11, *VAR12;
    qemu_irq VAR13[64];
    uint32_t VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    ram_addr_t VAR19, VAR20;
    VAR21 *VAR22 = FUN4();
    VAR21 *VAR23 = FUN5(VAR21, 1);
    VAR21 *VAR24 = FUN5(VAR21, 1);
    VAR21 *VAR25 = FUN5(VAR21, 1);
    VAR21 *VAR26;
    const VAR27 *VAR28 = VAR8->VAR29;
    int VAR30;
    VAR8->FUN6(VAR4, VAR2->VAR31, VAR2->VAR32, VAR13);
    if (VAR33)
    {
        char *VAR34;
        int VAR35;
        if (FUN7(VAR36, 0, 0))
        {
            FUN8(""
                         ""
                         "");
            FUN9(1);
        }
        VAR34 = FUN10(VAR37, VAR33);
        if (!VAR34)
        {
            FUN8("", VAR33);
            FUN9(1);
        }
        VAR35 = FUN11(VAR34, VAR28[VAR38], VAR39);
        FUN12(VAR34);
        if (VAR35 < 0)
        {
            FUN8("", VAR33);
            FUN9(1);
        }
    }
    VAR14 = 0x1190f500;
    VAR11 = FUN13(NULL, "");
    FUN14(VAR11, "", VAR14);
    FUN14(VAR11, "", VAR8->VAR40);
    FUN14(VAR11, "", VAR8->VAR41);
    for (VAR30 = 0; VAR30 < VAR8->VAR41; VAR30++)
    {
        char *VAR42 = FUN15("", VAR30);
        FUN14(VAR11, VAR42, VAR8->VAR43[VAR30]);
        FUN12(VAR42);
    }
    FUN14(VAR11, "", VAR8->VAR44);
    for (VAR30 = 0; VAR30 < VAR8->VAR44; VAR30++)
    {
        char *VAR42 = FUN15("", VAR30);
        FUN14(VAR11, VAR42, VAR8->VAR45[VAR30]);
        FUN12(VAR42);
    }
    FUN16(VAR11);
    FUN17(FUN18(VAR11), 0, VAR28[VAR46]);
    VAR12 = FUN13(NULL, "");
    FUN14(VAR12, "", 512);
    FUN16(VAR12);
    FUN17(FUN18(VAR12), 0, VAR28[VAR47]);
    FUN19(FUN18(VAR12), 0, VAR13[11]);
    VAR10 = FUN20("", VAR28[VAR48], VAR13[9], VAR13[10], NULL);
    FUN21(VAR10, 0, FUN22(VAR11, VAR49));
    FUN21(VAR10, 1, FUN22(VAR11, VAR50));
    FUN23("", VAR28[VAR51], VAR13[12]);
    FUN23("", VAR28[VAR52], VAR13[13]);
    FUN23("", VAR28[VAR53], VAR13[5]);
    FUN23("", VAR28[VAR54], VAR13[6]);
    FUN23("", VAR28[VAR55], VAR13[7]);
    FUN23("", VAR28[VAR56], VAR13[8]);
    FUN23("", VAR28[VAR57], VAR13[2]);
    FUN23("", VAR28[VAR58], VAR13[3]);
    FUN23("", VAR28[VAR59], VAR13[4]);
    FUN23("", VAR28[VAR60], VAR13[14]);
    VAR16 = FUN24(VAR36);
    VAR18 = FUN25(VAR28[VAR38], "", VAR16);
    if (!VAR18)
    {
        fprintf(VAR61, "");
        FUN9(1);
    }
    if (VAR28[VAR62] != -1)
    {
        VAR26 = FUN26(FUN18(VAR18), 0);
        FUN27(VAR25, NULL, "", VAR26, 0, VAR39);
        FUN28(VAR22, VAR28[VAR62], VAR25);
    }
    VAR16 = FUN24(VAR36);
    if (!FUN25(VAR28[VAR63], "", VAR16))
    {
        fprintf(VAR61, "");
        FUN9(1);
    }
    VAR20 = 0x2000000;
    FUN29(VAR24, NULL, "", VAR20, &VAR64);
    FUN30(VAR24);
    FUN28(VAR22, VAR28[VAR65], VAR24);
    VAR19 = 0x800000;
    FUN29(VAR23, NULL, "", VAR19, &VAR64);
    FUN30(VAR23);
    FUN28(VAR22, VAR28[VAR66], VAR23);
    if (VAR67[0].VAR68)
    {
        FUN31(&VAR67[0], VAR28[VAR69], VAR13[15]);
    }
    for (VAR30 = 0; VAR30 < VAR70; VAR30++)
    {
        FUN23("", VAR28[VAR71] + 0x200 * VAR30, VAR13[40 + VAR30]);
    }
    VAR8->VAR72.VAR31 = VAR2->VAR31;
    VAR8->VAR72.VAR73 = VAR2->VAR73;
    VAR8->VAR72.VAR74 = VAR2->VAR74;
    VAR8->VAR72.VAR75 = VAR2->VAR75;
    VAR8->VAR72.VAR76 = VAR77;
    VAR8->VAR72.VAR78 = VAR79;
    VAR8->VAR72.VAR80 = VAR8->VAR80;
    VAR8->VAR72.VAR81 = VAR28[VAR65];
    VAR8->VAR72.VAR82 = VAR28[VAR46] + 0x30;
    VAR8->VAR72.VAR83 = VAR8->VAR83;
    VAR8->VAR72.VAR84 = VAR85;
    VAR8->VAR72.VAR86 = true;
    FUN32(FUN33(VAR87), &VAR8->VAR72);
}