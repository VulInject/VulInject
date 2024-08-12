static int FUN1(VAR1 *VAR2)
{
    char *VAR3;
    int VAR4;
    char VAR5[32];
    char VAR6[1024], *VAR7;
    char VAR8[1024], *VAR9;
    char VAR10[32];
    char VAR11[1024];
    const char *VAR12;
    VAR13 *VAR14;
    VAR3 = VAR2->VAR15;
    VAR9 = VAR5;
    while (!FUN2(*VAR3) && *VAR3 != '')
    {
        if ((VAR9 - VAR5) < sizeof(VAR5) - 1)
            *VAR9++ = *VAR3;
        VAR3++;
    }
    *VAR9 = '';
    if (!strcmp(VAR5, ""))
        VAR4 = 0;
    else if (!strcmp(VAR5, ""))
        VAR4 = 1;
    else
        return -1;
    while (FUN2(*VAR3))
        VAR3++;
    VAR9 = VAR8;
    while (!FUN2(*VAR3) && *VAR3 != '')
    {
        if ((VAR9 - VAR8) < sizeof(VAR8) - 1)
            *VAR9++ = *VAR3;
        VAR3++;
    }
    *VAR9 = '';
    while (FUN2(*VAR3))
        VAR3++;
    VAR9 = VAR10;
    while (!FUN2(*VAR3) && *VAR3 != '')
    {
        if ((VAR9 - VAR10) < sizeof(VAR10) - 1)
            *VAR9++ = *VAR3;
        VAR3++;
    }
    *VAR9 = '';
    if (strcmp(VAR10, "") && strcmp(VAR10, ""))
        return -1;
    VAR3 = VAR8;
    if (*VAR3 == '')
        VAR3++;
    VAR7 = VAR3;
    VAR3 = strchr(VAR3, '');
    if (VAR3)
    {
        strcpy(VAR6, VAR3);
        *VAR3 = '';
    }
    else
    {
        VAR6[0] = '';
    }
    VAR14 = VAR16;
    while (VAR14 != NULL)
    {
        if (!strcmp(VAR14->VAR7, VAR7))
            break;
        VAR14 = VAR14->VAR17;
    }
    if (VAR14 == NULL)
    {
        sprintf(VAR11, "", VAR8);
        goto VAR18;
    }
    VAR2->VAR14 = VAR14;
    {
        char VAR19[32], VAR20[32], *VAR3;
        time_t VAR21;
        VAR3 = FUN3(VAR2->VAR22.VAR23);
        strcpy(VAR19, VAR3);
        VAR21 = FUN4(NULL);
        VAR3 = FUN5(&VAR21);
        strcpy(VAR20, VAR3);
        VAR3 = VAR20 + strlen(VAR3) - 1;
        if (*VAR3 == '')
            *VAR3 = '';
        FUN6(""%VAR24 %VAR24 %VAR24\"", VAR19, VAR20, VAR5, VAR8, VAR10, 200, 1024);
    }
    if (VAR4)
    {
        if (!VAR14->VAR25)
        {
            sprintf(VAR11, "");
            goto VAR18;
        }
        if (FUN7(VAR2) < 0)
        {
            sprintf(VAR11, "");
            goto VAR18;
        }
        VAR2->VAR26 = 0;
        VAR2->VAR27 = VAR28;
        return 0;
    }
    if (VAR2->VAR14->VAR29 == VAR30)
        goto VAR31;
    if (FUN8(VAR2, VAR6) < 0)
    {
        sprintf(VAR11, "", VAR8);
        goto VAR18;
    }
    VAR9 = VAR2->VAR15;
    VAR9 += sprintf(VAR9, "");
    VAR12 = VAR2->VAR14->VAR32->VAR12;
    if (!VAR12)
        VAR12 = "";
    VAR9 += sprintf(VAR9, "");
    if (!strcmp(VAR2->VAR14->VAR32->VAR33, ""))
    {
        VAR9 += sprintf(VAR9, ""VAR34\"");
        VAR12 = "";
    }
    VAR9 += sprintf(VAR9, "", VAR12);
    VAR9 += sprintf(VAR9, "");
    VAR2->VAR26 = 0;
    VAR2->VAR35 = VAR2->VAR15;
    VAR2->VAR36 = VAR9;
    VAR2->VAR27 = VAR37;
    return 0;
VAR18:
    VAR2->VAR26 = 404;
    VAR9 = VAR2->VAR15;
    VAR9 += sprintf(VAR9, "");
    VAR9 += sprintf(VAR9, "", "");
    VAR9 += sprintf(VAR9, "");
    VAR9 += sprintf(VAR9, "");
    VAR9 += sprintf(VAR9, "");
    VAR9 += sprintf(VAR9, "", VAR11);
    VAR9 += sprintf(VAR9, "");
    VAR2->VAR35 = VAR2->VAR15;
    VAR2->VAR36 = VAR9;
    VAR2->VAR27 = VAR37;
    return 0;
VAR31:
    FUN9(VAR2);
    VAR2->VAR26 = 200;
    VAR2->VAR27 = VAR37;
    return 0;
}