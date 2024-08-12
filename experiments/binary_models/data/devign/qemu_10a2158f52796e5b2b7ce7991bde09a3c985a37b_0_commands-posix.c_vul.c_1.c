VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4 = NULL, *VAR5 = NULL;
    struct VAR6 *VAR7, *VAR8;
    if (FUN2(&VAR7) < 0)
    {
        FUN3(VAR3, VAR9, "");
        goto VAR10;
    }
    for (VAR8 = VAR7; VAR8; VAR8 = VAR8->VAR11)
    {
        VAR1 *VAR12;
        VAR13 **VAR14 = NULL, *VAR15 = NULL;
        char VAR16[VAR17];
        char VAR18[VAR19];
        int VAR20;
        struct ifreq VAR21;
        unsigned char *VAR22;
        void *VAR23;
        FUN4("", VAR8->VAR24);
        VAR12 = FUN5(VAR4, VAR8->VAR24);
        if (!VAR12)
        {
            VAR12 = FUN6(sizeof(*VAR12));
            VAR12->VAR25 = FUN6(sizeof(*VAR12->VAR25));
            VAR12->VAR25->VAR26 = FUN7(VAR8->VAR24);
            if (!VAR5)
            {
                VAR4 = VAR5 = VAR12;
            }
            else
            {
                VAR5->VAR27 = VAR12;
                VAR5 = VAR12;
            }
        }
        if (!VAR12->VAR25->VAR28 && VAR8->VAR29 & VAR30)
        {
            VAR20 = socket(VAR31, VAR32, 0);
            if (VAR20 == -1)
            {
                FUN3(VAR3, VAR9, "");
                goto VAR10;
            }
            memset(&VAR21, 0, sizeof(VAR21));
            FUN8(VAR21.VAR33, VAR34, VAR12->VAR25->VAR26);
            if (FUN9(VAR20, VAR30, &VAR21) == -1)
            {
                FUN3(VAR3, VAR9, "", VAR8->VAR24);
                goto VAR10;
            }
            VAR22 = (unsigned char *)&VAR21.VAR35.VAR36;
            VAR12->VAR25->VAR37 = FUN10("", (int)VAR22[0], (int)VAR22[1], (int)VAR22[2], (int)VAR22[3], (int)VAR22[4], (int)VAR22[5]);
            VAR12->VAR25->VAR28 = true;
            close(VAR20);
        }
        if (VAR8->VAR38 && VAR8->VAR38->VAR39 == VAR40)
        {
            VAR15 = FUN6(sizeof(*VAR15));
            VAR15->VAR25 = FUN6(sizeof(*VAR15->VAR25));
            VAR23 = &((struct VAR41 *)VAR8->VAR38)->VAR42;
            if (!FUN11(VAR40, VAR23, VAR16, sizeof(VAR16)))
            {
                FUN3(VAR3, VAR9, "");
                goto VAR10;
            }
            VAR15->VAR25->VAR43 = FUN7(VAR16);
            VAR15->VAR25->VAR44 = VAR45;
            if (VAR8->VAR46)
            {
                VAR23 = &((struct VAR41 *)VAR8->VAR46)->VAR42;
                VAR15->VAR25->VAR47 = FUN12(((VAR48 *)VAR23)[0]);
            }
        }
        else if (VAR8->VAR38 && VAR8->VAR38->VAR39 == VAR49)
        {
            VAR15 = FUN6(sizeof(*VAR15));
            VAR15->VAR25 = FUN6(sizeof(*VAR15->VAR25));
            VAR23 = &((struct VAR50 *)VAR8->VAR38)->VAR51;
            if (!FUN11(VAR49, VAR23, VAR18, sizeof(VAR18)))
            {
                FUN3(VAR3, VAR9, "");
                goto VAR10;
            }
            VAR15->VAR25->VAR43 = FUN7(VAR18);
            VAR15->VAR25->VAR44 = VAR52;
            if (VAR8->VAR46)
            {
                VAR23 = &((struct VAR50 *)VAR8->VAR46)->VAR51;
                VAR15->VAR25->VAR47 = FUN12(((VAR48 *)VAR23)[0]) + FUN12(((VAR48 *)VAR23)[1]) + FUN12(((VAR48 *)VAR23)[2]) + FUN12(((VAR48 *)VAR23)[3]);
            }
        }
        if (!VAR15)
        {
            continue;
        }
        VAR14 = &VAR12->VAR25->VAR53;
        while (*VAR14 && (*VAR14)->VAR27)
        {
            VAR14 = &(*VAR14)->VAR27;
        }
        if (!*VAR14)
        {
            *VAR14 = VAR15;
        }
        else
        {
            (*VAR14)->VAR27 = VAR15;
        }
        VAR12->VAR25->VAR54 = true;
    }
    FUN13(VAR7);
    return VAR4;
VAR10:
    FUN13(VAR7);
    FUN14(VAR4);
    return NULL;
}