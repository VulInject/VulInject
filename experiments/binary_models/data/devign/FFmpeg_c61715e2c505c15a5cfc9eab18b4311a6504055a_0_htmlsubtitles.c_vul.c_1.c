int FUN1(void *VAR1, VAR2 *VAR3, const char *VAR4)
{
    char *VAR5, VAR6[128], VAR7[128];
    int VAR8, VAR9, VAR10 = 1, VAR11 = 1, VAR12 = 0, VAR13 = 0;
    SrtStack VAR14[16];
    int VAR15 = 0;
    VAR14[0].VAR16[0] = 0;
    strcpy(VAR14[0].VAR5[VAR17], "");
    strcpy(VAR14[0].VAR5[VAR18], "");
    strcpy(VAR14[0].VAR5[VAR19], "");
    for (; !VAR13 && *VAR4; VAR4++)
    {
        switch (*VAR4)
        {
        case '':
            break;
        case '':
            if (VAR11)
            {
                VAR13 = 1;
                break;
            }
            FUN2(VAR3);
            FUN3(VAR3, "");
            VAR11 = 1;
            break;
        case '':
            if (!VAR11)
                FUN4(VAR3, *VAR4, 1);
            break;
        case '':
            FUN5(VAR3, &VAR4, &VAR12, &VAR15);
            break;
        case '':
            VAR9 = VAR4[1] == '';
            VAR8 = 0;
            if (sscanf(VAR4 + VAR9 + 1, "", VAR6, &VAR8) >= 1 && VAR8 > 0)
            {
                const char *VAR20 = VAR6;
                while (*VAR20 == '')
                    VAR20++;
                if ((VAR5 = strchr(VAR20, '')))
                    *VAR5++ = 0;
                if ((!VAR9 && VAR10 < FUN6(VAR14)) || (VAR9 && VAR10 > 0 && !FUN7(VAR14[VAR10 - 1].VAR16, VAR20)))
                {
                    int VAR21, VAR22, VAR23 = 0;
                    VAR4 += VAR8 + VAR9;
                    if (!VAR9)
                        memset(VAR14 + VAR10, 0, sizeof(*VAR14));
                    if (!FUN7(VAR20, ""))
                    {
                        if (VAR9)
                        {
                            for (VAR21 = VAR24 - 1; VAR21 >= 0; VAR21--)
                                if (VAR14[VAR10 - 1].VAR5[VAR21][0])
                                    for (VAR22 = VAR10 - 2; VAR22 >= 0; VAR22--)
                                        if (VAR14[VAR22].VAR5[VAR21][0])
                                        {
                                            FUN3(VAR3, "", VAR14[VAR22].VAR5[VAR21]);
                                            break;
                                        }
                        }
                        else
                        {
                            while (VAR5)
                            {
                                if (!FUN8(VAR5, "", 5))
                                {
                                    unsigned VAR25;
                                    VAR5 += 5 + (VAR5[5] == '');
                                    if (sscanf(VAR5, "", &VAR25) == 1)
                                    {
                                        snprintf(VAR14[VAR10].VAR5[VAR17], sizeof(VAR14[0].VAR5[VAR17]), "", VAR25);
                                    }
                                }
                                else if (!FUN8(VAR5, "", 6))
                                {
                                    VAR5 += 6 + (VAR5[6] == '');
                                    snprintf(VAR14[VAR10].VAR5[VAR18], sizeof(VAR14[0].VAR5[VAR18]), "", FUN9(VAR1, VAR5));
                                }
                                else if (!FUN8(VAR5, "", 5))
                                {
                                    VAR5 += 5 + (VAR5[5] == '');
                                    VAR8 = strcspn(VAR5, VAR5[-1] == '""\"" : "");
                                    FUN10(VAR7, VAR5, FUN11(sizeof(VAR7), VAR8 + 1));
                                    VAR5 += VAR8;
                                    snprintf(VAR14[VAR10].VAR5[VAR19], sizeof(VAR14[0].VAR5[VAR19]), "", VAR7);
                                }
                                if ((VAR5 = strchr(VAR5, '')))
                                    VAR5++;
                            }
                            for (VAR21 = 0; VAR21 < VAR24; VAR21++)
                                if (VAR14[VAR10].VAR5[VAR21][0])
                                    FUN3(VAR3, "", VAR14[VAR10].VAR5[VAR21]);
                        }
                    }
                    else if (VAR20[0] && !VAR20[1] && FUN12("", VAR20))
                    {
                        FUN3(VAR3, "", (char)FUN13(VAR20[0]), !VAR9);
                    }
                    else if (!FUN7(VAR20, ""))
                    {
                        FUN3(VAR3, "");
                    }
                    else
                    {
                        VAR23 = 1;
                        snprintf(VAR7, sizeof(VAR7), "", VAR20);
                    }
                    if (VAR9)
                    {
                        VAR10--;
                    }
                    else if (VAR23 && !strstr(VAR4, VAR7))
                    {
                        VAR4 -= VAR8 + VAR9;
                        FUN4(VAR3, *VAR4, 1);
                    }
                    else
                        FUN10(VAR14[VAR10++].VAR16, VAR20, sizeof(VAR14[0].VAR16));
                    break;
                }
            }
        default:
            FUN4(VAR3, *VAR4, 1);
            break;
        }
        if (*VAR4 != '' && *VAR4 != '' && *VAR4 != '')
            VAR11 = 0;
    }
    if (!FUN14(VAR3))
        return FUN15(VAR26);
    while (VAR3->VAR8 >= 2 && !FUN16(&VAR3->VAR27[VAR3->VAR8 - 2], "", 2))
        VAR3->VAR8 -= 2;
    VAR3->VAR27[VAR3->VAR8] = 0;
    FUN2(VAR3);
    return 0;
}