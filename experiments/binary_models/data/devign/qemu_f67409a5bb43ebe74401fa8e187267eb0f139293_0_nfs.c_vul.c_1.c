static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6, VAR7 **VAR8, int VAR9)
{
    int VAR10 = -VAR11;
    VAR12 *VAR13 = NULL;
    VAR7 *VAR14 = NULL;
    struct stat VAR15;
    char *VAR16 = NULL, *VAR17 = NULL;
    VAR13 = FUN2(&VAR18, NULL, 0, &VAR19);
    FUN3(VAR13, VAR5, &VAR14);
    if (VAR14)
    {
        FUN4(VAR8, VAR14);
        VAR10 = -VAR11;
        goto VAR20;
    }
    VAR3->VAR21 = FUN5(FUN6(VAR13, ""));
    if (!VAR3->VAR21)
    {
        VAR10 = -VAR11;
        FUN7(VAR8, "");
        goto VAR20;
    }
    VAR17 = strrchr(VAR3->VAR21, '');
    if (VAR17 == NULL)
    {
        FUN7(VAR8, "");
        goto VAR20;
    }
    VAR16 = FUN5(VAR17);
    *VAR17 = 0;
    VAR3->VAR22 = FUN8(VAR5, VAR8);
    if (!VAR3->VAR22)
    {
        VAR10 = -VAR11;
        goto VAR20;
    }
    VAR3->VAR23 = FUN9();
    if (VAR3->VAR23 == NULL)
    {
        FUN7(VAR8, "");
        goto VAR20;
    }
    if (FUN6(VAR13, ""))
    {
        VAR3->VAR24 = FUN10(VAR13, "", 0);
        FUN11(VAR3->VAR23, VAR3->VAR24);
    }
    if (FUN6(VAR13, ""))
    {
        VAR3->VAR25 = FUN10(VAR13, "", 0);
        FUN12(VAR3->VAR23, VAR3->VAR25);
    }
    if (FUN6(VAR13, ""))
    {
        VAR3->VAR26 = FUN10(VAR13, "", 0);
        FUN13(VAR3->VAR23, VAR3->VAR26);
    }
    if (FUN6(VAR13, ""))
    {
        if (VAR9 & VAR27)
        {
            FUN7(VAR8, ""
                             "");
            goto VAR20;
        }
        VAR3->VAR28 = FUN10(VAR13, "", 0);
        if (VAR3->VAR28 > VAR29)
        {
            FUN14(""
                         "",
                         VAR29);
            VAR3->VAR28 = VAR29;
        }
        FUN15(VAR3->VAR23, VAR3->VAR28);
        FUN16(VAR3->VAR23, 0);
        VAR3->VAR30 = true;
    }
    if (FUN6(VAR13, ""))
    {
        if (VAR9 & VAR27)
        {
            FUN7(VAR8, ""
                             "");
            goto VAR20;
        }
        VAR3->VAR31 = FUN10(VAR13, "", 0);
        if (VAR3->VAR31 > VAR32)
        {
            FUN14(""
                         "",
                         VAR32);
            VAR3->VAR31 = VAR32;
        }
        FUN17(VAR3->VAR23, VAR3->VAR31);
        FUN16(VAR3->VAR23, 0);
        VAR3->VAR30 = true;
    }
    if (FUN6(VAR13, ""))
    {
        VAR3->VAR33 = FUN10(VAR13, "", 0);
        if (VAR3->VAR33 > VAR34)
        {
            FUN14(""
                         "",
                         VAR34);
            VAR3->VAR33 = VAR34;
        }
        FUN18(VAR3->VAR23, VAR3->VAR33);
    }
    VAR10 = FUN19(VAR3->VAR23, VAR3->VAR22->VAR35, VAR3->VAR21);
    if (VAR10 < 0)
    {
        FUN7(VAR8, "", FUN20(VAR3->VAR23));
        goto VAR20;
    }
    if (VAR6 & VAR36)
    {
        VAR10 = FUN21(VAR3->VAR23, VAR16, 0600, &VAR3->VAR37);
        if (VAR10 < 0)
        {
            FUN7(VAR8, "", FUN20(VAR3->VAR23));
            goto VAR20;
        }
    }
    else
    {
        VAR10 = FUN22(VAR3->VAR23, VAR16, VAR6, &VAR3->VAR37);
        if (VAR10 < 0)
        {
            FUN7(VAR8, "", FUN20(VAR3->VAR23));
            goto VAR20;
        }
    }
    VAR10 = FUN23(VAR3->VAR23, VAR3->VAR37, &VAR15);
    if (VAR10 < 0)
    {
        FUN7(VAR8, "", FUN20(VAR3->VAR23));
        goto VAR20;
    }
    VAR10 = FUN24(VAR15.VAR38, VAR39);
    VAR3->VAR40 = VAR15.VAR40;
    VAR3->VAR41 = FUN25(VAR15.VAR42);
    *VAR17 = '';
    goto VAR43;
VAR20:
    FUN26(VAR3);
VAR43:
    FUN27(VAR13);
    FUN28(VAR16);
    return VAR10;
}