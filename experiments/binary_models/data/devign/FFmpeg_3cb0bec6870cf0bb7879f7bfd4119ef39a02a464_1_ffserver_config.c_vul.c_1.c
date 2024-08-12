static int FUN1(VAR1 *VAR2, const char *VAR3, const char **VAR4, VAR5 **VAR6)
{
    VAR5 *VAR7;
    char VAR8[1024];
    FUN2(VAR6);
    VAR7 = *VAR6;
    if (!FUN3(VAR3, ""))
    {
        char *VAR9;
        VAR5 *VAR10;
        VAR7 = FUN4(sizeof(VAR5));
        if (!VAR7)
            return FUN5(VAR11);
        FUN6(VAR7->VAR12, sizeof(VAR7->VAR12), VAR4);
        VAR9 = strrchr(VAR7->VAR12, '');
        if (*VAR9)
            *VAR9 = '';
        for (VAR10 = VAR2->VAR13; VAR10; VAR10 = VAR10->VAR14)
        {
            if (!strcmp(VAR7->VAR12, VAR10->VAR12))
                FUN7("", VAR10->VAR12);
        }
        VAR7->VAR15 = FUN8("", NULL, NULL);
        snprintf(VAR7->VAR16, sizeof(VAR7->VAR16), "", VAR7->VAR12);
        VAR7->VAR17 = 5 * 1024 * 1024;
        VAR7->VAR18 = 1;
        VAR7->VAR7 = VAR7;
        *VAR6 = VAR7;
        return 0;
    }
    FUN2(VAR7);
    if (!FUN3(VAR3, ""))
    {
        int VAR19;
        VAR7->VAR20 = FUN4(64 * sizeof(char *));
        if (!VAR7->VAR20)
            return FUN5(VAR11);
        for (VAR19 = 0; VAR19 < 62; VAR19++)
        {
            FUN6(VAR8, sizeof(VAR8), VAR4);
            if (!VAR8[0])
                break;
            VAR7->VAR20[VAR19] = FUN9(VAR8);
            if (!VAR7->VAR20[VAR19])
                return FUN5(VAR11);
        } VAR7 -> VAR20 [ VAR19 ] = FUN10 ( ""127.0.0.1""VAR21""VAR22""VAR23""VAR23""VAR24""Truncate N syntax in configuration file is VAR25, ""use Truncate alone with no VAR26\VAR27""VAR28""Invalid file VAR29: %VAR10\VAR27""Feed max file size is too VAR30, must be at VAR31 %VAR32\VAR27""</VAR33>""Invalid VAR34 '' VAR35 <VAR33></VAR33>\VAR27" , VAR3 ) ; } return 0 ; }