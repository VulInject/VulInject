static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR3 ***VAR7, VAR8 **VAR9)
{
    struct addrinfo VAR10, *VAR11, *VAR12;
    VAR13 *VAR14 = VAR4->VAR15.VAR16.VAR17;
    char VAR18[33];
    char VAR19[VAR20 + 1];
    char VAR21[33];
    int VAR22;
    VAR8 *VAR23 = NULL;
    size_t VAR24;
    *VAR6 = 0;
    *VAR7 = NULL;
    memset(&VAR10, 0, sizeof(VAR10));
    VAR10.VAR25 = VAR26;
    if (VAR14->VAR27 && VAR14->VAR28)
    {
        VAR10.VAR25 |= VAR29 | VAR30;
    }
    VAR10.VAR31 = FUN2(VAR14, &VAR23);
    VAR10.VAR32 = VAR33;
    if (VAR23)
    {
        FUN3(VAR9, VAR23);
        return -1;
    }
    if (VAR14->VAR34 == NULL)
    {
        FUN4(VAR9, "");
        return -1;
    }
    if (VAR14->VAR18 != NULL)
    {
        FUN5(VAR18, sizeof(VAR18), VAR14->VAR18);
    }
    else
    {
        VAR18[0] = '';
    }
    VAR22 = getaddrinfo(strlen(VAR14->VAR34) ? VAR14->VAR34 : NULL, strlen(VAR18) ? VAR18 : NULL, &VAR10, &VAR11);
    if (VAR22 != 0)
    {
        FUN4(VAR9, "", VAR14->VAR34, VAR18, FUN6(VAR22));
        return -1;
    }
    for (VAR12 = VAR11; VAR12 != NULL; VAR12 = VAR12->VAR35)
    {
        (*VAR6)++;
    }
    *VAR7 = FUN7(VAR3 *, *VAR6);
    for (VAR24 = 0, VAR12 = VAR11; VAR12 != NULL; VAR24++, VAR12 = VAR12->VAR35)
    {
        VAR3 *VAR36 = FUN7(VAR3, 1);
        VAR13 *VAR37 = FUN7(VAR13, 1);
        VAR36->VAR15.VAR16.VAR17 = VAR37;
        VAR36->VAR38 = VAR39;
        getnameinfo((struct VAR40 *)VAR12->VAR41, VAR12->VAR42, VAR19, VAR20, VAR21, 32, VAR43 | VAR44);
        *VAR37 = (VAR13){
            .VAR34 = FUN8(VAR19),
            .VAR18 = FUN8(VAR21),
            .VAR27 = true,
            .VAR28 = true,
            .VAR45 = VAR14->VAR45,
            .VAR46 = VAR14->VAR46,
            .VAR47 = false,
            .VAR48 = false,
        };
        (*VAR7)[VAR24] = VAR36;
    }
    FUN9(VAR11);
    return 0;
}