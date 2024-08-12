static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR4 *VAR6 = NULL;
    int64_t VAR7 = 0;
    int64_t VAR8;
    int VAR9 = 0;
    const char *VAR10, *VAR11, *VAR12, *VAR13, *VAR14;
    const char *VAR15;
    rados_t VAR16;
    rados_ioctx_t VAR17;
    VAR18 *VAR19 = NULL;
    VAR2 *VAR20 = NULL;
    int VAR21 = 0;
    VAR15 = FUN2(VAR3, "");
    VAR7 = FUN3(FUN4(VAR3, VAR22, 0), VAR23);
    VAR8 = FUN4(VAR3, VAR24, 0);
    if (VAR8)
    {
        if ((VAR8 - 1) & VAR8)
        {
            FUN5(VAR5, "");
            VAR21 = -VAR25;
            goto VAR26;
        }
        if (VAR8 < 4096)
        {
            FUN5(VAR5, "");
            VAR21 = -VAR25;
            goto VAR26;
        }
        VAR9 = FUN6(VAR8);
    }
    VAR19 = FUN7();
    FUN8(VAR1, VAR19, &VAR6);
    if (VAR6)
    {
        VAR21 = -VAR25;
        FUN9(VAR5, VAR6);
        goto VAR26;
    }
    VAR20 = FUN10(&VAR27, NULL, 0, &VAR28);
    FUN11(VAR20, VAR19, &VAR6);
    if (VAR6)
    {
        FUN9(VAR5, VAR6);
        VAR21 = -VAR25;
        goto VAR26;
    }
    VAR10 = FUN2(VAR20, "");
    VAR12 = FUN2(VAR20, "");
    VAR13 = FUN2(VAR20, "");
    VAR11 = FUN2(VAR20, "");
    VAR14 = FUN2(VAR20, "");
    VAR21 = FUN12(&VAR16, VAR13);
    if (VAR21 < 0)
    {
        FUN13(VAR5, -VAR21, "");
        goto VAR26;
    }
    VAR21 = FUN14(VAR16, VAR12);
    if (VAR12 && VAR21 < 0)
    {
        FUN13(VAR5, -VAR21, "", VAR12);
        VAR21 = -VAR29;
        goto VAR30;
    }
    VAR21 = FUN15(VAR16, VAR14, VAR5);
    if (VAR21 < 0)
    {
        VAR21 = -VAR29;
        goto VAR30;
    }
    if (FUN16(VAR16, VAR15, VAR5) < 0)
    {
        VAR21 = -VAR29;
        goto VAR30;
    }
    VAR21 = FUN17(VAR16);
    if (VAR21 < 0)
    {
        FUN13(VAR5, -VAR21, "");
        goto VAR30;
    }
    VAR21 = FUN18(VAR16, VAR10, &VAR17);
    if (VAR21 < 0)
    {
        FUN13(VAR5, -VAR21, "", VAR10);
        goto VAR30;
    }
    VAR21 = FUN19(VAR17, VAR11, VAR7, &VAR9);
    if (VAR21 < 0)
    {
        FUN13(VAR5, -VAR21, "");
    }
    FUN20(VAR17);
VAR30:
    FUN21(VAR16);
VAR26:
    FUN22(VAR19);
    FUN23(VAR20);
    return VAR21;
}