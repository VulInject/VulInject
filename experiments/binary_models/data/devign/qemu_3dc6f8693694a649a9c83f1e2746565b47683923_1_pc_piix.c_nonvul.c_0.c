static void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR9 *VAR10 = FUN4();
    VAR9 *VAR11 = FUN5();
    int VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19 = -1;
    VAR20 *VAR21;
    qemu_irq VAR22;
    VAR23 *VAR24;
    VAR25 *VAR26[VAR27 * VAR28];
    VAR29 *VAR30[VAR27];
    VAR31 *VAR32;
    VAR9 *VAR33;
    VAR9 *VAR34;
    VAR9 *VAR35;
    ram_addr_t VAR36;
    if (FUN6())
    {
        FUN7(VAR6, &VAR33);
    }
    else
    {
        if (!VAR6->VAR37)
        {
            VAR6->VAR37 = 0xe0000000;
        }
        VAR36 = VAR6->VAR37;
        if (VAR2->VAR38 >= VAR6->VAR37)
        {
            if (VAR8->VAR39)
            {
                if (VAR36 > 0xc0000000)
                {
                    VAR36 = 0xc0000000;
                }
                if (VAR36 & ((1ULL << 30) - 1))
                {
                    FUN8(""
                                "" VAR40 ""
                                "",
                                VAR6->VAR37);
                }
            }
        }
        if (VAR2->VAR38 >= VAR36)
        {
            VAR6->VAR41 = VAR2->VAR38 - VAR36;
            VAR6->VAR42 = VAR36;
        }
        else
        {
            VAR6->VAR41 = 0;
            VAR6->VAR42 = VAR2->VAR38;
        }
    }
    FUN9(VAR6);
    if (FUN10() && VAR8->VAR43)
    {
        FUN11();
    }
    if (VAR8->VAR44)
    {
        VAR34 = FUN12(VAR9, 1);
        FUN13(VAR34, NULL, "", VAR45);
        VAR35 = VAR34;
    }
    else
    {
        VAR34 = NULL;
        VAR35 = VAR10;
    }
    FUN14(VAR6);
    if (VAR8->VAR46)
    {
        VAR47 *VAR48 = FUN15(VAR2);
        FUN16("", "", VAR48->VAR49, VAR8->VAR50, VAR8->VAR51, VAR52);
    }
    if (!FUN6())
    {
        FUN17(VAR6, VAR10, VAR35, &VAR33);
    }
    else if (VAR2->VAR53 != NULL)
    {
        FUN18(VAR6);
    }
    VAR24 = FUN19(sizeof(*VAR24));
    if (FUN20())
    {
        FUN21(VAR8->VAR44);
        VAR6->VAR54 = FUN22(VAR55, VAR24, VAR56);
    }
    else
    {
        VAR6->VAR54 = FUN22(VAR57, VAR24, VAR56);
    }
    if (VAR8->VAR44)
    {
        VAR14 = FUN23(VAR3, VAR4, &VAR18, &VAR19, &VAR16, VAR6->VAR54, VAR10, VAR11, VAR2->VAR38, VAR6->VAR42, VAR6->VAR41, VAR34, VAR33);
        VAR6->VAR58 = VAR14;
    }
    else
    {
        VAR14 = NULL;
        VAR18 = NULL;
        VAR16 = FUN24(NULL, FUN4(), VAR11, &VAR59);
        VAR60 = 1;
    }
    FUN25(VAR16, VAR6->VAR54);
    if (FUN26())
    {
        VAR21 = FUN27(VAR16);
    }
    else if (FUN6())
    {
        VAR21 = FUN28();
    }
    else
    {
        VAR21 = FUN29(VAR16, FUN30());
    }
    for (VAR12 = 0; VAR12 < VAR61; VAR12++)
    {
        VAR24->VAR62[VAR12] = VAR21[VAR12];
    }
    FUN31(VAR21);
    if (VAR8->VAR44)
    {
        FUN32(VAR24, "");
    }
    FUN33(VAR6->VAR54[13]);
    FUN34(VAR16, VAR8->VAR44 ? VAR14 : NULL);
    assert(VAR6->VAR63 != VAR64);
    if (VAR6->VAR63 == VAR65)
    {
        VAR6->VAR63 = FUN6() ? VAR66 : VAR67;
    }
    FUN35(VAR16, VAR6->VAR54, &VAR32, true, (VAR6->VAR63 != VAR67), VAR6->VAR68, 0x4);
    FUN36(VAR16, VAR14);
    FUN37(VAR26, FUN38(VAR26));
    if (VAR8->VAR44)
    {
        VAR69 *VAR70;
        if (FUN6())
        {
            VAR70 = FUN39(VAR14, VAR26, VAR19 + 1);
        }
        else
        {
            VAR70 = FUN40(VAR14, VAR26, VAR19 + 1);
        }
        VAR30[0] = FUN41(&VAR70->VAR71, "");
        VAR30[1] = FUN41(&VAR70->VAR71, "");
    }
    else
    {
        for (VAR12 = 0; VAR12 < VAR27; VAR12++)
        {
            VAR31 *VAR70;
            char VAR72[] = "";
            VAR70 = FUN42(VAR16, VAR73[VAR12], VAR74[VAR12], VAR75[VAR12], VAR26[VAR28 * VAR12], VAR26[VAR28 * VAR12 + 1]);
            VAR72[4] = '' + VAR12;
            VAR30[VAR12] = FUN41(FUN43(VAR70), VAR72);
        }
    }
    FUN44(VAR6, VAR30[0], VAR30[1], VAR32);
    if (VAR8->VAR44 && FUN45(VAR2))
    {
        FUN46(VAR14, VAR19 + 2, "");
    }
    if (VAR8->VAR44 && VAR76)
    {
        VAR77 *VAR78;
        VAR79 *VAR80;
        VAR22 = FUN47(VAR81, VAR82, 0);
        VAR80 = FUN48(VAR14, VAR19 + 3, 0xb100, VAR6->VAR54[9], VAR22, FUN49(VAR6), &VAR78);
        FUN50(VAR80, 8, NULL, 0);
        FUN51(FUN52(VAR2), VAR83, VAR84, (VAR85 **)&VAR6->VAR86, VAR87, VAR88, &VAR59);
        FUN53(FUN52(VAR2), FUN52(VAR78), VAR83, &VAR59);
    }
    if (VAR8->VAR44)
    {
        FUN54(VAR14);
    }
    if (VAR6->VAR89.VAR90)
    {
        FUN55(&VAR6->VAR89, VAR11, VAR6->VAR91, FUN52(VAR6));
    }
}