static int FUN1(VAR1 *VAR2)
{
    const char *VAR3;
    char *VAR4;
    enum RedirType VAR5;
    char VAR6[32];
    char VAR7[1024], VAR8[1024];
    char VAR9[1024], *VAR10;
    char VAR11[32];
    char VAR12[1024];
    const char *VAR13;
    VAR14 *VAR15;
    int VAR16;
    char VAR17[32];
    const char *VAR18 = 0;
    VAR3 = VAR2->VAR19;
    FUN2(VAR6, sizeof(VAR6), &VAR3);
    FUN3(VAR2->VAR20, VAR6, sizeof(VAR2->VAR20));
    if (!strcmp(VAR6, ""))
        VAR2->VAR21 = 0;
    else if (!strcmp(VAR6, ""))
        VAR2->VAR21 = 1;
    else
        return -1;
    FUN2(VAR9, sizeof(VAR9), &VAR3);
    FUN3(VAR2->VAR9, VAR9, sizeof(VAR2->VAR9));
    FUN2(VAR11, sizeof(VAR11), (const char **)&VAR3);
    if (strcmp(VAR11, "") && strcmp(VAR11, ""))
        return -1;
    FUN3(VAR2->VAR11, VAR11, sizeof(VAR2->VAR11));
    if (VAR22.VAR23)
        FUN4("", FUN5(VAR2->VAR24.VAR25), VAR6, VAR9);
    VAR4 = strchr(VAR9, '');
    if (VAR4)
    {
        FUN3(VAR7, VAR4, sizeof(VAR7));
        *VAR4 = '';
    }
    else
        VAR7[0] = '';
    FUN3(VAR8, VAR9 + ((*VAR9 == '') ? 1 : 0), sizeof(VAR8) - 1);
    for (VAR3 = VAR2->VAR19; *VAR3 && *VAR3 != '' && *VAR3 != '';)
    {
        if (FUN6(VAR3, "", 11) == 0)
        {
            VAR18 = VAR3 + 11;
            if (*VAR18 && *VAR18 != '' && FUN7(*VAR18))
                VAR18++;
            break;
        }
        VAR3 = strchr(VAR3, '');
        if (!VAR3)
            break;
        VAR3++;
    }
    VAR5 = VAR26;
    if (FUN8(VAR8, ""))
    {
        VAR5 = VAR27;
        VAR8[strlen(VAR8) - 1] = '';
    }
    else if (FUN8(VAR8, "") && (!VAR18 || FUN6(VAR18, "", 8)))
    {
        VAR5 = VAR28;
    }
    else if (FUN8(VAR8, ""))
    {
        VAR5 = VAR29;
        strcpy(VAR8 + strlen(VAR8) - 2, "");
    }
    else if (FUN8(VAR8, ""))
    {
        VAR5 = VAR30;
        FUN9(VAR8, sizeof(VAR8) - 1);
    }
    else if (FUN8(VAR8, ""))
    {
        VAR5 = VAR31;
        FUN9(VAR8, sizeof(VAR8) - 1);
    }
    if (!strlen(VAR8))
        FUN3(VAR8, "", sizeof(VAR8) - 1);
    VAR15 = VAR22.VAR32;
    while (VAR15)
    {
        if (!strcmp(VAR15->VAR8, VAR8) && FUN10(VAR15, VAR2))
            break;
        VAR15 = VAR15->VAR33;
    }
    if (!VAR15)
    {
        snprintf(VAR12, sizeof(VAR12), "", VAR9);
        FUN4("", VAR9);
        goto VAR34;
    }
    VAR2->VAR15 = VAR15;
    memcpy(VAR2->VAR35, VAR15->VAR35, sizeof(VAR2->VAR35));
    memset(VAR2->VAR36, -1, sizeof(VAR2->VAR36));
    if (VAR15->VAR37 == VAR38)
    {
        VAR2->VAR39 = 301;
        VAR10 = VAR2->VAR19;
        snprintf(VAR10, VAR2->VAR40, ""
                                    ""
                                    ""
                                    ""
                                    ""
                                    ""%VAR41\""
                                    "",
                 VAR15->VAR42, VAR15->VAR42);
        VAR10 += strlen(VAR10);
        VAR2->VAR43 = VAR2->VAR19;
        VAR2->VAR44 = VAR10;
        VAR2->VAR45 = VAR46;
        return 0;
    }
    if (FUN11(VAR17, sizeof(VAR17), VAR2->VAR19))
    {
        if (FUN12(VAR2, VAR17))
        {
            for (VAR16 = 0; VAR16 < FUN13(VAR2->VAR35); VAR16++)
            {
                if (VAR2->VAR36[VAR16] >= 0)
                    VAR2->VAR36[VAR16] = -1;
            }
        }
    }
    if (VAR2->VAR21 == 0 && VAR15->VAR37 == VAR47)
        VAR48 += VAR15->VAR49;
    if (VAR15->VAR50)
    {
        snprintf(VAR12, sizeof(VAR12), "");
        FUN4("", VAR15->VAR42);
        goto VAR34;
    }
    if (VAR2->VAR21 == 0 && VAR22.VAR51 < VAR48)
    {
        VAR2->VAR39 = 503;
        VAR10 = VAR2->VAR19;
        snprintf(VAR10, VAR2->VAR40, ""
                                    ""
                                    ""
                                    ""
                                    ""
                                    "" VAR52 ""
                                    "" VAR52 ""
                                    "",
                 VAR48, VAR22.VAR51);
        VAR10 += strlen(VAR10);
        VAR2->VAR43 = VAR2->VAR19;
        VAR2->VAR44 = VAR10;
        VAR2->VAR45 = VAR46;
        return 0;
    }
    if (VAR5 != VAR26)
    {
        const char *VAR53 = 0;
        for (VAR3 = VAR2->VAR19; *VAR3 && *VAR3 != '' && *VAR3 != '';)
        {
            if (FUN6(VAR3, "", 5) == 0)
            {
                VAR53 = VAR3 + 5;
                break;
            }
            VAR3 = strchr(VAR3, '');
            if (!VAR3)
                break;
            VAR3++;
        }
        if (VAR53)
        {
            char *VAR54;
            char VAR55[260];
            while (FUN7(*VAR53))
                VAR53++;
            VAR54 = strchr(VAR53, '');
            if (VAR54)
            {
                if (VAR54[-1] == '')
                    VAR54--;
                if (VAR54 - VAR53 < sizeof(VAR55) - 1)
                {
                    memcpy(VAR55, VAR53, VAR54 - VAR53);
                    VAR55[VAR54 - VAR53] = 0;
                    VAR2->VAR39 = 200;
                    VAR10 = VAR2->VAR19;
                    switch (VAR5)
                    {
                    case VAR27: snprintf ( VAR10 , VAR2 -> VAR40 , "" "" "" ""3\"" ""VAR56: "" , VAR55 , VAR8 , VAR7 ) ; VAR10 += strlen ( VAR10 ) ; break ; case VAR29 : snprintf ( VAR10 , VAR2 -> VAR40 , "" "" "" "" ""VAR57/1.0 200 ASF Redirect VAR58\VAR59\VAR60""VAR61-VAR62: VAR63/VAR64-VAR65-VAR66\VAR59\VAR60""\VAR59\VAR60""[VAR67]\VAR59\VAR60""VAR68=VAR56: VAR10 += strlen ( VAR10 ) ; break ; case VAR30 : { char VAR69 [ 256 ] , * VAR3 ; FUN3 ( VAR69 , VAR55 , sizeof ( VAR69 ) ) ; VAR3 = strrchr ( VAR69 , '' ) ; if ( VAR3 ) * VAR3 = '' ; snprintf ( VAR10 , VAR2 -> VAR40 , "" "" "" "VAR70: VAR10 += strlen ( VAR10 ) ;
                    }
                    break;
                case VAR31:
                {
                    VAR71 *VAR72;
                    int VAR73;
                    socklen_t VAR74;
                    struct sockaddr_in VAR75;
                    snprintf(VAR10, VAR2->VAR40, ""
                                                ""
                                                "");
                    VAR10 += strlen(VAR10);
                    VAR74 = sizeof(VAR75);
                    if (FUN14(VAR2->VAR76, (struct VAR77 *)&VAR75, &VAR74))
                        FUN4("");
                    VAR73 = FUN15(VAR15, &VAR72, VAR75.VAR25);
                    if (VAR73 > 0)
                    {
                        memcpy(VAR10, VAR72, VAR73);
                        VAR10 += VAR73;
                        *VAR10 = '';
                        FUN16(VAR72);
                    }
                }
                break;
                default:
                    FUN17();
                    break;
                }
                VAR2->VAR43 = VAR2->VAR19;
                VAR2->VAR44 = VAR10;
                VAR2->VAR45 = VAR46;
                return 0;
            }
        }
    }
    snprintf(VAR12, sizeof(VAR12), "");
    goto VAR34;
}
VAR15->VAR78++;
if (VAR2->VAR21)
{
    if (!VAR15->VAR79)
    {
        const char *VAR80 = 0;
        int VAR81 = 0;
        for (VAR3 = VAR2->VAR19; *VAR3 && *VAR3 != '' && *VAR3 != '';)
        {
            if (FUN6(VAR3, "", 17) == 0)
            {
                VAR80 = VAR3;
                break;
            }
            if (FUN6(VAR3, "", 18) == 0)
                VAR81 = FUN18(VAR3 + 18, 0, 10);
            VAR3 = strchr(VAR3, '');
            if (!VAR3)
                break;
            VAR3++;
        }
        if (VAR80)
        {
            char *VAR82 = strchr(VAR80, '');
            VAR80 += 17;
            if (VAR82)
            {
                if (VAR82[-1] == '')
                    VAR82--;
                FUN4("", (int)(VAR82 - VAR80), VAR80);
                VAR2->VAR83 = 1;
            }
        }
        FUN4("", VAR2->VAR19);
        if (VAR81 && FUN11(VAR17, sizeof(VAR17), VAR2->VAR19))
        {
            VAR1 *VAR84;
            for (VAR84 = VAR85; VAR84; VAR84 = VAR84->VAR33)
            {
                if (VAR84->VAR86 == VAR81)
                    break;
            }
            if (VAR84 && FUN12(VAR84, VAR17))
                VAR84->VAR87 = 1;
        }
        snprintf(VAR12, sizeof(VAR12), "");
        VAR2->VAR15 = 0;
        goto VAR34;
    }
    if (FUN19(VAR2) < 0)
    {
        snprintf(VAR12, sizeof(VAR12), "");
        goto VAR34;
    }
    VAR2->VAR39 = 0;
    VAR2->VAR45 = VAR88;
    return 0;
}
if (strcmp(VAR15->VAR8 + strlen(VAR15->VAR8) - 4, "") == 0)
    FUN4("", VAR2->VAR19);
if (VAR2->VAR15->VAR37 == VAR89)
    goto VAR90;
if (FUN20(VAR2, VAR7) < 0)
{
    snprintf(VAR12, sizeof(VAR12), "", VAR9);
    goto VAR34;
}
VAR2->VAR19[0] = 0;
FUN21(VAR2->VAR19, VAR2->VAR40, "");
VAR13 = VAR2->VAR15->VAR91->VAR13;
if (!VAR13)
    VAR13 = "";
FUN21(VAR2->VAR19, VAR2->VAR40, "");
if (!strcmp(VAR2->VAR15->VAR91->VAR92, ""))
{
    VAR2->VAR86 = FUN22(&VAR93);
    FUN21(VAR2->VAR19, VAR2->VAR40, ""VAR94\"", VAR2->VAR86);
}
FUN21(VAR2->VAR19, VAR2->VAR40, "", VAR13);
FUN21(VAR2->VAR19, VAR2->VAR40, "");
VAR10 = VAR2->VAR19 + strlen(VAR2->VAR19);
VAR2->VAR39 = 0;
VAR2->VAR43 = VAR2->VAR19;
VAR2->VAR44 = VAR10;
VAR2->VAR45 = VAR46;
return 0;
VAR34 : VAR2->VAR39 = 404;
VAR10 = VAR2->VAR19;
FUN23(VAR12);
snprintf(VAR10, VAR2->VAR40, ""
                            ""
                            ""
                            ""
                            ""
                            ""
                            "",
         VAR12);
VAR10 += strlen(VAR10);
VAR2->VAR43 = VAR2->VAR19;
VAR2->VAR44 = VAR10;
VAR2->VAR45 = VAR46;
return 0;
VAR90 : FUN24(VAR2);
VAR2->VAR39 = 200;
VAR2->VAR45 = VAR46;
return 0;
}