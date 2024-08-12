static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    ebml_master VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13 = 2;
    int64_t VAR14;
    if (!strcmp(VAR2->VAR15->VAR16, ""))
        VAR4->VAR17 = VAR18;
    else
        VAR4->VAR17 = VAR19;
    if (VAR4->VAR17 != VAR18 || FUN2(VAR2->VAR20, "", NULL, 0) || FUN2(VAR2->VAR20, "", NULL, 0))
        VAR13 = 4;
    for (VAR12 = 0; VAR12 < VAR2->VAR21; VAR12++)
    {
        if (VAR2->VAR22[VAR12]->VAR23->VAR24 == VAR25 || VAR2->VAR22[VAR12]->VAR23->VAR24 == VAR26 || VAR2->VAR22[VAR12]->VAR23->VAR24 == VAR27 || VAR2->VAR22[VAR12]->VAR23->VAR24 == VAR28 || VAR2->VAR22[VAR12]->VAR23->VAR24 == VAR29 || VAR2->VAR22[VAR12]->VAR23->VAR24 == VAR30)
        {
            FUN3(VAR2, VAR31, "", FUN4(VAR2->VAR22[VAR12]->VAR23->VAR24));
            return VAR32;
        }
        if (VAR2->VAR22[VAR12]->VAR23->VAR24 == VAR33 || FUN2(VAR2->VAR22[VAR12]->VAR20, "", NULL, 0) || FUN2(VAR2->VAR22[VAR12]->VAR20, "", NULL, 0))
            VAR13 = 4;
    }
    VAR4->VAR34 = FUN5(VAR2->VAR21, sizeof(*VAR4->VAR34));
    if (!VAR4->VAR34)
    {
        VAR11 = FUN6(VAR35);
        goto VAR36;
    }
    VAR8 = FUN7(VAR7, VAR37, 0);
    FUN8(VAR7, VAR38, 1);
    FUN8(VAR7, VAR39, 1);
    FUN8(VAR7, VAR40, 4);
    FUN8(VAR7, VAR41, 8);
    FUN9(VAR7, VAR42, VAR2->VAR15->VAR16);
    FUN8(VAR7, VAR43, VAR13);
    FUN8(VAR7, VAR44, 2);
    FUN10(VAR7, VAR8);
    VAR4->VAR45 = FUN7(VAR7, VAR46, 0);
    VAR4->VAR47 = FUN11(VAR7);
    VAR4->VAR48 = FUN12(VAR7, VAR4->VAR47, 10);
    if (!VAR4->VAR48)
    {
        VAR11 = FUN6(VAR35);
        goto VAR36;
    }
    VAR11 = FUN13(VAR4->VAR48, VAR49, FUN11(VAR7));
    if (VAR11 < 0)
        goto VAR36;
    VAR11 = FUN14(VAR7, &VAR4->VAR50, VAR4, &VAR4->VAR51, VAR49, 0);
    if (VAR11 < 0)
        return VAR11;
    VAR7 = VAR4->VAR50;
    FUN8(VAR7, VAR52, 1000000);
    if ((VAR10 = FUN2(VAR2->VAR20, "", NULL, 0)))
        FUN9(VAR7, VAR53, VAR10->VAR54);
    if (!(VAR2->VAR55 & VAR56))
    {
        FUN9(VAR7, VAR57, VAR58);
        if ((VAR10 = FUN2(VAR2->VAR20, "", NULL, 0)))
            FUN9(VAR7, VAR59, VAR10->VAR54);
        else
            FUN9(VAR7, VAR59, VAR58);
        if (VAR4->VAR17 != VAR18)
        {
            uint32_t VAR60[4];
            AVLFG VAR61;
            FUN15(&VAR61, FUN16());
            for (VAR12 = 0; VAR12 < 4; VAR12++)
                VAR60[VAR12] = FUN17(&VAR61);
            FUN18(VAR7, VAR62, VAR60, 16);
        }
    }
    else
    {
        const char *VAR63 = "";
        FUN9(VAR7, VAR57, VAR63);
        FUN9(VAR7, VAR59, VAR63);
    }
    if (FUN19(VAR2, &VAR14, 0) > 0)
    {
        int64_t VAR64 = (VAR14 - 978307200000000LL) * 1000;
        uint8_t VAR65[8];
        FUN20(VAR65, VAR64);
        FUN18(VAR7, VAR66, VAR65, 8);
    }
    VAR4->VAR67 = 0;
    VAR4->VAR68 = FUN11(VAR7);
    if (!VAR4->VAR69)
    {
        int64_t VAR70 = FUN21(VAR2);
        if (VAR2->VAR67 > 0)
        {
            int64_t VAR71 = FUN22(VAR2->VAR67, 1000, VAR72);
            FUN23(VAR7, VAR73, VAR71);
            FUN3(VAR2, VAR74, "" VAR75 "", VAR71);
        }
        else if (VAR70 > 0)
        {
            int64_t VAR71 = FUN22(VAR70, 1000, VAR72);
            FUN23(VAR7, VAR73, VAR71);
            FUN3(VAR2, VAR74, "" VAR75 "", VAR71);
        }
        else
        {
            FUN24(VAR7, 11);
        }
    }
    if (VAR2->VAR7->VAR76 && !VAR4->VAR69)
        FUN24(VAR2->VAR7, FUN11(VAR7));
    else
        FUN25(VAR2->VAR7, &VAR4->VAR50, VAR4, VAR4->VAR51);
    VAR7 = VAR2->VAR7;
    VAR4->VAR77 = FUN26(VAR2->VAR21 * sizeof(VAR78));
    VAR4->VAR79 = FUN26(VAR2->VAR21 * sizeof(VAR78));
    VAR11 = FUN27(VAR2);
    if (VAR11 < 0)
        goto VAR36;
    for (VAR12 = 0; VAR12 < VAR2->VAR80; VAR12++)
        VAR4->VAR81 = FUN28(VAR4->VAR81, 1LL - VAR2->VAR82[VAR12]->VAR83);
    if (VAR4->VAR17 != VAR18)
    {
        VAR11 = FUN29(VAR2);
        if (VAR11 < 0)
            goto VAR36;
        VAR11 = FUN30(VAR2);
        if (VAR11 < 0)
            goto VAR36;
        VAR11 = FUN31(VAR2);
        if (VAR11 < 0)
            goto VAR36;
    }
    if (!VAR2->VAR7->VAR76 && !VAR4->VAR69)
        FUN32(VAR7, VAR4);
    VAR4->VAR84 = FUN33(VAR4->VAR47);
    if (!VAR4->VAR84)
    {
        VAR11 = FUN6(VAR35);
        goto VAR36;
    }
    if (VAR7->VAR76 && VAR4->VAR85)
    {
        VAR4->VAR86 = FUN11(VAR7);
        FUN24(VAR7, VAR4->VAR85);
    }
    FUN34(&VAR4->VAR87);
    VAR4->VAR87.VAR88 = 0;
    VAR4->VAR89 = -1;
    FUN35(VAR7);
    if (VAR7->VAR76)
    {
        if (VAR4->VAR90 < 0)
            VAR4->VAR90 = 5000;
        if (VAR4->VAR91 < 0)
            VAR4->VAR91 = 5 * 1024 * 1024;
    }
    else
    {
        if (VAR4->VAR90 < 0)
            VAR4->VAR90 = 1000;
        if (VAR4->VAR91 < 0)
            VAR4->VAR91 = 32 * 1024;
    }
    return 0;
VAR36:
    FUN36(VAR4);
    return VAR11;
}