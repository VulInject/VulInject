static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    char VAR9[VAR10];
    char VAR11[VAR12];
    char VAR13[VAR14];
    char VAR15[VAR14];
    char *VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20 = NULL;
    const char *VAR21;
    int VAR22;
    VAR18 = FUN2(&VAR23);
    FUN3(VAR18, VAR4, &VAR20);
    if (FUN4(&VAR20))
    {
        FUN5(VAR20);
        FUN6(VAR20);
        FUN7(VAR18);
        return -VAR24;
    }
    VAR21 = FUN8(VAR18, "");
    FUN7(VAR18);
    if (FUN9(VAR21, VAR9, sizeof(VAR9), VAR11, sizeof(VAR11), VAR7->VAR25, sizeof(VAR7->VAR25), VAR13, sizeof(VAR13)) < 0)
    {
        return -VAR24;
    }
    VAR16 = FUN10(VAR13, VAR15);
    VAR22 = FUN11(&VAR7->VAR26, VAR16);
    if (VAR22 < 0)
    {
        FUN12("");
        return VAR22;
    }
    VAR7->VAR27 = NULL;
    if (VAR11[0] != '')
    {
        VAR7->VAR27 = FUN13(VAR11);
    }
    if (VAR5 & VAR28)
    {
        FUN14(VAR7->VAR26, "", "");
    }
    else
    {
        FUN14(VAR7->VAR26, "", "");
    }
    if (strstr(VAR13, "") == NULL)
    {
        FUN15(VAR7->VAR26, NULL);
    }
    if (VAR13[0] != '')
    {
        VAR22 = FUN16(VAR7->VAR26, VAR13);
        if (VAR22 < 0)
        {
            FUN12("");
            goto VAR29;
        }
    }
    VAR22 = FUN17(VAR7->VAR26);
    if (VAR22 < 0)
    {
        FUN12("");
        goto VAR29;
    }
    VAR22 = FUN18(VAR7->VAR26, VAR9, &VAR7->VAR30);
    if (VAR22 < 0)
    {
        FUN12("", VAR9);
        goto VAR29;
    }
    VAR22 = FUN19(VAR7->VAR30, VAR7->VAR25, &VAR7->VAR31, VAR7->VAR27);
    if (VAR22 < 0)
    {
        FUN12("", VAR7->VAR25);
        goto VAR32;
    }
    VAR2->VAR33 = (VAR7->VAR27 != NULL);
    VAR7->VAR34 = 0;
    VAR22 = FUN20(VAR7->VAR35);
    if (VAR22 < 0)
    {
        FUN12("");
        goto VAR36;
    }
    FUN21(VAR7->VAR35[0], VAR37, VAR38);
    FUN21(VAR7->VAR35[1], VAR37, VAR38);
    FUN22(VAR7->VAR35[VAR39], VAR40, NULL, VAR41, VAR7);
    return 0;
VAR36:
    FUN23(VAR7->VAR31);
VAR32:
    FUN24(VAR7->VAR30);
VAR29:
    FUN25(VAR7->VAR26);
    FUN26(VAR7->VAR27);
    return VAR22;
}