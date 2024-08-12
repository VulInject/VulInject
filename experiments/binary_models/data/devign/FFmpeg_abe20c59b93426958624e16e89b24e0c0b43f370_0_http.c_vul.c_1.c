static int FUN1(VAR1 *VAR2)
{
    const char *VAR3, *VAR4, *VAR5 = "", *VAR6;
    char VAR7[1024], VAR8[1024], VAR9[10];
    char VAR10[1024], VAR11[1024];
    char VAR12[1024];
    char VAR13[1024], VAR14[1024];
    int VAR15, VAR16, VAR17, VAR18 = 0, VAR19 = 0;
    HTTPAuthType VAR20, VAR21;
    VAR22 *VAR23 = VAR2->VAR24;
    VAR1 *VAR25 = NULL;
    VAR4 = getenv(""); VAR16 = ( VAR4 != NULL ) && ! getenv ( "" ) && FUN2 ( VAR4 , ""VAR26""VAR27""/""%VAR23" , VAR12 ) ; VAR3 = VAR14 ; FUN3 ( NULL , 0 , VAR11 , sizeof ( VAR11 ) , VAR7 , sizeof ( VAR7 ) , & VAR15 , NULL , 0 , VAR4 ) ; } FUN4 ( VAR13 , sizeof ( VAR13 ) , VAR5 , NULL , VAR7 , VAR15 , NULL ) ; VAR17 = FUN5 ( & VAR25 , VAR13 , VAR28 , & VAR2 -> VAR29 , NULL ) ; if ( VAR17 < 0 ) goto VAR30 ; VAR23 -> VAR25 = VAR25 ; VAR20 = VAR23 -> VAR31 . VAR32 ; VAR21 = VAR23 -> VAR31 . VAR32 ; if ( FUN6 ( VAR2 , VAR3 , VAR6 , VAR8 , VAR10 , VAR11 , & VAR18 ) < 0 ) goto VAR30 ; if ( VAR23 -> VAR33 == 401 ) { if ( VAR20 == VAR34 && VAR23 -> VAR31 . VAR32 != VAR34 ) { FUN7 ( VAR25 ) ; goto VAR35 ; } else goto VAR30 ; } if ( VAR23 -> VAR33 == 407 ) { if ( VAR21 == VAR34 && VAR23 -> VAR36 . VAR32 != VAR34 ) { FUN7 ( VAR25 ) ; goto VAR35 ; } else goto VAR30 ; } if ( ( VAR23 -> VAR33 == 301 || VAR23 -> VAR33 == 302 || VAR23 -> VAR33 == 303 || VAR23 -> VAR33 == 307 ) && VAR18 == 1 ) { FUN7 ( VAR25 ) ; if ( VAR19 ++ >= VAR37 ) return FUN8 ( VAR38 ) ; VAR18 = 0 ; goto VAR35 ; } return 0 ; VAR30 : if ( VAR25 ) FUN7 ( VAR25 ) ; VAR23 -> VAR25 = NULL ; return FUN8 ( VAR38 ) ; }