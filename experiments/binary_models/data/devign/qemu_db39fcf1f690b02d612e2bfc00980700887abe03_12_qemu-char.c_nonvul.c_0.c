static VAR1 *FUN1(int VAR2, bool VAR3, bool VAR4, bool VAR5, bool VAR6, VAR7 **VAR8)
{
    VAR1 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    char VAR12[VAR13], VAR14[VAR15];
    const char *VAR16 = "", *VAR17 = "";
    struct sockaddr_storage VAR18;
    socklen_t VAR19 = sizeof(VAR18);
    memset(&VAR18, 0, VAR19);
    if (FUN2(VAR2, (struct VAR20 *)&VAR18, &VAR19) != 0)
    {
        FUN3(VAR8, VAR21, "");
        return NULL;
    }
    VAR9 = FUN4();
    VAR11 = FUN5(sizeof(VAR10));
    VAR11->VAR22 = 0;
    VAR11->VAR2 = -1;
    VAR11->VAR23 = -1;
    VAR11->VAR24 = 0;
    VAR11->VAR25 = 0;
    VAR11->VAR26 = 0;
    VAR11->VAR27 = 0;
    VAR9->VAR28 = FUN6(256);
    switch (VAR18.VAR29)
    {
    case VAR30:
        VAR11->VAR31 = 1;
        snprintf(VAR9->VAR28, 256, "", ((struct VAR32 *)(&VAR18))->VAR33, VAR4 ? "" : "");
        break;
    case VAR34:
        VAR16 = "";
        VAR17 = "";
    case VAR35:
        VAR11->VAR3 = VAR3;
        getnameinfo((struct VAR20 *)&VAR18, VAR19, VAR12, sizeof(VAR12), VAR14, sizeof(VAR14), VAR36 | VAR37);
        snprintf(VAR9->VAR28, 256, "", VAR5 ? "" : "", VAR16, VAR12, VAR17, VAR14, VAR4 ? "" : "");
        break;
    }
    VAR9->VAR38 = VAR11;
    VAR9->VAR39 = VAR40;
    VAR9->VAR41 = VAR42;
    VAR9->VAR43 = VAR44;
    VAR9->VAR45 = VAR46;
    VAR9->VAR47 = VAR48;
    VAR9->VAR49 = VAR50;
    VAR9->VAR51 = VAR52;
    VAR9->VAR53 = VAR54;
    VAR9->VAR55 = true;
    if (VAR4)
    {
        VAR11->VAR23 = VAR2;
        VAR11->VAR56 = FUN7(VAR11->VAR23);
        VAR11->VAR57 = FUN8(VAR11->VAR56, VAR58, VAR59, VAR9);
        if (VAR5)
        {
            VAR11->VAR60 = 1;
        }
    }
    else
    {
        VAR11->VAR22 = 1;
        VAR11->VAR2 = VAR2;
        FUN9(VAR2);
        VAR11->VAR61 = FUN7(VAR11->VAR2);
        FUN10(VAR9);
    }
    if (VAR4 && VAR6)
    {
        fprintf(VAR62, "", VAR9->VAR28);
        FUN11(VAR11->VAR56, VAR58, VAR9);
        FUN12(VAR11->VAR23);
    }
    return VAR9;
}