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
    VAR20 *VAR22;
    qemu_irq VAR23;
    VAR24 *VAR25;
    VAR26 *VAR27[VAR28 * VAR29];
    VAR30 *VAR31[VAR28];
    VAR32 *VAR33;
    VAR9 *VAR34;
    VAR9 *VAR35;
    VAR9 *VAR36;
    ram_addr_t VAR37;
    if (FUN6())
    {
        FUN7(VAR6, &VAR34);
    }
    else
    {
        if (!VAR6->VAR38)
        {
            VAR6->VAR38 = 0xe0000000;
        }
        VAR37 = VAR6->VAR38;
        if (VAR2->VAR39 >= VAR6->VAR38)
        {
            if (VAR8->VAR40)
            {
                if (VAR37 > 0xc0000000)
                {
                    VAR37 = 0xc0000000;
                }
                if (VAR37 & ((1ULL << 30) - 1))
                {
                    FUN8(""
                                 "" VAR41 ""
                                 "",
                                 VAR6->VAR38);
                }
            }
        }
        if (VAR2->VAR39 >= VAR37)
        {
            VAR6->VAR42 = VAR2->VAR39 - VAR37;
            VAR6->VAR43 = VAR37;
        }
        else
        {
            VAR6->VAR42 = 0;
            VAR6->VAR43 = VAR2->VAR39;
        }
    }
    FUN9(VAR6);
    if (FUN10() && VAR8->VAR44)
    {
        FUN11();
    }
    if (VAR8->VAR45)
    {
        VAR35 = FUN12(VAR9, 1);
        FUN13(VAR35, NULL, "", VAR46);
        VAR36 = VAR35;
    }
    else
    {
        VAR35 = NULL;
        VAR36 = VAR10;
    }
    FUN14(VAR6);
    if (VAR8->VAR47)
    {
        VAR48 *VAR49 = FUN15(VAR2);
        FUN16("", "", VAR49->VAR50, VAR8->VAR51, VAR8->VAR52, VAR53);
    }
    if (!FUN6())
    {
        FUN17(VAR6, VAR10, VAR36, &VAR34);
    }
    else if (VAR2->VAR54 != NULL)
    {
        FUN18(VAR6);
    }
    VAR25 = FUN19(sizeof(*VAR25));
    if (FUN20())
    {
        FUN21(VAR8->VAR45);
        VAR21 = FUN22(VAR55, VAR25, VAR56);
    }
    else
    {
        VAR21 = FUN22(VAR57, VAR25, VAR56);
    }
    if (VAR8->VAR45)
    {
        VAR14 = FUN23(VAR3, VAR4, &VAR18, &VAR19, &VAR16, VAR21, VAR10, VAR11, VAR2->VAR39, VAR6->VAR43, VAR6->VAR42, VAR35, VAR34);
        VAR6->VAR58 = VAR14;
    }
    else
    {
        VAR14 = NULL;
        VAR18 = NULL;
        VAR16 = FUN24(NULL, FUN4(), VAR11, &VAR59);
        VAR60 = 1;
    }
    FUN25(VAR16, VAR21);
    if (FUN26())
    {
        VAR22 = FUN27(VAR16);
    }
    else if (FUN6())
    {
        VAR22 = FUN28();
    }
    else
    {
        VAR22 = FUN29(VAR16, FUN30());
    }
    for (VAR12 = 0; VAR12 < VAR61; VAR12++)
    {
        VAR25->VAR62[VAR12] = VAR22[VAR12];
    }
    FUN31(VAR22);
    if (VAR8->VAR45)
    {
        FUN32(VAR25, "");
    }
    FUN33(VAR21[13]);
    FUN34(VAR16, VAR8->VAR45 ? VAR14 : NULL);
    assert(VAR6->VAR63 != VAR64);
    if (VAR6->VAR63 == VAR65)
    {
        VAR6->VAR63 = FUN6() ? VAR66 : VAR67;
    }
    FUN35(VAR16, VAR21, &VAR33, true, (VAR6->VAR63 != VAR67), 0x4);
    FUN36(VAR16, VAR14);
    FUN37(VAR27, FUN38(VAR27));
    if (VAR8->VAR45)
    {
        VAR68 *VAR69;
        if (FUN6())
        {
            VAR69 = FUN39(VAR14, VAR27, VAR19 + 1);
        }
        else
        {
            VAR69 = FUN40(VAR14, VAR27, VAR19 + 1);
        }
        VAR31[0] = FUN41(&VAR69->VAR70, "");
        VAR31[1] = FUN41(&VAR69->VAR70, "");
    }
    else
    {
        for (VAR12 = 0; VAR12 < VAR28; VAR12++)
        {
            VAR32 *VAR69;
            char VAR71[] = "";
            VAR69 = FUN42(VAR16, VAR72[VAR12], VAR73[VAR12], VAR74[VAR12], VAR27[VAR29 * VAR12], VAR27[VAR29 * VAR12 + 1]);
            VAR71[4] = '' + VAR12;
            VAR31[VAR12] = FUN41(FUN43(VAR69), VAR71);
        }
    }
    FUN44(VAR6, VAR31[0], VAR31[1], VAR33);
    if (VAR8->VAR45 && FUN45(VAR2))
    {
        FUN46(VAR14, VAR19 + 2, "");
    }
    if (VAR8->VAR45 && VAR75)
    {
        VAR76 *VAR77;
        VAR78 *VAR79;
        VAR23 = FUN47(VAR80, VAR81, 0);
        VAR79 = FUN48(VAR14, VAR19 + 3, 0xb100, VAR21[9], VAR23, FUN49(VAR6), &VAR77);
        FUN50(VAR79, 8, NULL, 0);
        FUN51(FUN52(VAR2), VAR82, VAR83, (VAR84 **)&VAR6->VAR85, VAR86, VAR87, &VAR59);
        FUN53(FUN52(VAR2), FUN52(VAR77), VAR82, &VAR59);
    }
    if (VAR8->VAR45)
    {
        FUN54(VAR14);
    }
    if (VAR6->VAR88.VAR89)
    {
        FUN55(&VAR6->VAR88, VAR11, VAR6->VAR90, FUN52(VAR6));
    }
}