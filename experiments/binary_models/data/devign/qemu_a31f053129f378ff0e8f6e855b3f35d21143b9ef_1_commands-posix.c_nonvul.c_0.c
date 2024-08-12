VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4 = NULL, *VAR5 = NULL;
    struct VAR6 *VAR7, *VAR8;
    char VAR9[512];
    if (FUN2(&VAR7) < 0)
    {
        snprintf(VAR9, sizeof(VAR9), "", strerror(VAR10));
        FUN3(VAR3, VAR11, VAR9);
        goto VAR12;
    }
    for (VAR8 = VAR7; VAR8; VAR8 = VAR8->VAR13)
    {
        VAR1 *VAR14;
        VAR15 **VAR16 = NULL, *VAR17 = NULL;
        char VAR18[VAR19];
        char VAR20[VAR21];
        int VAR22;
        struct ifreq VAR23;
        unsigned char *VAR24;
        void *VAR25;
        FUN4("", VAR8->VAR26);
        VAR14 = FUN5(VAR4, VAR8->VAR26);
        if (!VAR14)
        {
            VAR14 = FUN6(sizeof(*VAR14));
            VAR14->VAR27 = FUN6(sizeof(*VAR14->VAR27));
            VAR14->VAR27->VAR28 = FUN7(VAR8->VAR26);
            if (!VAR5)
            {
                VAR4 = VAR5 = VAR14;
            }
            else
            {
                VAR5->VAR29 = VAR14;
                VAR5 = VAR14;
            }
        }
        if (!VAR14->VAR27->VAR30 && VAR8->VAR31 & VAR32)
        {
            VAR22 = socket(VAR33, VAR34, 0);
            if (VAR22 == -1)
            {
                snprintf(VAR9, sizeof(VAR9), "", strerror(VAR10));
                FUN3(VAR3, VAR11, VAR9);
                goto VAR12;
            }
            memset(&VAR23, 0, sizeof(VAR23));
            strncpy(VAR23.VAR35, VAR14->VAR27->VAR28, VAR36);
            if (FUN8(VAR22, VAR32, &VAR23) == -1)
            {
                snprintf(VAR9, sizeof(VAR9), "", VAR8->VAR26, strerror(VAR10));
                FUN3(VAR3, VAR11, VAR9);
                goto VAR12;
            }
            VAR24 = (unsigned char *)&VAR23.VAR37.VAR38;
            if (asprintf(&VAR14->VAR27->VAR39, "", (int)VAR24[0], (int)VAR24[1], (int)VAR24[2], (int)VAR24[3], (int)VAR24[4], (int)VAR24[5]) == -1)
            {
                snprintf(VAR9, sizeof(VAR9), "", strerror(VAR10));
                FUN3(VAR3, VAR11, VAR9);
                goto VAR12;
            }
            VAR14->VAR27->VAR30 = true;
            close(VAR22);
        }
        if (VAR8->VAR40 && VAR8->VAR40->VAR41 == VAR42)
        {
            VAR17 = FUN6(sizeof(*VAR17));
            VAR17->VAR27 = FUN6(sizeof(*VAR17->VAR27));
            VAR25 = &((struct VAR43 *)VAR8->VAR40)->VAR44;
            if (!FUN9(VAR42, VAR25, VAR18, sizeof(VAR18)))
            {
                snprintf(VAR9, sizeof(VAR9), "", strerror(VAR10));
                FUN3(VAR3, VAR11, VAR9);
                goto VAR12;
            }
            VAR17->VAR27->VAR45 = FUN7(VAR18);
            VAR17->VAR27->VAR46 = VAR47;
            if (VAR8->VAR48)
            {
                VAR25 = &((struct VAR43 *)VAR8->VAR48)->VAR44;
                VAR17->VAR27->VAR49 = FUN10(((VAR50 *)VAR25)[0]);
            }
        }
        else if (VAR8->VAR40 && VAR8->VAR40->VAR41 == VAR51)
        {
            VAR17 = FUN6(sizeof(*VAR17));
            VAR17->VAR27 = FUN6(sizeof(*VAR17->VAR27));
            VAR25 = &((struct VAR52 *)VAR8->VAR40)->VAR53;
            if (!FUN9(VAR51, VAR25, VAR20, sizeof(VAR20)))
            {
                snprintf(VAR9, sizeof(VAR9), "", strerror(VAR10));
                FUN3(VAR3, VAR11, VAR9);
                goto VAR12;
            }
            VAR17->VAR27->VAR45 = FUN7(VAR20);
            VAR17->VAR27->VAR46 = VAR54;
            if (VAR8->VAR48)
            {
                VAR25 = &((struct VAR52 *)VAR8->VAR48)->VAR53;
                VAR17->VAR27->VAR49 = FUN10(((VAR50 *)VAR25)[0]) + FUN10(((VAR50 *)VAR25)[1]) + FUN10(((VAR50 *)VAR25)[2]) + FUN10(((VAR50 *)VAR25)[3]);
            }
        }
        if (!VAR17)
        {
            continue;
        }
        VAR16 = &VAR14->VAR27->VAR55;
        while (*VAR16 && (*VAR16)->VAR29)
        {
            VAR16 = &(*VAR16)->VAR29;
        }
        if (!*VAR16)
        {
            *VAR16 = VAR17;
        }
        else
        {
            (*VAR16)->VAR29 = VAR17;
        }
        VAR14->VAR27->VAR56 = true;
    }
    FUN11(VAR7);
    return VAR4;
VAR12:
    FUN11(VAR7);
    FUN12(VAR4);
    return NULL;
}