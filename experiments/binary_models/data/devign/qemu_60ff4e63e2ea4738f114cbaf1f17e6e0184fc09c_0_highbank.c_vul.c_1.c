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
    VAR16 *VAR17;
    VAR16 *VAR18;
    VAR16 *VAR19;
    char *VAR20;
    if (!VAR5)
    {
        switch (VAR3)
        {
        case VAR21:
            VAR5 = "";
            break;
        case VAR22:
            VAR5 = "";
            break;
        }
    }
    for (VAR14 = 0; VAR14 < VAR23; VAR14++)
    {
        VAR24 *VAR25 = FUN2(VAR26, VAR5);
        VAR27 *VAR28;
        VAR29 *VAR30;
        VAR31 *VAR32 = NULL;
        if (!VAR25)
        {
            FUN3("");
            FUN4(1);
        }
        VAR28 = FUN5(FUN6(VAR25));
        VAR30 = FUN7(VAR28);
        if (FUN8(VAR28, "", NULL))
        {
            FUN9(VAR28, false, "", &VAR32);
            if (VAR32)
            {
                FUN10(VAR32);
                FUN4(1);
            }
        }
        if (FUN8(VAR28, "", NULL))
        {
            FUN11(VAR28, VAR33, "", &VAR34);
        }
        FUN9(VAR28, true, "", &VAR32);
        if (VAR32)
        {
            FUN10(VAR32);
            FUN4(1);
        }
        VAR15[VAR14] = FUN12(FUN13(VAR30), VAR35);
    }
    VAR19 = FUN14();
    VAR18 = FUN15(VAR16, 1);
    FUN16(VAR18, NULL, "", VAR4, &VAR34);
    FUN17(VAR19, 0, VAR18);
    VAR17 = FUN15(VAR16, 1);
    FUN16(VAR17, NULL, "", 0x8000, &VAR34);
    FUN17(VAR19, 0xfff88000, VAR17);
    if (VAR36 != NULL)
    {
        VAR20 = FUN18(VAR37, VAR36);
        if (VAR20 != NULL)
        {
            uint32_t VAR38 = FUN19(VAR20);
            if (FUN20("", 0xfff88000, VAR38) < 0)
            {
                FUN21("", VAR36);
            }
            FUN22(VAR20);
        }
        else
        {
            FUN21("", VAR36);
        }
    }
    switch (VAR3)
    {
    case VAR21:
        VAR10 = FUN23(NULL, "");
        FUN24(VAR10);
        VAR12 = FUN25(VAR10);
        FUN26(VAR12, 0, 0xfff12000);
        VAR10 = FUN23(NULL, "");
        break;
    case VAR22:
        VAR10 = FUN23(NULL, "");
        break;
    }
    FUN27(VAR10, "", VAR23);
    FUN27(VAR10, "", VAR39);
    FUN24(VAR10);
    VAR12 = FUN25(VAR10);
    FUN26(VAR12, 0, VAR33);
    for (VAR14 = 0; VAR14 < VAR23; VAR14++)
    {
        FUN28(VAR12, VAR14, VAR15[VAR14]);
    }
    for (VAR14 = 0; VAR14 < 128; VAR14++)
    {
        VAR13[VAR14] = FUN12(VAR10, VAR14);
    }
    VAR10 = FUN23(NULL, "");
    FUN27(VAR10, "", 150000000);
    FUN27(VAR10, "", 150000000);
    FUN24(VAR10);
    VAR12 = FUN25(VAR10);
    FUN26(VAR12, 0, 0xfff34000);
    FUN28(VAR12, 0, VAR13[18]);
    FUN29("", 0xfff36000, VAR13[20]);
    VAR10 = FUN23(NULL, "");
    FUN24(VAR10);
    VAR12 = FUN25(VAR10);
    FUN26(VAR12, 0, 0xfff3c000);
    FUN29("", 0xfff30000, VAR13[14]);
    FUN29("", 0xfff31000, VAR13[15]);
    FUN29("", 0xfff32000, VAR13[16]);
    FUN29("", 0xfff33000, VAR13[17]);
    FUN29("", 0xfff35000, VAR13[19]);
    FUN29("", 0xfff39000, VAR13[23]);
    FUN29("", 0xffe08000, VAR13[83]);
    if (VAR40[0].VAR41)
    {
        FUN30(&VAR40[0], "");
        VAR10 = FUN23(NULL, "");
        FUN31(VAR10, &VAR40[0]);
        FUN24(VAR10);
        FUN26(FUN25(VAR10), 0, 0xfff50000);
        FUN28(FUN25(VAR10), 0, VAR13[77]);
        FUN28(FUN25(VAR10), 1, VAR13[78]);
        FUN28(FUN25(VAR10), 2, VAR13[79]);
        FUN30(&VAR40[1], "");
        VAR10 = FUN23(NULL, "");
        FUN31(VAR10, &VAR40[1]);
        FUN24(VAR10);
        FUN26(FUN25(VAR10), 0, 0xfff51000);
        FUN28(FUN25(VAR10), 0, VAR13[80]);
        FUN28(FUN25(VAR10), 1, VAR13[81]);
        FUN28(FUN25(VAR10), 2, VAR13[82]);
    }
    VAR42.VAR4 = VAR4;
    VAR42.VAR6 = VAR6;
    VAR42.VAR7 = VAR7;
    VAR42.VAR8 = VAR8;
    VAR42.VAR43 = -1;
    VAR42.VAR44 = VAR23;
    VAR42.VAR45 = 0;
    VAR42.VAR46 = VAR47;
    VAR42.VAR48 = VAR49;
    FUN32(FUN7(VAR50), &VAR42);
}