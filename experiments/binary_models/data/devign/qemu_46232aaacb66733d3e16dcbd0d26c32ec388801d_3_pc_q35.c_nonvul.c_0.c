static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14[VAR15];
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR18 *VAR20;
    VAR18 *VAR21;
    VAR22 *VAR23;
    VAR24 *VAR25;
    int VAR26 = 1;
    VAR27 *VAR28;
    VAR27 *VAR29;
    int VAR30;
    VAR31 *VAR32;
    VAR11 *VAR33;
    VAR34 *VAR35;
    ram_addr_t VAR36;
    VAR37 *VAR38[VAR15];
    VAR39 *VAR40 = FUN3(VAR2);
    if (VAR2->VAR41 >= 0xb0000000)
    {
        VAR36 = VAR42 ? 0x80000000 : 0xb0000000;
    }
    else
    {
        VAR36 = 0xb0000000;
    }
    if (VAR36 > VAR4->VAR43)
    {
        VAR36 = VAR4->VAR43;
        if (VAR2->VAR41 - VAR36 > VAR36 && VAR36 & ((1ULL << 30) - 1))
        {
            FUN4("" VAR44 "", VAR4->VAR43);
        }
    }
    if (VAR2->VAR41 >= VAR36)
    {
        VAR4->VAR45 = VAR2->VAR41 - VAR36;
        VAR4->VAR46 = VAR36;
    }
    else
    {
        VAR4->VAR45 = 0;
        VAR4->VAR46 = VAR2->VAR41;
    }
    if (FUN5() && FUN6(VAR4, &VAR21) != 0)
    {
        fprintf(VAR47, "");
        FUN7(1);
    }
    FUN8(VAR2->VAR48);
    FUN9("");
    FUN10();
    if (VAR26)
    {
        VAR19 = FUN11(VAR18, 1);
        FUN12(VAR19, NULL, "", VAR49);
        VAR20 = VAR19;
    }
    else
    {
        VAR19 = NULL;
        VAR20 = FUN13();
    }
    VAR35 = FUN14(VAR4);
    VAR35->VAR50 = false;
    VAR35->VAR51 = VAR51;
    VAR35->VAR52 = VAR52;
    VAR35->VAR53 = VAR53;
    VAR35->VAR54 = 0;
    if (VAR55)
    {
        FUN15("", "", VAR40->VAR56, VAR57, VAR58, VAR59);
    }
    if (!FUN5())
    {
        FUN16(VAR4, FUN13(), VAR20, &VAR21, VAR35);
    }
    VAR23 = FUN17(sizeof(*VAR23));
    if (FUN18())
    {
        FUN19(VAR26);
        VAR28 = FUN20(VAR60, VAR23, VAR61);
    }
    else
    {
        VAR28 = FUN20(VAR62, VAR23, VAR61);
    }
    VAR6 = FUN21(FUN22(NULL, VAR63));
    FUN23(FUN24(), "", FUN25(VAR6), NULL);
    VAR6->VAR64.VAR21 = VAR21;
    VAR6->VAR64.VAR65 = VAR19;
    VAR6->VAR64.VAR66 = FUN13();
    VAR6->VAR64.VAR67 = FUN26();
    VAR6->VAR64.VAR46 = VAR4->VAR46;
    VAR6->VAR64.VAR45 = VAR4->VAR45;
    VAR6->VAR64.VAR35 = VAR35;
    FUN27(FUN28(VAR6));
    VAR8 = FUN29(VAR6);
    VAR10 = VAR8->VAR68;
    VAR12 = FUN30(VAR10, FUN31(VAR69, VAR70), true, VAR71);
    FUN32(FUN25(VAR2), VAR72, VAR73, (VAR74 **)&VAR4->VAR75, VAR76, VAR77, &VAR78);
    FUN33(FUN25(VAR2), FUN25(VAR12), VAR72, &VAR78);
    VAR32 = FUN34(VAR12);
    VAR32->VAR79 = VAR28;
    VAR32->VAR80 = VAR23->VAR81;
    FUN35(VAR10, VAR82, VAR83, VAR32, VAR84);
    FUN36(VAR10, VAR85);
    VAR25 = VAR32->VAR25;
    FUN37(VAR25, VAR28);
    if (FUN18())
    {
        VAR29 = FUN38(VAR25);
    }
    else if (FUN5())
    {
        VAR29 = FUN39();
    }
    else
    {
        VAR29 = FUN40(VAR25, FUN41());
    }
    for (VAR30 = 0; VAR30 < VAR86; VAR30++)
    {
        VAR23->VAR87[VAR30] = VAR29[VAR30];
    }
    if (VAR26)
    {
        FUN42(VAR23, "");
    }
    FUN43(VAR28[13]);
    assert(VAR4->VAR88 != VAR89);
    if (VAR4->VAR88 == VAR90)
    {
        VAR4->VAR88 = FUN5() ? VAR91 : VAR92;
    }
    FUN44(VAR25, VAR28, &VAR17, !VAR40->VAR93, (VAR4->VAR88 != VAR92), 0xff0104);
    FUN45(VAR12, FUN46(VAR4), !VAR40->VAR94);
    VAR33 = FUN30(VAR10, FUN31(VAR95, VAR96), true, "");
    VAR14[0] = FUN47(&VAR33->VAR97, "");
    VAR14[1] = FUN47(&VAR33->VAR97, "");
    FUN48(VAR15 == FUN49(VAR33)->VAR33.VAR98);
    FUN50(VAR38, FUN49(VAR33)->VAR33.VAR98);
    FUN51(VAR33, VAR38);
    if (FUN52())
    {
        FUN53(VAR10, 0x1d);
    }
    FUN54(FUN55(VAR10, FUN31(VAR99, VAR100), 0xb100), 8, NULL, 0);
    FUN56(VAR4, VAR14[0], VAR14[1], VAR17);
    FUN57(VAR25, VAR10);
    FUN58(VAR25, VAR10);
    if (VAR26)
    {
        FUN59(VAR10);
    }
}