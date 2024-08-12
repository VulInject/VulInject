int FUN1(VAR1 *VAR2, bool *VAR3, VAR4 **VAR5)
{
    struct addrinfo VAR6, *VAR7, *VAR8;
    const char *VAR9;
    const char *VAR10;
    char VAR11[VAR12 + 1];
    char VAR13[33];
    int VAR14, VAR15;
    bool VAR16;
    memset(&VAR6, 0, sizeof(VAR6));
    VAR6.VAR17 = VAR18 | VAR19;
    VAR6.VAR20 = VAR21;
    VAR6.VAR22 = VAR23;
    if (VAR3)
    {
        *VAR3 = false;
    }
    VAR9 = FUN2(VAR2, "");
    VAR10 = FUN2(VAR2, "");
    VAR16 = FUN3(VAR2, "", 0);
    if (VAR9 == NULL || VAR10 == NULL)
    {
        fprintf(VAR24, "");
        FUN4(VAR5, VAR25);
        return -1;
    }
    if (FUN3(VAR2, "", 0))
        VAR6.VAR20 = VAR26;
    if (FUN3(VAR2, "", 0))
        VAR6.VAR20 = VAR27;
    if (0 != (VAR15 = getaddrinfo(VAR9, VAR10, &VAR6, &VAR7)))
    {
        fprintf(VAR24, "", VAR9, VAR10, FUN5(VAR15));
        FUN4(VAR5, VAR25);
        return -1;
    }
    for (VAR8 = VAR7; VAR8 != NULL; VAR8 = VAR8->VAR28)
    {
        if (getnameinfo((struct VAR29 *)VAR8->VAR30, VAR8->VAR31, VAR11, VAR12, VAR13, 32, VAR32 | VAR33) != 0)
        {
            fprintf(VAR24, "", VAR34);
            continue;
        }
        VAR14 = FUN6(VAR8->VAR20, VAR8->VAR22, VAR8->VAR35);
        if (VAR14 < 0)
        {
            fprintf(VAR24, "", VAR34, FUN7(VAR8->VAR20), strerror(VAR36));
            continue;
        }
        FUN8(VAR14, VAR37, VAR38, (void *)&VAR39, sizeof(VAR39));
        if (!VAR16)
        {
            FUN9(VAR14);
        }
        do
        {
            VAR15 = 0;
            if (connect(VAR14, VAR8->VAR30, VAR8->VAR31) < 0)
            {
                VAR15 = -FUN10();
            }
        } while (VAR15 == -VAR40);
        if (!VAR16 && (VAR15 == -VAR41 || VAR15 == -VAR42 || VAR15 == -VAR43))
        {
            if (!VAR16 && (VAR15 == -VAR41))
            {
                if (VAR3)
                {
                    *VAR3 = true;
                }
                FUN4(VAR5, VAR44);
            }
            else if (VAR15 < 0)
            {
                if (NULL == VAR8->VAR28)
                    fprintf(VAR24, "", VAR34, FUN7(VAR8->VAR20), VAR8->VAR45, VAR11, VAR13, strerror(VAR36));
                FUN11(VAR14);
                continue;
            }
            FUN12(VAR7);
            return VAR14;
        }
        FUN4(VAR5, VAR46);
        FUN12(VAR7);
        return -1;
    }