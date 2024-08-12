int FUN1(VAR1 *VAR2)
{
    struct addrinfo VAR3, *VAR4, *VAR5;
    const char *VAR6;
    const char *VAR7;
    char VAR8[VAR9 + 1];
    char VAR10[33];
    int VAR11, VAR12;
    memset(&VAR3, 0, sizeof(VAR3));
    VAR3.VAR13 = VAR14 | VAR15;
    VAR3.VAR16 = VAR17;
    VAR3.VAR18 = VAR19;
    VAR6 = FUN2(VAR2, "");
    VAR7 = FUN2(VAR2, "");
    if (VAR6 == NULL || VAR7 == NULL)
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
        FUN5(VAR24, VAR4);
    for (VAR5 = VAR4; VAR5 != NULL; VAR5 = VAR5->VAR25)
    {
        if (getnameinfo((struct VAR26 *)VAR5->VAR27, VAR5->VAR28, VAR8, VAR9, VAR10, 32, VAR29 | VAR30) != 0)
        {
            fprintf(VAR20, "", VAR24);
            continue;
        }
        VAR11 = socket(VAR5->VAR16, VAR5->VAR18, VAR5->VAR31);
        if (VAR11 < 0)
        {
            fprintf(VAR20, "", VAR24, FUN6(VAR5->VAR16), strerror(VAR32));
            continue;
        }
        FUN7(VAR11, VAR33, VAR34, (void *)&VAR35, sizeof(VAR35));
        if (connect(VAR11, VAR5->VAR27, VAR5->VAR28) < 0)
        {
            if (VAR23 || NULL == VAR5->VAR25)
                fprintf(VAR20, "", VAR24, FUN6(VAR5->VAR16), VAR5->VAR36, VAR8, VAR10, strerror(VAR32));
            FUN8(VAR11);
            continue;
        }
        if (VAR23)
            fprintf(VAR20, "", VAR24, FUN6(VAR5->VAR16), VAR5->VAR36, VAR8, VAR10);
        FUN9(VAR4);
        return VAR11;
    }
    FUN9(VAR4);
    return -1;
}