static int FUN1(const char *VAR1)
{
    const char *VAR2;
    char *VAR3;
    char VAR4[64];
    char VAR5[1024];
    int VAR6, VAR7;
    VAR8 *VAR9;
    VAR2 = VAR1;
    VAR3 = VAR4;
    while (*VAR2 != '' && *VAR2 != '')
    {
        if ((VAR3 - VAR4) < sizeof(VAR4) - 1)
            *VAR3++ = *VAR2;
        VAR2++;
    }
    *VAR3 = '';
    if (*VAR2 == '')
        VAR2++;
    VAR6 = 0;
    if (FUN2(VAR5, sizeof(VAR5), "", VAR2))
    {
        VAR6 = FUN3(VAR5, NULL, 0);
    }
    VAR9 = FUN4(VAR6);
    if (!VAR9)
    {
        fprintf(VAR10, "", VAR6);
        return -1;
    }
    if (!strcmp(VAR4, ""))
    {
        VAR11 *VAR12;
        VAR13 *VAR14;
        if (VAR15 >= VAR16)
        {
            fprintf(VAR10, "");
            return -1;
        }
        VAR12 = &VAR17[VAR15];
        VAR14 = VAR12->VAR14;
        VAR14[0] = 0x52;
        VAR14[1] = 0x54;
        VAR14[2] = 0x00;
        VAR14[3] = 0x12;
        VAR14[4] = 0x34;
        VAR14[5] = 0x56 + VAR15;
        if (FUN2(VAR5, sizeof(VAR5), "", VAR2))
        {
            if (FUN5(VAR14, VAR5) < 0)
            {
                fprintf(VAR10, "");
                return -1;
            }
        }
        if (FUN2(VAR5, sizeof(VAR5), "", VAR2))
        {
            VAR12->VAR18 = strdup(VAR5);
        }
        VAR12->VAR9 = VAR9;
        VAR15++;
        VAR9->VAR19++;
        VAR7 = 0;
    }
    else if (!strcmp(VAR4, ""))
    {
        VAR7 = 0;
    }
    else if (!strcmp(VAR4, ""))
    {
        if (FUN2(VAR5, sizeof(VAR5), "", VAR2))
        {
            FUN6(VAR20, sizeof(VAR20), VAR5);
        }
        VAR7 = FUN7(VAR9);
    }
    else if (!strcmp(VAR4, ""))
    {
        char VAR21[64];
        if (FUN2(VAR21, sizeof(VAR21), "", VAR2) <= 0)
        {
            fprintf(VAR10, "");
            return -1;
        }
        VAR7 = FUN8(VAR9, VAR21);
    }
    else if (!strcmp(VAR4, ""))
    {
        char VAR21[64];
        char VAR22[1024];
        int VAR23;
        if (FUN2(VAR5, sizeof(VAR5), "", VAR2) > 0)
        {
            VAR23 = FUN3(VAR5, NULL, 0);
            VAR7 = -1;
            if (FUN9(VAR9, VAR23))
                VAR7 = 0;
        }
        else
        {
            if (FUN2(VAR21, sizeof(VAR21), "", VAR2) <= 0)
            {
                VAR21[0] = '';
            }
            if (FUN2(VAR22, sizeof(VAR22), "", VAR2) == 0)
            {
                FUN6(VAR22, sizeof(VAR22), VAR24);
            }
            VAR7 = FUN10(VAR9, VAR21, VAR22);
        }
    }
    else if (!strcmp(VAR4, ""))
    {
        if (FUN2(VAR5, sizeof(VAR5), "", VAR2) > 0)
        {
            int VAR23;
            VAR23 = FUN3(VAR5, NULL, 0);
            VAR7 = -1;
            if (FUN11(VAR9, VAR23, 1))
                VAR7 = 0;
        }
        else if (FUN2(VAR5, sizeof(VAR5), "", VAR2) > 0)
        {
            VAR7 = FUN12(VAR9, VAR5);
        }
        else if (FUN2(VAR5, sizeof(VAR5), "", VAR2) > 0)
        {
            VAR7 = FUN13(VAR9, VAR5);
        }
        else if (FUN2(VAR5, sizeof(VAR5), "", VAR2) > 0)
        {
            VAR7 = FUN14(VAR9, VAR5);
        }
        else
        {
            fprintf(VAR10, "", VAR2);
            return -1;
        }
    }
    else
    {
        fprintf(VAR10, "", VAR4);
        return -1;
    }
    if (VAR7 < 0)
    {
        fprintf(VAR10, "", VAR4);
    }
    return VAR7;