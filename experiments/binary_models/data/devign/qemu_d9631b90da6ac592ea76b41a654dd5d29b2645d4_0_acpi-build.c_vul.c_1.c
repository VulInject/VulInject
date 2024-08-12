static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    VAR4 *VAR6 = VAR5->VAR6;
    VAR7 *VAR8 = FUN2();
    FUN3(VAR9, VAR10);
    FUN3(VAR11, VAR10);
    FUN3(VAR12, VAR10);
    FUN3(VAR13, VAR10);
    FUN3(VAR14, VAR10);
    uint8_t VAR15;
    int VAR16;
    VAR17 *VAR18;
    VAR7 *VAR19;
    bool VAR20 = false;
    if (VAR2->VAR21)
    {
        VAR15 = 0x82;
        FUN4(VAR8, "", VAR2->VAR21->VAR22);
        FUN5(VAR8, 0x08);
        FUN4(VAR8, "");
        FUN6(VAR8, FUN7(VAR2->VAR21->VAR22), 1);
        FUN5(VAR8, 0x08);
        FUN4(VAR8, "");
        FUN6(VAR8, (FUN7(VAR2->VAR21->VAR22) << 16) | FUN8(VAR2->VAR21->VAR22), 4);
    }
    else
    {
        VAR15 = 0x10;
        ;
        FUN4(VAR8, "");
    }
    VAR18 = FUN9(FUN10(VAR2), VAR23, NULL);
    if (VAR18)
    {
        FUN5(VAR8, 0x08);
        FUN4(VAR8, "");
        FUN11(VAR8, FUN12(FUN13(VAR18)));
        memset(VAR9, 0xff, sizeof VAR9);
    }
    else
    {
        memset(VAR9, 0x00, sizeof VAR9);
    }
    memset(VAR11, 0x00, sizeof VAR11);
    memset(VAR12, 0x00, sizeof VAR11);
    memset(VAR13, 0x00, sizeof VAR13);
    memset(VAR14, 0x00, sizeof VAR14);
    for (VAR16 = 0; VAR16 < FUN14(VAR2->VAR24); VAR16 += VAR25)
    {
        VAR26 *VAR27;
        VAR28 *VAR29;
        VAR30 *VAR31 = VAR2->VAR24[VAR16];
        int VAR32 = FUN7(VAR16);
        if (!VAR31)
        {
            continue;
        }
        FUN15(VAR32, VAR11);
        VAR29 = FUN16(VAR31);
        VAR27 = FUN17(VAR31);
        if (VAR29->VAR33 == VAR34)
        {
            FUN15(VAR32, VAR12);
        }
        if (VAR29->VAR33 == VAR35)
        {
            FUN15(VAR32, VAR13);
            if (FUN18(FUN10(VAR31), ""))
            {
                FUN15(VAR32, VAR14);
            }
        }
        if (!VAR27->VAR36 || VAR29->VAR37)
        {
            FUN19(VAR32, VAR9);
        }
    }
    for (VAR16 = 0; VAR16 < VAR10; VAR16++)
    {
        bool VAR38 = FUN20(VAR16, VAR9);
        bool VAR39 = FUN20(VAR16, VAR11);
        bool VAR40 = FUN20(VAR16, VAR13);
        bool VAR41 = FUN20(VAR16, VAR14);
        bool system = FUN20(VAR16, VAR12);
        if (VAR38)
        {
            void *VAR42 = FUN21(VAR8, VAR43);
            memcpy(VAR42, VAR44, VAR43);
            FUN22(VAR16, VAR42);
            VAR20 = true;
        }
        else if (VAR41)
        {
            void *VAR42 = FUN21(VAR8, VAR45);
            memcpy(VAR42, VAR46, VAR45);
            FUN23(VAR16, VAR42);
        }
        else if (VAR40)
        {
            void *VAR42 = FUN21(VAR8, VAR47);
            memcpy(VAR42, VAR48, VAR47);
            FUN24(VAR16, VAR42);
        }
        else if (system)
        {
        }
        else if (VAR39)
        {
            void *VAR42 = FUN21(VAR8, VAR49);
            memcpy(VAR42, VAR50, VAR49);
            FUN25(VAR16, VAR42);
        }
    }
    if (VAR18)
    {
        VAR19 = FUN26("", 2);
        for (VAR16 = 0; VAR16 < VAR10; VAR16++)
        {
            VAR7 *VAR51;
            uint8_t VAR15;
            if (!FUN20(VAR16, VAR9))
            {
                continue;
            }
            VAR51 = FUN2();
            VAR15 = 0xA0;
            FUN5(VAR51, 0x7B);
            FUN5(VAR51, 0x68);
            FUN11(VAR51, 0x1 << VAR16);
            FUN5(VAR51, 0x00);
            FUN5(VAR51, 0x86);
            FUN4(VAR51, "", FUN27(VAR16, 0));
            FUN5(VAR51, 0x69);
            FUN28(VAR51, VAR15, 0);
            FUN29(VAR19, VAR51);
            FUN30(VAR51);
        }
        FUN31(VAR8, VAR19);
    }
    if (VAR20 || VAR5->VAR52->VAR53 || !VAR2->VAR21)
    {
        VAR19 = FUN26("", 0);
        if (VAR18)
        {
            FUN5(VAR19, 0x70);
            FUN11(VAR19, FUN12(FUN13(VAR18)));
            FUN4(VAR19, "");
            FUN4(VAR19, "");
            FUN4(VAR19, "");
            FUN11(VAR19, 1);
            FUN4(VAR19, "");
            FUN4(VAR19, "");
            FUN11(VAR19, 3);
        }
        FUN29(VAR19, VAR5->VAR52);
        FUN31(VAR8, VAR19);
        FUN29(VAR8, VAR5->VAR54);
        if (VAR2->VAR21)
        {
            FUN32(VAR8, VAR15);
        }
        else
        {
            FUN28(VAR8, VAR15, 0);
        }
        FUN29(VAR6->VAR54, VAR8);
        if (VAR2->VAR21)
        {
            FUN5(VAR6->VAR52, '');
            FUN5(VAR6->VAR52, 0x2E);
            FUN4(VAR6->VAR52, "", VAR2->VAR21->VAR22);
            FUN4(VAR6->VAR52, "");
        }
    }
    FUN30(VAR8);
    FUN33(VAR5);
    FUN34(VAR5);
}