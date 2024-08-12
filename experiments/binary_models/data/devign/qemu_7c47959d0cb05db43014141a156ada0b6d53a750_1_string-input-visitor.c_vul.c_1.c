static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    char *VAR6 = (char *)VAR2->VAR7;
    long long VAR8, VAR9;
    VAR10 *VAR11;
    char *VAR12;
    if (VAR2->VAR13)
    {
        return 0;
    }
    do
    {
        VAR14 = 0;
        VAR8 = FUN2(VAR6, &VAR12, 0);
        if (VAR14 == 0 && VAR12 > VAR6)
        {
            if (*VAR12 == '')
            {
                VAR11 = FUN3(sizeof(*VAR11));
                VAR11->VAR15 = VAR8;
                VAR11->VAR9 = VAR8 + 1;
                VAR2->VAR13 = FUN4(VAR2->VAR13, VAR11, VAR16);
                VAR11 = NULL;
                VAR6 = NULL;
            }
            else if (*VAR12 == '')
            {
                VAR6 = VAR12 + 1;
                VAR14 = 0;
                VAR9 = FUN2(VAR6, &VAR12, 0);
                if (VAR14 == 0 && VAR12 > VAR6 && VAR8 <= VAR9 && (VAR8 > VAR17 - 65536 || VAR9 < VAR8 + 65536))
                {
                    if (*VAR12 == '')
                    {
                        VAR11 = FUN3(sizeof(*VAR11));
                        VAR11->VAR15 = VAR8;
                        VAR11->VAR9 = VAR9 + 1;
                        VAR2->VAR13 = FUN4(VAR2->VAR13, VAR11, VAR16);
                        VAR11 = NULL;
                        VAR6 = NULL;
                    }
                    else if (*VAR12 == '')
                    {
                        VAR6 = VAR12 + 1;
                        VAR11 = FUN3(sizeof(*VAR11));
                        VAR11->VAR15 = VAR8;
                        VAR11->VAR9 = VAR9 + 1;
                        VAR2->VAR13 = FUN4(VAR2->VAR13, VAR11, VAR16);
                        VAR11 = NULL;
                    }
                    else
                    {
                        goto VAR18;
                    }
                }
                else
                {
                    goto VAR18;
                }
            }
            else if (*VAR12 == '')
            {
                VAR6 = VAR12 + 1;
                VAR11 = FUN3(sizeof(*VAR11));
                VAR11->VAR15 = VAR8;
                VAR11->VAR9 = VAR8 + 1;
                VAR2->VAR13 = FUN4(VAR2->VAR13, VAR11, VAR16);
                VAR11 = NULL;
            }
            else
            {
                goto VAR18;
            }
        }
        else
        {
            goto VAR18;
        }
    } while (VAR6);
    return 0;
VAR18:
    FUN5(VAR2->VAR13, VAR19, NULL);
    FUN6(VAR2->VAR13);
    VAR2->VAR13 = NULL;
    FUN7(VAR5, VAR20, VAR3 ? VAR3 : "", "");
    return -1;
}