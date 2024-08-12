void FUN1(void)
{
    VAR1 *VAR2 = FUN2(&VAR3.VAR4);
    const char *VAR5, *VAR6, *VAR7, *VAR8, *VAR9 = NULL, *VAR10 = NULL, *VAR11 = NULL;
    char *VAR12 = NULL, *VAR13 = NULL, *VAR14 = NULL;
    int VAR15, VAR16, VAR17, VAR18;
    spice_image_compression_t VAR19;
    spice_wan_compression_t VAR20;
    FUN3(&VAR21);
    if (!VAR2)
    {
        return;
    }
    VAR15 = FUN4(VAR2, "", 0);
    VAR16 = FUN4(VAR2, "", 0);
    if (!VAR15 && !VAR16)
    {
        fprintf(VAR22, "");
        FUN5(1);
    }
    if (VAR15 < 0 || VAR15 > 65535)
    {
        fprintf(VAR22, "");
        FUN5(1);
    }
    if (VAR16 < 0 || VAR16 > 65535)
    {
        fprintf(VAR22, "");
        FUN5(1);
    }
    VAR5 = FUN6(VAR2, "");
    if (VAR16)
    {
        VAR7 = FUN6(VAR2, "");
        if (NULL == VAR7)
        {
            VAR7 = "";
        }
        VAR17 = strlen(VAR7) + 32;
        VAR6 = FUN6(VAR2, "");
        if (VAR6)
        {
            VAR12 = FUN7(VAR6);
        }
        else
        {
            VAR12 = FUN8(VAR17);
            snprintf(VAR12, VAR17, "", VAR7, VAR23);
        }
        VAR6 = FUN6(VAR2, "");
        if (VAR6)
        {
            VAR13 = FUN7(VAR6);
        }
        else
        {
            VAR13 = FUN8(VAR17);
            snprintf(VAR13, VAR17, "", VAR7, VAR24);
        }
        VAR6 = FUN6(VAR2, "");
        if (VAR6)
        {
            VAR14 = FUN7(VAR6);
        }
        else
        {
            VAR14 = FUN8(VAR17);
            snprintf(VAR14, VAR17, "", VAR7, VAR25);
        }
        VAR9 = FUN6(VAR2, "");
        VAR10 = FUN6(VAR2, "");
        VAR11 = FUN6(VAR2, "");
    }
    VAR8 = FUN6(VAR2, "");
    VAR18 = 0;
    if (FUN9(VAR2, "", 0))
    {
        VAR18 |= VAR26;
    }
    else if (FUN9(VAR2, "", 0))
    {
        VAR18 |= VAR27;
    }
    VAR28 = FUN10();
    FUN11(VAR28, VAR8 ? VAR8 : "", VAR18);
    if (VAR15)
    {
        FUN12(VAR28, VAR15);
    }
    if (VAR16)
    {
        FUN13(VAR28, VAR16, VAR14, VAR13, VAR12, VAR9, VAR10, VAR11);
    }
    if (VAR5)
    {
        FUN14(VAR28, VAR5, 0, 0, 0);
    }
    if (FUN9(VAR2, "", 0))
    {
        if (FUN15(VAR28, "") == -1 || FUN16(VAR28, 1) == -1)
        {
            fprintf(VAR22, "");
            FUN5(1);
        }
        fprintf(VAR22, "");
        FUN5(1);
    }
    if (FUN9(VAR2, "", 0))
    {
        VAR29 = "";
        FUN17(VAR28);
    }
    if (FUN9(VAR2, "", 0))
    {
        FUN18(VAR28, false);
    }
    VAR19 = VAR30;
    VAR6 = FUN6(VAR2, "");
    if (VAR6)
    {
        VAR19 = FUN19(VAR6);
    }
    FUN20(VAR28, VAR19);
    VAR20 = VAR31;
    VAR6 = FUN6(VAR2, "");
    if (VAR6)
    {
        VAR20 = FUN21(VAR6);
    }
    FUN22(VAR28, VAR20);
    VAR20 = VAR31;
    VAR6 = FUN6(VAR2, "");
    if (VAR6)
    {
        VAR20 = FUN21(VAR6);
    }
    FUN23(VAR28, VAR20);
    VAR6 = FUN6(VAR2, "");
    if (VAR6)
    {
        int VAR32 = FUN24(VAR6);
        FUN25(VAR28, VAR32);
    }
    FUN26(VAR28, FUN9(VAR2, "", 1));
    FUN27(VAR28, FUN9(VAR2, "", 1));
    FUN28(VAR2, VAR33, NULL, 0);
    if (0 != FUN29(VAR28, &VAR34))
    {
        fprintf(VAR22, "");
        FUN5(1);
    };
    VAR35 = 1;
    VAR36.VAR37 = VAR38;
    FUN30(&VAR36);
    VAR39.VAR40.VAR41.VAR42 = &VAR43.VAR41;
    VAR39.VAR44.VAR45 = NULL;
    FUN31(&VAR39.VAR40.VAR41);
    FUN32();
    FUN33();
    FUN34(VAR12);
    FUN34(VAR13);
    FUN34(VAR14);
}