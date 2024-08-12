static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    const char *VAR6;
    uint32_t VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    char VAR12[VAR13];
    uint8_t VAR14[VAR13];
    VAR15 *VAR16;
    target_ulong VAR17, VAR18;
    FUN2("", VAR3);
    VAR6 = VAR3;
    VAR8 = *VAR6++;
    switch (VAR8)
    {
    case '':
        snprintf(VAR12, sizeof(VAR12), "", VAR19, FUN3(FUN4(VAR2->VAR20)));
        FUN5(VAR2, VAR12);
        FUN6();
        break;
    case '':
        if (*VAR6 != '')
        {
            VAR17 = FUN7(VAR6, (char **)&VAR6, 16);
            FUN8(VAR2, VAR17);
        }
        VAR2->signal = 0;
        FUN9(VAR2);
        return VAR21;
    case '':
        VAR2->signal = FUN10(FUN11(VAR6, (char **)&VAR6, 16));
        if (VAR2->signal == -1)
            VAR2->signal = 0;
        FUN9(VAR2);
        return VAR21;
    case '':
        if (FUN12(VAR6, "", 4) == 0)
        {
            int VAR22, VAR23;
            VAR6 += 4;
            if (*VAR6 == '')
            {
                FUN5(VAR2, "");
                break;
            }
            VAR11 = 0;
            VAR22 = 0;
            VAR23 = 0;
            while (*VAR6)
            {
                int VAR24, signal;
                if (*VAR6++ != '')
                {
                    VAR11 = 0;
                    break;
                }
                VAR24 = *VAR6++;
                signal = 0;
                if (VAR24 == '' || VAR24 == '')
                {
                    signal = FUN11(VAR6, (char **)&VAR6, 16);
                }
                else if (VAR24 != '' && VAR24 != '')
                {
                    VAR11 = 0;
                    break;
                }
                VAR7 = 0;
                if (*VAR6 == '')
                {
                    VAR7 = FUN7(VAR6 + 1, (char **)&VAR6, 16);
                }
                VAR24 = FUN13(VAR24);
                if (VAR11 == 0 || (VAR11 == '' && VAR24 == ''))
                {
                    VAR11 = VAR24;
                    VAR22 = signal;
                    VAR23 = VAR7;
                }
            }
            if (VAR11)
            {
                if (VAR23 != -1 && VAR23 != 0)
                {
                    VAR5 = FUN14(VAR23);
                    if (VAR5 == NULL)
                    {
                        FUN5(VAR2, "");
                        break;
                    }
                    VAR2->VAR20 = VAR5;
                }
                if (VAR11 == '')
                {
                    FUN15(VAR2->VAR20, VAR25);
                }
                VAR2->signal = VAR22;
                FUN9(VAR2);
                return VAR21;
            }
            break;
        }
        else
        {
            goto VAR26;
        }
    case '':
        fprintf(VAR27, "");
        FUN16(0);
    case '':
        FUN6();
        VAR28 = VAR29;
        FUN9(VAR2);
        FUN5(VAR2, "");
        break;
    case '':
        if (*VAR6 != '')
        {
            VAR17 = FUN7(VAR6, (char **)&VAR6, 16);
            FUN8(VAR2, VAR17);
        }
        FUN15(VAR2->VAR20, VAR25);
        FUN9(VAR2);
        return VAR21;
    case '':
    {
        target_ulong VAR30;
        target_ulong VAR31;
        VAR30 = FUN7(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
        {
            VAR6++;
            VAR31 = FUN7(VAR6, (char **)&VAR6, 16);
        }
        else
        {
            VAR31 = 0;
        }
        if (*VAR6 == '')
            VAR6++;
        VAR10 = *VAR6;
        if (VAR2->VAR32)
        {
            VAR2->FUN17(VAR2->VAR20, VAR30, VAR31);
            VAR2->VAR32 = NULL;
        }
        if (VAR10 == '')
        {
            FUN5(VAR2, "");
        }
        else
        {
            FUN9(VAR2);
        }
    }
    break;
    case '':
        FUN18(FUN4(VAR2->VAR33));
        VAR5 = VAR2->VAR33;
        VAR18 = 0;
        for (VAR17 = 0; VAR17 < VAR34; VAR17++)
        {
            VAR9 = FUN19(VAR2->VAR33, VAR14 + VAR18, VAR17);
            VAR18 += VAR9;
        }
        FUN20(VAR12, VAR14, VAR18);
        FUN5(VAR2, VAR12);
        break;
    case '':
        FUN18(FUN4(VAR2->VAR33));
        VAR5 = VAR2->VAR33;
        VAR16 = VAR14;
        VAR18 = strlen(VAR6) / 2;
        FUN21((VAR15 *)VAR16, VAR6, VAR18);
        for (VAR17 = 0; VAR17 < VAR34 && VAR18 > 0; VAR17++)
        {
            VAR9 = FUN22(VAR2->VAR33, VAR16, VAR17);
            VAR18 -= VAR9;
            VAR16 += VAR9;
        }
        FUN5(VAR2, "");
        break;
    case '':
        VAR17 = FUN7(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR18 = FUN7(VAR6, NULL, 16);
        if (FUN23(VAR2->VAR33, VAR17, VAR14, VAR18, 0) != 0)
        {
            FUN5(VAR2, "");
        }
        else
        {
            FUN20(VAR12, VAR14, VAR18);
            FUN5(VAR2, VAR12);
        }
        break;
    case '':
        VAR17 = FUN7(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR18 = FUN7(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        FUN21(VAR14, VAR6, VAR18);
        if (FUN23(VAR2->VAR33, VAR17, VAR14, VAR18, 1) != 0)
        {
            FUN5(VAR2, "");
        }
        else
        {
            FUN5(VAR2, "");
        }
        break;
    case '':
        if (!VAR35)
            goto VAR26;
        VAR17 = FUN7(VAR6, (char **)&VAR6, 16);
        VAR9 = FUN19(VAR2->VAR33, VAR14, VAR17);
        if (VAR9)
        {
            FUN20(VAR12, VAR14, VAR9);
            FUN5(VAR2, VAR12);
        }
        else
        {
            FUN5(VAR2, "");
        }
        break;
    case '':
        if (!VAR35)
            goto VAR26;
        VAR17 = FUN7(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR9 = strlen(VAR6) / 2;
        FUN21(VAR14, VAR6, VAR9);
        FUN22(VAR2->VAR33, VAR14, VAR17);
        FUN5(VAR2, "");
        break;
    case '':
    case '':
        VAR10 = FUN11(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR17 = FUN7(VAR6, (char **)&VAR6, 16);
        if (*VAR6 == '')
            VAR6++;
        VAR18 = FUN7(VAR6, (char **)&VAR6, 16);
        if (VAR8 == '')
            VAR11 = FUN24(VAR17, VAR18, VAR10);
        else
            VAR11 = FUN25(VAR17, VAR18, VAR10);
        if (VAR11 >= 0)
            FUN5(VAR2, "");
        else if (VAR11 == -VAR36)
            FUN5(VAR2, "");
        else
            FUN5(VAR2, "");
        break;
    case '':
        VAR10 = *VAR6++;
        VAR7 = FUN7(VAR6, (char **)&VAR6, 16);
        if (VAR7 == -1 || VAR7 == 0)
        {
            FUN5(VAR2, "");
            break;
        }
        VAR5 = FUN14(VAR7);
        if (VAR5 == NULL)
        {
            FUN5(VAR2, "");
            break;
        }
        switch (VAR10)
        {
        case '':
            VAR2->VAR20 = VAR5;
            FUN5(VAR2, "");
            break;
        case '':
            VAR2->VAR33 = VAR5;
            FUN5(VAR2, "");
            break;
        default:
            FUN5(VAR2, "");
            break;
        }
        break;
    case '':
        VAR7 = FUN7(VAR6, (char **)&VAR6, 16);
        VAR5 = FUN14(VAR7);
        if (VAR5 != NULL)
        {
            FUN5(VAR2, "");
        }
        else
        {
            FUN5(VAR2, "");
        }
        break;
    case '':
    case '':
        if (!strcmp(VAR6, ""))
        {
            snprintf(VAR12, sizeof(VAR12), "", VAR37, VAR38, VAR39);
            FUN5(VAR2, VAR12);
            break;
        }
        else if (FUN12(VAR6, "", 10) == 0)
        {
            VAR6 += 10;
            if (*VAR6 != '')
            {
                snprintf(VAR12, sizeof(VAR12), "", VAR25);
                FUN5(VAR2, VAR12);
                break;
            }
            VAR6++;
            VAR10 = FUN11(VAR6, (char **)&VAR6, 16);
            VAR25 = VAR10;
            FUN5(VAR2, "");
            break;
        }
        else if (strcmp(VAR6, "") == 0)
        {
            FUN5(VAR2, "");
            break;
        }
        else if (strcmp(VAR6, "") == 0)
        {
            VAR2->VAR40 = VAR41->VAR42;
            goto VAR43;
        }
        else if (strcmp(VAR6, "") == 0)
        {
        VAR43:
            if (VAR2->VAR40)
            {
                snprintf(VAR12, sizeof(VAR12), "", FUN3(FUN4(VAR2->VAR40)));
                FUN5(VAR2, VAR12);
                VAR2->VAR40 = FUN4(VAR2->VAR40)->VAR44->VAR42;
            }
            else
                FUN5(VAR2, "");
            break;
        }
        else if (FUN12(VAR6, "", 16) == 0)
        {
            VAR7 = FUN7(VAR6 + 16, (char **)&VAR6, 16);
            VAR5 = FUN14(VAR7);
            if (VAR5 != NULL)
            {
                VAR45 *VAR46 = FUN4(VAR5);
                FUN18(VAR46);
                VAR18 = snprintf((char *)VAR14, sizeof(VAR14), "", VAR46->VAR47, VAR46->VAR48 ? "" : "");
                FUN20(VAR12, VAR14, VAR18);
                FUN5(VAR2, VAR12);
            }
            break;
        }
        else if (FUN12(VAR6, "", 7) == 0)
        {
            VAR49 *VAR50 = VAR2->VAR20->VAR51;
            snprintf(VAR12, sizeof(VAR12), "" VAR52 "" VAR52 "" VAR52, VAR50->VAR53->VAR54, VAR50->VAR53->VAR55, VAR50->VAR53->VAR55);
            FUN5(VAR2, VAR12);
            break;
        }
        else if (FUN12(VAR6, "", 5) == 0)
        {
            int VAR18 = strlen(VAR6 + 5);
            if ((VAR18 % 2) != 0)
            {
                FUN5(VAR2, "");
                break;
            }
            FUN21(VAR14, VAR6 + 5, VAR18);
            VAR18 = VAR18 / 2;
            VAR14[VAR18++] = 0;
            FUN26(VAR2->VAR56, VAR14, VAR18);
            FUN5(VAR2, "");
            break;
        }
        if (FUN12(VAR6, "", 9) == 0)
        {
            snprintf(VAR12, sizeof(VAR12), "", VAR13);
            FUN27(VAR12, sizeof(VAR12), "");
            FUN5(VAR2, VAR12);
            break;
        }
        if (FUN12(VAR6, "", 19) == 0)
        {
            const char *VAR57;
            target_ulong VAR58;
            VAR35 = 1;
            VAR6 += 19;
            VAR57 = FUN28(VAR6, &VAR6);
            if (!VAR57)
            {
                snprintf(VAR12, sizeof(VAR12), "");
                FUN5(VAR2, VAR12);
                break;
            }
            if (*VAR6 == '')
                VAR6++;
            VAR17 = FUN11(VAR6, (char **)&VAR6, 16);
            if (*VAR6 == '')
                VAR6++;
            VAR18 = FUN11(VAR6, (char **)&VAR6, 16);
            VAR58 = strlen(VAR57);
            if (VAR17 > VAR58)
            {
                snprintf(VAR12, sizeof(VAR12), "");
                FUN5(VAR2, VAR12);
                break;
            }
            if (VAR18 > (VAR13 - 5) / 2)
                VAR18 = (VAR13 - 5) / 2;
            if (VAR18 < VAR58 - VAR17)
            {
                VAR12[0] = '';
                VAR18 = FUN29(VAR12 + 1, VAR57 + VAR17, VAR18);
            }
            else
            {
                VAR12[0] = '';
                VAR18 = FUN29(VAR12 + 1, VAR57 + VAR17, VAR58 - VAR17);
            }
            FUN30(VAR2, VAR12, VAR18 + 1);
            break;
        }
        goto VAR26;
    default:
    VAR26:
        VAR12[0] = '';
        FUN5(VAR2, VAR12);
        break;
    }
    return VAR21;
}