static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    char *VAR8;
    const char *VAR9 = "";
    const char *VAR10 = FUN2();
    const char *VAR11 = "";
    VAR12 *VAR13 = NULL;
    int VAR14;
    int VAR15;
    VAR4->VAR16 = VAR4->VAR17;
    VAR4->VAR18 = (VAR4->VAR19 ? VAR4->VAR19 : VAR4->VAR20) * VAR21;
    VAR4->VAR22 = VAR23;
    if (VAR4->VAR24 & VAR25)
    {
        time_t VAR26;
        FUN3(&VAR26);
        VAR4->VAR27 = VAR26;
    }
    if (VAR4->VAR28)
    {
        VAR6 = FUN4(&VAR4->VAR29, VAR4->VAR28, "", "", 0);
        if (VAR6 < 0)
        {
            FUN5(VAR2, VAR30, "", VAR4->VAR28);
            goto VAR31;
        }
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR32; VAR7++)
    {
        VAR4->VAR33 += VAR2->VAR34[VAR7]->VAR35->VAR36 == VAR37;
        VAR4->VAR38 += VAR2->VAR34[VAR7]->VAR35->VAR36 == VAR39;
    }
    if (VAR4->VAR33 > 1)
        FUN5(VAR2, VAR40, ""
                                  "");
    VAR4->VAR41 = FUN6("", NULL, NULL);
    if (!VAR4->VAR41)
    {
        VAR6 = VAR42;
        goto VAR31;
    }
    if (VAR4->VAR38)
    {
        VAR4->VAR43 = FUN6("", NULL, NULL);
        if (!VAR4->VAR41)
        {
            VAR6 = VAR42;
            goto VAR31;
        }
    }
    if (VAR4->VAR44)
    {
        VAR4->VAR45 = FUN7(VAR4->VAR44);
        if (!VAR4->VAR45)
        {
            VAR6 = FUN8(VAR46);
            goto VAR31;
        }
    }
    else
    {
        if (VAR4->VAR24 & VAR47)
            VAR9 = "";
        if (VAR4->VAR48)
        {
            VAR14 = strlen(VAR2->VAR49) + strlen(VAR10) + 1;
        }
        else
        {
            VAR14 = strlen(VAR2->VAR49) + strlen(VAR9) + 1;
        }
        VAR4->VAR45 = FUN9(VAR14);
        if (!VAR4->VAR45)
        {
            VAR6 = FUN8(VAR46);
            goto VAR31;
        }
        FUN10(VAR4->VAR45, VAR2->VAR49, VAR14);
        VAR8 = strrchr(VAR4->VAR45, '');
        if (VAR8)
            *VAR8 = '';
        if (VAR4->VAR48)
        {
            FUN11(VAR4->VAR45, VAR10, VAR14);
        }
        else
        {
            FUN11(VAR4->VAR45, VAR9, VAR14);
        }
    }
    if (!VAR4->VAR48 && (VAR4->VAR24 & VAR50))
    {
        FUN5(VAR4, VAR30, "");
        VAR6 = FUN8(VAR51);
        goto VAR31;
    }
    if (VAR4->VAR38)
    {
        if (VAR4->VAR24 & VAR47)
            VAR11 = "";
        VAR15 = strlen(VAR2->VAR49) + strlen(VAR11) + 1;
        VAR4->VAR52 = FUN9(VAR15);
        if (!VAR4->VAR52)
        {
            VAR6 = FUN8(VAR46);
            goto VAR31;
        }
        VAR4->VAR53 = FUN9(VAR15);
        if (!VAR4->VAR53)
        {
            VAR6 = FUN8(VAR46);
            goto VAR31;
        }
        FUN10(VAR4->VAR52, VAR2->VAR49, VAR15);
        VAR8 = strrchr(VAR4->VAR52, '');
        if (VAR8)
            *VAR8 = '';
        if (VAR4->VAR54)
        {
            strcpy(VAR4->VAR53, VAR4->VAR54);
        }
        else
        {
            strcpy(VAR4->VAR53, VAR4->VAR52);
            FUN11(VAR4->VAR53, "", VAR15);
        }
        FUN11(VAR4->VAR52, VAR11, VAR15);
    }
    if ((VAR6 = FUN12(VAR2)) < 0)
        goto VAR31;
    if (VAR4->VAR24 & VAR55)
    {
        FUN13(VAR2, VAR2->VAR49);
        VAR4->VAR56 = 1;
        if (VAR4->VAR19 > 0)
        {
            FUN5(VAR2, VAR40, ""
                                      "");
            VAR4->VAR19 = 0;
            VAR4->VAR18 = VAR4->VAR20 * VAR21;
        }
    }
    if ((VAR6 = FUN14(VAR2)) < 0)
        goto VAR31;
    FUN15(&VAR13, VAR4->VAR29, 0);
    VAR6 = FUN16(VAR4->VAR57, &VAR13);
    if (FUN17(VAR13))
    {
        FUN5(VAR2, VAR30, "", VAR4->VAR28);
        VAR6 = FUN8(VAR51);
        goto VAR31;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR32; VAR7++)
    {
        VAR58 *VAR59;
        VAR58 *VAR60 = VAR2->VAR34[VAR7];
        if (VAR4->VAR61 > 0)
        {
            if ((VAR60->VAR35->VAR36 == VAR37) && (VAR60->VAR35->VAR62 > VAR4->VAR61))
            {
                FUN5(VAR2, VAR40, ""
                                          "" VAR63 "" VAR63 "",
                       VAR60->VAR35->VAR62, VAR4->VAR61);
            }
        }
        if (VAR60->VAR35->VAR36 != VAR39)
            VAR59 = VAR4->VAR57->VAR34[VAR7];
        else if (VAR4->VAR64)
            VAR59 = VAR4->VAR64->VAR34[0];
        else
        {
            VAR59 = NULL;
            continue;
        }
        FUN18(VAR60, VAR59->VAR65, VAR59->VAR66.VAR67, VAR59->VAR66.VAR68);
    }
VAR31:
    FUN19(&VAR13);
    if (VAR6 < 0)
    {
        FUN20(&VAR4->VAR45);
        FUN20(&VAR4->VAR52);
        if (VAR4->VAR57)
            FUN21(VAR4->VAR57);
        if (VAR4->VAR64)
            FUN21(VAR4->VAR64);
    }
    return VAR6;
}