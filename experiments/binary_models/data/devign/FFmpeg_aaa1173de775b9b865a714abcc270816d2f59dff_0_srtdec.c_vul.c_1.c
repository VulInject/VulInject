static const char *FUN1(VAR1 *VAR2, char *VAR3, char *VAR4, const char *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    char VAR10, *VAR11, VAR12[128], VAR13[128];
    int VAR14, VAR15, VAR16 = 1, VAR17 = 1, VAR18 = 0, VAR19 = 0;
    SrtStack VAR20[16];
    VAR20[0].VAR21[0] = 0;
    strcpy(VAR20[0].VAR11[VAR22], "");
    strcpy(VAR20[0].VAR11[VAR23], "");
    strcpy(VAR20[0].VAR11[VAR24], "");
    if (VAR6 >= 0 && VAR7 >= 0)
    {
        if (VAR8 >= 0 && VAR9 >= 0 && (VAR8 != VAR6 || VAR9 != VAR7))
            VAR3 += snprintf(VAR3, VAR4 - VAR3, "", VAR6, VAR7, VAR8, VAR9);
        else
            VAR3 += snprintf(VAR3, VAR4 - VAR3, "", VAR6, VAR7);
    }
    for (; VAR3 < VAR4 && !VAR19 && *VAR5; VAR5++)
    {
        switch (*VAR5)
        {
        case '':
            break;
        case '':
            if (VAR17)
            {
                VAR19 = 1;
                break;
            }
            while (VAR3[-1] == '')
                VAR3--;
            VAR3 += snprintf(VAR3, VAR4 - VAR3, "");
            VAR17 = 1;
            break;
        case '':
            if (!VAR17)
                *VAR3++ = *VAR5;
            break;
        case '':
            VAR18 += sscanf(VAR5, "", &VAR10) == 1;
            if ((VAR18 != 1 && sscanf(VAR5, "", &VAR14, &VAR10) > 0) || sscanf(VAR5, "", &VAR14, &VAR10) > 0)
            {
                VAR5 += VAR14 - 1;
            }
            else
                *VAR3++ = *VAR5;
            break;
        case '':
            VAR15 = VAR5[1] == '';
            if (sscanf(VAR5 + VAR15 + 1, "", VAR12, &VAR14, &VAR10) >= 2)
            {
                if ((VAR11 = strchr(VAR12, '')))
                    *VAR11++ = 0;
                if ((!VAR15 && VAR16 < FUN2(VAR20)) || (VAR15 && VAR16 > 0 && !strcmp(VAR20[VAR16 - 1].VAR21, VAR12)))
                {
                    int VAR25, VAR26, VAR27 = 0;
                    VAR5 += VAR14 + VAR15;
                    if (!VAR15)
                        memset(VAR20 + VAR16, 0, sizeof(*VAR20));
                    if (!strcmp(VAR12, ""))
                    {
                        if (VAR15)
                        {
                            for (VAR25 = VAR28 - 1; VAR25 >= 0; VAR25--)
                                if (VAR20[VAR16 - 1].VAR11[VAR25][0])
                                    for (VAR26 = VAR16 - 2; VAR26 >= 0; VAR26--)
                                        if (VAR20[VAR26].VAR11[VAR25][0])
                                        {
                                            VAR3 += snprintf(VAR3, VAR4 - VAR3, VAR20[VAR26].VAR11[VAR25]);
                                            break;
                                        }
                        }
                        else
                        {
                            while (VAR11)
                            {
                                if (!FUN3(VAR11, "", 5))
                                {
                                    unsigned VAR29;
                                    VAR11 += 5 + (VAR11[5] == '');
                                    if (sscanf(VAR11, "", &VAR29) == 1)
                                    {
                                        snprintf(VAR20[VAR16].VAR11[VAR22], sizeof(VAR20[0].VAR11[VAR22]), "", VAR29);
                                    }
                                }
                                else if (!FUN3(VAR11, "", 6))
                                {
                                    VAR11 += 6 + (VAR11[6] == '');
                                    snprintf(VAR20[VAR16].VAR11[VAR23], sizeof(VAR20[0].VAR11[VAR23]), "", FUN4(VAR2, VAR11));
                                }
                                else if (!FUN3(VAR11, "", 5))
                                {
                                    VAR11 += 5 + (VAR11[5] == '');
                                    VAR14 = strcspn(VAR11, VAR11[-1] == '""\"" : "");
                                    FUN5(VAR13, VAR11, FUN6(sizeof(VAR13), VAR14 + 1));
                                    VAR11 += VAR14;
                                    snprintf(VAR20[VAR16].VAR11[VAR24], sizeof(VAR20[0].VAR11[VAR24]), "", VAR13);
                                }
                                if ((VAR11 = strchr(VAR11, '')))
                                    VAR11++;
                            }
                            for (VAR25 = 0; VAR25 < VAR28; VAR25++)
                                if (VAR20[VAR16].VAR11[VAR25][0])
                                    VAR3 += snprintf(VAR3, VAR4 - VAR3, VAR20[VAR16].VAR11[VAR25]);
                        }
                    }
                    else if (!VAR12[1] && strspn(VAR12, "") == 1)
                    {
                        VAR3 += snprintf(VAR3, VAR4 - VAR3, "", VAR12[0], !VAR15);
                    }
                    else
                    {
                        VAR27 = 1;
                        snprintf(VAR13, sizeof(VAR13), "", VAR12);
                    }
                    if (VAR15)
                    {
                        VAR16--;
                    }
                    else if (VAR27 && !strstr(VAR5, VAR13))
                    {
                        VAR5 -= VAR14 + VAR15;
                        *VAR3++ = *VAR5;
                    }
                    else
                        FUN5(VAR20[VAR16++].VAR21, VAR12, sizeof(VAR20[0].VAR21));
                    break;
                }
            }
        default:
            *VAR3++ = *VAR5;
            break;
        }
        if (*VAR5 != '' && *VAR5 != '' && *VAR5 != '')
            VAR17 = 0;
    }
    VAR3 = FUN6(VAR3, VAR4 - 3);
    while (!FUN3(VAR3 - 2, "", 2))
        VAR3 -= 2;
    while (VAR3[-1] == '')
        VAR3--;
    VAR3 += snprintf(VAR3, VAR4 - VAR3, "");
    return VAR5;
}