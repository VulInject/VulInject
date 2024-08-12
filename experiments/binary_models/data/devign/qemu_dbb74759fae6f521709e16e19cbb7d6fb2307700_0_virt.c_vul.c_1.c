static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    qemu_irq VAR7[VAR8];
    VAR9 *VAR10 = FUN4();
    VAR9 *VAR11 = NULL;
    int VAR12, VAR13;
    VAR9 *VAR14 = FUN5(VAR9, 1);
    const char *VAR15 = VAR2->VAR15;
    char **VAR16;
    VAR17 *VAR18;
    const char *typename;
    VAR19 *VAR20;
    VAR21 *VAR22 = NULL;
    bool VAR23 = VAR24 || FUN6(VAR25, 0, 0);
    uint8_t VAR26;
    if (!VAR15)
    {
        VAR15 = "";
    }
    if (!VAR4->VAR27)
    {
        if (!FUN7())
        {
            FUN8("");
            FUN9(1);
        }
        VAR4->VAR27 = FUN10();
        if (!VAR4->VAR27)
        {
            FUN8("");
            FUN9(1);
        }
    }
    VAR16 = FUN11(VAR15, "", 2);
    if (!FUN12(VAR16[0]))
    {
        FUN8("", VAR16[0]);
        FUN9(1);
    }
    if (VAR4->VAR28 && VAR23)
    {
        VAR4->VAR29 = VAR30;
    }
    else if (VAR4->VAR31)
    {
        VAR4->VAR29 = VAR32;
    }
    else
    {
        VAR4->VAR29 = VAR33;
    }
    if (VAR4->VAR27 == 3)
    {
        VAR13 = VAR4->VAR34[VAR35].VAR36 / 0x20000;
        VAR26 = VAR37;
    }
    else
    {
        VAR13 = VAR38;
        VAR26 = VAR39;
    }
    if (VAR40 > VAR13)
    {
        FUN8(""
                     "",
                     VAR40, VAR13);
        FUN9(1);
    }
    VAR4->VAR41 = VAR41;
    if (VAR2->VAR42 > VAR4->VAR34[VAR43].VAR36)
    {
        FUN8("", VAR44);
        FUN9(1);
    }
    if (VAR4->VAR31 && FUN7())
    {
        FUN8(""
                     "");
        FUN9(1);
    }
    if (VAR4->VAR28)
    {
        if (FUN7())
        {
            FUN8("");
            FUN9(1);
        }
        VAR11 = FUN5(VAR9, 1);
        FUN13(VAR11, FUN14(VAR2), "", VAR45);
        FUN15(VAR11, 0, VAR10, -1);
    }
    FUN16(VAR4);
    VAR18 = FUN17(VAR46, VAR16[0]);
    if (!VAR18)
    {
        FUN8("");
        FUN9(1);
    }
    typename = FUN18(VAR18);
    VAR20 = FUN19(VAR18);
    VAR20->FUN20(typename, VAR16[1], &VAR22);
    FUN21(VAR16);
    if (VAR22)
    {
        FUN22(VAR22);
        FUN9(1);
    }
    for (VAR12 = 0; VAR12 < VAR41; VAR12++)
    {
        VAR47 *VAR48 = FUN23(typename);
        if (!VAR6->VAR49)
        {
            uint8_t VAR50 = VAR12 / VAR26;
            uint8_t VAR51 = VAR12 % VAR26;
            FUN24(VAR48, (VAR50 << VAR52) | VAR51, "", NULL);
        }
        if (!VAR4->VAR28)
        {
            FUN25(VAR48, false, "", NULL);
        }
        if (!VAR4->VAR31 && FUN26(VAR48, "", NULL))
        {
            FUN25(VAR48, false, "", NULL);
        }
        if (VAR4->VAR29 != VAR30)
        {
            FUN24(VAR48, VAR4->VAR29, "", NULL);
            if (VAR12 > 0)
            {
                FUN25(VAR48, true, "", NULL);
            }
        }
        if (VAR6->VAR53 && FUN26(VAR48, "", NULL))
        {
            FUN25(VAR48, false, "", NULL);
        }
        if (FUN26(VAR48, "", NULL))
        {
            FUN24(VAR48, VAR4->VAR34[VAR54].VAR55, "", &VAR56);
        }
        FUN27(VAR48, FUN14(VAR10), "", &VAR56);
        if (VAR4->VAR28)
        {
            FUN27(VAR48, FUN14(VAR11), "", &VAR56);
        }
        FUN25(VAR48, true, "", NULL);
    }
    FUN28(VAR4);
    FUN29(VAR4);
    FUN30(VAR4);
    FUN31(VAR14, NULL, "", VAR2->VAR42);
    FUN32(VAR10, VAR4->VAR34[VAR43].VAR55, VAR14);
    FUN33(VAR4, VAR10, VAR11 ? VAR11 : VAR10);
    FUN34(VAR4, VAR7);
    FUN35(VAR4);
    FUN36(VAR4, VAR7, VAR57, VAR10, VAR58[0]);
    if (VAR4->VAR28)
    {
        FUN37(VAR4, VAR11);
        FUN36(VAR4, VAR7, VAR59, VAR11, VAR58[1]);
    }
    FUN38(VAR4, VAR7);
    FUN39(VAR4, VAR7);
    FUN40(VAR4, VAR7);
    FUN41(VAR4, VAR7);
    VAR4->VAR60 = FUN42(VAR4, &VAR61);
    FUN43(VAR4->VAR60);
    VAR4->VAR62.VAR63 = VAR64;
    FUN44(&VAR4->VAR62);
    VAR4->VAR65.VAR42 = VAR2->VAR42;
    VAR4->VAR65.VAR66 = VAR2->VAR66;
    VAR4->VAR65.VAR67 = VAR2->VAR67;
    VAR4->VAR65.VAR68 = VAR2->VAR68;
    VAR4->VAR65.VAR69 = VAR41;
    VAR4->VAR65.VAR70 = -1;
    VAR4->VAR65.VAR71 = VAR4->VAR34[VAR43].VAR55;
    VAR4->VAR65.VAR72 = VAR73;
    VAR4->VAR65.VAR23 = VAR23;
    FUN45(FUN46(VAR74), &VAR4->VAR65);
    FUN47(VAR4, VAR7);