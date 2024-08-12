static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7;
    const char *VAR8;
    int VAR9 = 0;
    int VAR10 = 0;
    int VAR11, VAR12;
    VAR1 *VAR13;
    ThrottleConfig VAR14;
    int VAR15 = 0;
    bool VAR16;
    int VAR17;
    VAR5 *VAR18 = NULL;
    VAR19 *VAR20;
    const char *VAR21;
    bool VAR22;
    BlockdevDetectZeroesOptions VAR23;
    VAR24 *VAR25 = NULL;
    VAR21 = FUN2(VAR4, "");
    VAR20 = FUN3(&VAR26, VAR21, 1, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        return NULL;
    }
    FUN5(VAR20, VAR4, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR27;
    }
    if (VAR21)
    {
        FUN6(VAR4, "");
    }
    VAR22 = !!FUN7(VAR4);
    VAR15 = FUN8(VAR20, "", 0);
    VAR9 = FUN8(VAR20, "", 0);
    VAR16 = FUN8(VAR20, "", false);
    VAR8 = FUN9(VAR20, "");
    if ((VAR7 = FUN9(VAR20, "")) != NULL)
    {
        if (FUN10(VAR7, &VAR10) != 0)
        {
            FUN11(VAR6, "");
            goto VAR27;
        }
    }
    if (FUN8(VAR20, "", true))
    {
        VAR10 |= VAR28;
    }
    if (FUN8(VAR20, "", false))
    {
        VAR10 |= VAR29;
    }
    if (FUN8(VAR20, "", false))
    {
        VAR10 |= VAR30;
    }
    if ((VAR7 = FUN9(VAR20, "")) != NULL)
    {
        if (!strcmp(VAR7, ""))
        {
            VAR10 |= VAR31;
        }
        else if (!strcmp(VAR7, ""))
        {
        }
        else
        {
            FUN11(VAR6, "");
            goto VAR27;
        }
    }
    if ((VAR7 = FUN9(VAR20, "")) != NULL)
    {
        if (FUN12(VAR7))
        {
            FUN13("");
            FUN14(VAR32, NULL);
            FUN13("");
            goto VAR27;
        }
        VAR25 = FUN15(VAR7);
        if (!VAR25)
        {
            FUN11(VAR6, "", VAR7);
            goto VAR27;
        }
    }
    memset(&VAR14, 0, sizeof(VAR14));
    VAR14.VAR33[VAR34].VAR35 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR36].VAR35 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR37].VAR35 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR38].VAR35 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR39].VAR35 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR40].VAR35 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR34].VAR41 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR36].VAR41 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR37].VAR41 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR38].VAR41 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR39].VAR41 = FUN16(VAR20, "", 0);
    VAR14.VAR33[VAR40].VAR41 = FUN16(VAR20, "", 0);
    VAR14.VAR42 = FUN16(VAR20, "", 0);
    if (!FUN17(&VAR14, &VAR18))
    {
        FUN4(VAR6, VAR18);
        goto VAR27;
    }
    VAR12 = VAR43;
    if ((VAR7 = FUN9(VAR20, "")) != NULL)
    {
        VAR12 = FUN18(VAR7, 0, &VAR18);
        if (VAR18)
        {
            FUN4(VAR6, VAR18);
            goto VAR27;
        }
    }
    VAR11 = VAR44;
    if ((VAR7 = FUN9(VAR20, "")) != NULL)
    {
        VAR11 = FUN18(VAR7, 1, &VAR18);
        if (VAR18)
        {
            FUN4(VAR6, VAR18);
            goto VAR27;
        }
    }
    VAR23 = FUN19(VAR45, FUN9(VAR20, ""), VAR46, VAR47, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR27;
    }
    if (VAR23 == VAR48 && !(VAR10 & VAR49))
    {
        FUN11(VAR6, ""
                         "");
        goto VAR27;
    }
    VAR13 = FUN20(sizeof(*VAR13));
    VAR13->VAR21 = FUN21(FUN22(VAR20));
    VAR13->VAR50 = FUN23(VAR13->VAR21, &VAR18);
    if (VAR18)
    {
        FUN4(VAR6, VAR18);
        goto VAR51;
    }
    VAR13->VAR50->VAR52 = VAR15 ? VAR53 : 0;
    VAR13->VAR50->VAR54 = VAR9;
    VAR13->VAR50->VAR23 = VAR23;
    VAR13->VAR55 = 1;
    if (VAR8 != NULL)
    {
        VAR13->VAR8 = FUN21(VAR8);
    }
    FUN24(&VAR56, VAR13, VAR57);
    FUN25(VAR13->VAR50, VAR11, VAR12);
    if (FUN26(&VAR14))
    {
        FUN27(VAR13->VAR50);
        FUN28(VAR13->VAR50, &VAR14);
    }
    if (!VAR2 || !*VAR2)
    {
        if (VAR22)
        {
            VAR2 = NULL;
        }
        else
        {
            FUN29(VAR4);
            FUN30(VAR20);
            return VAR13;
        }
    }
    if (VAR15)
    {
        VAR10 &= ~VAR58;
        VAR10 |= (VAR53 | VAR28 | VAR30);
    }
    if (VAR16)
    {
        VAR10 |= VAR59;
    }
    if (FUN31(VAR60))
    {
        VAR10 |= VAR61;
    }
    VAR10 |= VAR9 ? 0 : VAR62;
    FUN32(VAR4);
    VAR17 = FUN33(&VAR13->VAR50, VAR2, NULL, VAR4, VAR10, VAR25, &VAR18);
    if (VAR17 < 0)
    {
        FUN11(VAR6, "", VAR2 ?: VAR13->VAR21, FUN34(VAR18));
        FUN35(VAR18);
        goto VAR63;
    }
    if (FUN36(VAR13->VAR50))
        VAR64 = 0;
    FUN29(VAR4);
    FUN30(VAR20);
    return VAR13;
VAR63:
    FUN37(VAR13->VAR50);
    FUN38(&VAR56, VAR13, VAR57);
VAR51:
    FUN39(VAR13->VAR21);
    FUN39(VAR13);
VAR27:
    FUN29(VAR4);
    FUN30(VAR20);
    return NULL;
}