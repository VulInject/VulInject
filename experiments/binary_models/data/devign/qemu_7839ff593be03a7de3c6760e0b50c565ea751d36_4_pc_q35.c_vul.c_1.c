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
    if (FUN2() && FUN3(&VAR22) != 0)
    {
        fprintf(VAR40, "");
        FUN4(1);
    }
    VAR37 = FUN5(NULL, VAR41);
    FUN6(FUN7(), "", FUN8(VAR37), NULL);
    FUN9(VAR2->VAR42, VAR37);
    FUN10("");
    FUN11();
    if (VAR2->VAR43 >= 0xb0000000)
    {
        VAR4 = VAR2->VAR43 - 0xb0000000;
        VAR3 = 0xb0000000;
    }
    else
    {
        VAR4 = 0;
        VAR3 = VAR2->VAR43;
    }
    if (VAR27)
    {
        VAR20 = FUN12(VAR19, 1);
        FUN13(VAR20, NULL, "", VAR44);
        VAR21 = VAR20;
    }
    else
    {
        VAR20 = NULL;
        VAR21 = FUN14();
    }
    VAR39 = FUN15(VAR3, VAR4);
    VAR39->VAR45 = VAR45;
    VAR39->VAR46 = false;
    VAR39->VAR47 = VAR47;
    if (!FUN2())
    {
        FUN16(FUN14(), VAR2->VAR48, VAR2->VAR49, VAR2->VAR50, VAR3, VAR4, VAR21, &VAR22, VAR39);
    }
    VAR24 = FUN17(sizeof(*VAR24));
    if (FUN18())
    {
        FUN19(VAR27);
        VAR30 = FUN20(VAR51, VAR24, VAR52);
    }
    else
    {
        VAR30 = FUN20(VAR53, VAR24, VAR52);
    }
    VAR6 = FUN21(FUN5(NULL, VAR54));
    FUN6(FUN7(), "", FUN8(VAR6), NULL);
    VAR6->VAR55.VAR22 = VAR22;
    VAR6->VAR55.VAR56 = VAR20;
    VAR6->VAR55.VAR57 = FUN14();
    VAR6->VAR55.VAR58 = FUN22();
    VAR6->VAR55.VAR3 = VAR3;
    VAR6->VAR55.VAR4 = VAR4;
    VAR6->VAR55.VAR39 = VAR39;
    FUN23(FUN24(VAR6));
    VAR8 = FUN25(VAR6);
    VAR10 = VAR8->VAR59;
    VAR12 = FUN26(VAR10, FUN27(VAR60, VAR61), true, VAR62);
    VAR34 = FUN28(VAR12);
    VAR34->VAR63 = VAR30;
    VAR34->VAR64 = VAR24->VAR65;
    FUN29(VAR10, VAR66, VAR67, VAR34, VAR68);
    FUN30(VAR10, VAR69);
    VAR26 = VAR34->VAR26;
    FUN31(VAR26, VAR30);
    if (FUN18())
    {
        VAR31 = FUN32(VAR26);
    }
    else if (FUN2())
    {
        VAR31 = FUN33();
    }
    else
    {
        VAR29 = FUN34();
        VAR31 = FUN35(VAR26, VAR29[0]);
    }
    for (VAR32 = 0; VAR32 < VAR70; VAR32++)
    {
        VAR24->VAR71[VAR32] = VAR31[VAR32];
    }
    if (VAR27)
    {
        FUN36(VAR24, NULL);
    }
    FUN23(VAR37);
    FUN37(VAR30[13]);
    FUN38(VAR26, VAR30, &VAR17, &VAR18, false);
    FUN39(VAR12);
    VAR35 = FUN26(VAR10, FUN27(VAR72, VAR73), true, "");
    VAR14[0] = FUN40(&VAR35->VAR74, "");
    VAR14[1] = FUN40(&VAR35->VAR74, "");
    if (FUN41(false))
    {
        FUN42(VAR10, 0x1d);
    }
    FUN43(FUN44(VAR10, FUN27(VAR75, VAR76), 0xb100), 8, NULL, 0);
    FUN45(VAR3, VAR4, VAR2->VAR77, VAR18, VAR14[0], VAR14[1], VAR17);
    FUN46(VAR26, VAR10);
    FUN47(VAR26, VAR10);
    if (VAR27)
    {
        FUN48(VAR10);
    }
    if (VAR78)
    {
        FUN49(VAR26);
    }
}