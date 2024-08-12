void FUN1(const char *VAR1, VAR2 **VAR3)
{
    VAR4 *VAR5 = FUN2(VAR1);
    VAR6 *VAR7 = FUN3(&VAR8, VAR1);
    VAR6 *VAR9, *VAR10;
    const char *VAR11, *VAR12;
    VAR13 *VAR14;
    bool VAR15 = false;
    bool VAR16 = false;
    const char *VAR17;
    const char *VAR18;
    char *VAR19;
    bool VAR20 = false;
    bool VAR21 = false;
    const char *VAR22;
    bool VAR23 = false, VAR24 = false;
    const char *VAR25;
    bool VAR26 = false;
    int VAR27;
    int VAR28 = 0;
    int VAR29 = 1;
    if (!VAR5)
    {
        FUN4(VAR3, "");
        return;
    }
    FUN5(VAR5);
    if (!VAR7)
    {
        return;
    }
    VAR17 = FUN6(VAR7, "");
    if (!VAR17 || strcmp(VAR17, "") == 0)
    {
        return;
    }
    VAR9 = FUN7(&VAR30, NULL, 0, &VAR31);
    VAR10 = FUN7(&VAR30, NULL, 0, &VAR31);
    VAR19 = strrchr(VAR17, '');
    if (VAR19)
    {
        char *VAR32 = FUN8(VAR17, VAR19 - VAR17);
        FUN9(VAR9, "", VAR32, &VAR31);
        FUN9(VAR10, "", VAR32, &VAR31);
        FUN9(VAR9, "", VAR19 + 1, &VAR31);
        FUN10(VAR32);
    }
    else
    {
        FUN4(VAR3, "");
        goto VAR33;
    }
    VAR18 = FUN6(VAR7, "");
    VAR20 = FUN11(VAR7, "", false);
    VAR21 = FUN11(VAR7, "", false);
    if (VAR18)
    {
        FUN9(VAR9, "", VAR18, &VAR31);
        FUN9(VAR10, "", VAR18, &VAR31);
    }
    if (VAR20)
    {
        FUN9(VAR9, "", "", &VAR31);
        FUN9(VAR10, "", "", &VAR31);
    }
    if (VAR21)
    {
        FUN9(VAR9, "", "", &VAR31);
        FUN9(VAR10, "", "", &VAR31);
    }
    VAR15 = FUN11(VAR7, "", false);
    if (VAR15 && FUN12())
    {
        FUN4(VAR3, ""
                         ""
                         "");
        goto VAR33;
    }
    VAR16 = FUN11(VAR7, "", false);
    VAR29 = FUN11(VAR7, "", true);
    VAR26 = FUN11(VAR7, "", false);
    if (VAR26)
    {
        FUN4(VAR3, "");
        goto VAR33;
    }
    VAR23 = FUN11(VAR7, "", false);
    VAR25 = FUN6(VAR7, "");
    if (!VAR25)
    {
        VAR25 = FUN6(VAR7, "");
        if (VAR25)
        {
            VAR5->VAR23.VAR34 = true;
        }
    }
    if (VAR25)
    {
        VAR24 = true;
        if (FUN13(VAR5, VAR25) < 0)
        {
            FUN4(VAR3, "", VAR25);
            goto VAR33;
        }
    }
    if (VAR23)
    {
        FUN4(VAR3, "");
        goto VAR33;
    }
    VAR28 = FUN11(VAR7, "", false);
    VAR11 = FUN6(VAR7, "");
    if (VAR11)
    {
        if (strcmp(VAR11, "") == 0)
        {
            VAR5->VAR35 = VAR36;
        }
        else if (strcmp(VAR11, "") == 0)
        {
            VAR5->VAR35 = VAR37;
        }
        else if (strcmp(VAR11, "") == 0)
        {
            VAR5->VAR35 = VAR38;
        }
        else
        {
            FUN4(VAR3, "");
            goto VAR33;
        }
    }
    else
    {
        VAR5->VAR35 = VAR37;
    }
    VAR5->VAR39 = FUN14(VAR7, "", 32);
    VAR22 = FUN6(VAR7, "");
    if (VAR22)
    {
        VAR5->VAR40 = true;
        FUN9(VAR10, "", VAR22, &VAR31);
        FUN4(VAR3, "");
        goto VAR33;
    }
    VAR5->VAR41 = FUN11(VAR7, "", false);
    VAR5->VAR42 = FUN11(VAR7, "", false);
    if (!VAR5->VAR41)
    {
        VAR5->VAR42 = true;
    }
    if (VAR28 && VAR24 && VAR5->VAR23.VAR34)
    {
        char *VAR43;
        if (strcmp(VAR5->VAR1, "") == 0)
        {
            VAR43 = FUN15("");
        }
        else
        {
            VAR43 = FUN16("", VAR5->VAR1);
        }
        VAR5->VAR23.VAR28 = FUN17(VAR43);
        if (!VAR5->VAR23.VAR28)
        {
            fprintf(VAR44, "");
            FUN18(1);
        }
        FUN10(VAR43);
    }
    if (VAR28 && VAR26)
    {
        char *VAR43;
        if (strcmp(VAR5->VAR1, "") == 0)
        {
            VAR43 = FUN15("");
        }
        else
        {
            VAR43 = FUN16("", VAR5->VAR1);
        }
        VAR5->VAR26.VAR28 = FUN17(VAR43);
        if (!VAR5->VAR26.VAR28)
        {
            fprintf(VAR44, "");
            FUN18(1);
        }
        FUN10(VAR43);
    }
    FUN19(VAR5, VAR15, VAR26, VAR23, VAR24, VAR22);
    if ((VAR27 = FUN20(NULL, "")) != VAR45)
    {
        FUN4(VAR3, "", FUN21(VAR27, NULL, NULL));
        goto VAR33;
    }
    VAR5->VAR29 = VAR29;
    VAR12 = FUN6(VAR7, "");
    if (VAR12)
    {
        VAR46 *VAR47;
        int VAR48 = FUN14(VAR7, "", 0);
        VAR47 = FUN22(FUN23(), VAR12);
        if (VAR47 == NULL)
        {
            FUN4(VAR3, "", VAR12);
            goto VAR33;
        }
        VAR14 = FUN24(VAR47, VAR48);
        if (VAR14 == NULL)
        {
            FUN4(VAR3, "", VAR12);
            goto VAR33;
        }
    }
    else
    {
        VAR14 = NULL;
    }
    if (VAR14 != VAR5->VAR49.VAR14)
    {
        FUN25(&VAR5->VAR49);
        VAR5->VAR49.VAR14 = VAR14;
        FUN26(&VAR5->VAR49);
    }
    if (VAR16)
    {
        int VAR50;
        VAR5->VAR51 = -1;
        VAR5->VAR52 = -1;
        if (FUN27(VAR17, "", 5) == 0)
        {
            VAR50 = FUN28(VAR17 + 5, VAR3);
        }
        else
        {
            VAR50 = FUN29(VAR17, VAR3);
        }
        if (VAR50 < 0)
        {
            goto VAR33;
        }
        FUN30(VAR5, VAR50, false, false);
    }
    else
    {
        if (FUN27(VAR17, "", 5) == 0)
        {
            VAR5->VAR51 = FUN31(VAR17 + 5, NULL, 0, VAR3);
            VAR5->VAR53 = true;
        }
        else
        {
            VAR5->VAR51 = FUN32(VAR9, 5900, VAR3);
            if (VAR5->VAR51 < 0)
            {
                goto VAR33;
            }
            if (VAR5->VAR40)
            {
                VAR5->VAR52 = FUN32(VAR10, 0, VAR3);
                if (VAR5->VAR52 < 0)
                {
                    if (VAR5->VAR51 != -1)
                    {
                        close(VAR5->VAR51);
                        VAR5->VAR51 = -1;
                    }
                    goto VAR33;
                }
            }
        }
        VAR5->VAR54 = true;
        FUN33(VAR5->VAR51, NULL, VAR55, NULL, VAR5);
        if (VAR5->VAR40)
        {
            FUN33(VAR5->VAR52, NULL, VAR56, NULL, VAR5);
        }
    }
    FUN34(VAR9);
    FUN34(VAR10);
    return;
VAR33:
    FUN34(VAR9);
    FUN34(VAR10);
    VAR5->VAR54 = false;
    VAR5->VAR40 = false;
}