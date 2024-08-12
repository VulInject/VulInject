static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6, int VAR7, VAR8 **VAR9)
{
    int VAR10 = -VAR11;
    VAR12 *VAR13 = NULL;
    VAR8 *VAR14 = NULL;
    struct stat VAR15;
    char *VAR16 = NULL, *VAR17 = NULL;
    FUN2(&VAR3->mutex);
    VAR13 = FUN3(&VAR18, NULL, 0, &VAR19);
    FUN4(VAR13, VAR5, &VAR14);
    if (VAR14)
    {
        FUN5(VAR9, VAR14);
        VAR10 = -VAR11;
        goto VAR20;
    }
    VAR3->VAR21 = FUN6(FUN7(VAR13, ""));
    if (!VAR3->VAR21)
    {
        VAR10 = -VAR11;
        FUN8(VAR9, "");
        goto VAR20;
    }
    VAR17 = strrchr(VAR3->VAR21, '');
    if (VAR17 == NULL)
    {
        FUN8(VAR9, "");
        goto VAR20;
    }
    VAR16 = FUN6(VAR17);
    *VAR17 = 0;
    VAR3->VAR22 = FUN9(VAR5, VAR9);
    if (!VAR3->VAR22)
    {
        VAR10 = -VAR11;
        goto VAR20;
    }
    VAR3->VAR23 = FUN10();
    if (VAR3->VAR23 == NULL)
    {
        FUN8(VAR9, "");
        goto VAR20;
    }
    if (FUN7(VAR13, ""))
    {
        VAR3->VAR24 = FUN11(VAR13, "", 0);
        FUN12(VAR3->VAR23, VAR3->VAR24);
    }
    if (FUN7(VAR13, ""))
    {
        VAR3->VAR25 = FUN11(VAR13, "", 0);
        FUN13(VAR3->VAR23, VAR3->VAR25);
    }
    if (FUN7(VAR13, ""))
    {
        VAR3->VAR26 = FUN11(VAR13, "", 0);
        FUN14(VAR3->VAR23, VAR3->VAR26);
    }
    if (FUN7(VAR13, ""))
    {
        if (VAR7 & VAR27)
        {
            FUN8(VAR9, ""
                             "");
            goto VAR20;
        }
        VAR3->VAR28 = FUN11(VAR13, "", 0);
        if (VAR3->VAR28 > VAR29)
        {
            FUN15("", VAR29);
            VAR3->VAR28 = VAR29;
        }
        FUN16(VAR3->VAR23, VAR3->VAR28);
        FUN17(VAR3->VAR23, 0);
        VAR3->VAR30 = true;
    }
    if (FUN7(VAR13, ""))
    {
        if (VAR7 & VAR27)
        {
            FUN8(VAR9, ""
                             "");
            goto VAR20;
        }
        VAR3->VAR31 = FUN11(VAR13, "", 0);
        if (VAR3->VAR31 > VAR32)
        {
            FUN15("", VAR32);
            VAR3->VAR31 = VAR32;
        }
        FUN18(VAR3->VAR23, VAR3->VAR31);
        FUN17(VAR3->VAR23, 0);
        VAR3->VAR30 = true;
    }
    if (FUN7(VAR13, ""))
    {
        VAR3->VAR33 = FUN11(VAR13, "", 0);
        if (VAR3->VAR33 > VAR34)
        {
            FUN15("", VAR34);
            VAR3->VAR33 = VAR34;
        }
        FUN19(VAR3->VAR23, VAR3->VAR33);
    }
    VAR10 = FUN20(VAR3->VAR23, VAR3->VAR22->VAR35, VAR3->VAR21);
    if (VAR10 < 0)
    {
        FUN8(VAR9, "", FUN21(VAR3->VAR23));
        goto VAR20;
    }
    if (VAR6 & VAR36)
    {
        VAR10 = FUN22(VAR3->VAR23, VAR16, 0600, &VAR3->VAR37);
        if (VAR10 < 0)
        {
            FUN8(VAR9, "", FUN21(VAR3->VAR23));
            goto VAR20;
        }
    }
    else
    {
        VAR10 = FUN23(VAR3->VAR23, VAR16, VAR6, &VAR3->VAR37);
        if (VAR10 < 0)
        {
            FUN8(VAR9, "", FUN21(VAR3->VAR23));
            goto VAR20;
        }
    }
    VAR10 = FUN24(VAR3->VAR23, VAR3->VAR37, &VAR15);
    if (VAR10 < 0)
    {
        FUN8(VAR9, "", FUN21(VAR3->VAR23));
        goto VAR20;
    }
    VAR10 = FUN25(VAR15.VAR38, VAR39);
    VAR3->VAR40 = VAR15.VAR40;
    VAR3->VAR41 = FUN26(VAR15.VAR42);
    *VAR17 = '';
    goto VAR43;
VAR20:
    FUN27(VAR3);
VAR43:
    FUN28(VAR13);
    FUN29(VAR16);
    return VAR10;
}