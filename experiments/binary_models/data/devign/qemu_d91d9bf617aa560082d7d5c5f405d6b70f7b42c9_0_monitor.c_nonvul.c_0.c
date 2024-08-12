static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    const char *VAR4, *VAR5, *VAR6;
    char *VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    const VAR13 *VAR14;
    char VAR15[256];
    char VAR16[1024];
    void *VAR17[VAR18];
    void *VAR19[VAR18];
    void (*VAR20)(VAR1 * VAR2);
    void (*VAR21)(VAR1 * VAR2, void *VAR22);
    void (*VAR23)(VAR1 * VAR2, void *VAR22, void *VAR24);
    void (*VAR25)(VAR1 * VAR2, void *VAR22, void *VAR24, void *VAR26);
    void (*VAR27)(VAR1 * VAR2, void *VAR22, void *VAR24, void *VAR26, void *VAR28);
    void (*VAR29)(VAR1 * VAR2, void *VAR22, void *VAR24, void *VAR26, void *VAR28, void *VAR30);
    void (*VAR31)(VAR1 * VAR2, void *VAR22, void *VAR24, void *VAR26, void *VAR28, void *VAR30, void *VAR32);
    void (*VAR33)(VAR1 * VAR2, void *VAR22, void *VAR24, void *VAR26, void *VAR28, void *VAR30, void *VAR32, void *VAR34);
    FUN2(VAR2, "", VAR3);
    VAR4 = VAR3;
    VAR7 = VAR15;
    while (FUN3(*VAR4))
        VAR4++;
    if (*VAR4 == '')
        return;
    VAR5 = VAR4;
    while (*VAR4 != '' && *VAR4 != '' && !FUN3(*VAR4))
        VAR4++;
    VAR10 = VAR4 - VAR5;
    if (VAR10 > sizeof(VAR15) - 1)
        VAR10 = sizeof(VAR15) - 1;
    memcpy(VAR15, VAR5, VAR10);
    VAR15[VAR10] = '';
    for (VAR14 = VAR35; VAR14->VAR36 != NULL; VAR14++)
    {
        if (FUN4(VAR15, VAR14->VAR36))
            break;
    }
    if (VAR14->VAR36 == NULL)
    {
        FUN2(VAR2, "", VAR15);
        return;
    }
    for (VAR11 = 0; VAR11 < VAR18; VAR11++)
        VAR17[VAR11] = NULL;
    VAR6 = VAR14->VAR37;
    VAR9 = 0;
    for (;;)
    {
        VAR8 = *VAR6;
        if (VAR8 == '')
            break;
        VAR6++;
        switch (VAR8)
        {
        case '':
        case '':
        case '':
        {
            int VAR38;
            char *VAR39;
            while (FUN3(*VAR4))
                VAR4++;
            if (*VAR6 == '')
            {
                VAR6++;
                if (*VAR4 == '')
                {
                    VAR39 = NULL;
                    goto VAR40;
                }
            }
            VAR38 = FUN5(VAR16, sizeof(VAR16), &VAR4);
            if (VAR38 < 0)
            {
                switch (VAR8)
                {
                case '':
                    FUN2(VAR2, "", VAR15);
                    break;
                case '':
                    FUN2(VAR2, "", VAR15);
                    break;
                default:
                    FUN2(VAR2, "", VAR15);
                    break;
                }
                goto VAR41;
            }
            VAR39 = FUN6(strlen(VAR16) + 1);
            FUN7(VAR39, sizeof(VAR16), VAR16);
            VAR17[VAR9] = VAR39;
        VAR40:
            if (VAR9 >= VAR18)
            {
            VAR42:
                FUN2(VAR2, "", VAR15);
                goto VAR41;
            }
            VAR19[VAR9++] = VAR39;
        }
        break;
        case '':
        {
            int VAR43, VAR44, VAR45;
            while (FUN3(*VAR4))
                VAR4++;
            if (*VAR4 == '')
            {
                VAR4++;
                VAR43 = 1;
                if (FUN8(*VAR4))
                {
                    VAR43 = 0;
                    while (FUN8(*VAR4))
                    {
                        VAR43 = VAR43 * 10 + (*VAR4 - '');
                        VAR4++;
                    }
                }
                VAR45 = -1;
                VAR44 = -1;
                for (;;)
                {
                    switch (*VAR4)
                    {
                    case '':
                    case '':
                    case '':
                    case '':
                    case '':
                    case '':
                        VAR44 = *VAR4++;
                        break;
                    case '':
                        VAR45 = 1;
                        VAR4++;
                        break;
                    case '':
                        VAR45 = 2;
                        VAR4++;
                        break;
                    case '':
                        VAR45 = 4;
                        VAR4++;
                        break;
                    case '':
                    case '':
                        VAR45 = 8;
                        VAR4++;
                        break;
                    default:
                        goto VAR46;
                    }
                }
            VAR46:
                if (*VAR4 != '' && !FUN3(*VAR4))
                {
                    FUN2(VAR2, "", *VAR4);
                    goto VAR41;
                }
                if (VAR44 < 0)
                    VAR44 = VAR47;
                if (VAR44 != '')
                {
                    if (VAR45 < 0)
                        VAR45 = VAR48;
                    VAR48 = VAR45;
                }
                VAR47 = VAR44;
            }
            else
            {
                VAR43 = 1;
                VAR44 = VAR47;
                if (VAR44 != '')
                {
                    VAR45 = VAR48;
                }
                else
                {
                    VAR45 = -1;
                }
            }
            if (VAR9 + 3 > VAR18)
                goto VAR42;
            VAR19[VAR9++] = (void *)(long)VAR43;
            VAR19[VAR9++] = (void *)(long)VAR44;
            VAR19[VAR9++] = (void *)(long)VAR45;
        }
        break;
        case '':
        case '':
        {
            int64_t VAR49;
            while (FUN3(*VAR4))
                VAR4++;
            if (*VAR6 == '' || *VAR6 == '')
            {
                if (*VAR6 == '')
                {
                    if (*VAR4 == '')
                        VAR12 = 0;
                    else
                        VAR12 = 1;
                }
                else
                {
                    if (*VAR4 == '')
                    {
                        VAR4++;
                        while (FUN3(*VAR4))
                            VAR4++;
                        VAR12 = 1;
                    }
                    else
                    {
                        VAR12 = 0;
                    }
                }
                VAR6++;
                if (VAR9 >= VAR18)
                    goto VAR42;
                VAR19[VAR9++] = (void *)(long)VAR12;
                if (!VAR12)
                {
                    if (VAR9 >= VAR18)
                        goto VAR42;
                    VAR49 = -1;
                    goto VAR50;
                }
            }
            if (FUN9(VAR2, &VAR49, &VAR4))
                goto VAR41;
        VAR50:
            if (VAR8 == '')
            {
                if (VAR9 >= VAR18)
                    goto VAR42;
                VAR19[VAR9++] = (void *)(long)VAR49;
            }
            else
            {
                if ((VAR9 + 1) >= VAR18)
                    goto VAR42;
                VAR19[VAR9++] = (void *)(long)((VAR49 >> 32) & 0xffffffff);
                VAR19[VAR9++] = (void *)0;
                VAR19[VAR9++] = (void *)(long)(VAR49 & 0xffffffff);
            }
        }
        break;
        case '':
        {
            int VAR51;
            VAR8 = *VAR6++;
            if (VAR8 == '')
                goto VAR52;
            while (FUN3(*VAR4))
                VAR4++;
            VAR51 = 0;
            if (*VAR4 == '')
            {
                VAR4++;
                if (*VAR4 != VAR8)
                {
                    FUN2(VAR2, "", VAR15, *VAR4);
                    goto VAR41;
                }
                VAR4++;
                VAR51 = 1;
            }
            if (VAR9 >= VAR18)
                goto VAR42;
            VAR19[VAR9++] = (void *)(long)VAR51;
        }
        break;
        default:
        VAR52:
            FUN2(VAR2, "", VAR15, VAR8);
            goto VAR41;
        }
    }
    while (FUN3(*VAR4))
        VAR4++;
    if (*VAR4 != '')
    {
        FUN2(VAR2, "", VAR15);
        goto VAR41;
    }
    switch (VAR9)
    {
    case 0:
        VAR20 = VAR14->VAR53;
        FUN10(VAR2);
        break;
    case 1:
        VAR21 = VAR14->VAR53;
        FUN11(VAR2, VAR19[0]);
        break;
    case 2:
        VAR23 = VAR14->VAR53;
        FUN12(VAR2, VAR19[0], VAR19[1]);
        break;
    case 3:
        VAR25 = VAR14->VAR53;
        FUN13(VAR2, VAR19[0], VAR19[1], VAR19[2]);
        break;
    case 4:
        VAR27 = VAR14->VAR53;
        FUN14(VAR2, VAR19[0], VAR19[1], VAR19[2], VAR19[3]);
        break;
    case 5:
        VAR29 = VAR14->VAR53;
        FUN15(VAR2, VAR19[0], VAR19[1], VAR19[2], VAR19[3], VAR19[4]);
        break;
    case 6:
        VAR31 = VAR14->VAR53;
        FUN16(VAR2, VAR19[0], VAR19[1], VAR19[2], VAR19[3], VAR19[4], VAR19[5]);
        break;
    case 7:
        VAR33 = VAR14->VAR53;
        FUN17(VAR2, VAR19[0], VAR19[1], VAR19[2], VAR19[3], VAR19[4], VAR19[5], VAR19[6]);
        break;
    default:
        FUN2(VAR2, "", VAR9);
        goto VAR41;
    }
VAR41:
    for (VAR11 = 0; VAR11 < VAR18; VAR11++)
        FUN18(VAR17[VAR11]);
    return;
}