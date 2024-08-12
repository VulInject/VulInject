static VAR1 *FUN1(VAR2 *VAR3, const char **VAR4, const VAR5 *VAR6)
{
    const char *VAR7;
    char *VAR8;
    int VAR9;
    const char *VAR10 = *VAR4;
    char VAR11[1024];
    VAR1 *VAR12 = FUN2();
    VAR7 = VAR6->VAR13;
    for (;;)
    {
        VAR7 = FUN3(VAR7, &VAR8);
        if (!VAR7)
            break;
        VAR9 = *VAR7;
        VAR7++;
        switch (VAR9)
        {
        case '':
        case '':
        case '':
        {
            int VAR14;
            while (FUN4(*VAR10))
                VAR10++;
            if (*VAR7 == '')
            {
                VAR7++;
                if (*VAR10 == '')
                {
                    break;
                }
            }
            VAR14 = FUN5(VAR11, sizeof(VAR11), &VAR10);
            if (VAR14 < 0)
            {
                switch (VAR9)
                {
                case '':
                    FUN6(VAR3, "", VAR6->VAR15);
                    break;
                case '':
                    FUN6(VAR3, "", VAR6->VAR15);
                    break;
                default:
                    FUN6(VAR3, "", VAR6->VAR15);
                    break;
                }
                goto VAR16;
            }
            FUN7(VAR12, VAR8, FUN8(VAR11));
        }
        break;
        case '':
        {
            VAR17 *VAR18;
            VAR19 *VAR20;
            VAR18 = FUN9(VAR8);
            if (!VAR18 || VAR18->VAR21->VAR15)
            {
                goto VAR22;
            }
            while (FUN4(*VAR10))
            {
                VAR10++;
            }
            if (!*VAR10)
                break;
            if (FUN5(VAR11, sizeof(VAR11), &VAR10) < 0)
            {
                goto VAR16;
            }
            VAR20 = FUN10(VAR18, VAR11, true);
            if (!VAR20)
            {
                goto VAR16;
            }
            FUN11(VAR20, VAR12);
            FUN12(VAR20);
        }
        break;
        case '':
        {
            int VAR23, VAR24, VAR25;
            while (FUN4(*VAR10))
                VAR10++;
            if (*VAR10 == '')
            {
                VAR10++;
                VAR23 = 1;
                if (FUN13(*VAR10))
                {
                    VAR23 = 0;
                    while (FUN13(*VAR10))
                    {
                        VAR23 = VAR23 * 10 + (*VAR10 - '');
                        VAR10++;
                    }
                }
                VAR25 = -1;
                VAR24 = -1;
                for (;;)
                {
                    switch (*VAR10)
                    {
                    case '':
                    case '':
                    case '':
                    case '':
                    case '':
                    case '':
                        VAR24 = *VAR10++;
                        break;
                    case '':
                        VAR25 = 1;
                        VAR10++;
                        break;
                    case '':
                        VAR25 = 2;
                        VAR10++;
                        break;
                    case '':
                        VAR25 = 4;
                        VAR10++;
                        break;
                    case '':
                    case '':
                        VAR25 = 8;
                        VAR10++;
                        break;
                    default:
                        goto VAR26;
                    }
                }
            VAR26:
                if (*VAR10 != '' && !FUN4(*VAR10))
                {
                    FUN6(VAR3, "", *VAR10);
                    goto VAR16;
                }
                if (VAR24 < 0)
                    VAR24 = VAR27;
                if (VAR24 != '')
                {
                    if (VAR25 < 0)
                        VAR25 = VAR28;
                    VAR28 = VAR25;
                }
                VAR27 = VAR24;
            }
            else
            {
                VAR23 = 1;
                VAR24 = VAR27;
                if (VAR24 != '')
                {
                    VAR25 = VAR28;
                }
                else
                {
                    VAR25 = -1;
                }
            }
            FUN7(VAR12, "", FUN14(VAR23));
            FUN7(VAR12, "", FUN14(VAR24));
            FUN7(VAR12, "", FUN14(VAR25));
        }
        break;
        case '':
        case '':
        case '':
        {
            int64_t VAR29;
            while (FUN4(*VAR10))
                VAR10++;
            if (*VAR7 == '' || *VAR7 == '')
            {
                if (*VAR7 == '')
                {
                    if (*VAR10 == '')
                    {
                        VAR7++;
                        break;
                    }
                }
                else
                {
                    if (*VAR10 == '')
                    {
                        VAR10++;
                        while (FUN4(*VAR10))
                            VAR10++;
                    }
                    else
                    {
                        VAR7++;
                        break;
                    }
                }
                VAR7++;
            }
            if (FUN15(VAR3, &VAR29, &VAR10))
                goto VAR16;
            if ((VAR9 == '') && ((VAR29 >> 32) & 0xffffffff))
            {
                FUN6(VAR3, "", VAR6->VAR15);
                FUN6(VAR3, "");
                goto VAR16;
            }
            else if (VAR9 == '')
            {
                if (VAR29 < 0)
                {
                    FUN6(VAR3, "");
                    goto VAR16;
                }
                VAR29 <<= 20;
            }
            FUN7(VAR12, VAR8, FUN14(VAR29));
        }
        break;
        case '':
        {
            int VAR14;
            int64_t VAR29;
            char *VAR30;
            while (FUN4(*VAR10))
            {
                VAR10++;
            }
            if (*VAR7 == '')
            {
                VAR7++;
                if (*VAR10 == '')
                {
                    break;
                }
            }
            VAR14 = FUN16(VAR10, &VAR30, &VAR29);
            if (VAR14 < 0)
            {
                FUN6(VAR3, "");
                goto VAR16;
            }
            FUN7(VAR12, VAR8, FUN14(VAR29));
            VAR10 = VAR30;
        }
        break;
        case '':
        {
            double VAR29;
            while (FUN4(*VAR10))
                VAR10++;
            if (*VAR7 == '')
            {
                VAR7++;
                if (*VAR10 == '')
                {
                    break;
                }
            }
            if (FUN17(VAR3, &VAR29, &VAR10) < 0)
            {
                goto VAR16;
            }
            if (VAR10[0] && VAR10[1] == '')
            {
                switch (*VAR10)
                {
                case '':
                    VAR29 /= 1e3;
                    VAR10 += 2;
                    break;
                case '':
                    VAR29 /= 1e6;
                    VAR10 += 2;
                    break;
                case '':
                    VAR29 /= 1e9;
                    VAR10 += 2;
                    break;
                }
            }
            if (*VAR10 && !FUN4(*VAR10))
            {
                FUN6(VAR3, "");
                goto VAR16;
            }
            FUN7(VAR12, VAR8, FUN18(VAR29));
        }
        break;
        case '':
        {
            const char *VAR31;
            bool VAR29;
            while (FUN4(*VAR10))
            {
                VAR10++;
            }
            VAR31 = VAR10;
            while (FUN19(*VAR10))
            {
                VAR10++;
            }
            if (VAR10 - VAR31 == 2 && !memcmp(VAR31, "", VAR10 - VAR31))
            {
                VAR29 = true;
            }
            else if (VAR10 - VAR31 == 3 && !memcmp(VAR31, "", VAR10 - VAR31))
            {
                VAR29 = false;
            }
            else
            {
                FUN6(VAR3, "");
                goto VAR16;
            }
            FUN7(VAR12, VAR8, FUN20(VAR29));
        }
        break;
        case '':
        {
            const char *VAR32 = VAR10;
            int VAR33 = 0;
            VAR9 = *VAR7++;
            if (VAR9 == '')
                goto VAR22;
            while (FUN4(*VAR10))
                VAR10++;
            if (*VAR10 == '')
            {
                VAR10++;
                if (VAR9 != *VAR10)
                {
                    if (!FUN21(VAR10, VAR7))
                    {
                        FUN6(VAR3, "", VAR6->VAR15, *VAR10);
                        goto VAR16;
                    }
                    else
                    {
                        VAR33 = 1;
                    }
                }
                if (VAR33)
                {
                    VAR10 = VAR32;
                }
                else
                {
                    VAR10++;
                    FUN7(VAR12, VAR8, FUN20(true));
                }
            }
        }
        break;
        case '':
        {
            int VAR34;
            while (FUN4(*VAR10))
            {
                VAR10++;
            }
            if (*VAR7 == '')
            {
                VAR7++;
                if (*VAR10 == '')
                {
                    break;
                }
            }
            VAR34 = strlen(VAR10);
            if (VAR34 <= 0)
            {
                FUN6(VAR3, "", VAR6->VAR15);
                goto VAR16;
            }
            FUN7(VAR12, VAR8, FUN8(VAR10));
            VAR10 += VAR34;
        }
        break;
        default:
        VAR22:
            FUN6(VAR3, "", VAR6->VAR15, VAR9);
            goto VAR16;
        }
        FUN22(VAR8);
        VAR8 = NULL;
    }
    while (FUN4(*VAR10))
        VAR10++;
    if (*VAR10 != '')
    {
        FUN6(VAR3, "", VAR6->VAR15);
        goto VAR16;
    }
    return VAR12;
VAR16:
    FUN23(VAR12);
    FUN22(VAR8);
    return NULL;
}