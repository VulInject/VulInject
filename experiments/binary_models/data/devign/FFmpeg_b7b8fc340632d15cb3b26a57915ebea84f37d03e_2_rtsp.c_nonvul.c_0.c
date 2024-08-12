static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[1024], VAR9[1024], VAR10[1024], VAR11[2048];
    VAR12 *VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    RTSPHeader VAR18, *VAR19 = &VAR18;
    unsigned char *VAR20 = NULL;
    VAR21 *VAR22;
    VAR23 *VAR24;
    int VAR25;
    FUN2(NULL, 0, VAR8, sizeof(VAR8), &VAR14, VAR9, sizeof(VAR9), VAR2->VAR26);
    if (VAR14 < 0)
        VAR14 = VAR27; snprintf ( VAR10 , sizeof ( VAR10 ) , ""VAR28 %s VAR29/1.0\VAR30\VAR31""VAR32: VAR33/VAR34\VAR30\VAR31""VAR35: if ( ! FUN3 ( & VAR24 -> VAR36 , VAR37 , & VAR38 , 0 , NULL ) ) goto VAR39 ;
}
} if ( FUN3 ( & VAR24 -> VAR36 , "",""VAR40/VAR41/VAR42;VAR43;VAR44=%VAR45-%VAR45"",""VAR40/VAR41/VAR46"",""VAR40/VAR41/VAR42;VAR47""VAR48 %s VAR29/1.0\VAR30\VAR31""VAR49: %VAR2\VAR30\VAR31""VAR50""VAR35: VAR8 , VAR19 -> VAR51 [ 0 ] . VAR52 ) ; if ( FUN4 ( FUN5 ( & VAR24 -> VAR36 -> VAR53 ) , VAR54 ) < 0 ) {
    VAR17 = VAR55;
    goto VAR56; }
}
break;
case VAR57:
{
    char VAR54[1024];
    int VAR58;
    VAR59 = &VAR38;
    VAR58 = VAR19->VAR51[0].VAR58;
    if (!VAR58)
        VAR58 = 16; snprintf ( VAR54 , sizeof ( VAR54 ) , ""VAR60 %s VAR29/1.0\VAR30\VAR31""VAR61: VAR62=0-\VAR30\VAR31" , VAR2 -> VAR26 ) ; FUN6 ( VAR2 , VAR11 , VAR19 , NULL ) ; if ( VAR19 -> VAR63 != VAR64 ) { VAR17 = VAR55 ; goto VAR56 ; } if ( VAR6 -> VAR65 == VAR66 ) { if ( FUN7 ( & VAR6 -> VAR67 , VAR6 -> VAR13 ) < 0 ) { VAR17 = VAR68 ; goto VAR56 ; } } return 0 ; VAR56 : for ( VAR15 = 0 ; VAR15 < VAR2 -> VAR69 ; VAR15 ++ ) { VAR22 = VAR2 -> VAR70 [ VAR15 ] ; VAR24 = VAR22 -> VAR7 ; if ( VAR24 ) { if ( VAR24 -> VAR36 ) FUN8 ( VAR24 -> VAR36 ) ; } FUN9 ( VAR24 ) ; } FUN10 ( & VAR20 ) ; FUN11 ( VAR6 -> VAR13 ) ; return VAR17 ; }