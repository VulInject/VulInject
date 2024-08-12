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
    int VAR36;
    VAR37 *VAR38;
    int VAR39;
    VAR40 *VAR41;
    VAR40 *VAR42[VAR43 * VAR44];
    VAR40 *VAR45[VAR46];
    int VAR47 = 0;
    int VAR48 = VAR19 >> 16;
    int VAR49;
    VAR50 *VAR51 = FUN5(NULL, VAR52);
    VAR53 *VAR54 = FUN6(VAR51);
    FUN7(0, 0x20000000);
    FUN8(VAR51);
    for (VAR39 = 0; VAR39 < 3; VAR39++)
    {
        if (!VAR55[VAR39])
        {
            char VAR56[32];
            snprintf(VAR56, sizeof(VAR56), "", VAR39);
            VAR55[VAR39] = FUN9(VAR56, "", NULL);
        }
    }
    if (VAR5 == NULL)
    {
        VAR5 = "";
        VAR5 = "";
    }
    for (VAR39 = 0; VAR39 < VAR57; VAR39++)
    {
        VAR31 = FUN10(VAR5);
        if (VAR31 == NULL)
        {
            fprintf(VAR58, "");
            FUN11(1);
        }
        VAR33 = &VAR31->VAR33;
        FUN12(VAR33);
        FUN13(VAR33);
        FUN14(VAR59, VAR31);
    }
    VAR31 = FUN15(VAR60);
    VAR33 = &VAR31->VAR33;
    if (VAR3 > (2048u << 20))
    {
        fprintf(VAR58, "", ((unsigned int)VAR3 / (1 << 20)));
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
    VAR49 = 1;
    VAR49 = 0;
    FUN22(VAR13, VAR61, VAR33->VAR62[4], VAR55[2]);
    VAR41 = FUN23(VAR63, 0, VAR47);
    if (VAR41)
    {
        FUN24("" VAR64 ""
               "",
               VAR47, VAR19, VAR65, FUN25(VAR41->VAR66), VAR48);
    }
    VAR11 = FUN26(VAR65, NULL, "", VAR67, VAR41 ? FUN27(VAR41) : NULL, 65536, VAR48, 4, 0x0000, 0x0000, 0x0000, 0x0000, VAR49);
    VAR17 = FUN28(VAR11);
    VAR47++;
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
        VAR68.VAR3 = VAR3;
        VAR68.VAR4 = VAR4;
        VAR68.VAR6 = VAR6;
        VAR68.VAR7 = VAR7;
        VAR68.VAR8 = VAR8;
        VAR24 = FUN30();
        FUN31(FUN32(VAR17), VAR25, VAR24);
        if (FUN29())
        {
            FUN31(FUN32(VAR15) + VAR4, VAR25, VAR24);
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
        if (!VAR41)
        {
            if (VAR69 == NULL)
            {
                VAR69 = VAR70;
            }
            VAR9 = FUN34(VAR71, VAR69);
            if (VAR9)
            {
                VAR19 = FUN35(VAR9, VAR65, VAR67);
                FUN36(VAR9);
            }
            else
            {
                VAR19 = -1;
            }
            if ((VAR19 < 0 || VAR19 > VAR67) && !VAR6 && !FUN37())
            {
                FUN33(""
                             "",
                             VAR69);
                FUN11(1);
            }
        }
        {
            VAR72 *VAR73, *VAR74 = FUN38(VAR65);
            if (!VAR74)
            {
                VAR74 = FUN32(VAR17);
            }
            VAR73 = (void *)VAR74 + FUN19(VAR19, 0x3e0000);
            while (VAR74 < VAR73)
            {
                FUN39(VAR74);
                VAR74++;
            }
        }
    }
    FUN40(VAR18, NULL, "", VAR67, &VAR75);
    if (!FUN41(FUN32(VAR18), VAR65, VAR67))
    {
        memcpy(FUN32(VAR18), FUN32(VAR17), VAR67);
    }
    FUN42(VAR18, true);
    FUN17(VAR13, VAR76, VAR18);
    FUN43(FUN32(VAR18) + 0x10, 0x00000420);
    FUN12(VAR33);
    FUN13(VAR33);
    VAR35 = FUN44(&VAR54->VAR77, 16);
    VAR27 = FUN45(VAR35);
    FUN46(VAR42, FUN47(VAR42));
    VAR36 = FUN48(VAR27, &VAR29, 80);
    VAR54->VAR77 = FUN49(VAR29, VAR33->VAR62[2]);
    FUN50(VAR29, VAR54->VAR77);
    FUN51(VAR27, VAR42, VAR36 + 1);
    FUN52(VAR27, VAR36 + 2, "");
    VAR38 = FUN53(VAR27, VAR36 + 3, 0x1100, FUN54(NULL, 9), NULL, 0, NULL);
    FUN55(VAR38, 8, VAR23, VAR21);
    FUN36(VAR23);
    VAR78 = FUN56(VAR29, 0x40, 0, NULL);
    FUN57(VAR29, 0);
    FUN58(VAR29, "");
    FUN59(VAR29, 2000, NULL);
    FUN60(VAR29, 2);
    FUN61(VAR29, 1);
    for (VAR39 = 0; VAR39 < VAR46; VAR39++)
    {
        VAR45[VAR39] = FUN23(VAR79, 0, VAR39);
    }
    FUN62(VAR29, VAR45);
    FUN63(VAR27);
    FUN64(VAR27);
}