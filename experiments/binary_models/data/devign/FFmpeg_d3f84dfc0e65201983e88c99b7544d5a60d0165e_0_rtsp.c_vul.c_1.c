int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    char VAR6[1024], VAR7[1024], VAR8[1024], VAR9[2048], VAR10[128];
    char *VAR11, *VAR12, *VAR13;
    VAR14 *VAR15, *VAR16;
    int VAR17, VAR18, VAR19;
    RTSPMessageHeader VAR20 = {}, *VAR21 = &VAR20;
    int VAR22 = 0;
    char VAR23[64];
    struct sockaddr_storage VAR24;
    socklen_t VAR25 = sizeof(VAR24);
    if (!FUN2())
        return FUN3(VAR26);
VAR27:
    VAR4->VAR28 = VAR29;
    FUN4(NULL, 0, VAR10, sizeof(VAR10), VAR6, sizeof(VAR6), &VAR17, VAR7, sizeof(VAR7), VAR2->VAR13);
    if (*VAR10)
    {
        FUN5(VAR4->VAR10, VAR10, sizeof(VAR4->VAR10));
    }
    if (VAR17 < 0)
        VAR17 = VAR30;
    VAR11 = strrchr(VAR7, '');
    if (VAR11)
    {
        VAR13 = VAR11;
        while (VAR11)
        {
            VAR12 = ++VAR11;
            VAR11 = strchr(VAR11, '');
            if (VAR11)
                *VAR11 = 0;
            if (!strcmp(VAR12, ""))
            {
                VAR22 |= (1 << VAR31);
            }
            else if (!strcmp(VAR12, ""))
            {
                VAR22 |= (1 << VAR32);
            }
            else if (!strcmp(VAR12, ""))
            {
                VAR22 |= (1 << VAR33);
            }
            else if (!strcmp(VAR12, ""))
            {
                VAR22 |= (1 << VAR33);
                VAR4->VAR28 = VAR34;
            }
            else
            {
                int VAR35 = strlen(VAR12);
                memmove(++VAR13, VAR12, VAR35);
                VAR13 += VAR35;
                if (VAR11)
                    *VAR13 = '';
            }
        }
        *VAR13 = 0;
    }
    if (!VAR22)
        VAR22 = (1 << VAR36) - 1;
    if (VAR2->VAR37)
    {
        VAR22 &= (1 << VAR31) | (1 << VAR33);
        if (!VAR22 || VAR4->VAR28 == VAR34)
        {
            FUN6(VAR2, VAR38, ""
                                    "");
            VAR18 = FUN3(VAR39);
            goto VAR40;
        }
    }
    FUN7(VAR4->VAR41, sizeof(VAR4->VAR41), "", NULL, VAR6, VAR17, "", VAR7);
    if (VAR4->VAR28 == VAR34)
    {
        char VAR42[1024];
        char VAR43[17];
        char VAR44[1024];
        FUN7(VAR42, sizeof(VAR42), "", NULL, VAR6, VAR17, "", VAR7);
        snprintf(VAR43, sizeof(VAR43), "", FUN8(), FUN8());
        if (FUN9(&VAR15, VAR42, VAR45) < 0)
        {
            VAR18 = FUN3(VAR26);
            goto VAR40;
        }
        snprintf(VAR44, sizeof(VAR44), ""
                                           ""
                                           ""
                                           "",
                 VAR43);
        FUN10(VAR15, VAR44);
        if (FUN11(VAR15, NULL, 0))
        {
            VAR18 = FUN3(VAR26);
            goto VAR40;
        }
        if (FUN9(&VAR16, VAR42, VAR46) < 0)
        {
            VAR18 = FUN3(VAR26);
            goto VAR40;
        }
        snprintf(VAR44, sizeof(VAR44), ""
                                           ""
                                           ""
                                           ""
                                           ""
                                           "",
                 VAR43);
        FUN10(VAR16, VAR44);
        FUN12(VAR16, 0);
    }
    else
    {
        FUN7(VAR8, sizeof(VAR8), "", NULL, VAR6, VAR17, NULL);
        if (FUN9(&VAR15, VAR8, VAR47) < 0)
        {
            VAR18 = FUN3(VAR26);
            goto VAR40;
        }
        VAR16 = VAR15;
    }
    VAR4->VAR15 = VAR15;
    VAR4->VAR16 = VAR16;
    VAR4->VAR48 = 0;
    VAR19 = FUN13(VAR15);
    if (!FUN14(VAR19, (struct VAR49 *)&VAR24, &VAR25))
    {
        getnameinfo((struct VAR49 *)&VAR24, VAR25, VAR6, sizeof(VAR6), NULL, 0, VAR50);
    }
    for (VAR4->VAR51 = VAR52;;)
    {
        VAR9[0] = 0;
        if (VAR4->VAR51 == VAR53)
            FUN15(VAR9, ""
                            ""
                            ""
                            "",
                       sizeof(VAR9));
        FUN16(VAR2, "", VAR4->VAR41, VAR9, VAR21, NULL);
        if (VAR21->VAR54 != VAR55)
        {
            VAR18 = VAR56;
            goto VAR40;
        }
        if (VAR4->VAR51 != VAR53 && VAR21->VAR23[0])
        {
            VAR4->VAR51 = VAR53;
            continue;
        }
        else if (!FUN17(VAR21->VAR57, "", 9))
        {
            VAR4->VAR51 = VAR58;
        }
        else if (VAR4->VAR51 == VAR53)
            strcpy(VAR23, VAR21->VAR23);
        break;
    }
    if (VAR2->VAR59)
        VAR18 = FUN18(VAR2, VAR21);
    else
        VAR18 = FUN19(VAR2, VAR6);
    if (VAR18)
        goto VAR40;
    do
    {
        int VAR60 = VAR61[VAR22 & ~(VAR22 - 1)];
        VAR18 = FUN20(VAR2, VAR6, VAR17, VAR60, VAR4->VAR51 == VAR53 ? VAR23 : NULL);
        if (VAR18 < 0)
            goto VAR40;
        VAR22 &= ~(1 << VAR60);
        if (VAR22 == 0 && VAR18 == 1)
        {
            VAR18 = FUN21(VAR62);
            goto VAR40;
        }
    } while (VAR18);
    VAR4->VAR63 = VAR64;
    VAR4->VAR65 = 0;
    return 0;
VAR40:
    FUN22(VAR2);
    FUN23(VAR2);
    if (VAR21->VAR54 >= 300 && VAR21->VAR54 < 400 && VAR2->VAR59)
    {
        FUN5(VAR2->VAR13, VAR21->VAR66, sizeof(VAR2->VAR13));
        FUN6(VAR2, VAR67, "", VAR21->VAR54, VAR2->VAR13);
        goto VAR27;
    }
    FUN24();
    return VAR18;