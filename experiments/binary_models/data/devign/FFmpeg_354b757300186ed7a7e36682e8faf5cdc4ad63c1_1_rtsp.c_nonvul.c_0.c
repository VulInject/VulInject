int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    char VAR6[1024], VAR7[1024], VAR8[1024], VAR9[2048], VAR10[128];
    char *VAR11, *VAR12, *VAR13;
    int VAR14, VAR15, VAR16;
    RTSPMessageHeader VAR17 = {0}, *VAR18 = &VAR17;
    int VAR19 = 0;
    char VAR20[64];
    struct sockaddr_storage VAR21;
    socklen_t VAR22 = sizeof(VAR21);
    if (!FUN2())
        return FUN3(VAR23);
VAR24:
    VAR4->VAR25 = VAR26;
    FUN4(NULL, 0, VAR10, sizeof(VAR10), VAR6, sizeof(VAR6), &VAR14, VAR7, sizeof(VAR7), VAR2->VAR13);
    if (*VAR10)
    {
        FUN5(VAR4->VAR10, VAR10, sizeof(VAR4->VAR10));
    }
    if (VAR14 < 0)
        VAR14 = VAR27;
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
                VAR19 |= (1 << VAR28);
            }
            else if (!strcmp(VAR12, ""))
            {
                VAR19 |= (1 << VAR29);
            }
            else if (!strcmp(VAR12, ""))
            {
                VAR19 |= (1 << VAR30);
            }
            else if (!strcmp(VAR12, ""))
            {
                VAR19 |= (1 << VAR30);
                VAR4->VAR25 = VAR31;
            }
            else
            {
                int VAR32 = strlen(VAR12);
                memmove(++VAR13, VAR12, VAR32);
                VAR13 += VAR32;
                if (VAR11)
                    *VAR13 = '';
            }
        }
        *VAR13 = 0;
    }
    if (!VAR19)
        VAR19 = (1 << VAR33) - 1;
    if (VAR2->VAR34)
    {
        VAR19 &= (1 << VAR28) | (1 << VAR30);
        if (!VAR19 || VAR4->VAR25 == VAR31)
        {
            FUN6(VAR2, VAR35, ""
                                    "");
            VAR15 = FUN3(VAR36);
            goto VAR37;
        }
    }
    FUN7(VAR4->VAR38, sizeof(VAR4->VAR38), "", NULL, VAR6, VAR14, "", VAR7);
    if (VAR4->VAR25 == VAR31)
    {
        char VAR39[1024];
        char VAR40[17];
        char VAR41[1024];
        FUN7(VAR39, sizeof(VAR39), "", VAR10, VAR6, VAR14, "", VAR7);
        snprintf(VAR40, sizeof(VAR40), "", FUN8(), FUN8());
        if (FUN9(&VAR4->VAR42, VAR39, VAR43) < 0)
        {
            VAR15 = FUN3(VAR23);
            goto VAR37;
        }
        snprintf(VAR41, sizeof(VAR41), ""
                                           ""
                                           ""
                                           "",
                 VAR40);
        FUN10(VAR4->VAR42, VAR41);
        if (FUN11(VAR4->VAR42))
        {
            VAR15 = FUN3(VAR23);
            goto VAR37;
        }
        if (FUN9(&VAR4->VAR44, VAR39, VAR45) < 0)
        {
            VAR15 = FUN3(VAR23);
            goto VAR37;
        }
        snprintf(VAR41, sizeof(VAR41), ""
                                           ""
                                           ""
                                           ""
                                           ""
                                           "",
                 VAR40);
        FUN10(VAR4->VAR44, VAR41);
        FUN12(VAR4->VAR44, 0);
        FUN13(VAR4->VAR44, VAR4->VAR42);
        if (FUN11(VAR4->VAR44))
        {
            VAR15 = FUN3(VAR23);
            goto VAR37;
        }
    }
    else
    {
        FUN7(VAR8, sizeof(VAR8), "", NULL, VAR6, VAR14, NULL);
        if (FUN14(&VAR4->VAR42, VAR8, VAR46) < 0)
        {
            VAR15 = FUN3(VAR23);
            goto VAR37;
        }
        VAR4->VAR44 = VAR4->VAR42;
    }
    VAR4->VAR47 = 0;
    VAR16 = FUN15(VAR4->VAR42);
    if (!FUN16(VAR16, (struct VAR48 *)&VAR21, &VAR22))
    {
        getnameinfo((struct VAR48 *)&VAR21, VAR22, VAR6, sizeof(VAR6), NULL, 0, VAR49);
    }
    for (VAR4->VAR50 = VAR51;;)
    {
        VAR9[0] = 0;
        if (VAR4->VAR50 == VAR52)
            FUN17(VAR9, ""
                            ""
                            ""
                            "",
                       sizeof(VAR9));
        FUN18(VAR2, "", VAR4->VAR38, VAR9, VAR18, NULL);
        if (VAR18->VAR53 != VAR54)
        {
            VAR15 = VAR55;
            goto VAR37;
        }
        if (VAR4->VAR50 != VAR52 && VAR18->VAR20[0])
        {
            VAR4->VAR50 = VAR52;
            continue;
        }
        else if (!FUN19(VAR18->VAR56, "", 9))
        {
            VAR4->VAR50 = VAR57;
        }
        else if (VAR4->VAR50 == VAR52)
            strcpy(VAR20, VAR18->VAR20);
        break;
    }
    if (VAR2->VAR58)
        VAR15 = FUN20(VAR2, VAR18);
    else
        VAR15 = FUN21(VAR2, VAR6);
    if (VAR15)
        goto VAR37;
    do
    {
        int VAR59 = VAR60[VAR19 & ~(VAR19 - 1)];
        VAR15 = FUN22(VAR2, VAR6, VAR14, VAR59, VAR4->VAR50 == VAR52 ? VAR20 : NULL);
        if (VAR15 < 0)
            goto VAR37;
        VAR19 &= ~(1 << VAR59);
        if (VAR19 == 0 && VAR15 == 1)
        {
            VAR15 = FUN23(VAR61);
            goto VAR37;
        }
    } while (VAR15);
    VAR4->VAR62 = VAR63;
    VAR4->VAR64 = 0;
    return 0;
VAR37:
    FUN24(VAR2);
    FUN25(VAR2);
    if (VAR18->VAR53 >= 300 && VAR18->VAR53 < 400 && VAR2->VAR58)
    {
        FUN5(VAR2->VAR13, VAR18->VAR65, sizeof(VAR2->VAR13));
        FUN6(VAR2, VAR66, "", VAR18->VAR53, VAR2->VAR13);
        goto VAR24;
    }
    FUN26();
    return VAR15;
}