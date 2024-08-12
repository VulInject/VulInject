static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3();
    VAR5 *VAR7 = FUN4();
    int VAR8;
    ram_addr_t VAR9, VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17 = -1;
    VAR18 *VAR19;
    VAR18 *VAR20;
    VAR18 *VAR21;
    VAR18 *VAR22;
    VAR23 *VAR24;
    VAR25 *VAR26[VAR27 * VAR28];
    VAR29 *VAR30[VAR27];
    VAR31 *VAR32;
    VAR31 *VAR33;
    VAR5 *VAR34;
    VAR5 *VAR35;
    VAR5 *VAR36;
    VAR37 *VAR38;
    VAR39 *VAR40 = NULL;
    VAR41 *VAR42;
    ram_addr_t VAR43;
    if (VAR2->VAR44 >= 0xe0000000)
    {
        VAR43 = VAR45 ? 0xc0000000 : 0xe0000000;
    }
    else
    {
        VAR43 = 0xe0000000;
    }
    if (VAR43 > VAR4->VAR46)
    {
        VAR43 = VAR4->VAR46;
        if (VAR2->VAR44 - VAR43 > VAR43 && VAR43 & ((1ULL << 30) - 1))
        {
            FUN5("" VAR47 "", VAR4->VAR46);
        }
    }
    if (VAR2->VAR44 >= VAR43)
    {
        VAR10 = VAR2->VAR44 - VAR43;
        VAR9 = VAR43;
    }
    else
    {
        VAR10 = 0;
        VAR9 = VAR2->VAR44;
    }
    if (FUN6() && FUN7(&VAR9, &VAR10, &VAR34) != 0)
    {
        fprintf(VAR48, "");
        FUN8(1);
    }
    VAR38 = FUN9(NULL, VAR49);
    FUN10(FUN11(), "", FUN12(VAR38), NULL);
    FUN13(VAR2->VAR50, VAR38);
    if (FUN14() && VAR51)
    {
        FUN15();
    }
    if (VAR52)
    {
        VAR35 = FUN16(VAR5, 1);
        FUN17(VAR35, NULL, "", VAR53);
        VAR36 = VAR35;
    }
    else
    {
        VAR35 = NULL;
        VAR36 = VAR6;
    }
    VAR42 = FUN18(VAR9, VAR10);
    VAR42->VAR54 = VAR54;
    VAR42->VAR55 = VAR55;
    VAR42->VAR56 = !VAR52;
    VAR42->VAR57 = VAR57;
    VAR42->VAR58 = VAR58;
    if (VAR59)
    {
        VAR60 *VAR61 = FUN19(VAR2);
        FUN20("", "", VAR61->VAR62, VAR63, VAR64);
    }
    if (!FUN6())
    {
        VAR40 = FUN21(VAR2, VAR6, VAR9, VAR10, VAR36, &VAR34, VAR42);
    }
    else if (VAR2->VAR65 != NULL)
    {
        VAR40 = FUN22(VAR2->VAR65, VAR2->VAR66, VAR2->VAR67, VAR9, VAR42);
    }
    VAR24 = FUN23(sizeof(*VAR24));
    if (FUN24())
    {
        FUN25(VAR52);
        VAR20 = FUN26(VAR68, VAR24, VAR69);
    }
    else
    {
        VAR20 = FUN26(VAR70, VAR24, VAR69);
    }
    if (VAR52)
    {
        VAR12 = FUN27(&VAR16, &VAR17, &VAR14, VAR20, VAR6, VAR7, VAR2->VAR44, VAR9, VAR10, VAR35, VAR34);
    }
    else
    {
        VAR12 = NULL;
        VAR16 = NULL;
        VAR14 = FUN28(NULL, FUN3(), VAR7);
        VAR71 = 1;
    }
    FUN29(VAR14, VAR20);
    if (FUN24())
    {
        VAR21 = FUN30(VAR14);
    }
    else if (FUN6())
    {
        VAR21 = FUN31();
    }
    else
    {
        VAR19 = FUN32();
        VAR21 = FUN33(VAR14, VAR19[0]);
    }
    for (VAR8 = 0; VAR8 < VAR72; VAR8++)
    {
        VAR24->VAR73[VAR8] = VAR21[VAR8];
    }
    if (VAR52)
    {
        FUN34(VAR24, "");
    }
    FUN35(VAR38);
    FUN36(VAR20[13]);
    FUN37(VAR14, VAR52 ? VAR12 : NULL);
    assert(VAR4->VAR74 != VAR75);
    if (VAR4->VAR74 == VAR76)
    {
        VAR4->VAR74 = FUN6() ? VAR77 : VAR78;
    }
    FUN38(VAR14, VAR20, &VAR32, true, &VAR33, (VAR4->VAR74 != VAR78), 0x4);
    FUN39(VAR14, VAR12);
    FUN40(VAR26, FUN41(VAR26));
    if (VAR52)
    {
        VAR79 *VAR80;
        if (FUN6())
        {
            VAR80 = FUN42(VAR12, VAR26, VAR17 + 1);
        }
        else
        {
            VAR80 = FUN43(VAR12, VAR26, VAR17 + 1);
        }
        VAR30[0] = FUN44(&VAR80->VAR81, "");
        VAR30[1] = FUN44(&VAR80->VAR81, "");
    }
    else
    {
        for (VAR8 = 0; VAR8 < VAR27; VAR8++)
        {
            VAR31 *VAR80;
            char VAR82[] = "";
            VAR80 = FUN45(VAR14, VAR83[VAR8], VAR84[VAR8], VAR85[VAR8], VAR26[VAR28 * VAR8], VAR26[VAR28 * VAR8 + 1]);
            VAR82[4] = '' + VAR8;
            VAR30[VAR8] = FUN44(FUN46(VAR80), VAR82);
        }
    }
    FUN47(VAR9, VAR10, VAR2->VAR86, VAR2, VAR33, VAR30[0], VAR30[1], VAR32);
    if (VAR52 && FUN48())
    {
        FUN49(VAR12, VAR17 + 2, "");
    }
    if (VAR52 && VAR87)
    {
        VAR37 *VAR88;
        VAR89 *VAR90;
        VAR22 = FUN26(VAR91, VAR92, 1);
        VAR90 = FUN50(VAR12, VAR17 + 3, 0xb100, VAR20[9], *VAR22, FUN14(), VAR40, &VAR88);
        FUN51(VAR90, 8, NULL, 0);
        FUN52(FUN12(VAR2), VAR93, VAR94, (VAR95 **)&VAR4->VAR96, VAR97, VAR98, &VAR99);
        FUN53(FUN12(VAR2), FUN12(VAR88), VAR93, &VAR99);
    }
    if (VAR52)
    {
        FUN54(VAR12);
    }
}