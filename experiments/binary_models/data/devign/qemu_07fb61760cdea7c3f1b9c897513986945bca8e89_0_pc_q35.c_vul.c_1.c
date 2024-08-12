static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    ram_addr_t VAR5, VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16[VAR17];
    VAR18 *VAR19;
    VAR18 *VAR20;
    VAR21 *VAR22;
    VAR21 *VAR23;
    VAR21 *VAR24;
    VAR25 *VAR26;
    VAR27 *VAR28;
    int VAR29 = 1;
    VAR30 *VAR31;
    VAR30 *VAR32;
    VAR30 *VAR33;
    int VAR34;
    VAR35 *VAR36;
    VAR13 *VAR37;
    VAR38 *VAR39;
    VAR40 *VAR41;
    ram_addr_t VAR42;
    if (VAR29)
    {
        VAR22 = FUN3(VAR21, 1);
        FUN4(VAR22, NULL, "", VAR43);
        VAR23 = VAR22;
    }
    else
    {
        VAR22 = NULL;
        VAR23 = FUN5();
    }
    VAR41 = FUN6(VAR5, VAR6);
    VAR41->VAR44 = VAR44;
    VAR41->VAR45 = false;
    VAR41->VAR46 = VAR46;
    VAR41->VAR47 = VAR47;
    if (VAR48)
    {
        VAR49 *VAR50 = FUN7(VAR2);
        FUN8("", "", VAR50->VAR51, VAR52);
    }
    if (!FUN9())
    {
        FUN10(VAR2, FUN5(), VAR5, VAR6, VAR23, &VAR24, VAR41);
    }
    VAR26 = FUN11(sizeof(*VAR26));
    if (FUN12())
    {
        FUN13(VAR29);
        VAR32 = FUN14(VAR53, VAR26, VAR54);
    }
    else
    {
        VAR32 = FUN14(VAR55, VAR26, VAR54);
    }
    VAR8 = FUN15(FUN16(NULL, VAR56));
    FUN17(FUN18(), "", FUN19(VAR8), NULL);
    VAR8->VAR57.VAR24 = VAR24;
    VAR8->VAR57.VAR58 = VAR22;
    VAR8->VAR57.VAR59 = FUN5();
    VAR8->VAR57.VAR60 = FUN20();
    VAR8->VAR57.VAR5 = VAR5;
    VAR8->VAR57.VAR6 = VAR6;
    VAR8->VAR57.VAR41 = VAR41;
    FUN21(FUN22(VAR8));
    VAR10 = FUN23(VAR8);
    VAR12 = VAR10->VAR61;
    VAR14 = FUN24(VAR12, FUN25(VAR62, VAR63), true, VAR64);
    FUN26(FUN19(VAR2), VAR65, VAR66, (VAR67 **)&VAR4->VAR68, VAR69, VAR70, &VAR71);
    FUN27(FUN19(VAR2), FUN19(VAR14), VAR65, &VAR71);
    VAR36 = FUN28(VAR14);
    VAR36->VAR72 = VAR32;
    VAR36->VAR73 = VAR26->VAR74;
    FUN29(VAR12, VAR75, VAR76, VAR36, VAR77);
    FUN30(VAR12, VAR78);
    VAR28 = VAR36->VAR28;
    FUN31(VAR28, VAR32);
    if (FUN12())
    {
        VAR33 = FUN32(VAR28);
    }
    else if (FUN9())
    {
        VAR33 = FUN33();
    }
    else
    {
        VAR31 = FUN34();
        VAR33 = FUN35(VAR28, VAR31[0]);
    }
    for (VAR34 = 0; VAR34 < VAR79; VAR34++)
    {
        VAR26->VAR80[VAR34] = VAR33[VAR34];
    }
    if (VAR29)
    {
        FUN36(VAR26, NULL);
    }
    FUN21(VAR39);
    FUN37(VAR32[13]);
    FUN38(VAR28, VAR32, &VAR19, &VAR20, false, 0xff0104);
    FUN39(VAR14);
    VAR37 = FUN24(VAR12, FUN25(VAR81, VAR82), true, "");
    VAR16[0] = FUN40(&VAR37->VAR83, "");
    VAR16[1] = FUN40(&VAR37->VAR83, "");
    if (FUN41(false))
    {
        FUN42(VAR12, 0x1d);
    }
    FUN43(FUN44(VAR12, FUN25(VAR84, VAR85), 0xb100), 8, NULL, 0);
    FUN45(VAR5, VAR6, VAR2->VAR86, VAR20, VAR16[0], VAR16[1], VAR19);
    FUN46(VAR28, VAR12);
    FUN47(VAR28, VAR12);
    if (VAR29)
    {
        FUN48(VAR12);
    }