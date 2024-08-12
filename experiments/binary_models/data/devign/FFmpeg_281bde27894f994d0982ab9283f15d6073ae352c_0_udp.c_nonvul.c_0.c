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
    VAR2->VAR20 = 1;
    VAR2->VAR21 = 1472;
    VAR14 = !(VAR4 & VAR22);
    VAR12->VAR23 = 16;
    VAR12->VAR24 = VAR14 ? VAR25 : VAR26;
    VAR12->VAR27 = 7 * 188 * 4096;
    VAR15 = strchr(VAR3, '');
    if (VAR15)
    {
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            char *VAR28 = NULL;
            VAR12->VAR29 = FUN3(VAR16, &VAR28, 10);
            if (VAR16 == VAR28)
                VAR12->VAR29 = 1;
            VAR19 = 1;
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            char *VAR28 = NULL;
            VAR12->VAR30 = FUN3(VAR16, &VAR28, 10);
            if (VAR16 == VAR28)
                VAR12->VAR30 = 1;
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR12->VAR23 = FUN3(VAR16, NULL, 10);
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR12->VAR31 = FUN3(VAR16, NULL, 10);
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR2->VAR21 = FUN3(VAR16, NULL, 10);
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR12->VAR24 = FUN3(VAR16, NULL, 10);
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR12->VAR32 = FUN3(VAR16, NULL, 10);
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            VAR12->VAR27 = FUN3(VAR16, NULL, 10) * 188;
        }
        if (FUN2(VAR16, sizeof(VAR16), "", VAR15))
        {
            FUN4(VAR6, VAR16, sizeof(VAR6));
        }
    }
    FUN5(NULL, 0, NULL, 0, VAR5, sizeof(VAR5), &VAR7, NULL, 0, VAR3);
    if (VAR5[0] == '' || VAR5[0] == '')
    {
        if (!(VAR4 & VAR22))
            goto VAR33;
    }
    else
    {
        if (FUN6(VAR2, VAR3) < 0)
            goto VAR33;
    }
    if ((VAR12->VAR34 || !VAR12->VAR31) && (VAR2->VAR4 & VAR22))
        VAR12->VAR31 = VAR7;
    VAR8 = FUN7(VAR12, &VAR17, &VAR18, VAR6);
    if (VAR8 < 0)
        goto VAR33;
    if (VAR12->VAR29 || (VAR12->VAR34 && !VAR19))
    {
        VAR12->VAR29 = 1;
        if (FUN8(VAR8, VAR35, VAR36, &(VAR12->VAR29), sizeof(VAR12->VAR29)) != 0)
            goto VAR33;
    }
    if (VAR12->VAR34 && !(VAR2->VAR4 & VAR37))
    {
        VAR10 = FUN9(VAR8, (struct VAR38 *)&VAR12->VAR39, VAR18);
    }
    if (VAR10 < 0 && FUN9(VAR8, (struct VAR38 *)&VAR17, VAR18) < 0)
    {
        FUN10(VAR2, VAR40, "", strerror(VAR41));
        goto VAR33;
    }
    VAR18 = sizeof(VAR17);
    FUN11(VAR8, (struct VAR38 *)&VAR17, &VAR18);
    VAR12->VAR31 = FUN12(&VAR17, VAR18);
    if (VAR12->VAR34)
    {
        if (VAR2->VAR4 & VAR37)
        {
            if (FUN13(VAR8, VAR12->VAR23, (struct VAR38 *)&VAR12->VAR39) < 0)
                goto VAR33;
        }
        if (VAR2->VAR4 & VAR22)
        {
            if (FUN14(VAR8, (struct VAR38 *)&VAR12->VAR39) < 0)
                goto VAR33;
        }
    }
    if (VAR14)
    {
        VAR9 = VAR12->VAR24;
        if (FUN8(VAR8, VAR35, VAR42, &VAR9, sizeof(VAR9)) < 0)
        {
            FUN10(VAR2, VAR40, "", strerror(VAR41));
            goto VAR33;
        }
    }
    else
    {
        VAR9 = VAR12->VAR24;
        if (FUN8(VAR8, VAR35, VAR43, &VAR9, sizeof(VAR9)) < 0)
        {
            FUN10(VAR2, VAR44, "", strerror(VAR41));
        }
        FUN15(VAR8, 1);
    }
    if (VAR12->VAR32)
    {
        if (connect(VAR8, (struct VAR38 *)&VAR12->VAR39, VAR12->VAR45))
        {
            FUN10(VAR2, VAR40, "", strerror(VAR41));
            goto VAR33;
        }
    }
    VAR12->VAR8 = VAR8;
    if (!VAR14 && VAR12->VAR27)
    {
        int VAR46;
        VAR12->VAR47 = FUN16(VAR12->VAR27);
        VAR46 = pthread_mutex_init(&VAR12->mutex, NULL);
        if (VAR46 != 0)
        {
            FUN10(VAR2, VAR40, "", strerror(VAR46));
            goto VAR33;
        }
        VAR46 = pthread_cond_init(&VAR12->VAR48, NULL);
        if (VAR46 != 0)
        {
            FUN10(VAR2, VAR40, "", strerror(VAR46));
            goto VAR49;
        }
        VAR46 = FUN17(&VAR12->VAR50, NULL, VAR51, VAR2);
        if (VAR46 != 0)
        {
            FUN10(VAR2, VAR40, "", strerror(VAR46));
            goto VAR52;
        }
        VAR12->VAR53 = 1;
    }
    return 0;
VAR52:
    pthread_cond_destroy(&VAR12->VAR48);
VAR49:
    pthread_mutex_destroy(&VAR12->mutex);
VAR33:
    if (VAR8 >= 0)
        FUN18(VAR8);
    FUN19(VAR12->VAR47);
    return FUN20(VAR54);
}