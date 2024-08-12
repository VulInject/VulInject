static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    char VAR5[1024], VAR6[1024] = "";
    int VAR7, VAR8 = -1, VAR9, VAR10 = -1;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    const char *VAR15;
    char VAR16[256];
    struct sockaddr_storage VAR17;
    int VAR18;
    int VAR19 = 0;
    int VAR20, VAR21 = 0, VAR22 = 0;
    char *VAR23[32];
    VAR2->VAR24 = 1;
    VAR2->VAR25 = 1472;
    VAR14 = !(VAR4 & VAR26);
    VAR12->VAR27 = 16;
    VAR12->VAR28 = VAR14 ? VAR29 : VAR30;
    VAR12->VAR31 = 7 * 188 * 4096;
    VAR15 = strchr(VAR3, '');
    if (VAR15)
    {
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            char *VAR32 = NULL;
            VAR12->VAR33 = FUN3(VAR16, &VAR32, 10);
            if (VAR16 == VAR32)
                VAR12->VAR33 = 1;
            VAR19 = 1;
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            char *VAR32 = NULL;
            VAR12->VAR34 = FUN3(VAR16, &VAR32, 10);
            if (VAR16 == VAR32)
                VAR12->VAR34 = 1;
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR12->VAR27 = FUN3(VAR16, NULL, 10);
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR12->VAR35 = FUN3(VAR16, NULL, 10);
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR2->VAR25 = FUN3(VAR16, NULL, 10);
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR12->VAR28 = FUN3(VAR16, NULL, 10);
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR12->VAR36 = FUN3(VAR16, NULL, 10);
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR12->VAR31 = FUN3(VAR16, NULL, 10) * 188;
            ""
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            FUN4(VAR6, VAR16, sizeof(VAR6));
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
            VAR21 = 1;
        if (VAR21 || FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            char *VAR37;
            VAR37 = VAR16;
            while (1)
            {
                char *VAR38 = strchr(VAR37, '');
                if (VAR38)
                    *VAR38 = '';
                VAR23[VAR22] = FUN5(VAR37);
                if (!VAR23[VAR22])
                    goto VAR39;
                VAR37 = VAR38 + 1;
                VAR22++;
                if (VAR22 >= FUN6(VAR23) || !VAR38)
                    break;
            }
        }
    }
    FUN7(NULL, 0, NULL, 0, VAR5, sizeof(VAR5), &VAR7, NULL, 0, VAR3);
    if (VAR5[0] == '' || VAR5[0] == '')
    {
        if (!(VAR4 & VAR26))
            goto VAR39;
    }
    else
    {
        if (FUN8(VAR2, VAR3) < 0)
            goto VAR39;
    }
    if ((VAR12->VAR40 || !VAR12->VAR35) && (VAR2->VAR4 & VAR26))
        VAR12->VAR35 = VAR7;
    VAR8 = FUN9(VAR12, &VAR17, &VAR18, VAR6);
    if (VAR8 < 0)
        goto VAR39;
    if (VAR12->VAR33 || (VAR12->VAR40 && !VAR19))
    {
        VAR12->VAR33 = 1;
        if (FUN10(VAR8, VAR41, VAR42, &(VAR12->VAR33), sizeof(VAR12->VAR33)) != 0)
            goto VAR39;
    }
    if (VAR12->VAR40 && !(VAR2->VAR4 & VAR43))
    {
        VAR10 = FUN11(VAR8, (struct VAR44 *)&VAR12->VAR45, VAR18);
    }
    if (VAR10 < 0 && FUN11(VAR8, (struct VAR44 *)&VAR17, VAR18) < 0)
    {
        FUN12(VAR2, VAR46, "");
        goto VAR39;
    }
    VAR18 = sizeof(VAR17);
    FUN13(VAR8, (struct VAR44 *)&VAR17, &VAR18);
    VAR12->VAR35 = FUN14(&VAR17, VAR18);
    if (VAR12->VAR40)
    {
        if (VAR2->VAR4 & VAR43)
        {
            if (FUN15(VAR8, VAR12->VAR27, (struct VAR44 *)&VAR12->VAR45) < 0)
                goto VAR39;
        }
        if (VAR2->VAR4 & VAR26)
        {
            if (VAR22 == 0 || !VAR21)
            {
                if (FUN16(VAR8, (struct VAR44 *)&VAR12->VAR45) < 0)
                    goto VAR39;
                if (VAR22)
                {
                    if (FUN17(VAR8, (struct VAR44 *)&VAR12->VAR45, VAR12->VAR47, VAR23, VAR22, 0) < 0)
                        goto VAR39;
                }
            }
            else if (VAR21 && VAR22)
            {
                if (FUN17(VAR8, (struct VAR44 *)&VAR12->VAR45, VAR12->VAR47, VAR23, VAR22, 1) < 0)
                    goto VAR39;
            }
            else
            {
                FUN18(NULL, VAR46, "");
                goto VAR39;
            }
        }
    }
    if (VAR14)
    {
        VAR9 = VAR12->VAR28;
        if (FUN10(VAR8, VAR41, VAR48, &VAR9, sizeof(VAR9)) < 0)
        {
            FUN12(VAR2, VAR46, "");
            goto VAR39;
        }
    }
    else
    {
        VAR9 = VAR12->VAR28;
        if (FUN10(VAR8, VAR41, VAR49, &VAR9, sizeof(VAR9)) < 0)
        {
            FUN12(VAR2, VAR50, "");
        }
        FUN19(VAR8, 1);
    }
    if (VAR12->VAR36)
    {
        if (connect(VAR8, (struct VAR44 *)&VAR12->VAR45, VAR12->VAR47))
        {
            FUN12(VAR2, VAR46, "");
            goto VAR39;
        }
    }
    for (VAR20 = 0; VAR20 < VAR22; VAR20++)
        FUN20(&VAR23[VAR20]);
    VAR12->VAR8 = VAR8;
    if (!VAR14 && VAR12->VAR31)
    {
        int VAR51;
        VAR12->VAR52 = FUN21(VAR12->VAR31);
        VAR51 = pthread_mutex_init(&VAR12->mutex, NULL);
        if (VAR51 != 0)
        {
            FUN18(VAR2, VAR46, "", strerror(VAR51));
            goto VAR39;
        }
        VAR51 = pthread_cond_init(&VAR12->VAR53, NULL);
        if (VAR51 != 0)
        {
            FUN18(VAR2, VAR46, "", strerror(VAR51));
            goto VAR54;
        }
        VAR51 = FUN22(&VAR12->VAR55, NULL, VAR56, VAR2);
        if (VAR51 != 0)
        {
            FUN18(VAR2, VAR46, "", strerror(VAR51));
            goto VAR57;
        }
        VAR12->VAR58 = 1;
    }
    return 0;
VAR57:
    pthread_cond_destroy(&VAR12->VAR53);
VAR54:
    pthread_mutex_destroy(&VAR12->mutex);
VAR39:
    if (VAR8 >= 0)
        FUN23(VAR8);
    FUN24(VAR12->VAR52);
    for (VAR20 = 0; VAR20 < VAR22; VAR20++)
        FUN20(&VAR23[VAR20]);
    return FUN25(VAR59);