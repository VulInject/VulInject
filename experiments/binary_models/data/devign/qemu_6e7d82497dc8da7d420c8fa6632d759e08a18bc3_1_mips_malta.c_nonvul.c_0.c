void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    ram_addr_t VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR8;
    char *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = FUN2();
    VAR12 *VAR14 = FUN3(VAR12, 1);
    VAR12 *VAR15 = FUN3(VAR12, 1);
    VAR12 *VAR16;
    VAR12 *VAR17, *VAR18 = FUN3(VAR12, 1);
    target_long VAR19 = VAR20;
    const size_t VAR21 = 8 * 256;
    VAR22 *VAR23 = FUN4(VAR21);
    int64_t VAR24, VAR25;
    VAR26 *VAR27;
    VAR28 *VAR29;
    VAR30 *VAR31;
    VAR32 *VAR33;
    VAR34 *VAR35;
    VAR34 *VAR36;
    int VAR37;
    VAR38 *VAR39;
    int VAR40;
    VAR41 *VAR42;
    VAR41 *VAR43[VAR44 * VAR45];
    VAR41 *VAR46[VAR47];
    int VAR48 = 0;
    int VAR49 = VAR19 >> 16;
    int VAR50;
    VAR51 *VAR52 = FUN5(NULL, VAR53);
    VAR54 *VAR55 = FUN6(VAR52);
    FUN7(0, 0x20000000);
    FUN8(VAR52);
    for (VAR40 = 0; VAR40 < 3; VAR40++)
    {
        if (!VAR56[VAR40])
        {
            char VAR57[32];
            snprintf(VAR57, sizeof(VAR57), "", VAR40);
            VAR56[VAR40] = FUN9(VAR57, "", NULL);
        }
    }
    if (VAR5 == NULL)
    {
        VAR5 = "";
        VAR5 = "";
    }
    for (VAR40 = 0; VAR40 < VAR58; VAR40++)
    {
        VAR31 = FUN10(VAR5);
        if (VAR31 == NULL)
        {
            fprintf(VAR59, "");
            FUN11(1);
        }
        VAR33 = &VAR31->VAR33;
        FUN12(VAR33);
        FUN13(VAR33);
        FUN14(VAR60, VAR31);
    }
    VAR31 = FUN15(VAR61);
    VAR33 = &VAR31->VAR33;
    if (VAR3 > (2048u << 20))
    {
        fprintf(VAR59, "", ((unsigned int)VAR3 / (1 << 20)));
        FUN11(1);
    }
    FUN16(VAR14, NULL, "", VAR3);
    FUN17(VAR13, 0x80000000, VAR14);
    FUN18(VAR15, NULL, "", VAR14, 0, FUN19(VAR3, (256 << 20)));
    FUN17(VAR13, 0, VAR15);
    if (VAR3 > (512 << 20))
    {
        VAR16 = FUN3(VAR12, 1);
        FUN18(VAR16, NULL, "", VAR14, 512 << 20, VAR3 - (512 << 20));
        FUN17(VAR13, 512 << 20, VAR16);
    }
    FUN20(&VAR23[0 * 256], VAR3);
    FUN21(&VAR23[6 * 256]);
    VAR50 = 1;
    VAR50 = 0;
    FUN22(VAR13, VAR62, VAR33->VAR63[4], VAR56[2]);
    VAR42 = FUN23(VAR64, 0, VAR48);
    if (VAR42)
    {
        FUN24("" VAR65 ""
               "",
               VAR48, VAR19, VAR66, FUN25(VAR42->VAR67), VAR49);
    }
    VAR11 = FUN26(VAR66, NULL, "", VAR68, VAR42 ? FUN27(VAR42) : NULL, 65536, VAR49, 4, 0x0000, 0x0000, 0x0000, 0x0000, VAR50);
    VAR17 = FUN28(VAR11);
    VAR48++;
    if (VAR6)
    {
        VAR4 = FUN19(VAR3, 256 << 20);
        if (FUN29())
        {
            VAR4 -= 0x100000;
            VAR25 = 0x40000000 + VAR4;
        }
        else
        {
            VAR25 = 0xbfc00000;
        }
        VAR69.VAR3 = VAR4;
        VAR69.VAR6 = VAR6;
        VAR69.VAR7 = VAR7;
        VAR69.VAR8 = VAR8;
        VAR24 = FUN30();
        FUN31(VAR33, FUN32(VAR17), VAR25, VAR24);
        if (FUN29())
        {
            FUN31(VAR33, FUN32(VAR15) + VAR4, VAR25, VAR24);
        }
    }
    else
    {
        if (FUN29())
        {
            FUN33(""
                         "");
            FUN11(1);
        }
        if (!VAR42)
        {
            if (VAR70 == NULL)
            {
                VAR70 = VAR71;
            }
            VAR9 = FUN34(VAR72, VAR70);
            if (VAR9)
            {
                VAR19 = FUN35(VAR9, VAR66, VAR68);
                FUN36(VAR9);
            }
            else
            {
                VAR19 = -1;
            }
            if ((VAR19 < 0 || VAR19 > VAR68) && !VAR6 && !FUN37())
            {
                FUN33(""
                             "",
                             VAR70);
                FUN11(1);
            }
        }
        {
            VAR73 *VAR74, *VAR75 = FUN38(VAR66);
            if (!VAR75)
            {
                VAR75 = FUN32(VAR17);
            }
            VAR74 = (void *)VAR75 + FUN19(VAR19, 0x3e0000);
            while (VAR75 < VAR74)
            {
                FUN39(VAR75);
                VAR75++;
            }
        }
    }
    FUN40(VAR18, NULL, "", VAR68, &VAR76);
    if (!FUN41(FUN32(VAR18), VAR66, VAR68))
    {
        memcpy(FUN32(VAR18), FUN32(VAR17), VAR68);
    }
    FUN42(VAR18, true);
    FUN17(VAR13, VAR77, VAR18);
    FUN43(FUN32(VAR18) + 0x10, 0x00000420);
    FUN12(VAR33);
    FUN13(VAR33);
    VAR35 = FUN44(&VAR55->VAR78, 16);
    VAR27 = FUN45(VAR35);
    FUN46(VAR43, FUN47(VAR43));
    VAR37 = FUN48(VAR27, &VAR29, 80);
    VAR55->VAR78 = FUN49(VAR29, VAR33->VAR63[2]);
    FUN50(VAR29, VAR55->VAR78);
    FUN51(VAR27, VAR43, VAR37 + 1);
    FUN52(VAR27, VAR37 + 2, "");
    VAR39 = FUN53(VAR27, VAR37 + 3, 0x1100, FUN54(NULL, 9), NULL, 0, NULL);
    FUN55(VAR39, 8, VAR23, VAR21);
    FUN36(VAR23);
    VAR79 = FUN56(VAR29, 0x40, 0, NULL);
    VAR36 = FUN57(VAR80, NULL, 1);
    FUN58(0, VAR36);
    FUN59(VAR29, "");
    FUN60(VAR29, 2000, NULL);
    FUN61(VAR29, 2);
    FUN62(VAR29, 1);
    for (VAR40 = 0; VAR40 < VAR47; VAR40++)
    {
        VAR46[VAR40] = FUN23(VAR81, 0, VAR40);
    }
    FUN63(VAR29, VAR46);
    FUN64(VAR27);
    FUN65(VAR27);
}