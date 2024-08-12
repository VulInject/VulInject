static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR8;
    VAR9 *VAR10;
    int VAR11;
    VAR12 *VAR13 = FUN4();
    VAR12 *VAR14 = FUN5(VAR12, 1);
    VAR12 *VAR15;
    void *VAR16 = NULL;
    hwaddr VAR17;
    hwaddr VAR18 = FUN6(VAR2);
    long VAR19, VAR20;
    char *VAR21;
    VAR22 *VAR23 = NULL;
    VAR24 = true;
    FUN7(&VAR4->VAR25);
    FUN8(&VAR4->VAR26);
    FUN9(&VAR23);
    if (VAR4->VAR27 == VAR28)
    {
        if (VAR23)
        {
            VAR4->VAR27 = VAR29;
            FUN10(VAR23);
            VAR23 = NULL;
        }
        else
        {
            VAR4->VAR27 = VAR6->VAR30;
        }
    }
    assert(VAR4->VAR27 != VAR28);
    if ((VAR4->VAR27 != VAR29) && VAR23)
    {
        FUN11(VAR23);
        FUN12(1);
    }
    VAR17 = FUN13(&VAR16);
    if (VAR17 == -1)
    {
        FUN14("");
        FUN12(1);
    }
    if (VAR17 && (VAR17 < VAR18))
    {
        VAR4->VAR31 = VAR17;
    }
    else
    {
        VAR4->VAR31 = VAR18;
        if (FUN15())
        {
            VAR4->VAR32 = 1;
            VAR4->VAR31 = FUN16(VAR4->VAR31, 0x10000000);
        }
        VAR4->VAR31 = FUN16(VAR4->VAR31, 0x400000000ull);
    }
    if (VAR4->VAR31 > VAR18)
    {
        FUN14("" VAR33 "", VAR4->VAR31);
        FUN12(1);
    }
    VAR19 = FUN16(VAR4->VAR31, VAR34) - VAR35;
    FUN17(VAR2, VAR36, &VAR37);
    VAR4->VAR38 = FUN18();
    VAR4->VAR39 = FUN18();
    if (VAR6->VAR40)
    {
        FUN19(VAR4->VAR38, VAR41);
        FUN20(VAR2, &VAR37);
    }
    FUN19(VAR4->VAR38, VAR42);
    if (!FUN15() || FUN21())
    {
        FUN19(VAR4->VAR38, VAR43);
    }
    if (VAR4->VAR44)
    {
        FUN19(VAR4->VAR38, VAR45);
    }
    if (VAR4->VAR27 != VAR29)
    {
        FUN19(VAR4->VAR38, VAR46);
    }
    FUN22(VAR4, &VAR37);
    FUN23(VAR4);
    if (FUN15())
    {
        FUN24();
        FUN25();
        FUN26();
    }
    FUN27(VAR14, NULL, "", VAR2->VAR47);
    FUN28(VAR13, 0, VAR14);
    if (VAR17 && VAR16)
    {
        VAR15 = FUN5(VAR12, 1);
        FUN29(VAR15, NULL, "", VAR17, VAR16);
        FUN30(VAR15);
        FUN28(VAR13, 0, VAR15);
    }
    if (VAR2->VAR47 < VAR2->VAR48)
    {
        ram_addr_t VAR49 = VAR2->VAR48 - VAR2->VAR47;
        int VAR50 = FUN15() ? FUN31() / 2 : VAR51;
        if (VAR50 < VAR51)
        {
            VAR50 = VAR51;
        }
        if (VAR2->VAR52 > VAR50)
        {
            FUN14("" VAR53 "", VAR2->VAR52, VAR50);
            FUN12(1);
        }
        VAR4->VAR54.VAR55 = FUN32(VAR2->VAR47, VAR56);
        FUN33(&VAR4->VAR54.VAR57, FUN34(VAR4), "", VAR49);
        FUN28(VAR13, VAR4->VAR54.VAR55, &VAR4->VAR54.VAR57);
    }
    if (VAR6->VAR40)
    {
        FUN35(VAR4);
    }
    VAR21 = FUN36(VAR58, "");
    if (!VAR21)
    {
        FUN14("", "");
        FUN12(1);
    }
    VAR4->VAR59 = FUN37(VAR21);
    if (VAR4->VAR59 < 0)
    {
        FUN14("", VAR21);
        FUN12(1);
    }
    VAR4->VAR60 = FUN38(VAR4->VAR59);
    if (FUN39(VAR21, VAR4->VAR60, VAR4->VAR59) < 0)
    {
        FUN14("", VAR21);
        FUN12(1);
    }
    if (VAR4->VAR59 > VAR61)
    {
        FUN14("", (VAR62)VAR4->VAR59, VAR61);
        FUN12(1);
    }
    FUN40(VAR21);
    FUN41(VAR4);
    FUN42(VAR4);
    VAR4->VAR63 = FUN43();
    for (VAR11 = 0; VAR11 < VAR64; VAR11++)
    {
        if (VAR65[VAR11])
        {
            FUN44(VAR4->VAR63, VAR65[VAR11]);
        }
    }
    FUN45(VAR4);
    FUN46();
    VAR10 = FUN47(VAR4, 0);
    for (VAR11 = 0; VAR11 < VAR66; VAR11++)
    {
        VAR67 *VAR68 = &VAR69[VAR11];
        if (!VAR68->VAR70)
        {
            VAR68->VAR70 = FUN48("");
        }
        if (strcmp(VAR68->VAR70, "") == 0)
        {
            FUN49(VAR4->VAR63, VAR68);
        }
        else
        {
            FUN50(&VAR69[VAR11], VAR10->VAR71, VAR68->VAR70, NULL);
        }
    }
    for (VAR11 = 0; VAR11 <= FUN51(VAR72); VAR11++)
    {
        FUN52(VAR4->VAR63);
    }
    if (FUN53(VAR10->VAR71, &VAR37))
    {
        VAR4->VAR73 = true;
        VAR2->VAR74 |= FUN54() && !VAR2->VAR75;
    }
    if (VAR2->VAR74)
    {
        if (VAR6->VAR76)
        {
            FUN55(VAR10->VAR71, -1, "");
        }
        else
        {
            FUN55(VAR10->VAR71, -1, "");
        }
        if (VAR4->VAR73)
        {
            VAR77 *VAR78 = FUN56(-1);
            FUN57(VAR78, "");
            FUN57(VAR78, "");
        }
    }
    if (VAR4->VAR31 < (VAR79 << 20))
    {
        FUN14("", VAR79);
        FUN12(1);
    }
    if (VAR7)
    {
        uint64_t VAR80 = 0;
        VAR4->VAR81 = FUN58(VAR7, VAR82, NULL, NULL, &VAR80, NULL, 1, VAR83, 0, 0);
        if (VAR4->VAR81 == VAR84)
        {
            VAR4->VAR81 = FUN58(VAR7, VAR82, NULL, NULL, &VAR80, NULL, 0, VAR83, 0, 0);
            VAR4->VAR85 = VAR4->VAR81 > 0;
        }
        if (VAR4->VAR81 < 0)
        {
            FUN14("", VAR7, FUN59(VAR4->VAR81));
            FUN12(1);
        }
        if (VAR8)
        {
            VAR4->VAR86 = (VAR87 + VAR4->VAR81 + 0x1ffff) & ~0xffff;
            VAR4->VAR88 = FUN60(VAR8, VAR4->VAR86, VAR19 - VAR4->VAR86);
            if (VAR4->VAR88 < 0)
            {
                FUN14("", VAR8);
                FUN12(1);
            }
        }
    }
    if (VAR89 == NULL)
    {
        VAR89 = VAR90;
    }
    VAR21 = FUN36(VAR58, VAR89);
    if (!VAR21)
    {
        FUN14("", VAR89);
        FUN12(1);
    }
    VAR20 = FUN60(VAR21, 0, VAR91);
    if (VAR20 <= 0)
    {
        FUN14("", VAR21);
        FUN12(1);
    }
    FUN40(VAR21);
    FUN61(NULL, 0, &VAR92, VAR4);
    FUN62(NULL, "", -1, 1, &VAR93, VAR4);
    FUN63(VAR94, VAR4);
    if (FUN15())
    {
        FUN64(VAR95, &VAR4->VAR96);
        FUN65();
    }