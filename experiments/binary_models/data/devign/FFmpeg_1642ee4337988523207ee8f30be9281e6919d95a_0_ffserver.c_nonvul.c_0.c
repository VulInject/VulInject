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
    enum CodecID VAR20, VAR21;
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
                fprintf(VAR25, "", VAR1, VAR10, VAR6);
                VAR9++;
            }
            VAR26.VAR27 = FUN7(VAR8);
        }
        else if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            if (FUN8(&VAR26.VAR28, VAR6) != 0)
            {
                fprintf(VAR25, "", VAR1, VAR10, VAR6);
                VAR9++;
            }
        }
        else if (!FUN5(VAR5, ""))
        {
            VAR29 = 0;
        }
        else if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            VAR8 = FUN6(VAR6);
            if (VAR8 < 1 || VAR8 > 65536)
            {
                fprintf(VAR25, "", VAR1, VAR10, VAR6);
                VAR9++;
            }
            VAR30.VAR27 = FUN7(FUN6(VAR6));
        }
        else if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            if (FUN8(&VAR30.VAR28, VAR6) != 0)
            {
                fprintf(VAR25, "", VAR1, VAR10, VAR6);
                VAR9++;
            }
        }
        else if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            VAR8 = FUN6(VAR6);
            if (VAR8 < 1 || VAR8 > 65536)
            {
                fprintf(VAR25, "", VAR1, VAR10, VAR6);
                VAR9++;
            }
            VAR31 = VAR8;
        }
        else if (!FUN5(VAR5, ""))
        {
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            VAR8 = FUN6(VAR6);
            if (VAR8 < 1 || VAR8 > VAR31)
            {
                fprintf(VAR25, "", VAR1, VAR10, VAR6);
                VAR9++;
            }
            else
            {
                VAR32 = VAR8;
            }
        }
        else if (!FUN5(VAR5, ""))
        {
            int64_t VAR33;
            FUN4(VAR6, sizeof(VAR6), &VAR7);
            VAR33 = FUN9(VAR6);
            if (VAR33 < 10 || VAR33 > 10000000)
            {
                fprintf(VAR25, "", VAR1, VAR10, VAR6);
                VAR9++;
            }
            else
                VAR34 = VAR33;
        }
        else if (!FUN5(VAR5, ""))
        {
            if (!VAR35)
                FUN4(VAR36, sizeof(VAR36), &VAR7);
        }
        else if (!FUN5(VAR5, ""))
        {
            char *VAR37;
            if (VAR13 || VAR16)
            {
                fprintf(VAR25, "", VAR1, VAR10);
            }
            else
            {
                VAR16 = FUN10(sizeof(VAR11));
                FUN4(VAR16->VAR1, sizeof(VAR16->VAR1), &VAR7);
                VAR37 = strrchr(VAR16->VAR1, '');
                if (*VAR37)
                    *VAR37 = '';
                for (VAR17 = VAR23; VAR17; VAR17 = VAR17->VAR38)
                {
                    if (!strcmp(VAR16->VAR1, VAR17->VAR1))
                    {
                        fprintf(VAR25, "", VAR1, VAR10, VAR17->VAR1);
                        VAR9++;
                    }
                }
                VAR16->VAR39 = FUN11("", NULL, NULL);
                snprintf(VAR16->VAR40, sizeof(VAR16->VAR40), "", VAR16->VAR1);
                VAR16->VAR41 = 5 * 1024 * 1024;
                VAR16->VAR42 = 1;
                VAR16->VAR16 = VAR16;
                *VAR12 = VAR16;
                VAR12 = &VAR16->VAR38;
                *VAR15 = VAR16;
                VAR15 = &VAR16->VAR43;
            }
        }
        else if (!FUN5(VAR5, ""))
        {
            if (VAR16)
            {
                int VAR44;
                VAR16->VAR45 = FUN10(64 * sizeof(char *));
                for (VAR44 = 0; VAR44 < 62; VAR44++)
                {
                    FUN4(VAR6, sizeof(VAR6), &VAR7);
                    if (!VAR6[0])
                        break;
                    VAR16->VAR45[VAR44] = FUN12(VAR6);
                }
                VAR16->VAR45[VAR44] = FUN13(30 + strlen(VAR16->VAR1)); snprintf ( VAR16 -> VAR45 [ VAR44 ] , 30 + strlen ( VAR16 -> VAR1 ) , ""127.0.0.1""VAR46""VAR47""VAR48""VAR49""%VAR17:%VAR50: Feed max file size is too VAR51, ""must be at VAR52 %VAR50\VAR53""</VAR54>""%VAR17:%VAR50: No VAR55 <VAR54> for </VAR54>\VAR53""<VAR56""%VAR17:%VAR50: Already in a VAR57\VAR53""%VAR17:%VAR50: VAR56 '' already VAR58\VAR53""VAR54""%VAR17:%VAR50: VAR16 '' not VAR59\VAR53""VAR60""VAR61""VAR62""VAR63""%VAR17:%VAR50: Unknown VAR60: %VAR17\VAR53""VAR64""%VAR17:%VAR50: Unknown input VAR65: %VAR17\VAR53""VAR66""%VAR17:%VAR50: FaviconURL only permitted for status VAR67\VAR53""VAR68""VAR69""VAR70""VAR71""VAR72""VAR73""VAR74""%VAR17:%VAR50: Unknown VAR74: %VAR17\VAR53""VAR75""%VAR17:%VAR50: Unknown VAR75: %VAR17\VAR53""VAR76""VAR77""VAR78""VAR79""VAR80""VAR81""%VAR50-%VAR50""%VAR17:%VAR50: Incorrect format for VAR81 -- should VAR82 <VAR83>-<VAR84>: %VAR17\VAR53""VAR85""VAR86""VAR87""VAR88""VAR89""VAR90""%VAR17:%VAR50: Image size must be a multiple of 16\VAR53""VAR91""Incorrect frame VAR92\VAR53""VAR93""VAR94""VAR95""VAR96""VAR97""VAR98""VAR97""AVOption VAR99: %VAR17 %VAR17\VAR53""VAR100""VAR101""VAR102""VAR103""VAR104""VAR105""%VAR17:%VAR50: VideoQDiff out of VAR106\VAR53""VAR107""%VAR17:%VAR50: VideoQMax out of VAR106\VAR53""VAR108""%VAR17:%VAR50: VideoQMin out of VAR106\VAR53""VAR109""VAR110""VAR111""VAR112""VAR113""VAR114""VAR115""VAR116""VAR117""%VAR17:%VAR50: ACL VAR118 '' is not ALLOW or VAR119\VAR53""%VAR17:%VAR50: ACL refers to invalid host or ip VAR120 ''\VAR53""%VAR17:%VAR50: ACL refers to invalid host or ip VAR120 ''\VAR53""%VAR17:%VAR50: ACL found not VAR121 <VAR13> or <VAR16>\VAR53""VAR122""VAR123""%VAR17:%VAR50: Invalid VAR124/IP VAR120: %VAR17\VAR53""VAR125""VAR126""VAR127""</VAR56>""%VAR17:%VAR50: No VAR55 <VAR56> for </VAR56>\VAR53""VAR128""<VAR129""%VAR17:%VAR50: Already in a VAR57\VAR53""VAR130""</VAR129>""%VAR17:%VAR50: No VAR55 <VAR129> for </VAR129>\VAR53""%VAR17:%VAR50: No URL found for <VAR129>\VAR53""LoadModule""%VAR17:%VAR50: Module support not compiled into this VAR131: ''\VAR53""%VAR17:%VAR50: Incorrect VAR132: ''\VAR53" , VAR1 , VAR10 , VAR5 ) ; } } fclose ( VAR3 ) ; if ( VAR9 ) return - 1 ; else return 0 ; }