static int FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = NULL;
    char VAR6[1024];
    char VAR7[1024];
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    char VAR16[512];
    int VAR17 = 0;
    if (!VAR18)
    {
        FUN2("");
        goto VAR19;
    }
    snprintf(VAR6, sizeof(VAR6), "", VAR18);
    VAR5 = fopen(VAR6, "");
    if (!VAR5)
    {
        FUN2("");
        goto VAR19;
    }
    VAR11 = 0;
    VAR8 = VAR9 = VAR12 = VAR13 = VAR14 = VAR15 = 0;
    VAR10 = -1;
    for (;;)
    {
        if (fgets(VAR6, sizeof(VAR6), VAR5) == NULL)
        {
            break;
        }
        if (strlen(VAR6) > 0)
        {
            VAR6[strlen(VAR6) - 1] = '';
        }
        if (VAR6[0] == '' && VAR6[1] == '')
        {
            if (VAR11 && (VAR14 || VAR13))
            {
                VAR17 = FUN3(VAR1, VAR8, VAR9, 0, VAR12, VAR14, VAR13, VAR16, VAR10);
                if (VAR17)
                {
                    goto VAR19;
                }
            }
            if (FUN4(VAR7, sizeof(VAR7), VAR6, "", "") < 0)
            {
                goto VAR20;
            }
            VAR8 = FUN5(VAR7);
            if (FUN4(VAR7, sizeof(VAR7), VAR6, "", "") < 0)
            {
                goto VAR20;
            }
            VAR15 = FUN5(VAR7);
            if (FUN4(VAR7, sizeof(VAR7), VAR6, "", "") < 0)
            {
                goto VAR20;
            }
            VAR9 = FUN5(VAR7);
            if (FUN4(VAR7, sizeof(VAR7), VAR6, "", "") < 0)
            {
                goto VAR20;
            }
            if (!strcmp(VAR7, ""))
            {
                VAR10 = VAR21;
            }
            else if (!strcmp(VAR7, ""))
            {
                VAR10 = VAR22;
            }
            else if (!strcmp(VAR7, ""))
            {
                VAR10 = VAR23;
            }
            else
            {
                VAR10 = VAR24;
            }
            VAR16[0] = '';
            VAR12 = 0xff;
            VAR11++;
            VAR13 = 0;
            VAR14 = 0;
        }
        else if (VAR6[0] == '' && VAR6[1] == '')
        {
            if (FUN4(VAR7, sizeof(VAR7), VAR6, "", "") < 0)
            {
                goto VAR20;
            }
            VAR14 = FUN6(VAR7, NULL, 16);
            if (FUN4(VAR7, sizeof(VAR7), VAR6, "", "") < 0)
            {
                goto VAR20;
            }
            VAR13 = FUN6(VAR7, NULL, 16);
        }
        else if (VAR6[0] == '' && VAR6[1] == '')
        {
            if (FUN4(VAR7, sizeof(VAR7), VAR6, "", "") < 0)
            {
                goto VAR20;
            }
            FUN7(VAR16, sizeof(VAR16), VAR7);
        }
        else if (VAR6[0] == '' && VAR6[1] == '')
        {
            if (FUN4(VAR7, sizeof(VAR7), VAR6, "", "") < 0)
            {
                goto VAR20;
            }
            VAR12 = FUN6(VAR7, NULL, 16);
        }
    VAR20:;
    }
    if (VAR11 && (VAR14 || VAR13))
    {
        if (VAR15 > 0)
        {
            snprintf(VAR7, sizeof(VAR7), "", VAR15);
        }
        else
        {
            snprintf(VAR7, sizeof(VAR7), "");
        }
        VAR17 = FUN3(VAR1, VAR8, VAR9, VAR7, VAR12, VAR14, VAR13, VAR16, VAR10);
    }
VAR19:
    if (VAR5)
    {
        fclose(VAR5);
    }
    return VAR17;
}