static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    DWORD VAR12;
    VAR13 *VAR14;
    VAR6 *VAR15 = NULL;
    const char *VAR16;
    int VAR17;
    VAR9->VAR18 = VAR19;
    VAR14 = FUN2(&VAR20, NULL, 0, &VAR21);
    FUN3(VAR14, VAR4, &VAR15);
    if (VAR15)
    {
        FUN4(VAR7, VAR15);
        VAR17 = -VAR22;
        goto VAR23;
    }
    VAR16 = FUN5(VAR14, "");
    FUN6(VAR5, &VAR11, &VAR12);
    if (VAR16[0] && VAR16[1] == '')
    {
        snprintf(VAR9->VAR24, sizeof(VAR9->VAR24), "", VAR16[0]);
    }
    else if (VAR16[0] == '' && VAR16[1] == '')
    {
        VAR9->VAR24[0] = 0;
    }
    else
    {
        char VAR25[VAR26];
        FUN7(VAR26, VAR25);
        snprintf(VAR9->VAR24, sizeof(VAR9->VAR24), "", VAR25[0]);
    }
    VAR9->VAR27 = FUN8(VAR16, VAR11, VAR28, NULL, VAR29, VAR12, NULL);
    if (VAR9->VAR27 == VAR30)
    {
        int VAR31 = FUN9();
        if (VAR31 == VAR32)
        {
            VAR17 = -VAR33;
        }
        else
        {
            VAR17 = -VAR22;
        }
        goto VAR23;
    }
    if (VAR5 & VAR34)
    {
        VAR9->VAR35 = FUN10();
        if (VAR9->VAR35 == NULL)
        {
            FUN11(VAR9->VAR27);
            FUN12(VAR7, "");
            VAR17 = -VAR22;
            goto VAR23;
        }
        VAR17 = FUN13(VAR9->VAR35, VAR9->VAR27);
        if (VAR17 < 0)
        {
            FUN14(VAR9->VAR35);
            FUN11(VAR9->VAR27);
            FUN15(VAR7, -VAR17, "");
            goto VAR23;
        }
        FUN16(VAR9->VAR35, FUN17(VAR2));
    }
    VAR17 = 0;
VAR23:
    FUN18(VAR14);
    return VAR17;
}