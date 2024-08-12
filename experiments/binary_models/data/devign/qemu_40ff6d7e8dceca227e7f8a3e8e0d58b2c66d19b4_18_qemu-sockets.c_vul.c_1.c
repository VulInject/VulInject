int FUN1(VAR1 *VAR2)
{
    struct addrinfo VAR3, *VAR4 = NULL, *VAR5 = NULL;
    const char *VAR6;
    const char *VAR7;
    char VAR8[VAR9 + 1];
    char VAR10[33];
    int VAR11 = -1, VAR12;
    memset(&VAR3, 0, sizeof(VAR3));
    VAR3.VAR13 = VAR14 | VAR15;
    VAR3.VAR16 = VAR17;
    VAR3.VAR18 = VAR19;
    VAR6 = FUN2(VAR2, "");
    VAR7 = FUN2(VAR2, "");
    if (VAR6 == NULL || strlen(VAR6) == 0)
    {
        VAR6 = "";
    }
    if (VAR7 == NULL || strlen(VAR7) == 0)
    {
        fprintf(VAR20, "");
        return -1;
    }
    if (FUN3(VAR2, "", 0))
        VAR3.VAR16 = VAR21;
    if (FUN3(VAR2, "", 0))
        VAR3.VAR16 = VAR22;
    if (0 != (VAR12 = getaddrinfo(VAR6, VAR7, &VAR3, &VAR4)))
    {
        fprintf(VAR20, "", VAR6, VAR7, FUN4(VAR12));
        return -1;
    }
    if (VAR23)
    {
        fprintf(VAR20, "", VAR24, VAR6, VAR7);
        FUN5(VAR24, VAR4);
    }
    memset(&VAR3, 0, sizeof(VAR3));
    VAR3.VAR13 = VAR25;
    VAR3.VAR16 = VAR4->VAR16;
    VAR3.VAR18 = VAR19;
    VAR6 = FUN2(VAR2, "");
    VAR7 = FUN2(VAR2, "");
    if (VAR6 == NULL || strlen(VAR6) == 0)
    {
        VAR6 = NULL;
    }
    if (!VAR7 || strlen(VAR7) == 0)
        VAR7 = "";
    if (0 != (VAR12 = getaddrinfo(VAR6, VAR7, &VAR3, &VAR5)))
    {
        fprintf(VAR20, "", VAR6, VAR7, FUN4(VAR12));
        return -1;
    }
    if (VAR23)
    {
        fprintf(VAR20, "", VAR24, VAR6, VAR7);
        FUN5(VAR24, VAR5);
    }
    VAR11 = socket(VAR4->VAR16, VAR4->VAR18, VAR4->VAR26);
    if (VAR11 < 0)
    {
        fprintf(VAR20, "", VAR24, FUN6(VAR4->VAR16), strerror(VAR27));
        goto VAR28;
    }
    FUN7(VAR11, VAR29, VAR30, (void *)&VAR31, sizeof(VAR31));
    if (getnameinfo((struct VAR32 *)VAR5->VAR33, VAR5->VAR34, VAR8, VAR9, VAR10, 32, VAR35 | VAR36) != 0)
    {
        fprintf(VAR20, "", VAR24);
        goto VAR28;
    }
    if (FUN8(VAR11, VAR5->VAR33, VAR5->VAR34) < 0)
    {
        fprintf(VAR20, "", VAR24, FUN6(VAR5->VAR16), VAR8, FUN9(VAR5));
        goto VAR28;
    }
    if (getnameinfo((struct VAR32 *)VAR4->VAR33, VAR4->VAR34, VAR8, VAR9, VAR10, 32, VAR35 | VAR36) != 0)
    {
        fprintf(VAR20, "", VAR24);
        goto VAR28;
    }
    if (connect(VAR11, VAR4->VAR33, VAR4->VAR34) < 0)
    {
        fprintf(VAR20, "", VAR24, FUN6(VAR4->VAR16), VAR4->VAR37, VAR8, VAR10, strerror(VAR27));
        goto VAR28;
    }
    FUN10(VAR5);
    FUN10(VAR4);
    return VAR11;
VAR28:
    if (-1 != VAR11)
        FUN11(VAR11);
    if (VAR5)
        FUN10(VAR5);
    if (VAR4)
        FUN10(VAR4);
    return -1;
}