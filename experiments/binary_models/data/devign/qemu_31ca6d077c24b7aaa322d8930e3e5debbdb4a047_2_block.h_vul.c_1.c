int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8)
{
    int VAR9;
    char VAR10[VAR11 + 1];
    VAR1 *VAR12 = NULL;
    VAR4 *VAR13 = NULL;
    if (VAR5 == NULL)
    {
        VAR5 = FUN2();
    }
    VAR2->VAR5 = VAR5;
    VAR5 = FUN3(VAR5);
    if (VAR6 & VAR14)
    {
        VAR1 *VAR15;
        int64_t VAR16;
        VAR7 *VAR17;
        VAR18 *VAR19;
        char VAR20[VAR11];
        if (FUN4(VAR5) != 0)
        {
            FUN5("");
            VAR9 = -VAR21;
            goto VAR22;
        }
        assert(VAR3 != NULL);
        VAR15 = FUN6("");
        VAR9 = FUN1(VAR15, VAR3, NULL, 0, VAR8);
        if (VAR9 < 0)
        {
            FUN7(VAR15);
            goto VAR22;
        }
        VAR16 = FUN8(VAR15) & VAR23;
        FUN7(VAR15);
        VAR9 = FUN9(VAR10, sizeof(VAR10));
        if (VAR9 < 0)
        {
            goto VAR22;
        }
        if (FUN10(VAR3))
        {
            snprintf(VAR20, sizeof(VAR20), "", VAR3);
        }
        else if (!FUN11(VAR3, VAR20))
        {
            VAR9 = -VAR24;
            goto VAR22;
        }
        VAR17 = FUN12("");
        VAR19 = FUN13("", VAR17->VAR19, NULL);
        FUN14(VAR19, VAR25, VAR16);
        FUN15(VAR19, VAR26, VAR20);
        if (VAR8)
        {
            FUN15(VAR19, VAR27, VAR8->VAR28);
        }
        VAR9 = FUN16(VAR17, VAR10, VAR19);
        FUN17(VAR19);
        if (VAR9 < 0)
        {
            goto VAR22;
        }
        VAR3 = VAR10;
        VAR8 = VAR17;
        VAR2->VAR29 = 1;
    }
    if (VAR6 & VAR30)
    {
        VAR6 |= VAR31;
    }
    FUN18(VAR5, &VAR13, "");
    VAR9 = FUN19(&VAR12, VAR3, VAR13, FUN20(VAR2, VAR6));
    if (VAR9 < 0)
    {
        goto VAR22;
    }
    if (!VAR8)
    {
        VAR9 = FUN21(VAR12, VAR3, &VAR8);
    }
    if (!VAR8)
    {
        goto VAR32;
    }
    VAR9 = FUN22(VAR2, VAR12, VAR3, VAR5, VAR6, VAR8);
    if (VAR9 < 0)
    {
        goto VAR32;
    }
    if (VAR2->VAR12 != VAR12)
    {
        FUN7(VAR12);
        VAR12 = NULL;
    }
    if ((VAR6 & VAR33) == 0)
    {
        VAR9 = FUN23(VAR2);
        if (VAR9 < 0)
        {
            goto VAR34;
        }
    }
    if (FUN4(VAR5) != 0)
    {
        const VAR35 *VAR36 = FUN24(VAR5);
        FUN25(VAR37, ""
                                                 "",
                      VAR8->VAR28, VAR2->VAR38, VAR36->VAR39);
        VAR9 = -VAR21;
        goto VAR34;
    }
    FUN26(VAR5);
    if (!FUN27(VAR2))
    {
        FUN28(VAR2, true);
    }
    if (VAR2->VAR40)
    {
        FUN29(VAR2);
    }
    return 0;
VAR32:
    if (VAR12 != NULL)
    {
        FUN7(VAR12);
    }
    if (VAR2->VAR29)
    {
        unlink(VAR3);
    }
VAR22:
    FUN26(VAR2->VAR5);
    FUN26(VAR5);
    VAR2->VAR5 = NULL;
    return VAR9;
VAR34:
    FUN30(VAR2);
    FUN26(VAR5);
    return VAR9;
}