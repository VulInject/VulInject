static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    VAR9 *VAR10 = NULL;
    const char *VAR11, *VAR12, *VAR13, *VAR14;
    int VAR15;
    VAR11 = FUN2(VAR4, "");
    if (FUN3(VAR4, ""))
    {
        VAR15 = FUN4(VAR4, "");
    }
    else
    {
        VAR15 = 22;
    }
    VAR13 = FUN2(VAR4, "");
    if (FUN3(VAR4, ""))
    {
        VAR12 = FUN2(VAR4, "");
    }
    else
    {
        VAR12 = FUN5();
        if (!VAR12)
        {
            VAR8 = -VAR16;
            goto VAR10;
        }
    }
    if (FUN3(VAR4, ""))
    {
        VAR14 = FUN2(VAR4, "");
    }
    else
    {
        VAR14 = "";
    }
    FUN6(VAR2->VAR17);
    VAR2->VAR17 = FUN7("", VAR11, VAR15);
    VAR2->VAR18 = FUN8(VAR2->VAR17, &VAR10);
    if (VAR10 != NULL)
    {
        VAR8 = -VAR16;
        FUN9(VAR10);
        FUN10(VAR10);
        goto VAR10;
    }
    VAR2->VAR19 = FUN11();
    if (!VAR2->VAR19)
    {
        VAR8 = -VAR20;
        FUN12(VAR2, "");
        goto VAR10;
    }
    FUN13(VAR2->VAR19, VAR21);
    VAR7 = FUN14(VAR2->VAR19, VAR2->VAR18);
    if (VAR7 != 0)
    {
        VAR8 = -VAR20;
        FUN12(VAR2, "");
        goto VAR10;
    }
    VAR8 = FUN15(VAR2, VAR11, VAR15, VAR14, &VAR10);
    if (VAR8 < 0)
    {
        FUN9(VAR10);
        FUN10(VAR10);
        goto VAR10;
    }
    VAR8 = FUN16(VAR2, VAR12, &VAR10);
    if (VAR8 < 0)
    {
        FUN9(VAR10);
        FUN10(VAR10);
        goto VAR10;
    }
    VAR2->VAR22 = FUN17(VAR2->VAR19);
    if (!VAR2->VAR22)
    {
        FUN12(VAR2, "");
        VAR8 = -VAR20;
        goto VAR10;
    }
    FUN18("", VAR13, VAR5, VAR6);
    VAR2->VAR23 = FUN19(VAR2->VAR22, VAR13, VAR5, VAR6);
    if (!VAR2->VAR23)
    {
        FUN12(VAR2, "", VAR13);
        VAR8 = -VAR20;
        goto VAR10;
    }
    VAR7 = FUN20(VAR2->VAR23, &VAR2->VAR24);
    if (VAR7 < 0)
    {
        FUN21(VAR2, "");
        return -VAR20;
    }
    FUN22(VAR4, "");
    FUN22(VAR4, "");
    FUN22(VAR4, "");
    FUN22(VAR4, "");
    FUN22(VAR4, "");
    return 0;
VAR10:
    if (VAR2->VAR23)
    {
        FUN23(VAR2->VAR23);
    }
    VAR2->VAR23 = NULL;
    if (VAR2->VAR22)
    {
        FUN24(VAR2->VAR22);
    }
    VAR2->VAR22 = NULL;
    if (VAR2->VAR19)
    {
        FUN25(VAR2->VAR19, ""
                                               "");
        FUN26(VAR2->VAR19);
    }
    VAR2->VAR19 = NULL;
    return VAR8;
}