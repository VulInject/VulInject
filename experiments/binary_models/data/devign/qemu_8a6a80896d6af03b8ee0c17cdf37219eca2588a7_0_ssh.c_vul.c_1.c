static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR7 **VAR8)
{
    int VAR9, VAR10;
    const char *VAR11, *VAR12, *VAR13, *VAR14;
    int VAR15;
    if (!FUN2(VAR4, ""))
    {
        VAR10 = -VAR16;
        FUN3(VAR8, "");
        goto VAR17;
    }
    VAR11 = FUN4(VAR4, "");
    if (FUN2(VAR4, ""))
    {
        VAR15 = FUN5(VAR4, "");
    }
    else
    {
        VAR15 = 22;
    }
    if (!FUN2(VAR4, ""))
    {
        VAR10 = -VAR16;
        FUN3(VAR8, "");
        goto VAR17;
    }
    VAR13 = FUN4(VAR4, "");
    if (FUN2(VAR4, ""))
    {
        VAR12 = FUN4(VAR4, "");
    }
    else
    {
        VAR12 = FUN6();
        if (!VAR12)
        {
            FUN7(VAR8, VAR18, "");
            VAR10 = -VAR18;
            goto VAR17;
        }
    }
    if (FUN2(VAR4, ""))
    {
        VAR14 = FUN4(VAR4, "");
    }
    else
    {
        VAR14 = "";
    }
    FUN8(VAR2->VAR19);
    VAR2->VAR19 = FUN9("", VAR11, VAR15);
    VAR2->VAR20 = FUN10(VAR2->VAR19, VAR8);
    if (VAR2->VAR20 < 0)
    {
        VAR10 = -VAR21;
        goto VAR17;
    }
    VAR2->VAR22 = FUN11();
    if (!VAR2->VAR22)
    {
        VAR10 = -VAR16;
        FUN12(VAR8, VAR2, "");
        goto VAR17;
    }
    FUN13(VAR2->VAR22, VAR23);
    VAR9 = FUN14(VAR2->VAR22, VAR2->VAR20);
    if (VAR9 != 0)
    {
        VAR10 = -VAR16;
        FUN12(VAR8, VAR2, "");
        goto VAR17;
    }
    VAR10 = FUN15(VAR2, VAR11, VAR15, VAR14, VAR8);
    if (VAR10 < 0)
    {
        goto VAR17;
    }
    VAR10 = FUN16(VAR2, VAR12, VAR8);
    if (VAR10 < 0)
    {
        goto VAR17;
    }
    VAR2->VAR24 = FUN17(VAR2->VAR22);
    if (!VAR2->VAR24)
    {
        FUN12(VAR8, VAR2, "");
        VAR10 = -VAR16;
        goto VAR17;
    }
    FUN18("", VAR13, VAR5, VAR6);
    VAR2->VAR25 = FUN19(VAR2->VAR24, VAR13, VAR5, VAR6);
    if (!VAR2->VAR25)
    {
        FUN12(VAR8, VAR2, "", VAR13);
        VAR10 = -VAR16;
        goto VAR17;
    }
    VAR9 = FUN20(VAR2->VAR25, &VAR2->VAR26);
    if (VAR9 < 0)
    {
        FUN21(VAR8, VAR2, "");
        return -VAR16;
    }
    FUN22(VAR4, "");
    FUN22(VAR4, "");
    FUN22(VAR4, "");
    FUN22(VAR4, "");
    FUN22(VAR4, "");
    return 0;
VAR17:
    if (VAR2->VAR25)
    {
        FUN23(VAR2->VAR25);
    }
    VAR2->VAR25 = NULL;
    if (VAR2->VAR24)
    {
        FUN24(VAR2->VAR24);
    }
    VAR2->VAR24 = NULL;
    if (VAR2->VAR22)
    {
        FUN25(VAR2->VAR22, ""
                                               "");
        FUN26(VAR2->VAR22);
    }
    VAR2->VAR22 = NULL;
    return VAR10;
}