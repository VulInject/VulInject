int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8, VAR9 **VAR10)
{
    int VAR11;
    char VAR12[VAR13 + 1];
    VAR1 *VAR14 = NULL;
    VAR4 *VAR15 = NULL;
    const char *VAR16;
    VAR9 *VAR17 = NULL;
    if (VAR5 == NULL)
    {
        VAR5 = FUN2();
    }
    VAR2->VAR5 = VAR5;
    VAR5 = FUN3(VAR5);
    if (VAR6 & VAR18)
    {
        VAR1 *VAR19;
        int64_t VAR20;
        VAR7 *VAR21;
        VAR22 *VAR23;
        VAR4 *VAR24;
        VAR19 = FUN4("");
        FUN5(VAR5);
        VAR11 = FUN1(VAR19, VAR3, VAR5, 0, VAR8, &VAR17);
        if (VAR11 < 0)
        {
            FUN6(VAR19);
            goto VAR25;
        }
        VAR20 = FUN7(VAR19) & VAR26;
        FUN6(VAR19);
        VAR11 = FUN8(VAR12, sizeof(VAR12));
        if (VAR11 < 0)
        {
            FUN9(VAR10, -VAR11, "");
            goto VAR25;
        }
        VAR21 = FUN10("");
        VAR23 = FUN11("", VAR21->VAR23, NULL);
        FUN12(VAR23, VAR27, VAR20);
        VAR11 = FUN13(VAR21, VAR12, VAR23, &VAR17);
        FUN14(VAR23);
        if (VAR11 < 0)
        {
            FUN9(VAR10, -VAR11, ""
                                         "",
                             VAR12, FUN15(VAR17));
            FUN16(VAR17);
            VAR17 = NULL;
            goto VAR25;
        }
        if (VAR3)
        {
            FUN17(VAR5, "", FUN18(VAR3));
        }
        if (VAR8)
        {
            FUN17(VAR5, "", FUN18(VAR8->VAR28));
        }
        VAR24 = FUN2();
        FUN17(VAR24, "", VAR5);
        FUN19(VAR24);
        VAR2->VAR5 = VAR24;
        VAR5 = FUN3(VAR2->VAR5);
        VAR3 = VAR12;
        VAR8 = VAR21;
        VAR2->VAR29 = 1;
    }
    if (VAR6 & VAR30)
    {
        VAR6 |= VAR31;
    }
    FUN20(VAR5, &VAR15, "");
    VAR11 = FUN21(&VAR14, VAR3, VAR15, FUN22(VAR2, VAR6 | VAR32), &VAR17);
    if (VAR11 < 0)
    {
        goto VAR25;
    }
    VAR16 = FUN23(VAR5, "");
    if (VAR16)
    {
        VAR8 = FUN10(VAR16);
        FUN24(VAR5, "");
        if (!VAR8)
        {
            FUN25(VAR10, "", VAR16);
            VAR11 = -VAR33;
            goto VAR34;
        }
    }
    if (!VAR8)
    {
        VAR11 = FUN26(VAR14, VAR3, &VAR8, &VAR17);
    }
    if (!VAR8)
    {
        goto VAR34;
    }
    VAR11 = FUN27(VAR2, VAR14, VAR5, VAR6, VAR8, &VAR17);
    if (VAR11 < 0)
    {
        goto VAR34;
    }
    if (VAR2->VAR14 != VAR14)
    {
        FUN6(VAR14);
        VAR14 = NULL;
    }
    if ((VAR6 & VAR35) == 0)
    {
        VAR4 *VAR36;
        FUN20(VAR5, &VAR36, "");
        VAR11 = FUN28(VAR2, VAR36, &VAR17);
        if (VAR11 < 0)
        {
            goto VAR37;
        }
    }
    if (FUN29(VAR5) != 0)
    {
        const VAR38 *VAR39 = FUN30(VAR5);
        FUN25(VAR10, ""
                         "",
                   VAR8->VAR28, VAR2->VAR40, VAR39->VAR41);
        VAR11 = -VAR33;
        goto VAR37;
    }
    FUN31(VAR5);
    if (!FUN32(VAR2))
    {
        FUN33(VAR2, true);
    }
    return 0;
VAR34:
    if (VAR14 != NULL)
    {
        FUN6(VAR14);
    }
    if (VAR2->VAR29)
    {
        unlink(VAR3);
    }
VAR25:
    FUN31(VAR2->VAR5);
    FUN31(VAR5);
    VAR2->VAR5 = NULL;
    if (FUN34(&VAR17))
    {
        FUN35(VAR10, VAR17);
    }
    return VAR11;
VAR37:
    FUN36(VAR2);
    FUN31(VAR5);
    if (FUN34(&VAR17))
    {
        FUN35(VAR10, VAR17);
    }
    return VAR11;
}