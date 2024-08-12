static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    const char *VAR6;
    int VAR7, VAR8, VAR9;
    char VAR10[4096];
    uint8_t VAR11[4096];
    VAR12 *VAR13;
    target_ulong VAR14, VAR15;
    FUN2("", VAR5);
    VAR6 = VAR5;
    VAR7 = *VAR6++;
    switch (VAR7)
    {
    case '':
        snprintf(VAR10, sizeof(VAR10), "", VAR16);
        FUN3(VAR2, VAR10);
    case '':
        if (*VAR6 != '')
        {
            VAR14 = FUN4(VAR6, (char **)&VAR6, 16);
            VAR4->VAR17 = VAR14;
            VAR4->VAR18 = VAR14;
            VAR4->VAR19 = VAR14;
            VAR4->VAR20 = VAR14 + 4;
            VAR4->VAR21[15] = VAR14;
            VAR4->VAR19 = VAR14;
            VAR4->VAR22[VAR4->VAR23] = VAR14;
            VAR4->VAR19 = VAR14;
        }
        return VAR24;
    case '':
        if (*VAR6 != '')
        {
            VAR14 = FUN4(VAR6, (char **)&VAR6, 16);
            VAR4->VAR17 = VAR14;
            VAR4->VAR18 = VAR14;
            VAR4->VAR19 = VAR14;
            VAR4->VAR20 = VAR14 + 4;
            VAR4->VAR21[15] = VAR14;
            VAR4->VAR19 = VAR14;
            VAR4->VAR22[VAR4->VAR23] = VAR14;
            VAR4->VAR19 = VAR14;
        }
        FUN5(VAR4, VAR25);
        return VAR24;
    case '':
    {
        target_ulong VAR26;
        target_ulong VAR27;
        VAR26 = FUN4(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
        {
            VAR6++;
            VAR27 = FUN4(VAR6, (char **)&VAR6, 16);
        }
        else
        {
            VAR27 = 0;
        }
        if (*VAR6 == '')
            VAR6++;
        VAR9 = *VAR6;
        if (VAR28)
            FUN6(VAR2->VAR4, VAR26, VAR27);
        if (VAR9 == '')
        {
            FUN3(VAR2, "");
        }
        else
        {
        }
    }
    case '':
        VAR8 = FUN7(VAR4, VAR11);
        FUN8(VAR10, VAR11, VAR8);
        FUN3(VAR2, VAR10);
    case '':
        VAR13 = (void *)VAR11;
        VAR15 = strlen(VAR6) / 2;
        FUN9((VAR29 *)VAR13, VAR6, VAR15);
        FUN10(VAR4, VAR11, VAR15);
    case '':
        VAR14 = FUN4(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR15 = FUN4(VAR6, NULL, 16);
        if (FUN11(VAR4, VAR14, VAR11, VAR15, 0) != 0)
        {
            FUN3(VAR2, "");
        }
        else
        {
            FUN8(VAR10, VAR11, VAR15);
            FUN3(VAR2, VAR10);
        }
    case '':
        VAR14 = FUN4(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR15 = FUN4(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        FUN9(VAR11, VAR6, VAR15);
        if (FUN11(VAR4, VAR14, VAR11, VAR15, 1) != 0)
            FUN3(VAR2, "");
        else
        case '':
            VAR9 = FUN12(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR14 = FUN4(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR15 = FUN4(VAR6, (char **)&VAR6, 16);
        if (VAR9 == 0 || VAR9 == 1)
        {
            if (FUN13(VAR4, VAR14) < 0)
                goto VAR30;
        }
        else if (VAR9 == 2)
        {
            if (FUN14(VAR4, VAR14) < 0)
                goto VAR30;
        }
        else
        {
        VAR30:
            FUN3(VAR2, "");
        }
    case '':
        VAR9 = FUN12(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR14 = FUN4(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR15 = FUN4(VAR6, (char **)&VAR6, 16);
        if (VAR9 == 0 || VAR9 == 1)
        {
            FUN15(VAR4, VAR14);
        }
        else if (VAR9 == 2)
        {
            FUN16(VAR4, VAR14);
        }
        else
        {
            goto VAR30;
        }
    case '':
    case '':
        if (!strcmp(VAR6, ""))
        {
            sprintf(VAR10, "", VAR31, VAR32, VAR33);
            FUN3(VAR2, VAR10);
        }
        else if (FUN17(VAR6, "", 10) == 0)
        {
            VAR6 += 10;
            if (*VAR6 != '')
            {
                sprintf(VAR10, "", VAR25);
                FUN3(VAR2, VAR10);
            }
            VAR6++;
            VAR9 = FUN12(VAR6, (char **)&VAR6, 16);
            VAR25 = VAR9;
        }
        else if (FUN17(VAR6, "", 7) == 0)
        {
            VAR34 *VAR35 = VAR4->VAR36;
            sprintf(VAR10, "" VAR37 "" VAR37 "" VAR37, VAR35->VAR38->VAR39, VAR35->VAR38->VAR40, VAR35->VAR38->VAR40);
            FUN3(VAR2, VAR10);
        }
    default:
        VAR10[0] = '';
        FUN3(VAR2, VAR10);
    }
    return VAR24;