static void FUN1(VAR1 *VAR2, enum cxmachines VAR3)
{
    ram_addr_t VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    qemu_irq VAR13[128];
    int VAR14;
    qemu_irq VAR15[4];
    qemu_irq VAR16[4];
    VAR17 *VAR18;
    VAR17 *VAR19;
    VAR17 *VAR20;
    char *VAR21;
    switch (VAR3)
    {
    case VAR22:
        VAR5 = "";
        break;
    case VAR23:
        VAR5 = "";
        break;
    }
    for (VAR14 = 0; VAR14 < VAR24; VAR14++)
    {
        VAR25 *VAR26 = FUN2(VAR27, VAR5);
        VAR28 *VAR29;
        VAR30 *VAR31;
        VAR32 *VAR33 = NULL;
        VAR29 = FUN3(FUN4(VAR26));
        VAR31 = FUN5(VAR29);
        if (FUN6(VAR29, "", NULL))
        {
            FUN7(VAR29, false, "", &VAR33);
            if (VAR33)
            {
                FUN8(VAR33);
                FUN9(1);
            }
        }
        if (FUN6(VAR29, "", NULL))
        {
            FUN10(VAR29, VAR34, "", &VAR35);
        }
        FUN7(VAR29, true, "", &VAR33);
        if (VAR33)
        {
            FUN8(VAR33);
            FUN9(1);
        }
        VAR15[VAR14] = FUN11(FUN12(VAR31), VAR36);
        VAR16[VAR14] = FUN11(FUN12(VAR31), VAR37);
    }
    VAR20 = FUN13();
    VAR19 = FUN14(VAR17, 1);
    FUN15(VAR19, NULL, "", VAR4);
    FUN16(VAR20, 0, VAR19);
    VAR18 = FUN14(VAR17, 1);
    FUN17(VAR18, NULL, "", 0x8000, &VAR38);
    FUN16(VAR20, 0xfff88000, VAR18);
    if (VAR39 != NULL)
    {
        VAR21 = FUN18(VAR40, VAR39);
        if (VAR21 != NULL)
        {
            if (FUN19(VAR21, 0xfff88000, 0x8000) < 0)
            {
                FUN20("", VAR39);
            }
            FUN21(VAR21);
        }
        else
        {
            FUN20("", VAR39);
        }
    }
    switch (VAR3)
    {
    case VAR22:
        VAR10 = FUN22(NULL, "");
        FUN23(VAR10);
        VAR12 = FUN24(VAR10);
        FUN25(VAR12, 0, 0xfff12000);
        VAR10 = FUN22(NULL, "");
        break;
    case VAR23:
        VAR10 = FUN22(NULL, "");
        break;
    }
    FUN26(VAR10, "", VAR24);
    FUN26(VAR10, "", VAR41);
    FUN23(VAR10);
    VAR12 = FUN24(VAR10);
    FUN25(VAR12, 0, VAR34);
    for (VAR14 = 0; VAR14 < VAR24; VAR14++)
    {
        FUN27(VAR12, VAR14, VAR15[VAR14]);
        FUN27(VAR12, VAR14 + VAR24, VAR16[VAR14]);
    }
    for (VAR14 = 0; VAR14 < 128; VAR14++)
    {
        VAR13[VAR14] = FUN11(VAR10, VAR14);
    }
    VAR10 = FUN22(NULL, "");
    FUN26(VAR10, "", 150000000);
    FUN26(VAR10, "", 150000000);
    FUN23(VAR10);
    VAR12 = FUN24(VAR10);
    FUN25(VAR12, 0, 0xfff34000);
    FUN27(VAR12, 0, VAR13[18]);
    FUN28("", 0xfff36000, VAR13[20]);
    VAR10 = FUN22(NULL, "");
    FUN23(VAR10);
    VAR12 = FUN24(VAR10);
    FUN25(VAR12, 0, 0xfff3c000);
    FUN28("", 0xfff30000, VAR13[14]);
    FUN28("", 0xfff31000, VAR13[15]);
    FUN28("", 0xfff32000, VAR13[16]);
    FUN28("", 0xfff33000, VAR13[17]);
    FUN28("", 0xfff35000, VAR13[19]);
    FUN28("", 0xfff39000, VAR13[23]);
    FUN28("", 0xffe08000, VAR13[83]);
    if (VAR42[0].VAR43)
    {
        FUN29(&VAR42[0], "");
        VAR10 = FUN22(NULL, "");
        FUN30(VAR10, &VAR42[0]);
        FUN23(VAR10);
        FUN25(FUN24(VAR10), 0, 0xfff50000);
        FUN27(FUN24(VAR10), 0, VAR13[77]);
        FUN27(FUN24(VAR10), 1, VAR13[78]);
        FUN27(FUN24(VAR10), 2, VAR13[79]);
        FUN29(&VAR42[1], "");
        VAR10 = FUN22(NULL, "");
        FUN30(VAR10, &VAR42[1]);
        FUN23(VAR10);
        FUN25(FUN24(VAR10), 0, 0xfff51000);
        FUN27(FUN24(VAR10), 0, VAR13[80]);
        FUN27(FUN24(VAR10), 1, VAR13[81]);
        FUN27(FUN24(VAR10), 2, VAR13[82]);
    }
    VAR44.VAR4 = VAR4;
    VAR44.VAR6 = VAR6;
    VAR44.VAR7 = VAR7;
    VAR44.VAR8 = VAR8;
    VAR44.VAR45 = -1;
    VAR44.VAR46 = VAR24;
    VAR44.VAR47 = 0;
    VAR44.VAR48 = VAR49;
    VAR44.VAR50 = VAR51;
    FUN31(FUN5(VAR52), &VAR44);
}