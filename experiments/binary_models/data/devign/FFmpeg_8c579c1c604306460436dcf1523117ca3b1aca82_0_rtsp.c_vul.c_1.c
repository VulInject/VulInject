static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, int VAR5, const char *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14 = 0;
    VAR15 *VAR16;
    RTSPMessageHeader VAR17, *VAR18 = &VAR17;
    char VAR19[2048];
    const char *VAR20;
    if (VAR8->VAR21 == VAR22)
        VAR20 = "";
    else
        VAR20 = "";
    VAR8->VAR23 = 60;
    for (VAR11 = VAR24, VAR12 = 0; VAR12 < VAR8->VAR25; ++VAR12)
    {
        char VAR21[2048];
        if (VAR5 == VAR26 && VAR8->VAR27 == VAR28)
        {
            if (VAR12 == 0)
            {
                for (VAR10 = 0; VAR10 < VAR8->VAR25; VAR10++)
                {
                    int VAR29 = strlen(VAR8->VAR30[VAR10]->VAR31);
                    if (VAR29 >= 4 && !strcmp(VAR8->VAR30[VAR10]->VAR31 + VAR29 - 4, ""))
                        break;
                }
                if (VAR10 == VAR8->VAR25)
                    return -1;
                VAR16 = VAR8->VAR30[VAR10];
            }
            else
                VAR16 = VAR8->VAR30[VAR12 > VAR10 ? VAR12 : VAR12 - 1];
        }
        else
            VAR16 = VAR8->VAR30[VAR12];
        if (VAR5 == VAR26)
        {
            char VAR32[256];
            if (VAR8->VAR27 == VAR28 && VAR12 > 1)
            {
                VAR4 = VAR18->VAR33[0].VAR34;
                goto VAR35;
            }
            if (VAR24 != 0)
            {
                while (VAR11 <= VAR36)
                {
                    FUN2(VAR32, sizeof(VAR32), "", NULL, VAR3, -1, "", VAR11);
                    VAR11 += 2;
                    if (FUN3(&VAR16->VAR37, VAR32, VAR38) == 0)
                        goto VAR39;
                }
            } if ( FUN3 ( & VAR16 -> VAR37 , ""%VAR2/VAR40;""VAR41;""VAR42=%VAR43""-%VAR43""%VAR2/VAR44;""VAR41;""VAR45=%VAR43-%VAR43""%VAR2/VAR40;VAR46"";VAR47=VAR48"";VAR47=VAR49""VAR50: %VAR2\VAR51\VAR52""VAR53-VAR54: %VAR2\VAR51\VAR52""VAR55: %VAR2, VAR56=%VAR2\VAR51\VAR52""VAR57""VAR58""VAR58""VAR58""?VAR59=%VAR43" , VAR59 ) ; if ( FUN3 ( & VAR16 -> VAR37 , VAR60 , VAR38 ) < 0 ) { VAR13 = VAR61 ; goto VAR62 ; } break ; } } if ( ( VAR13 = FUN4 ( VAR2 , VAR16 ) ) ) goto VAR62 ; } if ( VAR18 -> VAR23 > 0 ) VAR8 -> VAR23 = VAR18 -> VAR23 ; if ( VAR8 -> VAR27 == VAR63 ) VAR8 -> VAR64 = 1 ; return 0 ; VAR62 : for ( VAR12 = 0 ; VAR12 < VAR8 -> VAR25 ; VAR12 ++ ) { if ( VAR8 -> VAR30 [ VAR12 ] -> VAR37 ) { FUN5 ( VAR8 -> VAR30 [ VAR12 ] -> VAR37 ) ; VAR8 -> VAR30 [ VAR12 ] -> VAR37 = NULL ; } } return VAR13 ; }