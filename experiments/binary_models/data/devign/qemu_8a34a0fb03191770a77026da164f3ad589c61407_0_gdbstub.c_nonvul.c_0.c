static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    const char *VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    char VAR12[VAR13];
    uint8_t VAR14[VAR13];
    VAR15 *VAR16;
    target_ulong VAR17, VAR18;
    FUN2("", VAR3);
    VAR6 = VAR3;
    VAR7 = *VAR6++;
    switch (VAR7)
    {
    case '':
        snprintf(VAR12, sizeof(VAR12), "", VAR19, VAR2->VAR20->VAR21 + 1);
        FUN3(VAR2, VAR12);
        FUN4();
        break;
    case '':
        if (*VAR6 != '')
        {
            VAR17 = FUN5(VAR6, (char **)&VAR6, 16);
            VAR2->VAR20->VAR22 = VAR17;
            VAR2->VAR20->VAR23 = VAR17;
            VAR2->VAR20->VAR24 = VAR17;
            VAR2->VAR20->VAR25 = VAR17 + 4;
            VAR2->VAR20->VAR26[15] = VAR17;
            VAR2->VAR20->VAR24 = VAR17;
            VAR2->VAR20->VAR27.VAR28 = VAR17;
            VAR2->VAR20->VAR24 = VAR17;
            VAR2->VAR20->VAR24 = VAR17;
        }
        VAR2->signal = 0;
        FUN6(VAR2);
        return VAR29;
    case '':
        VAR2->signal = FUN7(FUN8(VAR6, (char **)&VAR6, 16));
        if (VAR2->signal == -1)
            VAR2->signal = 0;
        FUN6(VAR2);
        return VAR29;
    case '':
        fprintf(VAR30, "");
        FUN9(0);
    case '':
        FUN4();
        FUN6(VAR2);
        FUN3(VAR2, "");
        break;
    case '':
        if (*VAR6 != '')
        {
            VAR17 = FUN5(VAR6, (char **)&VAR6, 16);
            VAR2->VAR20->VAR22 = VAR17;
            VAR2->VAR20->VAR23 = VAR17;
            VAR2->VAR20->VAR24 = VAR17;
            VAR2->VAR20->VAR25 = VAR17 + 4;
            VAR2->VAR20->VAR26[15] = VAR17;
            VAR2->VAR20->VAR24 = VAR17;
            VAR2->VAR20->VAR27.VAR28 = VAR17;
            VAR2->VAR20->VAR24 = VAR17;
            VAR2->VAR20->VAR24 = VAR17;
        }
        FUN10(VAR2->VAR20, VAR31);
        FUN6(VAR2);
        return VAR29;
    case '':
    {
        target_ulong VAR32;
        target_ulong VAR33;
        VAR32 = FUN5(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
        {
            VAR6++;
            VAR33 = FUN5(VAR6, (char **)&VAR6, 16);
        }
        else
        {
            VAR33 = 0;
        }
        if (*VAR6 == '')
            VAR6++;
        VAR9 = *VAR6;
        if (VAR34)
            FUN11(VAR2->VAR20, VAR32, VAR33);
        if (VAR9 == '')
        {
            FUN3(VAR2, "");
        }
        else
        {
            FUN6(VAR2);
        }
    }
    break;
    case '':
        VAR18 = 0;
        for (VAR17 = 0; VAR17 < VAR35; VAR17++)
        {
            VAR8 = FUN12(VAR2->VAR36, VAR14 + VAR18, VAR17);
            VAR18 += VAR8;
        }
        FUN13(VAR12, VAR14, VAR18);
        FUN3(VAR2, VAR12);
        break;
    case '':
        VAR16 = VAR14;
        VAR18 = strlen(VAR6) / 2;
        FUN14((VAR15 *)VAR16, VAR6, VAR18);
        for (VAR17 = 0; VAR17 < VAR35 && VAR18 > 0; VAR17++)
        {
            VAR8 = FUN15(VAR2->VAR36, VAR16, VAR17);
            VAR18 -= VAR8;
            VAR16 += VAR8;
        }
        FUN3(VAR2, "");
        break;
    case '':
        VAR17 = FUN5(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR18 = FUN5(VAR6, NULL, 16);
        if (FUN16(VAR2->VAR36, VAR17, VAR14, VAR18, 0) != 0)
        {
            FUN3(VAR2, "");
        }
        else
        {
            FUN13(VAR12, VAR14, VAR18);
            FUN3(VAR2, VAR12);
        }
        break;
    case '':
        VAR17 = FUN5(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR18 = FUN5(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        FUN14(VAR14, VAR6, VAR18);
        if (FUN16(VAR2->VAR36, VAR17, VAR14, VAR18, 1) != 0)
            FUN3(VAR2, "");
        else
            FUN3(VAR2, "");
        break;
    case '':
        if (!VAR37)
            goto VAR38;
        VAR17 = FUN5(VAR6, (char **)&VAR6, 16);
        VAR8 = FUN12(VAR2->VAR36, VAR14, VAR17);
        if (VAR8)
        {
            FUN13(VAR12, VAR14, VAR8);
            FUN3(VAR2, VAR12);
        }
        else
        {
            FUN3(VAR2, "");
        }
        break;
    case '':
        if (!VAR37)
            goto VAR38;
        VAR17 = FUN5(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR8 = strlen(VAR6) / 2;
        FUN14(VAR14, VAR6, VAR8);
        FUN15(VAR2->VAR36, VAR14, VAR17);
        FUN3(VAR2, "");
        break;
    case '':
    case '':
        VAR9 = FUN8(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR17 = FUN5(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR18 = FUN5(VAR6, (char **)&VAR6, 16);
        if (VAR7 == '')
            VAR10 = FUN17(VAR17, VAR18, VAR9);
        else
            VAR10 = FUN18(VAR17, VAR18, VAR9);
        if (VAR10 >= 0)
            FUN3(VAR2, "");
        else if (VAR10 == -VAR39)
            FUN3(VAR2, "");
        else
            FUN3(VAR2, "");
        break;
    case '':
        VAR9 = *VAR6++;
        VAR11 = FUN5(VAR6, (char **)&VAR6, 16);
        if (VAR11 == -1 || VAR11 == 0)
        {
            FUN3(VAR2, "");
            break;
        }
        for (VAR5 = VAR40; VAR5 != NULL; VAR5 = VAR5->VAR41)
            if (VAR5->VAR21 + 1 == VAR11)
                break;
        if (VAR5 == NULL)
        {
            FUN3(VAR2, "");
            break;
        }
        switch (VAR9)
        {
        case '':
            VAR2->VAR20 = VAR5;
            FUN3(VAR2, "");
            break;
        case '':
            VAR2->VAR36 = VAR5;
            FUN3(VAR2, "");
            break;
        default:
            FUN3(VAR2, "");
            break;
        }
        break;
    case '':
        VAR11 = FUN5(VAR6, (char **)&VAR6, 16);
        if (VAR11 > 0 && VAR11 < VAR42 + 1)
            if (VAR11 == 1)
                FUN3(VAR2, "");
            else
                FUN3(VAR2, "");
        break;
    case '':
    case '':
        if (!strcmp(VAR6, ""))
        {
            snprintf(VAR12, sizeof(VAR12), "", VAR43, VAR44, VAR45);
            FUN3(VAR2, VAR12);
            break;
        }
        else if (FUN19(VAR6, "", 10) == 0)
        {
            VAR6 += 10;
            if (*VAR6 != '')
            {
                snprintf(VAR12, sizeof(VAR12), "", VAR31);
                FUN3(VAR2, VAR12);
                break;
            }
            VAR6++;
            VAR9 = FUN8(VAR6, (char **)&VAR6, 16);
            VAR31 = VAR9;
            FUN3(VAR2, "");
            break;
        }
        else if (strcmp(VAR6, "") == 0)
        {
            FUN3(VAR2, "");
            break;
        }
        else if (strcmp(VAR6, "") == 0)
        {
            VAR2->VAR46 = VAR40;
            goto VAR47;
        }
        else if (strcmp(VAR6, "") == 0)
        {
        VAR47:
            if (VAR2->VAR46)
            {
                snprintf(VAR12, sizeof(VAR12), "", VAR2->VAR46->VAR21 + 1);
                FUN3(VAR2, VAR12);
                VAR2->VAR46 = VAR2->VAR46->VAR41;
            }
            else
                FUN3(VAR2, "");
            break;
        }
        else if (FUN19(VAR6, "", 16) == 0)
        {
            VAR11 = FUN5(VAR6 + 16, (char **)&VAR6, 16);
            for (VAR5 = VAR40; VAR5 != NULL; VAR5 = VAR5->VAR41)
                if (VAR5->VAR21 + 1 == VAR11)
                {
                    VAR18 = snprintf((char *)VAR14, sizeof(VAR14), "", VAR5->VAR21, VAR5->VAR48 ? "" : "");
                    FUN13(VAR12, VAR14, VAR18);
                    FUN3(VAR2, VAR12);
                    break;
                }
            break;
        }
        else if (FUN19(VAR6, "", 7) == 0)
        {
            VAR49 *VAR50 = VAR2->VAR20->VAR51;
            snprintf(VAR12, sizeof(VAR12), "" VAR52 "" VAR52 "" VAR52, VAR50->VAR53->VAR54, VAR50->VAR53->VAR55, VAR50->VAR53->VAR55);
            FUN3(VAR2, VAR12);
            break;
        }
        else if (FUN19(VAR6, "", 5) == 0)
        {
            int VAR18 = strlen(VAR6 + 5);
            if ((VAR18 % 2) != 0)
            {
                FUN3(VAR2, "");
                break;
            }
            FUN14(VAR14, VAR6 + 5, VAR18);
            VAR18 = VAR18 / 2;
            VAR14[VAR18++] = 0;
            FUN20(VAR2->VAR56, VAR14, VAR18);
            FUN3(VAR2, "");
            break;
        }
        if (FUN19(VAR6, "", 9) == 0)
        {
            snprintf(VAR12, sizeof(VAR12), "", VAR13);
            strcat(VAR12, "");
            FUN3(VAR2, VAR12);
            break;
        }
        if (FUN19(VAR6, "", 19) == 0)
        {
            const char *VAR57;
            target_ulong VAR58;
            VAR37 = 1;
            VAR6 += 19;
            VAR57 = FUN21(VAR6, &VAR6);
            if (!VAR57)
            {
                snprintf(VAR12, sizeof(VAR12), "");
                FUN3(VAR2, VAR12);
                break;
            }
            if (*VAR6 == '')
                VAR6++;
            VAR17 = FUN8(VAR6, (char **)&VAR6, 16);
            if (*VAR6 == '')
                VAR6++;
            VAR18 = FUN8(VAR6, (char **)&VAR6, 16);
            VAR58 = strlen(VAR57);
            if (VAR17 > VAR58)
            {
                snprintf(VAR12, sizeof(VAR12), "");
                FUN3(VAR2, VAR12);
                break;
            }
            if (VAR18 > (VAR13 - 5) / 2)
                VAR18 = (VAR13 - 5) / 2;
            if (VAR18 < VAR58 - VAR17)
            {
                VAR12[0] = '';
                VAR18 = FUN22(VAR12 + 1, VAR57 + VAR17, VAR18);
            }
            else
            {
                VAR12[0] = '';
                VAR18 = FUN22(VAR12 + 1, VAR57 + VAR17, VAR58 - VAR17);
            }
            FUN23(VAR2, VAR12, VAR18 + 1);
            break;
        }
        goto VAR38;
    default:
    VAR38:
        VAR12[0] = '';
        FUN3(VAR2, VAR12);
        break;
    }
    return VAR29;
}