static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8;
    int VAR9 = 0;
    int VAR10 = 0;
    VAR11 *VAR12 = NULL;
    VAR11 *VAR13 = NULL;
    char VAR14[1024];
    int64_t VAR15 = FUN2(VAR5->VAR16, VAR5->VAR15 - VAR5->VAR17);
    int VAR18 = 3;
    const char *VAR19 = FUN3(VAR2->VAR20);
    int VAR21 = VAR19 && !strcmp(VAR19, "");
    static unsigned VAR22;
    char *VAR23 = NULL;
    char *VAR24 = NULL;
    VAR25 *VAR26 = NULL;
    double VAR27 = VAR5->VAR28;
    int VAR29 = (VAR5->VAR30 & VAR31) || (VAR5->VAR32 > 0);
    if (VAR29)
    {
        VAR18 = 4;
        VAR15 = 0;
    }
    if (VAR5->VAR33 == VAR34)
    {
        VAR18 = 7;
    }
    if (!VAR21 && !VAR22++)
        FUN4(VAR2, VAR35, "");
    FUN5(VAR2, &VAR26, VAR5);
    snprintf(VAR14, sizeof(VAR14), VAR21 ? "" : "", VAR2->VAR20);
    if ((VAR10 = VAR2->FUN6(VAR2, &VAR12, VAR14, VAR36, &VAR26)) < 0)
        goto VAR37;
    for (VAR8 = VAR5->VAR38; VAR8; VAR8 = VAR8->VAR39)
    {
        if (VAR9 <= VAR8->VAR40)
            VAR9 = FUN7(VAR8->VAR40);
    }
    VAR5->VAR41 = 0;
    FUN8(VAR5, VAR12, VAR18, VAR9, VAR15);
    if (VAR5->VAR42 == VAR43)
    {
        FUN9(VAR12, "");
    }
    else if (VAR5->VAR42 == VAR44)
    {
        FUN9(VAR12, "");
    }
    if ((VAR5->VAR30 & VAR45) && VAR15 == VAR5->VAR16 && VAR5->VAR41 == 0)
    {
        FUN9(VAR12, "");
        VAR5->VAR41 = 1;
    }
    for (VAR8 = VAR5->VAR38; VAR8; VAR8 = VAR8->VAR39)
    {
        if ((VAR5->VAR46 || VAR5->VAR47) && (!VAR23 || strcmp(VAR8->VAR23, VAR23) || FUN10(VAR8->VAR24, VAR24)))
        {
            FUN9(VAR12, ""%VAR2\"", VAR8->VAR23);
            if (*VAR8->VAR24)
                FUN9(VAR12, "", VAR8->VAR24);
            FUN9(VAR12, "");
            VAR23 = VAR8->VAR23;
            VAR24 = VAR8->VAR24;
        }
        if (VAR8->VAR48)
        {
            FUN9(VAR12, "");
        }
        if ((VAR5->VAR33 == VAR34) && (VAR8 == VAR5->VAR38))
        {
            FUN9(VAR12, ""%VAR2\"", VAR5->VAR49);
            if (VAR5->VAR30 & VAR31)
            {
                FUN9(VAR12, ""%""@%""\"", VAR8->VAR50, VAR8->VAR51);
            }
            FUN9(VAR12, "");
        }
        else
        {
            if (VAR5->VAR30 & VAR52)
                FUN9(VAR12, "", FUN11(VAR8->VAR40));
            else
                FUN9(VAR12, "", VAR8->VAR40);
            if (VAR29)
                FUN9(VAR12, "" VAR53 "" VAR53 "", VAR8->VAR50, VAR8->VAR51);
        }
        if (VAR5->VAR30 & VAR54)
        {
            time_t VAR55, VAR56;
            int VAR57;
            struct VAR58 *VAR58, VAR59;
            char VAR60[128], VAR61[128];
            VAR55 = (VAR62)VAR27;
            VAR57 = FUN12(FUN11(1000 * (VAR27 - VAR55)), 0, 999);
            VAR58 = FUN13(&VAR55, &VAR59);
            FUN14(VAR60, sizeof(VAR60), "", VAR58);
            if (!FUN14(VAR61, sizeof(VAR61), "", VAR58) || VAR61[1] < '' || VAR61[1] > '')
            {
                int VAR63, VAR64 = VAR58->VAR65;
                VAR58 = FUN15(&VAR55, &VAR59);
                VAR58->VAR65 = VAR64;
                VAR56 = FUN16(VAR58);
                VAR63 = (FUN17(VAR56 - VAR55) + 30) / 60;
                snprintf(VAR61, sizeof(VAR61), "", VAR56 <= VAR55 ? '' : '', VAR63 / 60, VAR63 % 60);
            }
            FUN9(VAR12, "", VAR60, VAR57, VAR61);
            VAR27 += VAR8->VAR40;
        }
        if (!((VAR5->VAR33 == VAR34) && (VAR8 == VAR5->VAR38)))
        {
            if (VAR5->VAR66)
                FUN9(VAR12, "", VAR5->VAR66);
            FUN9(VAR12, "", VAR8->VAR20);
        }
    }
    if (VAR3 && (VAR5->VAR30 & VAR67) == 0)
        FUN9(VAR12, "");
    if (VAR5->VAR68)
    {
        if ((VAR10 = VAR2->FUN6(VAR2, &VAR13, VAR5->VAR68, VAR36, &VAR26)) < 0)
            goto VAR37;
        FUN8(VAR5, VAR13, VAR18, VAR9, VAR15);
        for (VAR8 = VAR5->VAR38; VAR8; VAR8 = VAR8->VAR39)
        {
            FUN9(VAR13, "", VAR8->VAR40);
            if (VAR29)
                FUN9(VAR13, "" VAR69 "" VAR69 "", VAR8->VAR50, VAR8->VAR51);
            if (VAR5->VAR66)
                FUN9(VAR13, "", VAR5->VAR66);
            FUN9(VAR13, "", VAR8->VAR70);
        }
        if (VAR3)
            FUN9(VAR13, "");
    }
VAR37:
    FUN18(&VAR26);
    FUN19(VAR2, &VAR12);
    FUN19(VAR2, &VAR13);
    if (VAR10 >= 0 && VAR21)
        FUN20(VAR14, VAR2->VAR20, VAR2);
    return VAR10;
}