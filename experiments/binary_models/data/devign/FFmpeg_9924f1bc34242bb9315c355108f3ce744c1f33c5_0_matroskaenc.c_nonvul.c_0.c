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
        if (VAR2->VAR22[VAR12]->VAR23->VAR24 == VAR25 || FUN2(VAR2->VAR22[VAR12]->VAR20, "", NULL, 0) || FUN2(VAR2->VAR22[VAR12]->VAR20, "", NULL, 0))
            VAR13 = 4;
    }
    VAR4->VAR26 = FUN3(VAR2->VAR21, sizeof(*VAR4->VAR26));
    if (!VAR4->VAR26)
    {
        VAR11 = FUN4(VAR27);
        goto VAR28;
    }
    VAR8 = FUN5(VAR7, VAR29, 0);
    FUN6(VAR7, VAR30, 1);
    FUN6(VAR7, VAR31, 1);
    FUN6(VAR7, VAR32, 4);
    FUN6(VAR7, VAR33, 8);
    FUN7(VAR7, VAR34, VAR2->VAR15->VAR16);
    FUN6(VAR7, VAR35, VAR13);
    FUN6(VAR7, VAR36, 2);
    FUN8(VAR7, VAR8);
    VAR4->VAR37 = FUN5(VAR7, VAR38, 0);
    VAR4->VAR39 = FUN9(VAR7);
    VAR4->VAR40 = FUN10(VAR7, VAR4->VAR39, 10);
    if (!VAR4->VAR40)
    {
        VAR11 = FUN4(VAR27);
        goto VAR28;
    }
    VAR11 = FUN11(VAR4->VAR40, VAR41, FUN9(VAR7));
    if (VAR11 < 0)
        goto VAR28;
    VAR11 = FUN12(VAR7, &VAR4->VAR42, VAR4, &VAR4->VAR43, VAR41, 0);
    if (VAR11 < 0)
        return VAR11;
    VAR7 = VAR4->VAR42;
    FUN6(VAR7, VAR44, 1000000);
    if ((VAR10 = FUN2(VAR2->VAR20, "", NULL, 0)))
        FUN7(VAR7, VAR45, VAR10->VAR46);
    if (!(VAR2->VAR47 & VAR48))
    {
        FUN7(VAR7, VAR49, VAR50);
        if ((VAR10 = FUN2(VAR2->VAR20, "", NULL, 0)))
            FUN7(VAR7, VAR51, VAR10->VAR46);
        else
            FUN7(VAR7, VAR51, VAR50);
        if (VAR4->VAR17 != VAR18)
        {
            uint32_t VAR52[4];
            AVLFG VAR53;
            FUN13(&VAR53, FUN14());
            for (VAR12 = 0; VAR12 < 4; VAR12++)
                VAR52[VAR12] = FUN15(&VAR53);
            FUN16(VAR7, VAR54, VAR52, 16);
        }
    }
    else
    {
        const char *VAR55 = "";
        FUN7(VAR7, VAR49, VAR55);
        FUN7(VAR7, VAR51, VAR55);
    }
    if (FUN17(VAR2, &VAR14, 0) > 0)
    {
        int64_t VAR56 = (VAR14 - 978307200000000LL) * 1000;
        uint8_t VAR57[8];
        FUN18(VAR57, VAR56);
        FUN16(VAR7, VAR58, VAR57, 8);
    }
    VAR4->VAR59 = 0;
    VAR4->VAR60 = FUN9(VAR7);
    if (!VAR4->VAR61)
    {
        int64_t VAR62 = FUN19(VAR2);
        if (VAR2->VAR59 > 0)
        {
            int64_t VAR63 = FUN20(VAR2->VAR59, 1000, VAR64);
            FUN21(VAR7, VAR65, VAR63);
            FUN22(VAR2, VAR66, "" VAR67 "", VAR63);
        }
        else if (VAR62 > 0)
        {
            int64_t VAR63 = FUN20(VAR62, 1000, VAR64);
            FUN21(VAR7, VAR65, VAR63);
            FUN22(VAR2, VAR66, "" VAR67 "", VAR63);
        }
        else
        {
            FUN23(VAR7, 11);
        }
    }
    if ((VAR2->VAR7->VAR68 & VAR69) && !VAR4->VAR61)
        FUN24(VAR2->VAR7, &VAR4->VAR42, VAR4, VAR4->VAR43);
    else
        FUN25(VAR2->VAR7, &VAR4->VAR42, VAR4, VAR4->VAR43);
    VAR7 = VAR2->VAR7;
    VAR4->VAR70 = FUN26(VAR2->VAR21 * sizeof(VAR71));
    VAR4->VAR72 = FUN26(VAR2->VAR21 * sizeof(VAR71));
    VAR11 = FUN27(VAR2);
    if (VAR11 < 0)
        goto VAR28;
    for (VAR12 = 0; VAR12 < VAR2->VAR73; VAR12++)
        VAR4->VAR74 = FUN28(VAR4->VAR74, 1LL - VAR2->VAR75[VAR12]->VAR76);
    VAR11 = FUN29(VAR2);
    if (VAR11 < 0)
        goto VAR28;
    if (VAR4->VAR17 != VAR18)
    {
        VAR11 = FUN30(VAR2);
        if (VAR11 < 0)
            goto VAR28;
    }
    VAR11 = FUN31(VAR2);
    if (VAR11 < 0)
        goto VAR28;
    if (!(VAR2->VAR7->VAR68 & VAR69) && !VAR4->VAR61)
        FUN32(VAR7, VAR4);
    VAR4->VAR77 = FUN33(VAR4->VAR39);
    if (!VAR4->VAR77)
    {
        VAR11 = FUN4(VAR27);
        goto VAR28;
    }
    if ((VAR7->VAR68 & VAR69) && VAR4->VAR78)
    {
        VAR4->VAR79 = FUN9(VAR7);
        FUN23(VAR7, VAR4->VAR78);
    }
    FUN34(&VAR4->VAR80);
    VAR4->VAR80.VAR81 = 0;
    VAR4->VAR82 = -1;
    FUN35(VAR7);
    if (VAR7->VAR68 & VAR69)
    {
        if (VAR4->VAR83 < 0)
            VAR4->VAR83 = 5000;
        if (VAR4->VAR84 < 0)
            VAR4->VAR84 = 5 * 1024 * 1024;
    }
    else
    {
        if (VAR4->VAR83 < 0)
            VAR4->VAR83 = 1000;
        if (VAR4->VAR84 < 0)
            VAR4->VAR84 = 32 * 1024;
    }
    return 0;
VAR28:
    FUN36(VAR4);
    return VAR11;
}