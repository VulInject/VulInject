static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    char VAR4[16];
    char VAR5[16];
    char VAR6[16];
    char VAR7[16];
    VAR8 *VAR9;
    char VAR10[256];
    VAR2->VAR11 = 0;
    for (;;)
    {
        FUN2(&VAR3);
        if (*VAR3 == '')
            break;
        VAR9 = &VAR2->VAR12[VAR2->VAR11];
        FUN3(VAR4, sizeof(VAR4), "", &VAR3);
        if (!FUN4(VAR4, ""))
        {
            FUN3(VAR5, sizeof(VAR5), "", &VAR3);
            VAR6[0] = '';
            if (*VAR3 == '')
            {
                FUN3(VAR6, sizeof(VAR6), "", &VAR3);
            }
            VAR9->VAR13 = VAR14;
        }
        else if (!FUN4(VAR4, "") || !FUN4(VAR4, ""))
        {
            FUN3(VAR6, sizeof(VAR6), "", &VAR3);
            VAR5[0] = '';
            VAR9->VAR13 = VAR15;
        }
        if (!FUN4(VAR6, ""))
            VAR9->VAR6 = VAR16;
        else
            VAR9->VAR6 = VAR17;
        if (*VAR3 == '')
            VAR3++;
        while (*VAR3 != '' && *VAR3 != '')
        {
            FUN3(VAR7, sizeof(VAR7), "", &VAR3);
            if (!strcmp(VAR7, ""))
            {
                if (*VAR3 == '')
                {
                    VAR3++;
                    FUN5(&VAR9->VAR18, &VAR9->VAR19, &VAR3);
                }
            }
            else if (!strcmp(VAR7, ""))
            {
                if (*VAR3 == '')
                {
                    VAR3++;
                    FUN5(&VAR9->VAR20, &VAR9->VAR21, &VAR3);
                }
            }
            else if (!strcmp(VAR7, ""))
            {
                if (*VAR3 == '')
                {
                    VAR3++;
                    FUN5(&VAR9->VAR22, &VAR9->VAR23, &VAR3);
                }
            }
            else if (!strcmp(VAR7, ""))
            {
                if (*VAR3 == '')
                {
                    VAR3++;
                    FUN5(&VAR9->VAR24, &VAR9->VAR25, &VAR3);
                }
            }
            else if (!strcmp(VAR7, ""))
            {
                if (VAR9->VAR6 == VAR17)
                    VAR9->VAR6 = VAR26;
            }
            else if (!strcmp(VAR7, ""))
            {
                if (*VAR3 == '')
                {
                    VAR3++;
                    VAR9->VAR27 = FUN6(VAR3, (char **)&VAR3, 10);
                }
            }
            else if (!strcmp(VAR7, ""))
            {
                struct in_addr VAR28;
                if (*VAR3 == '')
                {
                    VAR3++;
                    FUN3(VAR10, sizeof(VAR10), "", &VAR3);
                    if (FUN7(VAR10, &VAR28))
                        VAR9->VAR29 = FUN8(VAR28.VAR30);
                }
            }
            while (*VAR3 != '' && *VAR3 != '' && *VAR3 != '')
                VAR3++;
            if (*VAR3 == '')
                VAR3++;
        }
        if (*VAR3 == '')
            VAR3++;
        VAR2->VAR11++;
    }
}