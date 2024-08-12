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
    int VAR20 = 0;
    VAR15 = FUN2(VAR3, "");
    VAR7 = FUN3(FUN4(VAR3, VAR21, 0), VAR22);
    VAR8 = FUN4(VAR3, VAR23, 0);
    if (VAR8)
    {
        if ((VAR8 - 1) & VAR8)
        {
            FUN5(VAR5, "");
            VAR20 = -VAR24;
            goto VAR25;
        }
        if (VAR8 < 4096)
        {
            FUN5(VAR5, "");
            VAR20 = -VAR24;
            goto VAR25;
        }
        VAR9 = FUN6(VAR8);
    }
    VAR19 = FUN7();
    FUN8(VAR1, VAR19, &VAR6);
    if (VAR6)
    {
        VAR20 = -VAR24;
        FUN9(VAR5, VAR6);
        goto VAR25;
    }
    VAR10 = FUN10(VAR19, "");
    VAR12 = FUN10(VAR19, "");
    VAR13 = FUN10(VAR19, "");
    VAR11 = FUN10(VAR19, "");
    VAR14 = FUN10(VAR19, "");
    VAR20 = FUN11(&VAR16, VAR13);
    if (VAR20 < 0)
    {
        FUN12(VAR5, -VAR20, "");
        goto VAR25;
    }
    VAR20 = FUN13(VAR16, VAR12);
    if (VAR12 && VAR20 < 0)
    {
        FUN12(VAR5, -VAR20, "", VAR12);
        VAR20 = -VAR26;
        goto VAR27;
    }
    VAR20 = FUN14(VAR16, VAR14, VAR5);
    if (VAR20 < 0)
    {
        VAR20 = -VAR26;
        goto VAR27;
    }
    if (FUN15(VAR16, VAR15, VAR5) < 0)
    {
        VAR20 = -VAR26;
        goto VAR27;
    }
    VAR20 = FUN16(VAR16);
    if (VAR20 < 0)
    {
        FUN12(VAR5, -VAR20, "");
        goto VAR27;
    }
    VAR20 = FUN17(VAR16, VAR10, &VAR17);
    if (VAR20 < 0)
    {
        FUN12(VAR5, -VAR20, "", VAR10);
        goto VAR27;
    }
    VAR20 = FUN18(VAR17, VAR11, VAR7, &VAR9);
    if (VAR20 < 0)
    {
        FUN12(VAR5, -VAR20, "");
    }
    FUN19(VAR17);
VAR27:
    FUN20(VAR16);
VAR25:
    FUN21(VAR19);
    return VAR20;