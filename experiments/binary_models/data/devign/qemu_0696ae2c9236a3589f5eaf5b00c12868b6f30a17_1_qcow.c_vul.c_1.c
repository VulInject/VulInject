static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    QCowHeader VAR11;
    VAR12 *VAR13;
    int64_t VAR14 = 0;
    char *VAR15 = NULL;
    VAR4 *VAR16 = NULL;
    int VAR17;
    VAR18 *VAR19;
    const char *VAR20 = NULL;
    VAR21 *VAR22;
    VAR21 *VAR23 = NULL;
    VAR24 *VAR25 = NULL;
    VAR26 *VAR27 = NULL;
    VAR14 = FUN2(FUN3(VAR3, VAR28, 0), VAR29);
    if (VAR14 == 0)
    {
        FUN4(VAR5, "");
        VAR17 = -VAR30;
        goto VAR31;
    }
    VAR15 = FUN5(VAR3, VAR32);
    VAR20 = FUN5(VAR3, VAR33);
    if (VAR20)
    {
        if (FUN6(VAR3, VAR34))
        {
            FUN4(VAR5, "" VAR34 "" VAR33 "");
            VAR17 = -VAR30;
            goto VAR31;
        }
    }
    else if (FUN7(VAR3, VAR34, false))
    {
        VAR20 = "";
    }
    VAR17 = FUN8(VAR1, VAR3, &VAR16);
    if (VAR17 < 0)
    {
        FUN9(VAR5, VAR16);
        goto VAR31;
    }
    VAR19 = FUN10(VAR1, NULL, NULL, VAR35 | VAR36 | VAR37, &VAR16);
    if (VAR19 == NULL)
    {
        FUN9(VAR5, VAR16);
        VAR17 = -VAR38;
        goto VAR31;
    }
    FUN11(VAR19, true);
    VAR17 = FUN12(VAR19, 0, VAR39, VAR5);
    if (VAR17 < 0)
    {
        goto VAR40;
    }
    memset(&VAR11, 0, sizeof(VAR11));
    VAR11.VAR41 = FUN13(VAR42);
    VAR11.VAR43 = FUN13(VAR44);
    VAR11.VAR45 = FUN14(VAR14);
    VAR6 = sizeof(VAR11);
    VAR7 = 0;
    if (VAR15)
    {
        if (strcmp(VAR15, ""))
        {
            VAR11.VAR46 = FUN14(VAR6);
            VAR7 = strlen(VAR15);
            VAR11.VAR47 = FUN13(VAR7);
            VAR6 += VAR7;
        }
        else
        {
            FUN15(VAR15);
            VAR15 = NULL;
        }
        VAR11.VAR48 = 9;
        VAR11.VAR49 = 12;
    }
    else
    {
        VAR11.VAR48 = 12;
        VAR11.VAR49 = 9;
    }
    VAR6 = (VAR6 + 7) & ~7;
    VAR9 = VAR11.VAR48 + VAR11.VAR49;
    VAR8 = (VAR14 + (1LL << VAR9) - 1) >> VAR9;
    VAR11.VAR50 = FUN14(VAR6);
    VAR22 = FUN16(VAR3, NULL);
    FUN17(VAR22, &VAR23, "");
    FUN18(VAR22);
    if (VAR20)
    {
        if (!FUN19(VAR20, ""))
        {
            FUN4(VAR5, "", VAR20);
            VAR17 = -VAR30;
            goto VAR40;
        }
        VAR11.VAR51 = FUN13(VAR52);
        VAR25 = FUN20(VAR53, VAR23, VAR5);
        if (!VAR25)
        {
            VAR17 = -VAR30;
            goto VAR40;
        }
        VAR27 = FUN21(VAR25, "", NULL, NULL, NULL, VAR5);
        if (!VAR27)
        {
            VAR17 = -VAR30;
            goto VAR40;
        }
    }
    else
    {
        VAR11.VAR51 = FUN13(VAR54);
    }
    VAR17 = FUN22(VAR19, 0, &VAR11, sizeof(VAR11), 0);
    if (VAR17 != sizeof(VAR11))
    {
        goto VAR40;
    }
    if (VAR15)
    {
        VAR17 = FUN22(VAR19, sizeof(VAR11), VAR15, VAR7, 0);
        if (VAR17 != VAR7)
        {
            goto VAR40;
        }
    }
    VAR13 = FUN23(VAR29);
    for (VAR10 = 0; VAR10 < FUN24(sizeof(VAR55) * VAR8, VAR29); VAR10++)
    {
        VAR17 = FUN22(VAR19, VAR6 + VAR29 * VAR10, VAR13, VAR29, 0);
        if (VAR17 != VAR29)
        {
            FUN15(VAR13);
            goto VAR40;
        }
    }
    FUN15(VAR13);
    VAR17 = 0;
VAR40:
    FUN25(VAR19);
VAR31:
    FUN18(VAR23);
    FUN26(VAR27);
    FUN27(VAR25);
    FUN15(VAR15);
    return VAR17;
}