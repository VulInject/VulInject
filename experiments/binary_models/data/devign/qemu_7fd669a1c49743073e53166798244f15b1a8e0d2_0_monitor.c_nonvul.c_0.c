static const VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, VAR5 *VAR6)
{
    const char *VAR7, *VAR8;
    int VAR9;
    const VAR1 *VAR10;
    char VAR11[256];
    char VAR12[1024];
    char *VAR13;
    FUN2(VAR3, "", VAR4);
    VAR7 = FUN3(VAR4, VAR11, sizeof(VAR11));
    if (!VAR7)
        return NULL;
    VAR10 = FUN4(VAR11);
    if (!VAR10)
    {
        FUN2(VAR3, "", VAR11);
        return NULL;
    }
    VAR8 = VAR10->VAR14;
    for (;;)
    {
        VAR8 = FUN5(VAR8, &VAR13);
        if (!VAR8)
            break;
        VAR9 = *VAR8;
        VAR8++;
        switch (VAR9)
        {
        case '':
        case '':
        case '':
        {
            int VAR15;
            while (FUN6(*VAR7))
                VAR7++;
            if (*VAR8 == '')
            {
                VAR8++;
                if (*VAR7 == '')
                {
                    break;
                }
            }
            VAR15 = FUN7(VAR12, sizeof(VAR12), &VAR7);
            if (VAR15 < 0)
            {
                switch (VAR9)
                {
                case '':
                    FUN2(VAR3, "", VAR11);
                    break;
                case '':
                    FUN2(VAR3, "", VAR11);
                    break;
                default:
                    FUN2(VAR3, "", VAR11);
                    break;
                }
                goto VAR16;
            }
            FUN8(VAR6, VAR13, FUN9(VAR12));
        }
        break;
        case '':
        {
            int VAR17, VAR18, VAR19;
            while (FUN6(*VAR7))
                VAR7++;
            if (*VAR7 == '')
            {
                VAR7++;
                VAR17 = 1;
                if (FUN10(*VAR7))
                {
                    VAR17 = 0;
                    while (FUN10(*VAR7))
                    {
                        VAR17 = VAR17 * 10 + (*VAR7 - '');
                        VAR7++;
                    }
                }
                VAR19 = -1;
                VAR18 = -1;
                for (;;)
                {
                    switch (*VAR7)
                    {
                    case '':
                    case '':
                    case '':
                    case '':
                    case '':
                    case '':
                        VAR18 = *VAR7++;
                        break;
                    case '':
                        VAR19 = 1;
                        VAR7++;
                        break;
                    case '':
                        VAR19 = 2;
                        VAR7++;
                        break;
                    case '':
                        VAR19 = 4;
                        VAR7++;
                        break;
                    case '':
                    case '':
                        VAR19 = 8;
                        VAR7++;
                        break;
                    default:
                        goto VAR20;
                    }
                }
            VAR20:
                if (*VAR7 != '' && !FUN6(*VAR7))
                {
                    FUN2(VAR3, "", *VAR7);
                    goto VAR16;
                }
                if (VAR18 < 0)
                    VAR18 = VAR21;
                if (VAR18 != '')
                {
                    if (VAR19 < 0)
                        VAR19 = VAR22;
                    VAR22 = VAR19;
                }
                VAR21 = VAR18;
            }
            else
            {
                VAR17 = 1;
                VAR18 = VAR21;
                if (VAR18 != '')
                {
                    VAR19 = VAR22;
                }
                else
                {
                    VAR19 = -1;
                }
            }
            FUN8(VAR6, "", FUN11(VAR17));
            FUN8(VAR6, "", FUN11(VAR18));
            FUN8(VAR6, "", FUN11(VAR19));
        }
        break;
        case '':
        case '':
        {
            int64_t VAR23;
            while (FUN6(*VAR7))
                VAR7++;
            if (*VAR8 == '' || *VAR8 == '')
            {
                if (*VAR8 == '')
                {
                    if (*VAR7 == '')
                    {
                        VAR8++;
                        break;
                    }
                }
                else
                {
                    if (*VAR7 == '')
                    {
                        VAR7++;
                        while (FUN6(*VAR7))
                            VAR7++;
                    }
                    else
                    {
                        VAR8++;
                        break;
                    }
                }
                VAR8++;
            }
            if (FUN12(VAR3, &VAR23, &VAR7))
                goto VAR16;
            if ((VAR9 == '') && ((VAR23 >> 32) & 0xffffffff))
            {
                FUN2(VAR3, "", VAR11);
                FUN2(VAR3, "");
                goto VAR16;
            }
            FUN8(VAR6, VAR13, FUN11(VAR23));
        }
        break;
        case '':
        {
            const char *VAR24 = VAR7;
            int VAR25, VAR26 = 0;
            VAR9 = *VAR8++;
            if (VAR9 == '')
                goto VAR27;
            while (FUN6(*VAR7))
                VAR7++;
            VAR25 = 0;
            if (*VAR7 == '')
            {
                VAR7++;
                if (VAR9 != *VAR7)
                {
                    if (!FUN13(VAR7, VAR8))
                    {
                        FUN2(VAR3, "", VAR11, *VAR7);
                        goto VAR16;
                    }
                    else
                    {
                        VAR26 = 1;
                    }
                }
                if (VAR26)
                {
                    VAR7 = VAR24;
                }
                else
                {
                    VAR7++;
                    VAR25 = 1;
                }
            }
            FUN8(VAR6, VAR13, FUN11(VAR25));
        }
        break;
        default:
        VAR27:
            FUN2(VAR3, "", VAR11, VAR9);
            goto VAR16;
        }
        FUN14(VAR13);
        VAR13 = NULL;
    }
    while (FUN6(*VAR7))
        VAR7++;
    if (*VAR7 != '')
    {
        FUN2(VAR3, "", VAR11);
        goto VAR16;
    }
    return VAR10;
VAR16:
    FUN14(VAR13);
    return NULL;
}