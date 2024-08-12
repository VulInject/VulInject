static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *const VAR12 = &VAR9->VAR13[0]->VAR12;
    int VAR14 = 0;
    uint8_t VAR15 = 128;
    VAR16 *VAR17;
    int VAR18, VAR19;
    VAR9->VAR20 = VAR6;
    if ((VAR19 = FUN2(VAR4, VAR2->VAR21 * VAR2->VAR22 * ((8 * 2 + 1 + 1) * 4) / 8 + VAR23)) < 0)
    {
        FUN3(VAR2, VAR24, "");
        return VAR19;
    }
    FUN4(VAR12, VAR4->VAR25, VAR4->VAR26);
    FUN5(VAR12, 0.05 * (1LL << 32), 256 - 8);
    if (VAR2->VAR27 == 0 || VAR9->VAR28 % VAR2->VAR27 == 0)
    {
        FUN6(VAR12, &VAR15, 1);
        VAR9->VAR29 = 1;
        VAR9->VAR30++;
        FUN7(VAR9);
    }
    else
    {
        FUN6(VAR12, &VAR15, 0);
        VAR9->VAR29 = 0;
    }
    if (VAR9->VAR31 == VAR32)
    {
        int VAR18;
        for (VAR18 = 1; VAR18 < 256; VAR18++)
        {
            VAR12->VAR33[VAR18] = VAR9->VAR34[VAR18];
            VAR12->VAR35[256 - VAR18] = 256 - VAR12->VAR33[VAR18];
        }
    }
    for (VAR18 = 1; VAR18 < VAR9->VAR36; VAR18++)
    {
        VAR8 *VAR37 = VAR9->VAR13[VAR18];
        VAR16 *VAR38 = VAR4->VAR25 + (VAR4->VAR26 - VAR14) * (VAR39)VAR18 / VAR9->VAR36;
        int VAR40 = VAR4->VAR26 / VAR9->VAR36;
        FUN4(&VAR37->VAR12, VAR38, VAR40);
    }
    VAR2->FUN8(VAR2, VAR41, &VAR9->VAR13[0], NULL, VAR9->VAR36, sizeof(void *));
    VAR17 = VAR4->VAR25;
    for (VAR18 = 0; VAR18 < VAR9->VAR36; VAR18++)
    {
        VAR8 *VAR37 = VAR9->VAR13[VAR18];
        int VAR42;
        if (VAR37->VAR31 != VAR43)
        {
            uint8_t VAR44 = 129;
            FUN6(&VAR37->VAR12, &VAR44, 0);
            VAR42 = FUN9(&VAR37->VAR12);
        }
        else
        {
            FUN10(&VAR37->VAR45);
            VAR42 = VAR37->VAR46 + (FUN11(&VAR37->VAR45) + 7) / 8;
        }
        if (VAR18 > 0 || VAR9->VAR47 > 2)
        {
            FUN12(VAR42 < VAR4->VAR26 / VAR9->VAR36);
            memmove(VAR17, VAR37->VAR12.VAR48, VAR42);
            FUN12(VAR42 < (1 << 24));
            FUN13(VAR17 + VAR42, VAR42);
            VAR42 += 3;
        }
        if (VAR9->VAR49)
        {
            unsigned VAR50;
            VAR17[VAR42++] = 0;
            VAR50 = FUN14(FUN15(VAR51), 0, VAR17, VAR42);
            FUN16(VAR17 + VAR42, VAR50);
            VAR42 += 4;
        }
        VAR17 += VAR42;
    }
    if ((VAR2->VAR52 & VAR53) && (VAR9->VAR28 & 31) == 0)
    {
        int VAR54, VAR55, VAR56;
        char *VAR57 = VAR2->VAR58;
        char *VAR59 = VAR57 + VAR60;
        memset(VAR9->VAR61, 0, sizeof(VAR9->VAR61));
        for (VAR18 = 0; VAR18 < VAR9->VAR62; VAR18++)
            memset(VAR9->VAR63[VAR18], 0, VAR9->VAR64[VAR18] * sizeof(*VAR9->VAR63[VAR18]));
        for (VAR54 = 0; VAR54 < VAR9->VAR36; VAR54++)
        {
            VAR8 *VAR37 = VAR9->VAR13[VAR54];
            for (VAR18 = 0; VAR18 < 256; VAR18++)
            {
                VAR9->VAR61[VAR18][0] += VAR37->VAR61[VAR18][0];
                VAR9->VAR61[VAR18][1] += VAR37->VAR61[VAR18][1];
            }
            for (VAR18 = 0; VAR18 < VAR9->VAR62; VAR18++)
            {
                for (VAR55 = 0; VAR55 < VAR9->VAR64[VAR18]; VAR55++)
                    for (VAR56 = 0; VAR56 < 32; VAR56++)
                    {
                        VAR9->VAR63[VAR18][VAR55][VAR56][0] += VAR37->VAR63[VAR18][VAR55][VAR56][0];
                        VAR9->VAR63[VAR18][VAR55][VAR56][1] += VAR37->VAR63[VAR18][VAR55][VAR56][1];
                    }
            }
        }
        for (VAR54 = 0; VAR54 < 256; VAR54++)
        {
            snprintf(VAR57, VAR59 - VAR57, "" VAR65 "" VAR65 "", VAR9->VAR61[VAR54][0], VAR9->VAR61[VAR54][1]);
            VAR57 += strlen(VAR57);
        }
        snprintf(VAR57, VAR59 - VAR57, "");
        for (VAR18 = 0; VAR18 < VAR9->VAR62; VAR18++)
        {
            for (VAR54 = 0; VAR54 < VAR9->VAR64[VAR18]; VAR54++)
                for (VAR56 = 0; VAR56 < 32; VAR56++)
                {
                    snprintf(VAR57, VAR59 - VAR57, "" VAR65 "" VAR65 "", VAR9->VAR63[VAR18][VAR54][VAR56][0], VAR9->VAR63[VAR18][VAR54][VAR56][1]);
                    VAR57 += strlen(VAR57);
                }
        }
        snprintf(VAR57, VAR59 - VAR57, "", VAR9->VAR30);
    }
    else if (VAR2->VAR52 & VAR53)
        VAR2->VAR58[0] = '';
    FF_DISABLE_DEPRECATION_WARNINGS VAR2->VAR66->VAR29 = VAR9->VAR29;
    FF_ENABLE_DEPRECATION_WARNINGS VAR9->VAR28++;
    VAR4->VAR26 = VAR17 - VAR4->VAR25;
    VAR4->VAR52 |= VAR67 * VAR9->VAR29;
    *VAR7 = 1;
    return 0;
}