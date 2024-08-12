static int FUN1(VAR1 **VAR2, int VAR3, VAR1 **VAR4, int VAR5, VAR6 *VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14 = 0, VAR15 = 0, VAR16;
    VAR1 *VAR17, *VAR18;
    VAR19 *VAR20, *VAR21;
    VAR22 *VAR23, **VAR24 = NULL;
    VAR25 *VAR26, **VAR27 = NULL;
    VAR28 *VAR29;
    VAR1 *VAR30;
    int VAR31;
    VAR29 = (VAR28 *)FUN2(VAR5 * sizeof(VAR28));
    if (!VAR29)
        goto VAR32;
    VAR11 = 0;
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        VAR17 = VAR4[VAR10];
        VAR29[VAR10].VAR33 = VAR11;
        VAR29[VAR10].VAR34 = VAR17->VAR34;
        VAR11 += VAR17->VAR34;
        VAR14 = VAR11;
        VAR27 = FUN2(VAR14 * sizeof(VAR25 *));
        if (!VAR27)
            goto VAR32;
        for (VAR10 = 0; VAR10 < VAR14; VAR10++)
        {
            VAR26 = FUN2(sizeof(VAR25));
            if (!VAR26)
                goto VAR32;
            VAR27[VAR10] = VAR26;
            VAR11 = 0;
            for (VAR10 = 0; VAR10 < VAR5; VAR10++)
            {
                VAR17 = VAR4[VAR10];
                for (VAR12 = 0; VAR12 < VAR17->VAR34; VAR12++)
                {
                    VAR26 = VAR27[VAR11++];
                    VAR26->VAR35 = VAR17->VAR36[VAR12];
                    VAR26->VAR37 = VAR10;
                    VAR26->VAR38 = VAR12;
                    VAR26->VAR39 = 1;
                    if (VAR26->VAR35->VAR20.VAR40)
                    {
                        VAR26->VAR41 = FUN3();
                        VAR26->VAR42 = 0;
                        VAR15 = 0;
                        for (VAR10 = 0; VAR10 < VAR3; VAR10++)
                        {
                            VAR18 = VAR2[VAR10];
                            VAR15 += VAR18->VAR34;
                            if (VAR8 > 0 && VAR8 != VAR15)
                            {
                                fprintf(VAR43, "");
                                for (VAR10 = 0; VAR10 < VAR8; VAR10++)
                                {
                                    int VAR44 = VAR7[VAR10].VAR37;
                                    int VAR45 = VAR7[VAR10].VAR46;
                                    if (VAR44 < 0 || VAR44 > VAR5 - 1 || VAR45 < 0 || VAR45 > VAR29[VAR44].VAR34 - 1)
                                    {
                                        fprintf(VAR43, "", VAR44, VAR45);
                                        VAR24 = FUN2(sizeof(VAR22 *) * VAR15);
                                        if (!VAR24)
                                            goto VAR32;
                                        for (VAR10 = 0; VAR10 < VAR15; VAR10++)
                                        {
                                            VAR23 = FUN2(sizeof(VAR22));
                                            if (!VAR23)
                                                goto VAR32;
                                            VAR24[VAR10] = VAR23;
                                            VAR13 = 0;
                                            for (VAR12 = 0; VAR12 < VAR3; VAR12++)
                                            {
                                                VAR18 = VAR2[VAR12];
                                                for (VAR10 = 0; VAR10 < VAR18->VAR34; VAR10++)
                                                {
                                                    int VAR47;
                                                    VAR23 = VAR24[VAR13++];
                                                    VAR23->VAR37 = VAR12;
                                                    VAR23->VAR38 = VAR10;
                                                    VAR23->VAR35 = VAR18->VAR36[VAR10];
                                                    if (VAR8 > 0)
                                                    {
                                                        VAR23->VAR48 = VAR29[VAR7[VAR13 - 1].VAR37].VAR33 + VAR7[VAR13 - 1].VAR46;
                                                    }
                                                    else
                                                    {
                                                        VAR47 = 0;
                                                        for (VAR11 = 0; VAR11 < VAR14; VAR11++)
                                                        {
                                                            VAR26 = VAR27[VAR11];
                                                            if (VAR26->VAR39 && VAR26->VAR35->VAR20.VAR49 == VAR23->VAR35->VAR20.VAR49)
                                                            {
                                                                VAR23->VAR48 = VAR11;
                                                                VAR47 = 1;
                                                                if (!VAR47)
                                                                {
                                                                    for (VAR11 = 0; VAR11 < VAR14; VAR11++)
                                                                    {
                                                                        VAR26 = VAR27[VAR11];
                                                                        if (VAR26->VAR35->VAR20.VAR49 == VAR23->VAR35->VAR20.VAR49)
                                                                        {
                                                                            VAR23->VAR48 = VAR11;
                                                                            VAR47 = 1;
                                                                            if (!VAR47)
                                                                            { fprintf ( VAR43 , "" , VAR26 = VAR27 [ VAR23 -> VAR48 ] ; VAR26 -> VAR39 = 0 ; for ( VAR10 = 0 ; VAR10 < VAR15 ; VAR10 ++ ) {
                                                                                    VAR23 = VAR24[VAR10];
                                                                                    VAR26 = VAR27[VAR23->VAR48];
                                                                                    VAR20 = &VAR23->VAR35->VAR20;
                                                                                    VAR21 = &VAR26->VAR35->VAR20;
                                                                                    if (VAR23->VAR35->VAR50)
                                                                                    {
                                                                                        VAR20->VAR51 = VAR21->VAR51;
                                                                                        VAR20->VAR49 = VAR21->VAR49;
                                                                                        VAR20->VAR52 = VAR21->VAR52;
                                                                                        VAR20->VAR53 = VAR21->VAR53;
                                                                                        switch (VAR20->VAR49)
                                                                                        {
                                                                                        case VAR54:
                                                                                            VAR20->VAR55 = VAR21->VAR55;
                                                                                            VAR20->VAR56 = VAR21->VAR56;
                                                                                            break;
                                                                                        case VAR57:
                                                                                            VAR20->VAR58 = VAR21->VAR58;
                                                                                            VAR20->VAR59 = VAR21->VAR59;
                                                                                            VAR20->VAR60 = VAR21->VAR60;
                                                                                            VAR20->VAR61 = VAR21->VAR61;
                                                                                            break;
                                                                                        default:
                                                                                            FUN4();
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            switch (VAR20->VAR49)
                                                                                            {
                                                                                            case VAR54:
                                                                                                if (FUN5(&VAR23->VAR62, 2 * VAR63))
                                                                                                    goto VAR32;
                                                                                                if (VAR20->VAR56 == VAR21->VAR56 && VAR20->VAR55 == VAR21->VAR55)
                                                                                                {
                                                                                                    VAR23->VAR64 = 0;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    if (VAR20->VAR56 != VAR21->VAR56 && VAR21->VAR51 == VAR65)
                                                                                                    {
                                                                                                        VAR21->VAR56 = VAR20->VAR56;
                                                                                                        if (VAR20->VAR55 == VAR21->VAR55)
                                                                                                            VAR23->VAR64 = 0;
                                                                                                        else
                                                                                                        {
                                                                                                            VAR23->VAR64 = 1;
                                                                                                            VAR23->VAR66 = FUN6(VAR20->VAR56, VAR21->VAR56, VAR20->VAR55, VAR21->VAR55);
                                                                                                            VAR21->VAR56 = VAR20->VAR56;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            VAR23->VAR64 = 1;
                                                                                                            VAR23->VAR66 = FUN6(VAR20->VAR56, VAR21->VAR56, VAR20->VAR55, VAR21->VAR55);
                                                                                                            VAR26->VAR67 = 1;
                                                                                                            VAR23->VAR68 = 1;
                                                                                                            break;
                                                                                                        case VAR57:
                                                                                                            if (VAR20->VAR60 == VAR21->VAR60 && VAR20->VAR61 == VAR21->VAR61 && VAR69 == 0 && VAR70 == 0 && VAR71 == 0 && VAR72 == 0)
                                                                                                            {
                                                                                                                VAR23->VAR73 = 0;
                                                                                                                VAR23->VAR74 = 0;
                                                                                                            }
                                                                                                            else if ((VAR20->VAR60 == VAR21->VAR60 - (VAR71 + VAR72)) && (VAR20->VAR61 == VAR21->VAR61 - (VAR69 + VAR70)))
                                                                                                            {
                                                                                                                VAR23->VAR73 = 0;
                                                                                                                VAR23->VAR74 = 1;
                                                                                                                VAR23->VAR75 = VAR69;
                                                                                                                VAR23->VAR76 = VAR71;
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                VAR77 *VAR78;
                                                                                                                VAR23->VAR73 = 1;
                                                                                                                VAR23->VAR74 = 0;
                                                                                                                VAR78 = FUN7((VAR20->VAR60 * VAR20->VAR61 * 3) / 2);
                                                                                                                if (!VAR78)
                                                                                                                    goto VAR32;
                                                                                                                VAR23->VAR79.VAR80[0] = VAR78;
                                                                                                                VAR23->VAR79.VAR80[1] = VAR23->VAR79.VAR80[0] + (VAR20->VAR60 * VAR20->VAR61);
                                                                                                                VAR23->VAR79.VAR80[2] = VAR23->VAR79.VAR80[1] + (VAR20->VAR60 * VAR20->VAR61) / 4;
                                                                                                                VAR23->VAR79.VAR81[0] = VAR20->VAR60;
                                                                                                                VAR23->VAR79.VAR81[1] = VAR20->VAR60 / 2;
                                                                                                                VAR23->VAR79.VAR81[2] = VAR20->VAR60 / 2;
                                                                                                                VAR23->VAR82 = FUN8(VAR23->VAR35->VAR20.VAR60, VAR23->VAR35->VAR20.VAR61, VAR26->VAR35->VAR20.VAR60, VAR26->VAR35->VAR20.VAR61, VAR69, VAR70, VAR71, VAR72);
                                                                                                                VAR23->VAR68 = 1;
                                                                                                                VAR26->VAR67 = 1;
                                                                                                                break;
                                                                                                            default:
                                                                                                                FUN4();
                                                                                                                if (VAR23->VAR68 && (VAR20->VAR83 & (VAR84 | VAR85)))
                                                                                                                {
                                                                                                                    char VAR86[1024];
                                                                                                                    VAR87 *VAR88;
                                                                                                                    int VAR89;
                                                                                                                    char *VAR90;
                                                                                                                    snprintf(VAR86, sizeof(VAR86), "", VAR91 ? VAR91 : VAR92, VAR10);
                                                                                                                    if (VAR20->VAR83 & VAR84)
                                                                                                                    {
                                                                                                                        VAR88 = fopen(VAR86, "");
                                                                                                                        if (!VAR88)
                                                                                                                        {
                                                                                                                            FUN9(VAR86);
                                                                                                                            VAR23->VAR93 = VAR88;
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                            VAR88 = fopen(VAR86, "");
                                                                                                                            if (!VAR88)
                                                                                                                            {
                                                                                                                                FUN9(VAR86);
                                                                                                                                FUN10(VAR88, 0, VAR94);
                                                                                                                                VAR89 = FUN11(VAR88);
                                                                                                                                FUN10(VAR88, 0, VAR95);
                                                                                                                                VAR90 = FUN7(VAR89 + 1);
                                                                                                                                if (!VAR90)
                                                                                                                                {
                                                                                                                                    fprintf(VAR43, "");
                                                                                                                                    fread(VAR90, 1, VAR89, VAR88);
                                                                                                                                    fclose(VAR88);
                                                                                                                                    VAR90[VAR89] = '';
                                                                                                                                    VAR20->VAR96 = VAR90;
                                                                                                                                    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
                                                                                                                                    {
                                                                                                                                        FUN12(VAR2[VAR10], VAR10, VAR2[VAR10]->VAR97, 1);
                                                                                                                                        fprintf(VAR43, "");
                                                                                                                                        for (VAR10 = 0; VAR10 < VAR15; VAR10++)
                                                                                                                                        {
                                                                                                                                            VAR23 = VAR24[VAR10];
                                                                                                                                            fprintf(VAR43, "", VAR27[VAR23->VAR48]->VAR37, VAR27[VAR23->VAR48]->VAR38, VAR23->VAR37, VAR23->VAR38);
                                                                                                                                            for (VAR10 = 0; VAR10 < VAR15; VAR10++)
                                                                                                                                            {
                                                                                                                                                VAR23 = VAR24[VAR10];
                                                                                                                                                if (VAR23->VAR68)
                                                                                                                                                {
                                                                                                                                                    VAR98 *VAR20;
                                                                                                                                                    VAR20 = FUN13(VAR23->VAR35->VAR20.VAR51);
                                                                                                                                                    if (!VAR20)
                                                                                                                                                    { fprintf ( VAR43 , "" , if ( FUN14 ( & VAR23 -> VAR35 -> VAR20 , VAR20 ) < 0 ) { fprintf ( VAR43 , "" , for ( VAR10 = 0 ; VAR10 < VAR14 ; VAR10 ++ ) {
                                                                                                                                                                VAR26 = VAR27[VAR10];
                                                                                                                                                                if (VAR26->VAR67)
                                                                                                                                                                {
                                                                                                                                                                    VAR98 *VAR20;
                                                                                                                                                                    VAR20 = FUN15(VAR26->VAR35->VAR20.VAR51);
                                                                                                                                                                    if (!VAR20)
                                                                                                                                                                    {
                                                                                                                                                                        fprintf(VAR43, "", VAR26->VAR35->VAR20.VAR51, VAR26->VAR37, VAR26->VAR38);
                                                                                                                                                                        if (FUN14(&VAR26->VAR35->VAR20, VAR20) < 0)
                                                                                                                                                                        {
                                                                                                                                                                            fprintf(VAR43, "", VAR26->VAR37, VAR26->VAR38);
                                                                                                                                                                            VAR26->VAR99 = 1;
                                                                                                                                                                            for (VAR10 = 0; VAR10 < VAR14; VAR10++)
                                                                                                                                                                            {
                                                                                                                                                                                VAR26 = VAR27[VAR10];
                                                                                                                                                                                for (VAR10 = 0; VAR10 < VAR5; VAR10++)
                                                                                                                                                                                {
                                                                                                                                                                                    VAR29[VAR10].VAR100 = 2048;
                                                                                                                                                                                    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
                                                                                                                                                                                    {
                                                                                                                                                                                        VAR18 = VAR2[VAR10];
                                                                                                                                                                                        if (FUN16(VAR18) < 0)
                                                                                                                                                                                        {
                                                                                                                                                                                            fprintf(VAR43, "", VAR10);
                                                                                                                                                                                            VAR9 = -VAR101;
                                                                                                                                                                                            goto VAR32;
                                                                                                                                                                                            if (!VAR102)
                                                                                                                                                                                            {
                                                                                                                                                                                                fprintf(VAR43, "");
                                                                                                                                                                                            }
                                                                                                                                                                                            else
                                                                                                                                                                                            {
                                                                                                                                                                                                fprintf(VAR43, "");
                                                                                                                                                                                                FUN17();
                                                                                                                                                                                                VAR30 = 0;
                                                                                                                                                                                                VAR31 = -1;
                                                                                                                                                                                                for (;;)
                                                                                                                                                                                                {
                                                                                                                                                                                                    int VAR37, VAR33;
                                                                                                                                                                                                    AVPacket VAR103;
                                                                                                                                                                                                    VAR77 *VAR104;
                                                                                                                                                                                                    int VAR105;
                                                                                                                                                                                                    VAR77 *VAR106;
                                                                                                                                                                                                    int VAR107, VAR108;
                                                                                                                                                                                                    AVPicture VAR109;
                                                                                                                                                                                                    short VAR110[VAR111 / 2];
                                                                                                                                                                                                    void *VAR112;
                                                                                                                                                                                                    double VAR113;
                                                                                                                                                                                                VAR114:
                                                                                                                                                                                                    if (VAR31)
                                                                                                                                                                                                    {
                                                                                                                                                                                                        VAR31 = FUN18();
                                                                                                                                                                                                        if (VAR31 == '')
                                                                                                                                                                                                            break;
                                                                                                                                                                                                        VAR37 = -1;
                                                                                                                                                                                                        VAR113 = 1e10;
                                                                                                                                                                                                        for (VAR10 = 0; VAR10 < VAR15; VAR10++)
                                                                                                                                                                                                        {
                                                                                                                                                                                                            double VAR115;
                                                                                                                                                                                                            VAR23 = VAR24[VAR10];
                                                                                                                                                                                                            VAR18 = VAR2[VAR23->VAR37];
                                                                                                                                                                                                            VAR26 = VAR27[VAR23->VAR48];
                                                                                                                                                                                                            VAR115 = (double)VAR23->VAR35->VAR115.VAR116 * VAR18->VAR117 / VAR18->VAR118;
                                                                                                                                                                                                            if (!VAR29[VAR26->VAR37].VAR119 && VAR115 < VAR113)
                                                                                                                                                                                                            {
                                                                                                                                                                                                                VAR113 = VAR115;
                                                                                                                                                                                                                VAR37 = VAR26->VAR37;
                                                                                                                                                                                                                if (VAR37 < 0)
                                                                                                                                                                                                                {
                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                    if (VAR120 > 0 && VAR113 >= (VAR120 / 1000000.0))
                                                                                                                                                                                                                        break;
                                                                                                                                                                                                                    VAR17 = VAR4[VAR37];
                                                                                                                                                                                                                    if (FUN19(VAR17, &VAR103) < 0)
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                        VAR29[VAR37].VAR119 = 1;
                                                                                                                                                                                                                        continue;
                                                                                                                                                                                                                        if (!VAR103.VAR89)
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                            VAR30 = VAR17;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                            VAR30 = 0;
                                                                                                                                                                                                                            if (VAR121)
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                FUN20("", VAR103.VAR46, VAR103.VAR89);
                                                                                                                                                                                                                                FUN21(VAR103.VAR80, VAR103.VAR89);
                                                                                                                                                                                                                                if (VAR103.VAR46 >= VAR29[VAR37].VAR34)
                                                                                                                                                                                                                                    goto VAR122;
                                                                                                                                                                                                                                VAR33 = VAR29[VAR37].VAR33 + VAR103.VAR46;
                                                                                                                                                                                                                                VAR26 = VAR27[VAR33];
                                                                                                                                                                                                                                if (VAR26->VAR39)
                                                                                                                                                                                                                                    goto VAR122;
                                                                                                                                                                                                                                VAR105 = VAR103.VAR89;
                                                                                                                                                                                                                                VAR104 = VAR103.VAR80;
                                                                                                                                                                                                                                VAR16 = 0;
                                                                                                                                                                                                                                while (VAR105 > 0)
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                    int64_t VAR123;
                                                                                                                                                                                                                                    VAR123 = VAR124;
                                                                                                                                                                                                                                    VAR106 = NULL;
                                                                                                                                                                                                                                    VAR107 = 0;
                                                                                                                                                                                                                                    if (VAR26->VAR67)
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                        if (VAR26->VAR99 && VAR103.VAR115 != VAR124 && !VAR16)
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                            VAR123 = VAR103.VAR115;
                                                                                                                                                                                                                                            VAR26->VAR99 = 0;
                                                                                                                                                                                                                                            VAR16 = 1;
                                                                                                                                                                                                                                            switch (VAR26->VAR35->VAR20.VAR49)
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                            case VAR54:
                                                                                                                                                                                                                                                VAR9 = FUN22(&VAR26->VAR35->VAR20, VAR110, &VAR107, VAR104, VAR105);
                                                                                                                                                                                                                                                if (VAR9 < 0)
                                                                                                                                                                                                                                                    goto VAR125;
                                                                                                                                                                                                                                                if (VAR107 <= 0)
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                    VAR104 += VAR9;
                                                                                                                                                                                                                                                    VAR105 -= VAR9;
                                                                                                                                                                                                                                                    continue;
                                                                                                                                                                                                                                                    VAR106 = (VAR77 *)VAR110;
                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                case VAR57:
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                    AVFrame VAR126;
                                                                                                                                                                                                                                                    VAR107 = (VAR26->VAR35->VAR20.VAR60 * VAR26->VAR35->VAR20.VAR61 * 3) / 2;
                                                                                                                                                                                                                                                    VAR9 = FUN23(&VAR26->VAR35->VAR20, &VAR126, &VAR108, VAR104, VAR105);
                                                                                                                                                                                                                                                    VAR109 = *(VAR127 *)&VAR126;
                                                                                                                                                                                                                                                    VAR26->VAR35->VAR128 = VAR126.VAR128;
                                                                                                                                                                                                                                                    if (VAR9 < 0)
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                    VAR125:
                                                                                                                                                                                                                                                        fprintf(VAR43, "", VAR26->VAR37, VAR26->VAR38);
                                                                                                                                                                                                                                                        FUN24(&VAR103);
                                                                                                                                                                                                                                                        goto VAR114;
                                                                                                                                                                                                                                                        if (!VAR108)
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                            VAR104 += VAR9;
                                                                                                                                                                                                                                                            VAR105 -= VAR9;
                                                                                                                                                                                                                                                            continue;
                                                                                                                                                                                                                                                            break;
                                                                                                                                                                                                                                                        default:
                                                                                                                                                                                                                                                            goto VAR125;
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                            VAR106 = VAR104;
                                                                                                                                                                                                                                                            VAR107 = VAR105;
                                                                                                                                                                                                                                                            VAR9 = VAR105;
                                                                                                                                                                                                                                                            VAR104 += VAR9;
                                                                                                                                                                                                                                                            VAR105 -= VAR9;
                                                                                                                                                                                                                                                            VAR112 = 0;
                                                                                                                                                                                                                                                            if (VAR26->VAR35->VAR20.VAR49 == VAR57)
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                FUN25(VAR26, &VAR109, &VAR112);
                                                                                                                                                                                                                                                                VAR26->VAR99 = 1;
                                                                                                                                                                                                                                                                if (VAR26->VAR35->VAR20.VAR40)
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                    int64_t VAR115 = FUN26((VAR129)VAR26->VAR42 * VAR26->VAR35->VAR20.VAR59, 1000000, VAR26->VAR35->VAR20.VAR58);
                                                                                                                                                                                                                                                                    int64_t VAR130 = FUN3() - VAR26->VAR41;
                                                                                                                                                                                                                                                                    if (VAR115 > VAR130)
                                                                                                                                                                                                                                                                        FUN27(VAR115 - VAR130);
                                                                                                                                                                                                                                                                    VAR26->VAR42++;
                                                                                                                                                                                                                                                                    if (VAR26->VAR35->VAR20.VAR51 == VAR131)
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                        if (VAR26->VAR35->VAR20.VAR132 != VAR133)
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                            int64_t VAR134;
                                                                                                                                                                                                                                                                            VAR134 = VAR26->VAR135;
                                                                                                                                                                                                                                                                            VAR26->VAR135 = VAR26->VAR136.VAR116;
                                                                                                                                                                                                                                                                            VAR26->VAR136.VAR116 = VAR134;
                                                                                                                                                                                                                                                                            for (VAR10 = 0; VAR10 < VAR15; VAR10++)
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                int VAR137;
                                                                                                                                                                                                                                                                                VAR23 = VAR24[VAR10];
                                                                                                                                                                                                                                                                                if (VAR23->VAR48 == VAR33)
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                    VAR18 = VAR2[VAR23->VAR37];
                                                                                                                                                                                                                                                                                    if (VAR123 != VAR124)
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                        FUN20("", VAR10, VAR103.VAR115 / 90000.0, (VAR123 - VAR23->VAR35->VAR115.VAR116) / 90000.0);
                                                                                                                                                                                                                                                                                        VAR23->VAR138 = (double)VAR123 * VAR17->VAR117 / VAR17->VAR118;
                                                                                                                                                                                                                                                                                        VAR23->VAR139 = VAR23->VAR35->VAR115.VAR116;
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                        VAR23->VAR138 = VAR124;
                                                                                                                                                                                                                                                                                        if (VAR23->VAR68)
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                            switch (VAR23->VAR35->VAR20.VAR49)
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                            case VAR54:
                                                                                                                                                                                                                                                                                                FUN28(VAR18, VAR23, VAR26, VAR106, VAR107);
                                                                                                                                                                                                                                                                                                break;
                                                                                                                                                                                                                                                                                            case VAR57:
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                int VAR10;
                                                                                                                                                                                                                                                                                                VAR22 *VAR140, *VAR141;
                                                                                                                                                                                                                                                                                                VAR140 = NULL;
                                                                                                                                                                                                                                                                                                for (VAR10 = 0; VAR10 < VAR15; VAR10++)
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                    VAR141 = VAR24[VAR10];
                                                                                                                                                                                                                                                                                                    if (VAR141->VAR37 == VAR23->VAR37 && VAR141->VAR35->VAR20.VAR49 == VAR54)
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                        VAR140 = VAR141;
                                                                                                                                                                                                                                                                                                        break;
                                                                                                                                                                                                                                                                                                        FUN29(VAR18, VAR23, VAR26, &VAR109, &VAR137, VAR140);
                                                                                                                                                                                                                                                                                                        if (VAR142 && VAR137)
                                                                                                                                                                                                                                                                                                            FUN30(VAR18, VAR23, VAR137);
                                                                                                                                                                                                                                                                                                        break;
                                                                                                                                                                                                                                                                                                    default:
                                                                                                                                                                                                                                                                                                        FUN4();
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                        AVFrame VAR143;
                                                                                                                                                                                                                                                                                                        memset(&VAR143, 0, sizeof(VAR144));
                                                                                                                                                                                                                                                                                                        VAR23->VAR35->VAR20.VAR145 = &VAR143;
                                                                                                                                                                                                                                                                                                        VAR143.VAR146 = VAR103.VAR83 & VAR147;
                                                                                                                                                                                                                                                                                                        FUN31(VAR18, VAR23->VAR38, VAR106, VAR107);
                                                                                                                                                                                                                                                                                                        VAR23->VAR35->VAR20.VAR148++;
                                                                                                                                                                                                                                                                                                        VAR23->VAR148++;
                                                                                                                                                                                                                                                                                                        FUN32(VAR112);
                                                                                                                                                                                                                                                                                                        VAR123 = VAR124;
                                                                                                                                                                                                                                                                                                    VAR122:
                                                                                                                                                                                                                                                                                                        FUN24(&VAR103);
                                                                                                                                                                                                                                                                                                        FUN33(VAR2, VAR24, VAR15, 0);
                                                                                                                                                                                                                                                                                                        FUN34();
                                                                                                                                                                                                                                                                                                        FUN33(VAR2, VAR24, VAR15, 1);
                                                                                                                                                                                                                                                                                                        for (VAR10 = 0; VAR10 < VAR15; VAR10++)
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                            VAR23 = VAR24[VAR10];
                                                                                                                                                                                                                                                                                                            if (VAR23->VAR68)
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                FUN35(&VAR23->VAR35->VAR20.VAR96);
                                                                                                                                                                                                                                                                                                                FUN36(&VAR23->VAR35->VAR20);
                                                                                                                                                                                                                                                                                                                for (VAR10 = 0; VAR10 < VAR14; VAR10++)
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                    VAR26 = VAR27[VAR10];
                                                                                                                                                                                                                                                                                                                    if (VAR26->VAR67)
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                        FUN36(&VAR26->VAR35->VAR20);
                                                                                                                                                                                                                                                                                                                        for (VAR10 = 0; VAR10 < VAR3; VAR10++)
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                            VAR18 = VAR2[VAR10];
                                                                                                                                                                                                                                                                                                                            FUN37(VAR18);
                                                                                                                                                                                                                                                                                                                            VAR9 = 0;
                                                                                                                                                                                                                                                                                                                        VAR149:
                                                                                                                                                                                                                                                                                                                            FUN32(VAR29);
                                                                                                                                                                                                                                                                                                                            if (VAR27)
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                for (VAR10 = 0; VAR10 < VAR14; VAR10++)
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                    VAR26 = VAR27[VAR10];
                                                                                                                                                                                                                                                                                                                                    FUN32(VAR26);
                                                                                                                                                                                                                                                                                                                                    FUN32(VAR27);
                                                                                                                                                                                                                                                                                                                                    if (VAR24)
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                        for (VAR10 = 0; VAR10 < VAR15; VAR10++)
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                            VAR23 = VAR24[VAR10];
                                                                                                                                                                                                                                                                                                                                            if (VAR23)
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                if (VAR23->VAR93)
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                    fclose(VAR23->VAR93);
                                                                                                                                                                                                                                                                                                                                                    VAR23->VAR93 = NULL;
                                                                                                                                                                                                                                                                                                                                                    FUN38(&VAR23->VAR62);
                                                                                                                                                                                                                                                                                                                                                    FUN32(VAR23->VAR79.VAR80[0]);
                                                                                                                                                                                                                                                                                                                                                    if (VAR23->VAR73)
                                                                                                                                                                                                                                                                                                                                                        FUN39(VAR23->VAR82);
                                                                                                                                                                                                                                                                                                                                                    if (VAR23->VAR64)
                                                                                                                                                                                                                                                                                                                                                        FUN40(VAR23->VAR66);
                                                                                                                                                                                                                                                                                                                                                    FUN32(VAR23);
                                                                                                                                                                                                                                                                                                                                                    FUN32(VAR24);
                                                                                                                                                                                                                                                                                                                                                    return VAR9;
                                                                                                                                                                                                                                                                                                                                                VAR32:
                                                                                                                                                                                                                                                                                                                                                    VAR9 = -VAR150;
                                                                                                                                                                                                                                                                                                                                                    goto VAR149