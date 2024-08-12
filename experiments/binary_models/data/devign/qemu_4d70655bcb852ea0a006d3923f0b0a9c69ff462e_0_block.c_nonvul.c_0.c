int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8)
{
    int VAR9;
    char VAR10[VAR11 + 1];
    VAR1 *VAR12 = NULL;
    if (VAR5 == NULL)
    {
        VAR5 = FUN2();
    }
    VAR2->VAR5 = VAR5;
    VAR5 = FUN3(VAR5);
    if (VAR6 & VAR13)
    {
        VAR1 *VAR14;
        int64_t VAR15;
        VAR7 *VAR16;
        VAR17 *VAR5;
        char VAR18[VAR11];
        VAR14 = FUN4("");
        VAR9 = FUN1(VAR14, VAR3, NULL, 0, VAR8);
        if (VAR9 < 0)
        {
            FUN5(VAR14);
            goto VAR19;
        }
        VAR15 = FUN6(VAR14) & VAR20;
        FUN5(VAR14);
        VAR9 = FUN7(VAR10, sizeof(VAR10));
        if (VAR9 < 0)
        {
            goto VAR19;
        }
        if (FUN8(VAR3))
        {
            snprintf(VAR18, sizeof(VAR18), "", VAR3);
        }
        else if (!FUN9(VAR3, VAR18))
        {
            VAR9 = -VAR21;
            goto VAR19;
        }
        VAR16 = FUN10("");
        VAR5 = FUN11("", VAR16->VAR22, NULL);
        FUN12(VAR5, VAR23, VAR15);
        FUN13(VAR5, VAR24, VAR18);
        if (VAR8)
        {
            FUN13(VAR5, VAR25, VAR8->VAR26);
        }
        VAR9 = FUN14(VAR16, VAR10, VAR5);
        FUN15(VAR5);
        if (VAR9 < 0)
        {
            goto VAR19;
        }
        VAR3 = VAR10;
        VAR8 = VAR16;
        VAR2->VAR27 = 1;
    }
    if (VAR6 & VAR28)
    {
        VAR6 |= VAR29;
    }
    VAR9 = FUN16(&VAR12, VAR3, FUN17(VAR2, VAR6));
    if (VAR9 < 0)
    {
        goto VAR19;
    }
    if (!VAR8)
    {
        VAR9 = FUN18(VAR12, VAR3, &VAR8);
    }
    if (!VAR8)
    {
        goto VAR30;
    }
    VAR9 = FUN19(VAR2, VAR12, VAR3, VAR5, VAR6, VAR8);
    if (VAR9 < 0)
    {
        goto VAR30;
    }
    if (VAR2->VAR12 != VAR12)
    {
        FUN5(VAR12);
        VAR12 = NULL;
    }
    if ((VAR6 & VAR31) == 0)
    {
        VAR9 = FUN20(VAR2);
        if (VAR9 < 0)
        {
            goto VAR32;
        }
    }
    if (FUN21(VAR5) != 0)
    {
        const VAR33 *VAR34 = FUN22(VAR5);
        FUN23(VAR35, ""
                                                 "",
                      VAR8->VAR26, VAR2->VAR36, VAR34->VAR37);
        VAR9 = -VAR38;
        goto VAR32;
    }
    FUN24(VAR5);
    if (!FUN25(VAR2))
    {
        FUN26(VAR2, true);
    }
    if (VAR2->VAR39)
    {
        FUN27(VAR2);
    }
    return 0;
VAR30:
    if (VAR12 != NULL)
    {
        FUN5(VAR12);
    }
    if (VAR2->VAR27)
    {
        unlink(VAR3);
    }
VAR19:
    FUN24(VAR2->VAR5);
    FUN24(VAR5);
    VAR2->VAR5 = NULL;
    return VAR9;
VAR32:
    FUN28(VAR2);
    FUN24(VAR5);
    return VAR9;
}