static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    uint16_t VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15;
    VAR16 *VAR17;
    void *VAR18;
    int VAR19;
    uint32_t VAR20 = 0, VAR21 = 0;
    long VAR22 = 0, VAR23 = 0;
    char VAR24;
    if (!VAR2->VAR25)
    {
        VAR2->VAR25 = "";
    }
    VAR7 = FUN2(FUN3(VAR26, VAR2->VAR25));
    if (!VAR7)
    {
        FUN4("", VAR2->VAR25);
        FUN5(1);
    }
    VAR4 = &VAR7->VAR4;
    if (FUN6(VAR4) != VAR27)
    {
        FUN4("");
        FUN5(1);
    }
    if (VAR4->VAR28 & VAR29)
    {
        FUN7(VAR4, 7812500UL);
    }
    else
    {
        FUN7(VAR4, 100UL * 1000UL * 1000UL);
    }
    FUN8(VAR30, VAR7);
    VAR9 = FUN9(NULL, "");
    if (!VAR31)
    {
        VAR31 = VAR32;
    }
    FUN10(VAR9, "", VAR31);
    FUN11(VAR9, "", VAR33);
    VAR11 = FUN12(VAR9);
    FUN13(FUN14(), "", FUN15(VAR9), NULL);
    FUN16(VAR9);
    VAR15 = FUN17(FUN18(VAR9, ""));
    if (!VAR15)
    {
        FUN4("");
        FUN5(1);
    }
    VAR9 = FUN19(FUN20(VAR15, FUN21(11, 0), ""));
    FUN22(VAR9, 0, VAR7->VAR4.VAR34[VAR35]);
    FUN23(VAR11, 0, FUN24(VAR9, 15));
    FUN23(VAR11, 1, FUN24(VAR9, 13));
    FUN23(VAR11, 2, FUN24(VAR9, 15));
    FUN23(VAR11, 3, FUN24(VAR9, 13));
    VAR17 = FUN25(FUN18(VAR9, ""));
    VAR9 = FUN19(FUN26(VAR17, ""));
    FUN11(VAR9, "", VAR2->VAR36);
    FUN16(VAR9);
    VAR5 = 0x6aa9;
    FUN27(FUN28(VAR17), VAR37, NULL, NULL, NULL, &VAR5);
    if (FUN29())
    {
        FUN30(VAR17, "");
        VAR13 = FUN31(FUN30(VAR17, ""));
        VAR9 = FUN19(FUN26(VAR17, ""));
        FUN11(VAR9, "", 0x830);
        FUN11(VAR9, "", 10);
        FUN16(VAR9);
        VAR9 = FUN19(FUN26(VAR17, ""));
        FUN11(VAR9, "", 12);
        FUN16(VAR9);
        VAR9 = FUN19(FUN26(VAR17, ""));
        FUN11(VAR9, "", 0xfc);
        FUN11(VAR9, "", 0xc0);
        FUN16(VAR9);
        FUN20(VAR15, FUN21(1, 0), "");
        FUN32(VAR15);
        for (VAR19 = 0; VAR19 < VAR38; VAR19++)
        {
            FUN33(&VAR39[VAR19], VAR15, "", VAR19 == 0 ? "" : NULL);
        }
    }
    VAR18 = FUN34(VAR40, VAR40 + 2);
    if (VAR2->VAR41)
    {
        VAR20 = VAR42;
        VAR22 = FUN35(VAR2->VAR41, VAR20, VAR2->VAR36 - VAR20);
        if (VAR22 < 0)
        {
            FUN4("", VAR2->VAR41);
            FUN5(1);
        }
        FUN36(VAR18, VAR43, VAR20);
        FUN36(VAR18, VAR44, VAR22);
        if (VAR2->VAR45)
        {
            VAR21 = VAR46;
            VAR23 = FUN35(VAR2->VAR45, VAR21, VAR2->VAR36 - VAR21);
            if (VAR23 < 0)
            {
                FUN4("", VAR2->VAR45);
                FUN5(1);
            }
            FUN36(VAR18, VAR47, VAR21);
            FUN36(VAR18, VAR48, VAR23);
        }
        if (VAR2->VAR49 && *VAR2->VAR49)
        {
            FUN36(VAR18, VAR50, VAR51);
            FUN37("", VAR51, VAR52, VAR2->VAR49);
            FUN38(VAR18, VAR53, VAR2->VAR49);
            FUN36(VAR18, VAR54, strlen(VAR2->VAR49) + 1);
        }
        VAR24 = '';
    }
    else
    {
        VAR24 = VAR2->VAR55[0];
    }
    FUN39(VAR18, VAR56, (VAR57)VAR58);
    FUN40(VAR18, VAR59, (VAR60)VAR2->VAR36);
    FUN39(VAR18, VAR61, VAR62);
    FUN39(VAR18, VAR63, VAR64);
    FUN39(VAR18, VAR65, VAR66);
    FUN39(VAR18, VAR67, VAR68);
    FUN36(VAR18, VAR69, FUN41());
    if (FUN41())
    {
        VAR70 *VAR71;
        FUN36(VAR18, VAR72, FUN42());
        VAR71 = FUN43(16);
        FUN44(VAR4, VAR71, 16);
        FUN45(VAR18, VAR73, VAR71, 16);
        FUN36(VAR18, VAR74, FUN46());
    }
    else
    {
        FUN36(VAR18, VAR72, VAR75);
    }
    FUN39(VAR18, VAR76, VAR24);
    FUN47(VAR77, VAR18);
    if (VAR13)
    {
        FUN48(VAR13, VAR78, "", VAR36, VAR24, VAR20, VAR22, VAR2->VAR49, VAR21, VAR23, 0, VAR64, VAR66, VAR68);
    }
}