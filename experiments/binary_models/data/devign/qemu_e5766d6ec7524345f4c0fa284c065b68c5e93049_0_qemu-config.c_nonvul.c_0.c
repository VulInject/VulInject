int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5)
{
    char VAR6[1024], VAR7[64], VAR8[64], VAR9[64], VAR10[1024];
    Location VAR11;
    VAR3 *VAR12 = NULL;
    VAR13 *VAR14 = NULL;
    VAR15 *VAR16 = NULL;
    int VAR17 = -VAR18, VAR19 = 0;
    int VAR20 = 0;
    FUN2(&VAR11);
    while (fgets(VAR6, sizeof(VAR6), VAR2) != NULL)
    {
        FUN3(VAR5, ++VAR19);
        if (VAR6[0] == '')
        {
            continue;
        }
        if (VAR6[0] == '')
        {
            continue;
        }
        if (sscanf(VAR6, ""%63[^\""]", VAR7, VAR8) == 2)
        {
            VAR12 = FUN4(VAR4, VAR7, &VAR14);
            if (VAR14)
            {
                FUN5(VAR14);
                goto VAR21;
            }
            VAR16 = FUN6(VAR12, VAR8, 1, NULL);
            VAR20++;
            continue;
        }
        if (sscanf(VAR6, "", VAR7) == 1)
        {
            VAR12 = FUN4(VAR4, VAR7, &VAR14);
            if (VAR14)
            {
                FUN5(VAR14);
                goto VAR21;
            }
            VAR16 = FUN6(VAR12, NULL, 0, &VAR22);
            VAR20++;
            continue;
        }
        VAR10[0] = '';
        if (sscanf(VAR6, ""%1023[^\"""" %63s = \""", VAR9) == 1)
        {
            if (VAR16 == NULL)
            {
                FUN7("");
                goto VAR21;
            }
            FUN8(VAR16, VAR9, VAR10, &VAR14);
            if (VAR14)
            {
                FUN5(VAR14);
                goto VAR21;
            }
            continue;
        }
        FUN7("");
        goto VAR21;
    }
    if (FUN9(VAR2))
    {
        FUN7("");
        goto VAR21;
    }
    VAR17 = VAR20;
VAR21:
    FUN10(&VAR11);
    return VAR17;
}