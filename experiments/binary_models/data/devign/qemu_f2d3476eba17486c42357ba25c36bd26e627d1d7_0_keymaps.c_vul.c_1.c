static VAR1 *FUN1(const VAR2 *VAR3, const char *VAR4, VAR1 *VAR5)
{
    VAR6 *VAR7;
    char *VAR8;
    char VAR9[1024];
    int VAR10;
    VAR8 = FUN2(VAR11, VAR4);
    if (!VAR5)
        VAR5 = FUN3(sizeof(VAR1));
    if (!(VAR8 && (VAR7 = fopen(VAR8, ""))))
    {
        fprintf(VAR12, "", VAR4);
        return NULL;
    }
    FUN4(VAR8);
    for (;;)
    {
        if (fgets(VAR9, 1024, VAR7) == NULL)
            break;
        VAR10 = strlen(VAR9);
        if (VAR10 > 0 && VAR9[VAR10 - 1] == '')
            VAR9[VAR10 - 1] = '';
        if (VAR9[0] == '')
            continue;
        if (!FUN5(VAR9, "", 4))
            continue;
        if (!FUN5(VAR9, "", 8))
        {
            FUN1(VAR3, VAR9 + 8, VAR5);
        }
        else
        {
            char *VAR13 = VAR9;
            while (*VAR13 != 0 && *VAR13 != '')
                VAR13++;
            if (*VAR13)
            {
                int VAR14;
                *VAR13 = 0;
                VAR14 = FUN6(VAR3, VAR9);
                if (VAR14 == 0)
                {
                }
                else
                {
                    const char *VAR15 = VAR13 + 1;
                    char *VAR16;
                    int VAR17 = FUN7(VAR15, &VAR16, 0);
                    if (VAR15 && strstr(VAR15, ""))
                    {
                        FUN8(&VAR5->VAR18, VAR17);
                        FUN8(&VAR5->VAR19, VAR14);
                    }
                    if (VAR15 && strstr(VAR15, ""))
                        VAR17 |= VAR20;
                    if (VAR15 && strstr(VAR15, ""))
                        VAR17 |= VAR21;
                    if (VAR15 && strstr(VAR15, ""))
                        VAR17 |= VAR22;
                    FUN9(VAR9, VAR14, VAR17, VAR5);
                    if (VAR15 && strstr(VAR15, ""))
                    {
                        char *VAR23;
                        for (VAR23 = VAR9; *VAR23; VAR23++)
                            *VAR23 = FUN10(*VAR23);
                        VAR14 = FUN6(VAR3, VAR9);
                        if (VAR14)
                            FUN9(VAR9, VAR14, VAR17 | VAR20, VAR5);
                    }
                }
            }
        }
    }
    fclose(VAR7);
    return VAR5;
}