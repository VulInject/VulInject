static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR3 ***VAR7, VAR8 **VAR9)
{
    struct addrinfo VAR10, *VAR11, *VAR12;
    VAR13 *VAR14 = &VAR4->VAR15.VAR16;
    char VAR17[33];
    char VAR18[VAR19 + 1];
    char VAR20[33];
    int VAR21;
    VAR8 *VAR22 = NULL;
    size_t VAR23;
    *VAR6 = 0;
    *VAR7 = NULL;
    memset(&VAR10, 0, sizeof(VAR10));
    VAR10.VAR24 = VAR25;
    if (VAR14->VAR26 && VAR14->VAR27)
    {
        VAR10.VAR24 |= VAR28 | VAR29;
    }
    VAR10.VAR30 = FUN2(VAR14, &VAR22);
    VAR10.VAR31 = VAR32;
    if (VAR22)
    {
        FUN3(VAR9, VAR22);
        return -1;
    }
    if (VAR14->VAR33 == NULL)
    {
        FUN4(VAR9, "");
        return -1;
    }
    if (VAR14->VAR17 != NULL)
    {
        FUN5(VAR17, sizeof(VAR17), VAR14->VAR17);
    }
    else
    {
        VAR17[0] = '';
    }
    VAR21 = getaddrinfo(strlen(VAR14->VAR33) ? VAR14->VAR33 : NULL, strlen(VAR17) ? VAR17 : NULL, &VAR10, &VAR11);
    if (VAR21 != 0)
    {
        FUN4(VAR9, "", VAR14->VAR33, VAR17, FUN6(VAR21));
        return -1;
    }
    for (VAR12 = VAR11; VAR12 != NULL; VAR12 = VAR12->VAR34)
    {
        (*VAR6)++;
    }
    *VAR7 = FUN7(VAR3 *, *VAR6);
    for (VAR23 = 0, VAR12 = VAR11; VAR12 != NULL; VAR23++, VAR12 = VAR12->VAR34)
    {
        VAR3 *VAR35 = FUN7(VAR3, 1);
        VAR35->VAR36 = VAR37;
        getnameinfo((struct VAR38 *)VAR12->VAR39, VAR12->VAR40, VAR18, VAR19, VAR20, 32, VAR41 | VAR42);
        VAR35->VAR15.VAR16 = (VAR13){
            .VAR33 = FUN8(VAR18),
            .VAR17 = FUN8(VAR20),
            .VAR26 = true,
            .VAR27 = true,
            .VAR43 = VAR14->VAR43,
            .VAR44 = VAR14->VAR44,
            .VAR45 = false,
            .VAR46 = false,
        };
        (*VAR7)[VAR23] = VAR35;
    }
    FUN9(VAR11);
    return 0;
}