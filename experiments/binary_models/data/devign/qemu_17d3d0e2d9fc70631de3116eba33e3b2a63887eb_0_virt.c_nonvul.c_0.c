static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = FUN4(VAR2);
    const VAR9 *VAR10;
    qemu_irq VAR11[VAR12];
    VAR13 *VAR14 = FUN5();
    VAR13 *VAR15 = NULL;
    int VAR16, VAR17;
    VAR13 *VAR18 = FUN6(VAR13, 1);
    const char *VAR19 = VAR2->VAR19;
    char **VAR20;
    VAR21 *VAR22;
    const char *typename;
    VAR23 *VAR24;
    VAR25 *VAR26 = NULL;
    bool VAR27 = VAR28 || FUN7(VAR29, 0, 0);
    if (!VAR19)
    {
        VAR19 = "";
    }
    if (!VAR4->VAR30)
    {
        if (!FUN8())
        {
            FUN9("");
            FUN10(1);
        }
        VAR4->VAR30 = FUN11();
        if (!VAR4->VAR30)
        {
            FUN9("");
            FUN10(1);
        }
    }
    VAR20 = FUN12(VAR19, "", 2);
    if (!FUN13(VAR20[0]))
    {
        FUN9("", VAR20[0]);
        FUN10(1);
    }
    if (VAR4->VAR31 && VAR27)
    {
        VAR4->VAR32 = VAR33;
    }
    else if (VAR4->VAR34)
    {
        VAR4->VAR32 = VAR35;
    }
    else
    {
        VAR4->VAR32 = VAR36;
    }
    if (VAR4->VAR30 == 3)
    {
        VAR17 = VAR4->VAR37[VAR38].VAR39 / 0x20000;
    }
    else
    {
        VAR17 = VAR40;
    }
    if (VAR41 > VAR17)
    {
        FUN9(""
                     "",
                     VAR41, VAR17);
        FUN10(1);
    }
    VAR4->VAR42 = VAR42;
    if (VAR2->VAR43 > VAR4->VAR37[VAR44].VAR39)
    {
        FUN9("", VAR45);
        FUN10(1);
    }
    if (VAR4->VAR34 && FUN8())
    {
        FUN9(""
                     "");
        FUN10(1);
    }
    if (VAR4->VAR31)
    {
        if (FUN8())
        {
            FUN9("");
            FUN10(1);
        }
        VAR15 = FUN6(VAR13, 1);
        FUN14(VAR15, FUN15(VAR2), "", VAR46);
        FUN16(VAR15, 0, VAR14, -1);
    }
    FUN17(VAR4);
    VAR22 = FUN18(VAR47, VAR20[0]);
    if (!VAR22)
    {
        FUN9("");
        FUN10(1);
    }
    typename = FUN19(VAR22);
    VAR24 = FUN20(VAR22);
    VAR24->FUN21(typename, VAR20[1], &VAR26);
    FUN22(VAR20);
    if (VAR26)
    {
        FUN23(VAR26);
        FUN10(1);
    }
    VAR10 = VAR8->FUN24(VAR2);
    for (VAR16 = 0; VAR16 < VAR10->VAR48; VAR16++)
    {
        VAR49 *VAR50;
        if (VAR16 >= VAR42)
        {
            break;
        }
        VAR50 = FUN25(typename);
        FUN26(VAR50, VAR10->VAR51[VAR16].VAR52, "", NULL);
        if (!VAR4->VAR31)
        {
            FUN27(VAR50, false, "", NULL);
        }
        if (!VAR4->VAR34 && FUN28(VAR50, "", NULL))
        {
            FUN27(VAR50, false, "", NULL);
        }
        if (VAR4->VAR32 != VAR33)
        {
            FUN26(VAR50, VAR4->VAR32, "", NULL);
            if (VAR16 > 0)
            {
                FUN27(VAR50, true, "", NULL);
            }
        }
        if (VAR6->VAR53 && FUN28(VAR50, "", NULL))
        {
            FUN27(VAR50, false, "", NULL);
        }
        if (FUN28(VAR50, "", NULL))
        {
            FUN26(VAR50, VAR4->VAR37[VAR54].VAR55, "", &VAR56);
        }
        FUN29(VAR50, FUN15(VAR14), "", &VAR56);
        if (VAR4->VAR31)
        {
            FUN29(VAR50, FUN15(VAR15), "", &VAR56);
        }
        FUN27(VAR50, true, "", NULL);
        FUN30(VAR50);
    }
    FUN31(VAR4);
    FUN32(VAR4);
    FUN33(VAR4);
    FUN34(VAR18, NULL, "", VAR2->VAR43);
    FUN35(VAR14, VAR4->VAR37[VAR44].VAR55, VAR18);
    FUN36(VAR4, VAR14, VAR15 ? VAR15 : VAR14);
    FUN37(VAR4, VAR11);
    FUN38(VAR4);
    FUN39(VAR4, VAR11, VAR57, VAR14, VAR58[0]);
    if (VAR4->VAR31)
    {
        FUN40(VAR4, VAR15);
        FUN39(VAR4, VAR11, VAR59, VAR15, VAR58[1]);
    }
    FUN41(VAR4, VAR11);
    FUN42(VAR4, VAR11);
    FUN43(VAR4, VAR11);
    FUN44(VAR4, VAR11);
    VAR4->VAR60 = FUN45(VAR4, &VAR61);
    FUN46(VAR4->VAR60);
    VAR4->VAR62.VAR63 = VAR64;
    FUN47(&VAR4->VAR62);
    VAR4->VAR65.VAR43 = VAR2->VAR43;
    VAR4->VAR65.VAR66 = VAR2->VAR66;
    VAR4->VAR65.VAR67 = VAR2->VAR67;
    VAR4->VAR65.VAR68 = VAR2->VAR68;
    VAR4->VAR65.VAR69 = VAR42;
    VAR4->VAR65.VAR70 = -1;
    VAR4->VAR65.VAR71 = VAR4->VAR37[VAR44].VAR55;
    VAR4->VAR65.VAR72 = VAR73;
    VAR4->VAR65.VAR27 = VAR27;
    FUN48(FUN49(VAR74), &VAR4->VAR65);
    FUN50(VAR4, VAR11);
}