static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3();
    VAR7 *VAR9 = FUN4();
    int VAR10;
    ram_addr_t VAR11, VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19 = -1;
    VAR20 *VAR21;
    VAR20 *VAR22;
    VAR20 *VAR23;
    VAR20 *VAR24;
    VAR25 *VAR26;
    VAR27 *VAR28[VAR29 * VAR30];
    VAR31 *VAR32[VAR29];
    VAR33 *VAR34;
    VAR33 *VAR35;
    VAR7 *VAR36;
    VAR7 *VAR37;
    VAR7 *VAR38;
    VAR39 *VAR40;
    VAR41 *VAR42 = NULL;
    VAR43 *VAR44;
    ram_addr_t VAR45;
    if (VAR2->VAR46 >= 0xe0000000)
    {
        VAR45 = VAR47 ? 0xc0000000 : 0xe0000000;
    }
    else
    {
        VAR45 = 0xe0000000;
    }
    if (VAR45 > VAR6->VAR48)
    {
        VAR45 = VAR6->VAR48;
        if (VAR2->VAR46 - VAR45 > VAR45 && VAR45 & ((1ULL << 30) - 1))
        {
            FUN5("" VAR49 "", VAR6->VAR48);
        }
    }
    if (VAR2->VAR46 >= VAR45)
    {
        VAR12 = VAR2->VAR46 - VAR45;
        VAR11 = VAR45;
    }
    else
    {
        VAR12 = 0;
        VAR11 = VAR2->VAR46;
    }
    if (FUN6() && FUN7(&VAR11, &VAR12, &VAR36) != 0)
    {
        fprintf(VAR50, "");
        FUN8(1);
    }
    VAR40 = FUN9(NULL, VAR51);
    FUN10(FUN11(), "", FUN12(VAR40), NULL);
    FUN13(VAR2->VAR52, VAR40);
    if (FUN14() && VAR4)
    {
        FUN15();
    }
    if (VAR3)
    {
        VAR37 = FUN16(VAR7, 1);
        FUN17(VAR37, NULL, "", VAR53);
        VAR38 = VAR37;
    }
    else
    {
        VAR37 = NULL;
        VAR38 = VAR8;
    }
    VAR44 = FUN18(VAR11, VAR12);
    VAR44->VAR54 = VAR54;
    VAR44->VAR55 = VAR55;
    VAR44->VAR56 = !VAR3;
    VAR44->VAR57 = VAR57;
    if (VAR58)
    {
        VAR59 *VAR60 = FUN19(VAR2);
        FUN20("", "", VAR60->VAR61, VAR62);
    }
    if (!FUN6())
    {
        VAR42 = FUN21(VAR2, VAR8, VAR11, VAR12, VAR38, &VAR36, VAR44);
    }
    VAR26 = FUN22(sizeof(*VAR26));
    if (FUN23())
    {
        FUN24(VAR3);
        VAR22 = FUN25(VAR63, VAR26, VAR64);
    }
    else
    {
        VAR22 = FUN25(VAR65, VAR26, VAR64);
    }
    if (VAR3)
    {
        VAR14 = FUN26(&VAR18, &VAR19, &VAR16, VAR22, VAR8, VAR9, VAR2->VAR46, VAR11, VAR12, VAR37, VAR36);
    }
    else
    {
        VAR14 = NULL;
        VAR18 = NULL;
        VAR16 = FUN27(NULL, VAR9);
        VAR66 = 1;
    }
    FUN28(VAR16, VAR22);
    if (FUN23())
    {
        VAR23 = FUN29(VAR16);
    }
    else if (FUN6())
    {
        VAR23 = FUN30();
    }
    else
    {
        VAR21 = FUN31();
        VAR23 = FUN32(VAR16, VAR21[0]);
    }
    for (VAR10 = 0; VAR10 < VAR67; VAR10++)
    {
        VAR26->VAR68[VAR10] = VAR23[VAR10];
    }
    if (VAR3)
    {
        FUN33(VAR26, "");
    }
    FUN34(VAR40);
    FUN35(VAR22[13]);
    FUN36(VAR16, VAR3 ? VAR14 : NULL);
    FUN37(VAR16, VAR22, &VAR34, &VAR35, FUN6(), 0x4);
    FUN38(VAR16, VAR14);
    FUN39(VAR28, VAR29);
    if (VAR3)
    {
        VAR69 *VAR70;
        if (FUN6())
        {
            VAR70 = FUN40(VAR14, VAR28, VAR19 + 1);
        }
        else
        {
            VAR70 = FUN41(VAR14, VAR28, VAR19 + 1);
        }
        VAR32[0] = FUN42(&VAR70->VAR71, "");
        VAR32[1] = FUN42(&VAR70->VAR71, "");
    }
    else
    {
        for (VAR10 = 0; VAR10 < VAR29; VAR10++)
        {
            VAR33 *VAR70;
            char VAR72[] = "";
            VAR70 = FUN43(VAR16, VAR73[VAR10], VAR74[VAR10], VAR75[VAR10], VAR28[VAR30 * VAR10], VAR28[VAR30 * VAR10 + 1]);
            VAR72[4] = '' + VAR10;
            VAR32[VAR10] = FUN42(FUN44(VAR70), VAR72);
        }
    }
    FUN45(VAR11, VAR12, VAR2->VAR76, VAR35, VAR32[0], VAR32[1], VAR34);
    if (VAR3 && FUN46(false))
    {
        FUN47(VAR14, VAR19 + 2, "");
    }
    if (VAR3 && VAR77)
    {
        VAR39 *VAR78;
        VAR79 *VAR80;
        VAR24 = FUN25(VAR81, VAR82, 1);
        VAR80 = FUN48(VAR14, VAR19 + 3, 0xb100, VAR22[9], *VAR24, FUN14(), VAR42, &VAR78);
        FUN49(VAR80, 8, NULL, 0);
        FUN50(FUN12(VAR2), VAR83, VAR84, (VAR85 **)&VAR6->VAR86, VAR87, VAR88, &VAR89);
        FUN51(FUN12(VAR2), FUN12(VAR78), VAR83, &VAR89);
    }
    if (VAR3)
    {
        FUN52(VAR14);
    }
}