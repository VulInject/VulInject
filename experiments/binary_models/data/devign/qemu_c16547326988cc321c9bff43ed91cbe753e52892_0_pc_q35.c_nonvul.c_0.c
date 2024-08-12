static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3, VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14[VAR15];
    VAR16 *VAR17;
    VAR16 *VAR18;
    VAR19 *VAR20;
    VAR19 *VAR21;
    VAR19 *VAR22;
    VAR23 *VAR24;
    VAR25 *VAR26;
    int VAR27 = 1;
    VAR28 *VAR29;
    VAR28 *VAR30;
    VAR28 *VAR31;
    int VAR32;
    VAR33 *VAR34;
    VAR11 *VAR35;
    VAR36 *VAR37;
    VAR38 *VAR39;
    VAR37 = FUN2(NULL, VAR40);
    FUN3(FUN4(), "", FUN5(VAR37), NULL);
    FUN6(VAR2->VAR41, VAR37);
    FUN7("");
    FUN8();
    if (VAR2->VAR42 >= 0xb0000000)
    {
        VAR4 = VAR2->VAR42 - 0xb0000000;
        VAR3 = 0xb0000000;
    }
    else
    {
        VAR4 = 0;
        VAR3 = VAR2->VAR42;
    }
    if (VAR27)
    {
        VAR20 = FUN9(VAR19, 1);
        FUN10(VAR20, NULL, "", VAR43);
        VAR21 = VAR20;
    }
    else
    {
        VAR20 = NULL;
        VAR21 = FUN11();
    }
    VAR39 = FUN12(VAR3, VAR4);
    VAR39->VAR44 = VAR44;
    VAR39->VAR45 = false;
    if (!FUN13())
    {
        FUN14(FUN11(), VAR2->VAR46, VAR2->VAR47, VAR2->VAR48, VAR3, VAR4, VAR21, &VAR22, VAR39);
    }
    VAR24 = FUN15(sizeof(*VAR24));
    if (FUN16())
    {
        FUN17(VAR27);
        VAR30 = FUN18(VAR49, VAR24, VAR50);
    }
    else
    {
        VAR30 = FUN18(VAR51, VAR24, VAR50);
    }
    VAR6 = FUN19(FUN2(NULL, VAR52));
    FUN3(FUN4(), "", FUN5(VAR6), NULL);
    VAR6->VAR53.VAR22 = VAR22;
    VAR6->VAR53.VAR54 = VAR20;
    VAR6->VAR53.VAR55 = FUN11();
    VAR6->VAR53.VAR56 = FUN20();
    VAR6->VAR53.VAR3 = VAR3;
    VAR6->VAR53.VAR4 = VAR4;
    VAR6->VAR53.VAR39 = VAR39;
    FUN21(FUN22(VAR6));
    VAR8 = FUN23(VAR6);
    VAR10 = VAR8->VAR57;
    VAR12 = FUN24(VAR10, FUN25(VAR58, VAR59), true, VAR60);
    VAR34 = FUN26(VAR12);
    VAR34->VAR61 = VAR30;
    VAR34->VAR62 = VAR24->VAR63;
    FUN27(VAR10, VAR64, VAR65, VAR34, VAR66);
    FUN28(VAR10, VAR67);
    VAR26 = VAR34->VAR26;
    FUN29(VAR26, VAR30);
    if (FUN16())
    {
        VAR31 = FUN30(VAR26);
    }
    else if (FUN13())
    {
        VAR31 = FUN31();
    }
    else
    {
        VAR29 = FUN32();
        VAR31 = FUN33(VAR26, VAR29[0]);
    }
    for (VAR32 = 0; VAR32 < VAR68; VAR32++)
    {
        VAR24->VAR69[VAR32] = VAR31[VAR32];
    }
    if (VAR27)
    {
        FUN34(VAR24, NULL);
    }
    FUN21(VAR37);
    FUN35(VAR30[13]);
    FUN36(VAR26, VAR30, &VAR17, &VAR18, false);
    FUN37(VAR12);
    VAR35 = FUN24(VAR10, FUN25(VAR70, VAR71), true, "");
    VAR14[0] = FUN38(&VAR35->VAR72, "");
    VAR14[1] = FUN38(&VAR35->VAR72, "");
    if (FUN39(false))
    {
        FUN40(VAR10, 0x1d);
    }
    FUN41(FUN42(VAR10, FUN25(VAR73, VAR74), 0xb100), 8, NULL, 0);
    FUN43(VAR3, VAR4, VAR2->VAR75, VAR18, VAR14[0], VAR14[1], VAR17);
    FUN44(VAR26, VAR10);
    FUN45(VAR26, VAR10);
    if (VAR27)
    {
        FUN46(VAR10);
    }
    if (VAR76)
    {
        FUN47(VAR26);
    }
}