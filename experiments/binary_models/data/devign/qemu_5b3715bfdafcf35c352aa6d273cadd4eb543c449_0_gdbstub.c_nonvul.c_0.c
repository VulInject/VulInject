static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    const char *VAR6;
    int VAR7, VAR8, VAR9;
    char VAR10[VAR11];
    uint8_t VAR12[VAR11];
    VAR13 *VAR14;
    target_ulong VAR15, VAR16;
    FUN2("", VAR5);
    VAR6 = VAR5;
    VAR7 = *VAR6++;
    switch (VAR7)
    {
    case '':
        snprintf(VAR10, sizeof(VAR10), "", VAR17);
        FUN3(VAR2, VAR10);
        FUN4(VAR4);
        FUN5(VAR4);
        break;
    case '':
        if (*VAR6 != '')
        {
            VAR15 = FUN6(VAR6, (char **)&VAR6, 16);
            VAR4->VAR18 = VAR15;
            VAR4->VAR19 = VAR15;
            VAR4->VAR20 = VAR15;
            VAR4->VAR21 = VAR15 + 4;
            VAR4->VAR22[15] = VAR15;
            VAR4->VAR20 = VAR15;
            VAR4->VAR23.VAR24 = VAR15;
            VAR4->VAR20 = VAR15;
        }
        FUN7(VAR2);
        return VAR25;
    case '':
        VAR2->signal = FUN8(VAR6, (char **)&VAR6, 16);
        FUN7(VAR2);
        return VAR25;
    case '':
        fprintf(VAR26, "");
        FUN9(0);
    case '':
        FUN4(VAR4);
        FUN5(VAR4);
        FUN7(VAR2);
        FUN3(VAR2, "");
        break;
    case '':
        if (*VAR6 != '')
        {
            VAR15 = FUN6(VAR6, (char **)&VAR6, 16);
            VAR4->VAR18 = VAR15;
            VAR4->VAR19 = VAR15;
            VAR4->VAR20 = VAR15;
            VAR4->VAR21 = VAR15 + 4;
            VAR4->VAR22[15] = VAR15;
            VAR4->VAR20 = VAR15;
            VAR4->VAR23.VAR24 = VAR15;
            VAR4->VAR20 = VAR15;
        }
        FUN10(VAR4, VAR27);
        FUN7(VAR2);
        return VAR25;
    case '':
    {
        target_ulong VAR28;
        target_ulong VAR29;
        VAR28 = FUN6(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
        {
            VAR6++;
            VAR29 = FUN6(VAR6, (char **)&VAR6, 16);
        }
        else
        {
            VAR29 = 0;
        }
        if (*VAR6 == '')
            VAR6++;
        VAR9 = *VAR6;
        if (VAR30)
            FUN11(VAR2->VAR4, VAR28, VAR29);
        if (VAR9 == '')
        {
            FUN3(VAR2, "");
        }
        else
        {
            FUN7(VAR2);
        }
    }
    break;
    case '':
        VAR16 = 0;
        for (VAR15 = 0; VAR15 < VAR31; VAR15++)
        {
            VAR8 = FUN12(VAR4, VAR12 + VAR16, VAR15);
            VAR16 += VAR8;
        }
        FUN13(VAR10, VAR12, VAR16);
        FUN3(VAR2, VAR10);
        break;
    case '':
        VAR14 = VAR12;
        VAR16 = strlen(VAR6) / 2;
        FUN14((VAR13 *)VAR14, VAR6, VAR16);
        for (VAR15 = 0; VAR15 < VAR31 && VAR16 > 0; VAR15++)
        {
            VAR8 = FUN15(VAR4, VAR14, VAR15);
            VAR16 -= VAR8;
            VAR14 += VAR8;
        }
        FUN3(VAR2, "");
        break;
    case '':
        VAR15 = FUN6(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR16 = FUN6(VAR6, NULL, 16);
        if (FUN16(VAR4, VAR15, VAR12, VAR16, 0) != 0)
        {
            FUN3(VAR2, "");
        }
        else
        {
            FUN13(VAR10, VAR12, VAR16);
            FUN3(VAR2, VAR10);
        }
        break;
    case '':
        VAR15 = FUN6(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR16 = FUN6(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        FUN14(VAR12, VAR6, VAR16);
        if (FUN16(VAR4, VAR15, VAR12, VAR16, 1) != 0)
            FUN3(VAR2, "");
        else
            FUN3(VAR2, "");
        break;
    case '':
        if (!VAR32)
            goto VAR33;
        VAR15 = FUN6(VAR6, (char **)&VAR6, 16);
        VAR8 = FUN12(VAR4, VAR12, VAR15);
        if (VAR8)
        {
            FUN13(VAR10, VAR12, VAR8);
            FUN3(VAR2, VAR10);
        }
        else
        {
            FUN3(VAR2, "");
        }
        break;
    case '':
        if (!VAR32)
            goto VAR33;
        VAR15 = FUN6(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR8 = strlen(VAR6) / 2;
        FUN14(VAR12, VAR6, VAR8);
        FUN15(VAR4, VAR12, VAR15);
        FUN3(VAR2, "");
        break;
    case '':
        VAR9 = FUN8(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR15 = FUN6(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR16 = FUN6(VAR6, (char **)&VAR6, 16);
        switch (VAR9)
        {
        case 0:
        case 1:
            if (FUN17(VAR4, VAR15) < 0)
                goto VAR34;
            FUN3(VAR2, "");
            break;
        case 2:
            VAR9 = VAR35;
            goto VAR36;
        case 3:
            VAR9 = VAR37;
            goto VAR36;
        case 4:
            VAR9 = VAR37 | VAR35;
        VAR36:
            if (FUN18(VAR4, VAR15, VAR9) < 0)
                goto VAR34;
            FUN3(VAR2, "");
            break;
        default:
            FUN3(VAR2, "");
            break;
        }
        break;
    VAR34:
        FUN3(VAR2, "");
        break;
    case '':
        VAR9 = FUN8(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR15 = FUN6(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR16 = FUN6(VAR6, (char **)&VAR6, 16);
        if (VAR9 == 0 || VAR9 == 1)
        {
            FUN19(VAR4, VAR15);
            FUN3(VAR2, "");
        }
        else if (VAR9 >= 2 || VAR9 <= 4)
        {
            FUN20(VAR4, VAR15);
            FUN3(VAR2, "");
        }
        else
        {
            FUN3(VAR2, "");
        }
        break;
    case '':
    case '':
        if (!strcmp(VAR6, ""))
        {
            snprintf(VAR10, sizeof(VAR10), "", VAR38, VAR39, VAR40);
            FUN3(VAR2, VAR10);
            break;
        }
        else if (FUN21(VAR6, "", 10) == 0)
        {
            VAR6 += 10;
            if (*VAR6 != '')
            {
                snprintf(VAR10, sizeof(VAR10), "", VAR27);
                FUN3(VAR2, VAR10);
                break;
            }
            VAR6++;
            VAR9 = FUN8(VAR6, (char **)&VAR6, 16);
            VAR27 = VAR9;
            FUN3(VAR2, "");
            break;
        }
        else if (FUN21(VAR6, "", 7) == 0)
        {
            VAR41 *VAR42 = VAR4->VAR43;
            snprintf(VAR10, sizeof(VAR10), "" VAR44 "" VAR44 "" VAR44, VAR42->VAR45->VAR46, VAR42->VAR45->VAR47, VAR42->VAR45->VAR47);
            FUN3(VAR2, VAR10);
            break;
        }
        if (FUN21(VAR6, "", 9) == 0)
        {
            snprintf(VAR10, sizeof(VAR10), "", VAR11);
            strcat(VAR10, "");
            FUN3(VAR2, VAR10);
            break;
        }
        if (FUN21(VAR6, "", 19) == 0)
        {
            const char *VAR48;
            target_ulong VAR49;
            VAR32 = 1;
            VAR6 += 19;
            VAR48 = FUN22(VAR4, VAR6, &VAR6);
            if (!VAR48)
            {
                snprintf(VAR10, sizeof(VAR10), "");
                FUN3(VAR2, VAR10);
                break;
            }
            if (*VAR6 == '')
                VAR6++;
            VAR15 = FUN8(VAR6, (char **)&VAR6, 16);
            if (*VAR6 == '')
                VAR6++;
            VAR16 = FUN8(VAR6, (char **)&VAR6, 16);
            VAR49 = strlen(VAR48);
            if (VAR15 > VAR49)
            {
                snprintf(VAR10, sizeof(VAR10), "");
                FUN3(VAR2, VAR10);
                break;
            }
            if (VAR16 > (VAR11 - 5) / 2)
                VAR16 = (VAR11 - 5) / 2;
            if (VAR16 < VAR49 - VAR15)
            {
                VAR10[0] = '';
                VAR16 = FUN23(VAR10 + 1, VAR48 + VAR15, VAR16);
            }
            else
            {
                VAR10[0] = '';
                VAR16 = FUN23(VAR10 + 1, VAR48 + VAR15, VAR49 - VAR15);
            }
            FUN24(VAR2, VAR10, VAR16 + 1);
            break;
        }
        goto VAR33;
    default:
    VAR33:
        VAR10[0] = '';
        FUN3(VAR2, VAR10);
        break;
    }
    return VAR25;
}