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
    VAR39 *VAR40;
    ram_addr_t VAR41;
    if (VAR2->VAR42 >= 0xe0000000)
    {
        VAR41 = VAR43 ? 0xc0000000 : 0xe0000000;
    }
    else
    {
        VAR41 = 0xe0000000;
    }
    if (VAR41 > VAR4->VAR44)
    {
        VAR41 = VAR4->VAR44;
        if (VAR2->VAR42 - VAR41 > VAR41 && VAR41 & ((1ULL << 30) - 1))
        {
            FUN5("" VAR45 "", VAR4->VAR44);
        }
    }
    if (VAR2->VAR42 >= VAR41)
    {
        VAR10 = VAR2->VAR42 - VAR41;
        VAR9 = VAR41;
    }
    else
    {
        VAR10 = 0;
        VAR9 = VAR2->VAR42;
    }
    if (FUN6() && FUN7(&VAR9, &VAR10, &VAR34) != 0)
    {
        fprintf(VAR46, "");
        FUN8(1);
    }
    VAR38 = FUN9(NULL, VAR47);
    FUN10(FUN11(), "", FUN12(VAR38), NULL);
    FUN13(VAR2->VAR48, VAR38);
    if (FUN14() && VAR49)
    {
        FUN15();
    }
    if (VAR50)
    {
        VAR35 = FUN16(VAR5, 1);
        FUN17(VAR35, NULL, "", VAR51);
        VAR36 = VAR35;
    }
    else
    {
        VAR35 = NULL;
        VAR36 = VAR6;
    }
    VAR40 = FUN18(VAR9, VAR10);
    VAR40->VAR52 = VAR52;
    VAR40->VAR53 = VAR53;
    VAR40->VAR54 = !VAR50;
    VAR40->VAR55 = VAR55;
    VAR40->VAR56 = VAR56;
    if (VAR57)
    {
        VAR58 *VAR59 = FUN19(VAR2);
        FUN20("", "", VAR59->VAR60, VAR61, VAR62);
    }
    if (!FUN6())
    {
        FUN21(VAR2, VAR6, VAR9, VAR10, VAR36, &VAR34, VAR40);
    }
    else if (VAR2->VAR63 != NULL)
    {
        FUN22(VAR2->VAR63, VAR2->VAR64, VAR2->VAR65, VAR9, VAR40);
    }
    VAR24 = FUN23(sizeof(*VAR24));
    if (FUN24())
    {
        FUN25(VAR50);
        VAR20 = FUN26(VAR66, VAR24, VAR67);
    }
    else
    {
        VAR20 = FUN26(VAR68, VAR24, VAR67);
    }
    if (VAR50)
    {
        VAR12 = FUN27(&VAR16, &VAR17, &VAR14, VAR20, VAR6, VAR7, VAR2->VAR42, VAR9, VAR10, VAR35, VAR34);
    }
    else
    {
        VAR12 = NULL;
        VAR16 = NULL;
        VAR14 = FUN28(NULL, FUN3(), VAR7);
        VAR69 = 1;
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
    for (VAR8 = 0; VAR8 < VAR70; VAR8++)
    {
        VAR24->VAR71[VAR8] = VAR21[VAR8];
    }
    if (VAR50)
    {
        FUN34(VAR24, "");
    }
    FUN35(VAR38);
    FUN36(VAR20[13]);
    FUN37(VAR14, VAR50 ? VAR12 : NULL);
    assert(VAR4->VAR72 != VAR73);
    if (VAR4->VAR72 == VAR74)
    {
        VAR4->VAR72 = FUN6() ? VAR75 : VAR76;
    }
    FUN38(VAR14, VAR20, &VAR32, true, &VAR33, (VAR4->VAR72 != VAR76), 0x4);
    FUN39(VAR14, VAR12);
    FUN40(VAR26, FUN41(VAR26));
    if (VAR50)
    {
        VAR77 *VAR78;
        if (FUN6())
        {
            VAR78 = FUN42(VAR12, VAR26, VAR17 + 1);
        }
        else
        {
            VAR78 = FUN43(VAR12, VAR26, VAR17 + 1);
        }
        VAR30[0] = FUN44(&VAR78->VAR79, "");
        VAR30[1] = FUN44(&VAR78->VAR79, "");
    }
    else
    {
        for (VAR8 = 0; VAR8 < VAR27; VAR8++)
        {
            VAR31 *VAR78;
            char VAR80[] = "";
            VAR78 = FUN45(VAR14, VAR81[VAR8], VAR82[VAR8], VAR83[VAR8], VAR26[VAR28 * VAR8], VAR26[VAR28 * VAR8 + 1]);
            VAR80[4] = '' + VAR8;
            VAR30[VAR8] = FUN44(FUN46(VAR78), VAR80);
        }
    }
    FUN47(VAR9, VAR10, VAR2->VAR84, VAR2, VAR33, VAR30[0], VAR30[1], VAR32);
    if (VAR50 && FUN48())
    {
        FUN49(VAR12, VAR17 + 2, "");
    }
    if (VAR50 && VAR85)
    {
        VAR37 *VAR86;
        VAR87 *VAR88;
        VAR22 = FUN26(VAR89, VAR90, 1);
        VAR88 = FUN50(VAR12, VAR17 + 3, 0xb100, VAR20[9], *VAR22, FUN14(), &VAR86);
        FUN51(VAR88, 8, NULL, 0);
        FUN52(FUN12(VAR2), VAR91, VAR92, (VAR93 **)&VAR4->VAR94, VAR95, VAR96, &VAR97);
        FUN53(FUN12(VAR2), FUN12(VAR86), VAR91, &VAR97);
    }
    if (VAR50)
    {
        FUN54(VAR12);
    }
}