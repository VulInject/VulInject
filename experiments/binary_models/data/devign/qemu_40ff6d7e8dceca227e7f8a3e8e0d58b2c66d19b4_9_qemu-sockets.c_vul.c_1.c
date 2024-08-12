int FUN1(VAR1 *VAR2, int VAR3)
{
    struct addrinfo VAR4, *VAR5, *VAR6;
    const char *VAR7;
    char VAR8[33];
    char VAR9[VAR10 + 1];
    char VAR11[33];
    int VAR12, VAR13, VAR14, VAR15;
    memset(&VAR4, 0, sizeof(VAR4));
    VAR4.VAR16 = VAR17 | VAR18;
    VAR4.VAR19 = VAR20;
    VAR4.VAR21 = VAR22;
    if (FUN2(VAR2, "") == NULL)
    {
        fprintf(VAR23, "", VAR24);
        return -1;
    }
    FUN3(VAR8, sizeof(VAR8), FUN2(VAR2, ""));
    VAR7 = FUN2(VAR2, "");
    VAR14 = FUN4(VAR2, "", 0);
    if (FUN5(VAR2, "", 0))
        VAR4.VAR19 = VAR25;
    if (FUN5(VAR2, "", 0))
        VAR4.VAR19 = VAR26;
    if (VAR3)
        snprintf(VAR8, sizeof(VAR8), "", FUN6(VAR8) + VAR3);
    VAR13 = getaddrinfo(strlen(VAR7) ? VAR7 : NULL, VAR8, &VAR4, &VAR5);
    if (VAR13 != 0)
    {
        fprintf(VAR23, "", VAR7, VAR8, FUN7(VAR13));
        return -1;
    }
    if (VAR27)
        FUN8(VAR24, VAR5);
    for (VAR6 = VAR5; VAR6 != NULL; VAR6 = VAR6->VAR28)
    {
        getnameinfo((struct VAR29 *)VAR6->VAR30, VAR6->VAR31, VAR9, VAR10, VAR11, 32, VAR32 | VAR33);
        VAR12 = socket(VAR6->VAR19, VAR6->VAR21, VAR6->VAR34);
        if (VAR12 < 0)
        {
            fprintf(VAR23, "", VAR24, FUN9(VAR6->VAR19), strerror(VAR35));
            continue;
        }
        FUN10(VAR12, VAR36, VAR37, (void *)&VAR38, sizeof(VAR38));
        if (VAR6->VAR19 == VAR26)
        {
            FUN10(VAR12, VAR39, VAR40, (void *)&VAR41, sizeof(VAR41));
        }
        for (;;)
        {
            if (FUN11(VAR12, VAR6->VAR30, VAR6->VAR31) == 0)
            {
                if (VAR27)
                    fprintf(VAR23, "", VAR24, FUN9(VAR6->VAR19), VAR9, FUN12(VAR6));
                goto VAR42;
            }
            VAR15 = VAR14 && (FUN12(VAR6) <= VAR14 + VAR3);
            if (!VAR15 || VAR27)
                fprintf(VAR23, "", VAR24, FUN9(VAR6->VAR19), VAR9, FUN12(VAR6), strerror(VAR35));
            if (VAR15)
            {
                FUN13(VAR6, FUN12(VAR6) + 1);
                continue;
            }
            break;
        }
        FUN14(VAR12);
    }
    fprintf(VAR23, "", VAR24);
    FUN15(VAR5);
    return -1;
VAR42:
    if (FUN16(VAR12, 1) != 0)
    {
        FUN17("");
        FUN14(VAR12);
        FUN15(VAR5);
        return -1;
    }
    snprintf(VAR11, sizeof(VAR11), "", FUN12(VAR6) - VAR3);
    FUN18(VAR2, "", VAR9);
    FUN18(VAR2, "", VAR11);
    FUN18(VAR2, "", (VAR6->VAR19 == VAR26) ? "" : "");
    FUN18(VAR2, "", (VAR6->VAR19 != VAR26) ? "" : "");
    FUN15(VAR5);
    return VAR12;
}