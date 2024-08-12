void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    char *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = FUN2();
    VAR11 *VAR13 = FUN3(VAR11, 1);
    VAR11 *VAR14, *VAR15 = FUN3(VAR11, 1);
    target_long VAR16 = VAR17;
    const size_t VAR18 = 8 * 256;
    VAR19 *VAR20 = FUN4(VAR18);
    int64_t VAR21;
    VAR22 *VAR23;
    VAR24 *VAR25;
    VAR26 *VAR27;
    VAR28 *VAR29;
    VAR30 *VAR31;
    VAR30 *VAR32;
    int VAR33;
    VAR34 *VAR35;
    int VAR36;
    VAR37 *VAR38;
    VAR37 *VAR39[VAR40 * VAR41];
    VAR37 *VAR42[VAR43];
    int VAR44 = 0;
    int VAR45 = VAR16 >> 16;
    int VAR46;
    VAR47 *VAR48 = FUN5(NULL, VAR49);
    VAR50 *VAR51 = FUN6(VAR48);
    FUN7(VAR48);
    for (VAR36 = 0; VAR36 < 3; VAR36++)
    {
        if (!VAR52[VAR36])
        {
            char VAR53[32];
            snprintf(VAR53, sizeof(VAR53), "", VAR36);
            VAR52[VAR36] = FUN8(VAR53, "", NULL);
        }
    }
    if (VAR4 == NULL)
    {
        VAR4 = "";
        VAR4 = "";
    }
    for (VAR36 = 0; VAR36 < VAR54; VAR36++)
    {
        VAR27 = FUN9(VAR4);
        if (VAR27 == NULL)
        {
            fprintf(VAR55, "");
            FUN10(1);
        }
        VAR29 = &VAR27->VAR29;
        FUN11(VAR29);
        FUN12(VAR29);
        FUN13(VAR56, VAR27);
    }
    VAR27 = FUN14(VAR57);
    VAR29 = &VAR27->VAR29;
    if (VAR3 > (256 << 20))
    {
        fprintf(VAR55, "", ((unsigned int)VAR3 / (1 << 20)));
        FUN10(1);
    }
    FUN15(VAR13, NULL, "", VAR3);
    FUN16(VAR13);
    FUN17(VAR12, 0, VAR13);
    FUN18(&VAR20[0 * 256], VAR3);
    FUN19(&VAR20[6 * 256]);
    VAR46 = 1;
    VAR46 = 0;
    FUN20(VAR12, VAR58, VAR29->VAR59[4], VAR52[2]);
    VAR38 = FUN21(VAR60, 0, VAR44);
    if (VAR38)
    {
        FUN22("" VAR61 ""
               "",
               VAR44, VAR16, VAR62, FUN23(VAR38->VAR63), VAR45);
    }
    VAR10 = FUN24(VAR62, NULL, "", VAR64, VAR38 ? VAR38->VAR63 : NULL, 65536, VAR45, 4, 0x0000, 0x0000, 0x0000, 0x0000, VAR46);
    VAR14 = FUN25(VAR10);
    VAR44++;
    if (VAR5)
    {
        VAR65.VAR3 = VAR3;
        VAR65.VAR5 = VAR5;
        VAR65.VAR6 = VAR6;
        VAR65.VAR7 = VAR7;
        VAR21 = FUN26();
        FUN27(VAR29, FUN28(VAR14), VAR21);
    }
    else
    {
        if (!VAR38)
        {
            if (VAR66 == NULL)
            {
                VAR66 = VAR67;
            }
            VAR8 = FUN29(VAR68, VAR66);
            if (VAR8)
            {
                VAR16 = FUN30(VAR8, VAR62, VAR64);
                FUN31(VAR8);
            }
            else
            {
                VAR16 = -1;
            }
            if ((VAR16 < 0 || VAR16 > VAR64) && !VAR5 && !FUN32())
            {
                FUN33(""
                             "",
                             VAR66);
                FUN10(1);
            }
        }
        {
            VAR69 *VAR70, *VAR71 = FUN34(VAR62);
            if (!VAR71)
            {
                VAR71 = FUN28(VAR14);
            }
            VAR70 = (void *)VAR71 + FUN35(VAR16, 0x3e0000);
            while (VAR71 < VAR70)
            {
                FUN36(VAR71);
                VAR71++;
            }
        }
    }
    FUN15(VAR15, NULL, "", VAR64);
    if (!FUN37(FUN28(VAR15), VAR62, VAR64))
    {
        memcpy(FUN28(VAR15), FUN28(VAR14), VAR64);
    }
    FUN38(VAR15, true);
    FUN17(VAR12, VAR72, VAR15);
    FUN39(FUN28(VAR15) + 0x10, 0x00000420);
    FUN11(VAR29);
    FUN12(VAR29);
    VAR31 = FUN40(&VAR51->VAR73, 16);
    VAR23 = FUN41(VAR31);
    FUN42(VAR39, VAR40);
    VAR33 = FUN43(VAR23, &VAR25, 80);
    VAR51->VAR73 = FUN44(VAR25, VAR29->VAR59[2]);
    FUN45(VAR25, VAR51->VAR73);
    FUN46(VAR23, VAR39, VAR33 + 1);
    FUN47(VAR23, VAR33 + 2, "");
    VAR35 = FUN48(VAR23, VAR33 + 3, 0x1100, FUN49(NULL, 9), NULL, 0, NULL);
    FUN50(VAR35, 8, VAR20, VAR18);
    FUN31(VAR20);
    VAR74 = FUN51(VAR25, 0x40, 0, NULL);
    VAR32 = FUN52(VAR75, NULL, 1);
    FUN53(0, VAR32);
    FUN54(VAR25, "");
    FUN55(VAR25, 2000, NULL);
    FUN56(VAR25, 0, VAR52[0]);
    FUN56(VAR25, 1, VAR52[1]);
    if (VAR76[0])
        FUN57(VAR25, 0, VAR76[0]);
    for (VAR36 = 0; VAR36 < VAR43; VAR36++)
    {
        VAR42[VAR36] = FUN21(VAR77, 0, VAR36);
    }
    FUN58(VAR25, VAR42);
    FUN59(VAR23);
    FUN60(VAR23);