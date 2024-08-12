static int FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    char VAR4[1024];
    char VAR5[64];
    char VAR6[1024];
    const char *VAR7;
    int VAR8, VAR9, VAR10;
    VAR11 **VAR12, *VAR13, *VAR14;
    VAR11 **VAR15, *VAR16, *VAR17;
    AVCodecContext VAR18, VAR19;
    enum AVCodecID VAR20, VAR21;
    VAR3 = fopen(VAR1, "");
    if (!VAR3)
    {
        FUN2(VAR1);
        return -1;
    }
    VAR9 = 0;
    VAR10 = 0;
    VAR22 = NULL;
    VAR12 = &VAR22;
    VAR23 = NULL;
    VAR15 = &VAR23;
    VAR13 = NULL;
    VAR16 = NULL;
    VAR14 = NULL;
    VAR20 = VAR24;
    VAR21 = VAR24;
    for (;;)
    {
        if (fgets(VAR4, sizeof(VAR4), VAR3) == NULL)
            break;
        VAR10++;
        VAR7 = VAR4;
        while (FUN3(*VAR7))
            VAR7++;
        if (*VAR7 == '' || *VAR7 == '')
            continue;
        FUN4(VAR5, sizeof(VAR5), &VAR7);
        if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            VAR8 = FUN6(VAR6);
            if (VAR8 < 1 || VAR8 > 65536)
            {
                FUN7("", VAR6);
            }
            VAR25.VAR26 = FUN8(VAR8);
        }
        else if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            if (FUN9(&VAR25.VAR27, VAR6) != 0)
            {
                FUN7("", VAR6);
            }
        }
        else if (!FUN5(VAR5, ""))
        {
        }
        else if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            VAR8 = FUN6(VAR6);
            if (VAR8 < 1 || VAR8 > 65536)
            {
                FUN7("", VAR6);
            }
            VAR28.VAR26 = FUN8(FUN6(VAR6));
        }
        else if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            if (FUN9(&VAR28.VAR27, VAR6) != 0)
            {
                FUN7("", VAR6);
            }
        }
        else if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            VAR8 = FUN6(VAR6);
            if (VAR8 < 1 || VAR8 > 65536)
            {
                FUN7("", VAR6);
            }
            VAR29 = VAR8;
        }
        else if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            VAR8 = FUN6(VAR6);
            if (VAR8 < 1 || VAR8 > VAR29)
            {
                FUN7("", VAR6);
            }
            else
            {
                VAR30 = VAR8;
            }
        }
        else if (!FUN5(VAR5, ""))
        {
            int64_t VAR31;
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            VAR31 = FUN10(VAR6, NULL, 10);
            if (VAR31 < 10 || VAR31 > 10000000)
            {
                FUN7("", VAR6);
            }
            else
                VAR32 = VAR31;
        }
        else if (!FUN5(VAR5, ""))
        {
            if (!VAR33)
                FUN4(VAR34, sizeof(VAR34), &VAR7);
        }
        else if (!FUN5(VAR5, ""))
        {
            char *VAR35;
            if (VAR13 || VAR16)
            {
                FUN7("");
            }
            else
            {
                VAR16 = FUN11(sizeof(VAR11));
                FUN4(VAR16->VAR1, sizeof(VAR16->VAR1), &VAR7);
                VAR35 = strrchr(VAR16->VAR1, '');
                if (*VAR35)
                    *VAR35 = '';
                for (VAR17 = VAR23; VAR17; VAR17 = VAR17->VAR36)
                {
                    if (!strcmp(VAR16->VAR1, VAR17->VAR1))
                    {
                        FUN7("", VAR17->VAR1);
                    }
                }
                VAR16->VAR37 = FUN12("", NULL, NULL);
                snprintf(VAR16->VAR38, sizeof(VAR16->VAR38), "", VAR16->VAR1);
                VAR16->VAR39 = 5 * 1024 * 1024;
                VAR16->VAR40 = 1;
                VAR16->VAR16 = VAR16;
                *VAR12 = VAR16;
                VAR12 = &VAR16->VAR36;
                *VAR15 = VAR16;
                VAR15 = &VAR16->VAR41;
            }
        }
        else if (!FUN5(VAR5, ""))
        {
            if (VAR16)
            {
                int VAR42;
                VAR16->VAR43 = FUN11(64 * sizeof(char *));
                for (VAR42 = 0; VAR42 < 62; VAR42++)
                {
                    FUN4(VAR6, sizeof(VAR6), &VAR7);
                    if (!VAR6[0])
                        break;
                    VAR16->VAR43[VAR42] = FUN13(VAR6);
                } VAR16 -> VAR43 [ VAR42 ] = FUN14 ( ""127.0.0.1""VAR44""VAR45""VAR46""VAR47""Feed max file size is too VAR48, must be at VAR49 %VAR50\VAR51""</VAR52>""No VAR53 <VAR52> for </VAR52>\VAR51""<VAR54""Already in a VAR55\VAR51""VAR54 '' already VAR56\VAR51""VAR52""VAR16 '' not VAR57\VAR51""VAR58""VAR59""VAR60""VAR61""Unknown VAR58: %VAR17\VAR51""VAR62""Unknown input VAR63: %VAR17\VAR51""VAR64""FaviconURL only permitted for status VAR65\VAR51""VAR66""VAR67""VAR68""VAR69""VAR70""VAR71""VAR72""Unknown VAR72: %VAR17\VAR51""VAR73""Unknown VAR73: %VAR17\VAR51""VAR74""VAR75""VAR76""VAR77""VAR78""VAR79""%VAR50-%VAR50""Incorrect format for VAR79 -- should VAR80 <VAR81>-<VAR82>: %VAR17\VAR51""VAR83""VAR84""VAR85""VAR86""VAR87""VAR88""Image size must be a multiple of 16\VAR51""VAR89""Incorrect frame VAR90: %VAR17\VAR51""VAR91""Unknown pixel VAR63: %VAR17\VAR51""VAR92""VAR93""VAR94""VAR95""VAR96""VAR97""VAR96""Error VAR98 %s option VAR99 %VAR17 %VAR17\VAR51""VAR100""VAR101""VAR100""AVPreset VAR102: %VAR17\VAR51""VAR103""VAR104""VAR105""VAR106""VAR107""VAR108""VideoQDiff out of VAR109\VAR51""VAR110""VideoQMax out of VAR109\VAR51""VAR111""VideoQMin out of VAR109\VAR51""VAR112""VAR113""VAR114""VAR115""VAR116""VAR117""VAR118""VAR119""Invalid VAR120/IP VAR121: %VAR17\VAR51""VAR122""VAR123""VAR124""</VAR54>""No VAR53 <VAR54> for </VAR54>\VAR51""VAR125""<VAR126""Already in a VAR55\VAR51""VAR127""</VAR126>""No VAR53 <VAR126> for </VAR126>\VAR51""No URL found for <VAR126>\VAR51""LoadModule""Loadable modules no longer VAR128\VAR51""Incorrect VAR129: ''\VAR51" , VAR5 ) ; } } fclose ( VAR3 ) ; if ( VAR9 ) return - 1 ; else return 0 ; }