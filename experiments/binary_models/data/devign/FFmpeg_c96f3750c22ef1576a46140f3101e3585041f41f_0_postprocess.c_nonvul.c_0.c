VAR1 *FUN1(const char *VAR2, int VAR3)
{
    char VAR4[VAR5];
    char *VAR6 = VAR4;
    static const char VAR7[] = "";
    static const char VAR8[] = "";
    struct VAR9 *VAR10;
    char *VAR11;
    VAR10 = FUN2(sizeof(VAR9));
    VAR10->VAR12 = 0;
    VAR10->VAR13 = 0;
    VAR10->VAR14[0] = 700;
    VAR10->VAR14[1] = 1500;
    VAR10->VAR14[2] = 3000;
    VAR10->VAR15 = 234;
    VAR10->VAR16 = 16;
    VAR10->VAR17 = 256 / 8;
    VAR10->VAR18 = 56 - 16 - 1;
    VAR10->VAR19 = 0.01;
    VAR10->VAR20 = 0;
    memset(VAR4, 0, VAR5);
    FUN3(VAR4, VAR2, VAR5 - 1);
    FUN4(NULL, VAR21, "", VAR2);
    for (;;)
    {
        char *VAR22;
        int VAR23 = 1000000;
        int VAR24 = -1;
        int VAR25 = -1;
        char *VAR26;
        char *VAR27[VAR28];
        int VAR29;
        int VAR30 = 0;
        int VAR31 = 0;
        int VAR32 = 1;
        VAR11 = strtok(VAR6, VAR7);
        if (VAR11 == NULL)
            break;
        VAR6 += strlen(VAR11) + 1;
        VAR22 = strtok(VAR11, VAR8);
        FUN4(NULL, VAR21, "", VAR11, VAR22);
        if (*VAR22 == '')
        {
            VAR32 = 0;
            VAR22++;
        }
        for (;;)
        {
            VAR26 = strtok(NULL, VAR8);
            if (VAR26 == NULL)
                break;
            FUN4(NULL, VAR21, "", VAR26);
            if (!strcmp("", VAR26) || !strcmp("", VAR26))
                VAR23 = VAR3;
            else if (!strcmp("", VAR26) || !strcmp("", VAR26))
                VAR24 = 0;
            else if (!strcmp("", VAR26) || !strcmp("", VAR26))
                VAR24 = 1;
            else if (!strcmp("", VAR26) || !strcmp("", VAR26))
                VAR25 = 0;
            else
            {
                VAR27[VAR31] = VAR26;
                VAR31++;
            }
            if (VAR31 >= VAR28 - 1)
                break;
        }
        VAR27[VAR31] = NULL;
        for (VAR29 = 0; VAR33[2 * VAR29] != NULL; VAR29++)
        {
            if (!strcmp(VAR33[2 * VAR29], VAR22))
            {
                int VAR34 = strlen(VAR33[2 * VAR29 + 1]);
                int VAR35;
                int VAR36;
                VAR6--, *VAR6 = '';
                VAR35 = strlen(VAR6);
                VAR36 = VAR6 - VAR4 + VAR35;
                if (VAR36 + VAR34 >= VAR5 - 1)
                {
                    VAR10->VAR20++;
                    break;
                }
                memmove(VAR6 + VAR34, VAR6, VAR35 + 1);
                memcpy(VAR6, VAR33[2 * VAR29 + 1], VAR34);
                VAR30 = 1;
            }
        }
        for (VAR29 = 0; VAR37[VAR29].VAR38 != NULL; VAR29++)
        {
            if (!strcmp(VAR37[VAR29].VAR39, VAR22) || !strcmp(VAR37[VAR29].VAR38, VAR22))
            {
                VAR10->VAR12 &= ~VAR37[VAR29].VAR40;
                VAR10->VAR13 &= ~VAR37[VAR29].VAR40;
                VAR30 = 1;
                if (!VAR32)
                    break;
                if (VAR23 >= VAR37[VAR29].VAR41 && VAR25)
                    VAR10->VAR12 |= VAR37[VAR29].VAR40;
                if (VAR24 == 1 || (VAR24 == -1 && VAR37[VAR29].VAR42))
                    if (VAR23 >= VAR37[VAR29].VAR43)
                        VAR10->VAR13 |= VAR37[VAR29].VAR40;
                if (VAR37[VAR29].VAR40 == VAR44)
                {
                    int VAR45;
                    VAR10->VAR16 = 16;
                    VAR10->VAR15 = 234;
                    for (VAR45 = 0; VAR27[VAR45] != NULL; VAR45++)
                    {
                        if (!strcmp(VAR27[VAR45], "") || !strcmp(VAR27[VAR45], ""))
                        {
                            VAR10->VAR16 = 0;
                            VAR10->VAR15 = 255;
                            VAR31--;
                        }
                    }
                }
                else if (VAR37[VAR29].VAR40 == VAR46)
                {
                    int VAR45;
                    int VAR47 = 0;
                    for (VAR45 = 0; VAR27[VAR45] != NULL; VAR45++)
                    {
                        char *VAR48;
                        VAR10->VAR14[VAR47] = FUN5(VAR27[VAR45], &VAR48, 0);
                        if (VAR48 != VAR27[VAR45])
                        {
                            VAR47++;
                            VAR31--;
                            if (VAR47 >= 3)
                                break;
                        }
                    }
                }
                else if (VAR37[VAR29].VAR40 == VAR49 || VAR37[VAR29].VAR40 == VAR50 || VAR37[VAR29].VAR40 == VAR51 || VAR37[VAR29].VAR40 == VAR52)
                {
                    int VAR45;
                    for (VAR45 = 0; VAR27[VAR45] != NULL && VAR45 < 2; VAR45++)
                    {
                        char *VAR48;
                        int VAR53 = FUN5(VAR27[VAR45], &VAR48, 0);
                        if (VAR48 == VAR27[VAR45])
                            break;
                        VAR31--;
                        if (VAR45 == 0)
                            VAR10->VAR17 = VAR53;
                        else
                            VAR10->VAR18 = VAR53;
                    }
                }
                else if (VAR37[VAR29].VAR40 == VAR54)
                {
                    int VAR45;
                    VAR10->VAR55 = 15;
                    for (VAR45 = 0; VAR27[VAR45] != NULL && VAR45 < 1; VAR45++)
                    {
                        char *VAR48;
                        int VAR53 = FUN5(VAR27[VAR45], &VAR48, 0);
                        if (VAR48 == VAR27[VAR45])
                            break;
                        VAR31--;
                        VAR10->VAR55 = VAR53;
                    }
                }
            }
        }
        if (!VAR30)
            VAR10->VAR20++;
        VAR10->VAR20 += VAR31;
    }
    FUN4(NULL, VAR21, "", VAR10->VAR12, VAR10->VAR13);
    if (VAR10->VAR20)
    {
        FUN4(NULL, VAR56, ""%VAR57\"", VAR10->VAR20, VAR2);
        FUN6(VAR10);
        return NULL;
    }
    return VAR10;
}