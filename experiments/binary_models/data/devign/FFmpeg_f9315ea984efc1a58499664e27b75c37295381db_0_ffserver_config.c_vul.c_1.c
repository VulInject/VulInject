void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, int VAR8)
{
    char VAR9[1024];
    FFServerIPAddressACL VAR10;
    VAR4 *VAR11;
    VAR4 **VAR12;
    FUN2(VAR9, sizeof(VAR9), &VAR6);
    if (FUN3(VAR9, "") == 0)
        VAR10.VAR13 = VAR14;
    else if (FUN3(VAR9, "") == 0)
        VAR10.VAR13 = VAR15;
    else
    {
        fprintf(VAR16, "", VAR7, VAR8, VAR9);
        FUN2(VAR9, sizeof(VAR9), &VAR6);
        if (FUN4(&VAR10.VAR17, VAR9))
        {
            fprintf(VAR16, "", VAR7, VAR8, VAR9);
            VAR10.VAR18 = VAR10.VAR17;
            FUN2(VAR9, sizeof(VAR9), &VAR6);
            if (VAR9[0])
            {
                if (FUN4(&VAR10.VAR18, VAR9))
                {
                    fprintf(VAR16, "", VAR7, VAR8, VAR9);
                    VAR11 = FUN5(sizeof(*VAR11));
                    VAR12 = 0;
                    VAR10.VAR19 = 0;
                    *VAR11 = VAR10;
                    if (VAR2)
                        VAR12 = &VAR2->VAR10;
                    else if (VAR3)
                        VAR12 = &VAR3->VAR10;
                    else if (VAR5)
                        VAR12 = &VAR5;
                    else
                        fprintf(VAR16, "", VAR7, VAR8);
                    if (VAR12)
                    {
                        while (*VAR12)
                            VAR12 = &(*VAR12)->VAR19;
                        *VAR12 = VAR11;
                    }
                    else
                        FUN6(VAR11);
                VAR20:
                    return