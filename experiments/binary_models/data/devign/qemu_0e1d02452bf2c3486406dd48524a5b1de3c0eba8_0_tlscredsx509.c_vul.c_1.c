FUN1(VAR1 *VAR2, gnutls_x509_crt_t VAR3, const char *VAR4, bool VAR5, VAR6 **VAR7)
{
    int VAR8;
    size_t VAR9;
    unsigned int VAR10;
    unsigned int VAR11;
    char *VAR12 = NULL;
    size_t VAR13;
    bool VAR14 = false, VAR15 = false;
    VAR11 = 0;
    for (VAR9 = 0;; VAR9++)
    {
        VAR13 = 0;
        VAR8 = FUN2(VAR3, VAR9, VAR12, &VAR13, NULL);
        if (VAR8 == VAR16)
        {
            if (VAR9 == 0)
            {
                VAR15 = VAR14 = true;
            }
            break;
        }
        if (VAR8 != VAR17)
        {
            FUN3(VAR7, "", VAR4, FUN4(VAR8));
            return -1;
        }
        VAR12 = FUN5(char, VAR13);
        VAR8 = FUN2(VAR3, VAR9, VAR12, &VAR13, &VAR10);
        if (VAR8 < 0)
        {
            FUN6(VAR2, VAR4, VAR8, "", VAR10);
            FUN7(VAR12);
            FUN3(VAR7, "", VAR4, FUN4(VAR8));
            return -1;
        }
        FUN6(VAR2, VAR4, VAR8, VAR12, VAR10);
        if (VAR10)
        {
            VAR11 = true;
        }
        if (FUN8(VAR12, VAR18))
        {
            VAR15 = true;
        }
        else if (FUN8(VAR12, VAR19))
        {
            VAR14 = true;
        }
        else if (FUN8(VAR12, VAR20))
        {
            VAR15 = VAR14 = true;
        }
        FUN7(VAR12);
    }
    if (VAR5)
    {
        if (!VAR15)
        {
            if (VAR11)
            {
                FUN3(VAR7, ""
                                 "",
                           VAR4);
                return -1;
            }
        }
    }
    else
    {
        if (!VAR14)
        {
            if (VAR11)
            {
                FUN3(VAR7, ""
                                 "",
                           VAR4);
                return -1;
            }
        }
    }
    return 0;