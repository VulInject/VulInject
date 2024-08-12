static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const char *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    char VAR10[64], VAR11[64];
    const char *VAR12;
    enum AVMediaType VAR13;
    int VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20;
    struct sockaddr_storage VAR21;
    int VAR22;
    FUN2(VAR2, "", VAR5, VAR6);
    VAR12 = VAR6;
    if (VAR4->VAR23 && VAR5 != '')
        return;
    switch (VAR5)
    {
    case '':
        FUN3(VAR10, sizeof(VAR10), &VAR12);
        if (strcmp(VAR10, "") != 0)
            return;
        FUN3(VAR10, sizeof(VAR10), &VAR12);
        if (strcmp(VAR10, "") && strcmp(VAR10, ""))
            return;
        FUN4(VAR10, sizeof(VAR10), "", &VAR12);
        if (FUN5(VAR10, &VAR21))
            return;
        VAR22 = 16;
        if (*VAR12 == '')
        {
            VAR12++;
            FUN4(VAR10, sizeof(VAR10), "", &VAR12);
            VAR22 = FUN6(VAR10);
        }
        if (VAR2->VAR24 == 0)
        {
            VAR4->VAR25 = VAR21;
            VAR4->VAR26 = VAR22;
        }
        else
        {
            VAR18 = VAR8->VAR27[VAR8->VAR28 - 1];
            VAR18->VAR21 = VAR21;
            VAR18->VAR29 = VAR22;
        }
        break;
    case '':
        FUN7(&VAR2->VAR30, "", VAR12, 0);
        break;
    case '':
        if (VAR2->VAR24 == 0)
        {
            FUN7(&VAR2->VAR30, "", VAR12, 0);
            break;
        }
        break;
    case '':
        VAR4->VAR23 = 0;
        VAR4->VAR31 = 0;
        VAR4->VAR32 = 0;
        VAR13 = VAR33;
        FUN3(VAR11, sizeof(VAR11), &VAR12);
        if (!strcmp(VAR11, ""))
        {
            VAR13 = VAR34;
        }
        else if (!strcmp(VAR11, ""))
        {
            VAR13 = VAR35;
        }
        else if (!strcmp(VAR11, ""))
        {
            VAR13 = VAR36;
        }
        if (VAR13 == VAR33 || !(VAR8->VAR37 & (1 << VAR13)))
        {
            VAR4->VAR23 = 1;
            return;
        }
        VAR18 = FUN8(sizeof(VAR17));
        if (!VAR18)
            return;
        VAR18->VAR38 = -1;
        FUN9(&VAR8->VAR27, &VAR8->VAR28, VAR18);
        VAR18->VAR21 = VAR4->VAR25;
        VAR18->VAR29 = VAR4->VAR26;
        FUN10(VAR4->VAR39, VAR4->VAR40, &VAR18->VAR41, &VAR18->VAR42);
        FUN10(VAR4->VAR43, VAR4->VAR44, &VAR18->VAR45, &VAR18->VAR46);
        FUN3(VAR10, sizeof(VAR10), &VAR12);
        VAR18->VAR47 = FUN6(VAR10);
        FUN3(VAR10, sizeof(VAR10), &VAR12);
        if (!strcmp(VAR10, ""))
            VAR8->VAR48 = VAR49;
        else if (strstr(VAR10, "") || strstr(VAR10, ""))
            VAR18->VAR50 = 1;
        FUN3(VAR10, sizeof(VAR10), &VAR12);
        VAR18->VAR51 = FUN6(VAR10);
        if (!strcmp(FUN11(VAR18->VAR51), ""))
        {
            if (VAR8->VAR48 == VAR49)
            {
                if (!VAR8->VAR52 && VAR53)
                    VAR8->VAR52 = FUN12(VAR2);
            }
            else
            {
                VAR54 *VAR55;
                VAR55 = FUN13(VAR18->VAR51, VAR36);
                FUN14(VAR55, VAR18, NULL);
                if (VAR55 && VAR55->VAR56)
                    VAR55->FUN15(VAR2, -1, VAR18->VAR57);
            }
        }
        else if (VAR8->VAR58 == VAR59 && VAR13 == VAR36)
        {
        }
        else
        {
            VAR16 = FUN16(VAR2, NULL);
            if (!VAR16)
                return;
            VAR16->VAR60 = VAR8->VAR28 - 1;
            VAR18->VAR38 = VAR16->VAR61;
            VAR16->VAR62->VAR13 = VAR13;
            if (VAR18->VAR51 < VAR63)
            {
                VAR54 *VAR55;
                FUN17(VAR16->VAR62, VAR18->VAR51);
                if (VAR16->VAR62->VAR13 == VAR34 && VAR16->VAR62->VAR64 > 0)
                    FUN18(VAR16, 32, 1, VAR16->VAR62->VAR64);
                VAR55 = FUN13(VAR18->VAR51, VAR16->VAR62->VAR13);
                FUN14(VAR55, VAR18, VAR16->VAR62);
                if (VAR55 && VAR55->VAR56)
                    VAR55->FUN15(VAR2, VAR16->VAR61, VAR18->VAR57);
            }
        }
        FUN19(VAR18->VAR65, VAR8->VAR66, sizeof(VAR18->VAR65));
        break;
    case '':
        if (FUN20(VAR12, "", &VAR12))
        {
            if (VAR2->VAR24 == 0)
            { if ( ! FUN21 ( VAR12 , ""/""VAR67:""VAR68:""VAR69:""VAR70:""VAR71:VAR72;""VAR73:VAR72;""VAR74:""inline:""VAR75-VAR76:""VAR77""VAR78""VAR78""VAR79""VAR80""VAR81""*" ) ) return ; FUN3 ( VAR10 , sizeof ( VAR10 ) , & VAR12 ) ; while ( * VAR12 != '' ) { VAR20 = FUN8 ( sizeof ( * VAR20 ) ) ; if ( ! VAR20 ) return ; FUN3 ( VAR20 -> VAR82 , sizeof ( VAR20 -> VAR82 ) , & VAR12 ) ; if ( VAR83 ) { if ( VAR2 -> VAR24 == 0 ) { FUN9 ( & VAR4 -> VAR43 , & VAR4 -> VAR44 , VAR20 ) ; } else { VAR18 = VAR8 -> VAR27 [ VAR8 -> VAR28 - 1 ] ; FUN9 ( & VAR18 -> VAR45 , & VAR18 -> VAR46 , VAR20 ) ; } } else { if ( VAR2 -> VAR24 == 0 ) { FUN9 ( & VAR4 -> VAR39 , & VAR4 -> VAR40 , VAR20 ) ; } else { VAR18 = VAR8 -> VAR27 [ VAR8 -> VAR28 - 1 ] ; FUN9 ( & VAR18 -> VAR41 , & VAR18 -> VAR42 , VAR20 ) ; } } } } else { if ( VAR8 -> VAR58 == VAR59 ) FUN22 ( VAR2 , VAR12 ) ; if ( VAR2 -> VAR24 > 0 ) { VAR18 = VAR8 -> VAR27 [ VAR8 -> VAR28 - 1 ] ; if ( VAR8 -> VAR58 == VAR84 ) FUN23 ( VAR2 , VAR18 -> VAR38 , VAR12 ) ; if ( VAR18 -> VAR85 && VAR18 -> VAR85 -> VAR86 ) VAR18 -> VAR85 -> FUN24 ( VAR2 , VAR18 -> VAR38 , VAR18 -> VAR57 , VAR6 ) ; } } break ; } }