int FUN1(VAR1 *VAR2, int VAR3)
{
    struct addrinfo VAR4, *VAR5, *VAR6;
    const char *VAR7;
    char VAR8[33];
    char VAR9[VAR10 + 1];
    char VAR11[33];
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    memset(&VAR4, 0, sizeof(VAR4));
    VAR4.VAR18 = VAR19 | VAR20;
    VAR4.VAR21 = VAR22;
    VAR4.VAR23 = VAR24;
    if ((FUN2(VAR2, "") == NULL) || (FUN2(VAR2, "") == NULL))
    {
        fprintf(VAR25, "", VAR26);
        return -1;
    }
    FUN3(VAR8, sizeof(VAR8), FUN2(VAR2, ""));
    VAR7 = FUN2(VAR2, "");
    VAR14 = FUN4(VAR2, "", 0);
    if (FUN5(VAR2, "", 0))
        VAR4.VAR21 = VAR27;
    if (FUN5(VAR2, "", 0))
        VAR4.VAR21 = VAR28;
    if (VAR3)
        snprintf(VAR8, sizeof(VAR8), "", FUN6(VAR8) + VAR3);
    VAR13 = getaddrinfo(strlen(VAR7) ? VAR7 : NULL, VAR8, &VAR4, &VAR5);
    if (VAR13 != 0)
    {
        fprintf(VAR25, "", VAR7, VAR8, FUN7(VAR13));
        return -1;
    }
    for (VAR6 = VAR5; VAR6 != NULL; VAR6 = VAR6->VAR29)
    {
        getnameinfo((struct VAR30 *)VAR6->VAR31, VAR6->VAR32, VAR9, VAR10, VAR11, 32, VAR33 | VAR34);
        VAR12 = FUN8(VAR6->VAR21, VAR6->VAR23, VAR6->VAR35);
        if (VAR12 < 0)
        {
            fprintf(VAR25, "", VAR26, FUN9(VAR6->VAR21), strerror(VAR36));
            continue;
        }
        FUN10(VAR12, VAR37, VAR38, (void *)&VAR39, sizeof(VAR39));
        if (VAR6->VAR21 == VAR28)
        {
            FUN10(VAR12, VAR40, VAR41, (void *)&VAR42, sizeof(VAR42));
        }
        VAR15 = FUN11(VAR6);
        VAR16 = VAR14 ? VAR14 + VAR3 : VAR15;
        for (VAR17 = VAR15; VAR17 <= VAR16; VAR17++)
        {
            FUN12(VAR6, VAR17);
            if (FUN13(VAR12, VAR6->VAR31, VAR6->VAR32) == 0)
            {
                goto VAR43;
            }
            if (VAR17 == VAR16)
            {
                fprintf(VAR25, "", VAR26, FUN9(VAR6->VAR21), VAR9, FUN11(VAR6), strerror(VAR36));
            }
        }
        FUN14(VAR12);
    }
    fprintf(VAR25, "", VAR26);
    FUN15(VAR5);
    return -1;
VAR43:
    if (FUN16(VAR12, 1) != 0)
    {
        FUN17("");
        FUN14(VAR12);
        FUN15(VAR5);
        return -1;
    }
    snprintf(VAR11, sizeof(VAR11), "", FUN11(VAR6) - VAR3);
    FUN18(VAR2, "", VAR9);
    FUN18(VAR2, "", VAR11);
    FUN18(VAR2, "", (VAR6->VAR21 == VAR28) ? "" : "");
    FUN18(VAR2, "", (VAR6->VAR21 != VAR28) ? "" : "");
    FUN15(VAR5);
    return VAR12;
}