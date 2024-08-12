static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    char VAR11[VAR12];
    char VAR13[VAR14];
    char VAR15[VAR16];
    char VAR17[VAR16];
    char *VAR18;
    VAR19 *VAR20;
    VAR6 *VAR21 = NULL;
    const char *VAR22;
    int VAR23;
    VAR20 = FUN2(&VAR24, NULL, 0, &VAR25);
    FUN3(VAR20, VAR4, &VAR21);
    if (VAR21)
    {
        FUN4(VAR7, VAR21);
        FUN5(VAR20);
        return -VAR26;
    }
    VAR22 = FUN6(VAR20, "");
    if (FUN7(VAR22, VAR11, sizeof(VAR11), VAR13, sizeof(VAR13), VAR9->VAR27, sizeof(VAR9->VAR27), VAR15, sizeof(VAR15), VAR7) < 0)
    {
        VAR23 = -VAR26;
        goto VAR28;
    }
    VAR18 = FUN8(VAR15, VAR17);
    VAR23 = FUN9(&VAR9->VAR29, VAR18);
    if (VAR23 < 0)
    {
        FUN10(&VAR21, "");
        goto VAR28;
    }
    VAR9->VAR30 = NULL;
    if (VAR13[0] != '')
    {
        VAR9->VAR30 = FUN11(VAR13);
    }
    if (VAR5 & VAR31)
    {
        FUN12(VAR9->VAR29, "", "");
    }
    else
    {
        FUN12(VAR9->VAR29, "", "");
    }
    if (strstr(VAR15, "") == NULL)
    {
        FUN13(VAR9->VAR29, NULL);
    }
    if (VAR15[0] != '')
    {
        VAR23 = FUN14(VAR9->VAR29, VAR15, VAR7);
        if (VAR23 < 0)
        {
            goto VAR32;
        }
    }
    VAR23 = FUN15(VAR9->VAR29);
    if (VAR23 < 0)
    {
        FUN10(&VAR21, "");
        goto VAR32;
    }
    VAR23 = FUN16(VAR9->VAR29, VAR11, &VAR9->VAR33);
    if (VAR23 < 0)
    {
        FUN10(&VAR21, "", VAR11);
        goto VAR32;
    }
    VAR23 = FUN17(VAR9->VAR33, VAR9->VAR27, &VAR9->VAR34, VAR9->VAR30);
    if (VAR23 < 0)
    {
        FUN10(&VAR21, "", VAR9->VAR27);
        goto VAR35;
    }
    VAR2->VAR36 = (VAR9->VAR30 != NULL);
    FUN5(VAR20);
    return 0;
VAR35:
    FUN18(VAR9->VAR33);
VAR32:
    FUN19(VAR9->VAR29);
    FUN20(VAR9->VAR30);
VAR28:
    FUN5(VAR20);
    return VAR23;
}