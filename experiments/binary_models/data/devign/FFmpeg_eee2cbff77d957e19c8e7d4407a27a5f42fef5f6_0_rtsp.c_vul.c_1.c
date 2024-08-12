FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, int VAR5, const char *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    RTSPHeader VAR15, *VAR16 = &VAR15;
    char VAR17[2048];
    const char *VAR18;
    if (VAR8->VAR19 == VAR20)
        VAR18 = "";
    else
        VAR18 = "";
    for (VAR10 = VAR21, VAR11 = 0; VAR11 < VAR8->VAR22; ++VAR11)
    {
        char VAR23[2048];
        VAR14 = VAR8->VAR24[VAR11];
        if (VAR5 == VAR25)
        {
            char VAR26[256];
            if (VAR21 != 0)
            {
                while (VAR10 <= VAR27)
                {
                    snprintf(VAR26, sizeof(VAR26), "" % VAR2 / VAR28; VAR29; VAR30 = % VAR31 "" - % VAR31 "" % VAR2 / VAR32 "" % VAR2 / VAR28; VAR33 ""; VAR34 = VAR35 "" VAR36 % s VAR37 / 1.0\VAR38\VAR39 "" VAR40
                             : % VAR2\VAR38\VAR39 "" VAR41 - VAR42
                             : % VAR2\VAR38\VAR39 "" VAR43
                             : % VAR2, VAR44 = % VAR2\VAR38\VAR39 "" VAR45
                             : VAR3, VAR16->VAR46[0].VAR47);
                    if (FUN2(VAR14->VAR48, VAR49) < 0)
                    {
                        VAR12 = VAR50;
                        goto VAR51;
                    }
                }
                break;
            case VAR52:
            {
                char VAR49[1024];
                struct in_addr VAR53;
                VAR53.VAR54 = FUN3(VAR16->VAR46[0].VAR55); snprintf ( VAR49 , sizeof ( VAR49 ) , "VAR45: FUN4 ( VAR53 ) , VAR16 -> VAR46 [ 0 ] . VAR56 , VAR16 -> VAR46 [ 0 ] . VAR57 ) ; if ( FUN5 ( & VAR14 -> VAR48 , VAR49 , VAR58 ) < 0 ) { VAR12 = VAR50 ; goto VAR51 ; } } break ; } if ( ( VAR12 = FUN6 ( VAR2 , VAR14 ) ) ) goto VAR51 ; } if ( VAR8 -> VAR19 == VAR20 ) VAR8 -> VAR59 = 1 ; return 0 ; VAR51 : for ( VAR11 = 0 ; VAR11 < VAR8 -> VAR22 ; VAR11 ++ ) { if ( VAR8 -> VAR24 [ VAR11 ] -> VAR48 ) { FUN7 ( VAR8 -> VAR24 [ VAR11 ] -> VAR48 ) ; VAR8 -> VAR24 [ VAR11 ] -> VAR48 = NULL ; } } return VAR12 ; }