static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14;
    VAR6 *VAR15 = NULL;
    const char *VAR16;
    const char *VAR17;
    const char *VAR18;
    double VAR19;
    const char *VAR20;
    const char *VAR21;
    static int VAR22 = 0;
    if (VAR5 & VAR23)
    {
        FUN2(VAR7, "");
        return -VAR24;
    }
    FUN3(&VAR9->mutex);
    VAR14 = FUN4(&VAR25, NULL, 0, &VAR26);
    FUN5(VAR14, VAR4, &VAR15);
    if (VAR15)
    {
        FUN6(VAR7, VAR15);
        goto VAR27;
    }
    VAR9->VAR28 = FUN7(VAR14, VAR29, VAR30);
    if ((VAR9->VAR28 & 0x1ff) != 0)
    {
        FUN2(VAR7, "", VAR9->VAR28);
        goto VAR27;
    }
    VAR9->VAR31 = FUN8(VAR14, VAR32, VAR33);
    if (VAR9->VAR31 > VAR34)
    {
        FUN2(VAR7, "");
        goto VAR27;
    }
    VAR9->VAR35 = FUN9(VAR14, VAR36, true);
    VAR17 = FUN10(VAR14, VAR37);
    VAR18 = FUN10(VAR14, VAR38);
    if (VAR17 && VAR18)
    {
        FUN2(VAR7, "");
        goto VAR27;
    }
    if (VAR18)
    {
        VAR9->VAR17 = FUN11(VAR18, VAR7);
        if (!VAR9->VAR17)
        {
            goto VAR27;
        }
    }
    else
    {
        VAR9->VAR17 = FUN12(VAR17);
    }
    VAR16 = FUN10(VAR14, VAR39);
    if (VAR16 == NULL)
    {
        FUN2(VAR7, "");
        goto VAR27;
    } if ( ! FUN13 ( VAR16 , VAR2 -> VAR40 -> VAR41 , & VAR21 ) || ! FUN13 ( VAR21 , ""%s curl driver cannot handle the VAR42 '' (does not ""start VAR43 '%VAR9: VAR2 -> VAR40 -> VAR41 ) ; goto VAR27 ; } VAR9 -> VAR44 = FUN12 ( FUN10 ( VAR14 , VAR45 ) ) ; VAR20 = FUN10 ( VAR14 , VAR46 ) ; if ( VAR20 ) { VAR9 -> VAR47 = FUN11 ( VAR20 , VAR7 ) ; if ( ! VAR9 -> VAR47 ) { goto VAR27 ; } } VAR9 -> VAR48 = FUN12 ( FUN10 ( VAR14 , VAR49 ) ) ; VAR20 = FUN10 ( VAR14 , VAR50 ) ; if ( VAR20 ) { VAR9 -> VAR51 = FUN11 ( VAR20 , VAR7 ) ; if ( ! VAR9 -> VAR51 ) { goto VAR27 ; } } if ( ! VAR22 ) { FUN14 ( VAR52 ) ; VAR22 = 1 ; } FUN15 ( "" , VAR16 ) ; FUN16 ( & VAR9 -> VAR53 ) ; VAR9 -> VAR54 = FUN17 ( VAR2 ) ; VAR9 -> VAR55 = FUN12 ( VAR16 ) ; FUN18 ( & VAR9 -> mutex ) ; VAR12 = FUN19 ( VAR9 ) ; FUN20 ( & VAR9 -> mutex ) ; if ( ! VAR12 ) { goto VAR27 ; } if ( FUN21 ( VAR9 , VAR12 ) < 0 ) { goto VAR56 ; } VAR9 -> VAR57 = false ; FUN22 ( VAR12 -> VAR58 , VAR59 , 1 ) ; FUN22 ( VAR12 -> VAR58 , VAR60 , VAR61 ) ; FUN22 ( VAR12 -> VAR58 , VAR62 , VAR9 ) ; if ( FUN23 ( VAR12 -> VAR58 ) ) goto VAR56 ; if ( FUN24 ( VAR12 -> VAR58 , VAR63 , & VAR19 ) ) { goto VAR56 ; } if ( VAR19 < 0 ) { FUN25 ( VAR12 -> VAR64 , VAR65 , "" ) ; goto VAR56 ; } if ( VAR19 <= 0 ) { FUN25 ( VAR12 -> VAR64 , VAR65 , "" ) ; goto VAR56 ; } VAR9 -> VAR66 = VAR19 ; if ( ( ! FUN26 ( VAR9 -> VAR55 , ""VAR67: && ! VAR9 -> VAR57 ) { FUN25 ( VAR12 -> VAR64 , VAR65 , "" ) ; goto VAR56 ; } FUN15 ( "" VAR68 "" , VAR9 -> VAR66 ) ; FUN18 ( & VAR9 -> mutex ) ; FUN27 ( VAR12 ) ; FUN20 ( & VAR9 -> mutex ) ; FUN28 ( VAR12 -> VAR58 ) ; VAR12 -> VAR58 = NULL ; FUN29 ( VAR2 , FUN17 ( VAR2 ) ) ; FUN30 ( VAR14 ) ; return 0 ; VAR56 : FUN2 ( VAR7 , "" , VAR12 -> VAR64 ) ; FUN28 ( VAR12 -> VAR58 ) ; VAR12 -> VAR58 = NULL ; VAR27 : FUN31 ( & VAR9 -> mutex ) ; FUN32 ( VAR9 -> VAR17 ) ; FUN32 ( VAR9 -> VAR55 ) ; FUN30 ( VAR14 ) ; return - VAR69 ; }