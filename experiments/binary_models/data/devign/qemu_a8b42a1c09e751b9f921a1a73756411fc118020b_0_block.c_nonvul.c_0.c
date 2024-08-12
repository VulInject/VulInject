void FUN1(const char *VAR1, const char *VAR2, const char *VAR3, const char *VAR4, char *VAR5, uint64_t VAR6, int VAR7, bool VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14 = NULL;
    const char *VAR15, *VAR16;
    int64_t VAR17;
    VAR18 *VAR19, *VAR20;
    VAR9 *VAR21 = NULL;
    int VAR22 = 0;
    VAR19 = FUN2(VAR2);
    if (!VAR19)
    {
        FUN3(VAR10, "", VAR2);
        return;
    }
    VAR20 = FUN4(VAR1, true, VAR10);
    if (!VAR20)
    {
        return;
    }
    if (!VAR19->VAR12)
    {
        FUN3(VAR10, "", VAR19->VAR23);
        return;
    }
    if (!VAR20->VAR12)
    {
        FUN3(VAR10, "", VAR20->VAR23);
        return;
    }
    VAR12 = FUN5(VAR12, VAR19->VAR12);
    VAR12 = FUN5(VAR12, VAR20->VAR12);
    VAR14 = FUN6(VAR12, NULL, 0, &VAR24);
    FUN7(VAR14, VAR25, VAR6, &VAR24);
    if (VAR5)
    {
        FUN8(VAR14, VAR5, NULL, &VAR21);
        if (VAR21)
        {
            FUN9(VAR21);
            VAR21 = NULL;
            FUN3(VAR10, "", VAR2);
            goto VAR26;
        }
    }
    if (VAR3)
    {
        FUN10(VAR14, VAR27, VAR3, &VAR21);
        if (VAR21)
        {
            FUN3(VAR10, "", VAR2);
            goto VAR26;
        }
    }
    if (VAR4)
    {
        FUN10(VAR14, VAR28, VAR4, &VAR21);
        if (VAR21)
        {
            FUN3(VAR10, ""
                             "",
                       VAR2);
            goto VAR26;
        }
    }
    VAR16 = FUN11(VAR14, VAR27);
    if (VAR16)
    {
        if (!strcmp(VAR1, VAR16))
        {
            FUN3(VAR10, ""
                             "");
            goto VAR26;
        }
    }
    VAR15 = FUN11(VAR14, VAR28);
    VAR17 = FUN12(VAR14, VAR25, VAR6);
    if (VAR16 && !(VAR7 & VAR29))
    {
        VAR30 *VAR31;
        char *VAR32 = FUN13(char, VAR33);
        int VAR34;
        VAR35 *VAR36 = NULL;
        FUN14(VAR1, VAR16, VAR32, VAR33, &VAR21);
        if (VAR21)
        {
            FUN15(VAR32);
            goto VAR26;
        }
        VAR34 = VAR7;
        VAR34 &= ~(VAR37 | VAR38 | VAR29);
        if (VAR15)
        {
            VAR36 = FUN16();
            FUN17(VAR36, "", VAR15);
        }
        VAR31 = FUN18(VAR32, NULL, VAR36, VAR34, &VAR21);
        FUN15(VAR32);
        if (!VAR31 && VAR17 != -1)
        {
            FUN19(VAR21, ""
                                        "");
            VAR21 = NULL;
        }
        else if (!VAR31)
        {
            FUN20(&VAR21, "");
            goto VAR26;
        }
        else
        {
            if (VAR17 == -1)
            {
                VAR17 = FUN21(VAR31);
                if (VAR17 < 0)
                {
                    FUN22(VAR10, -VAR17, "", VAR16);
                    FUN23(VAR31);
                    goto VAR26;
                }
                FUN7(VAR14, VAR25, VAR17, &VAR24);
            }
            FUN23(VAR31);
        }
    }
    if (VAR17 == -1)
    {
        FUN3(VAR10, "");
        goto VAR26;
    }
    if (!VAR8)
    {
        FUN24("", VAR1, VAR2);
        FUN25(VAR14, "");
        FUN26("");
    }
    VAR22 = FUN27(VAR19, VAR1, VAR14, &VAR21);
    if (VAR22 == -VAR39)
    {
        const char *VAR40 = "";
        if (FUN12(VAR14, VAR41, 0))
        {
            VAR40 = "";
        }
        FUN3(VAR10, ""
                         "",
                   VAR2, VAR40);
        FUN28(VAR21);
        VAR21 = NULL;
    }
VAR26:
    FUN29(VAR14);
    FUN30(VAR12);
    FUN31(VAR10, VAR21);
}