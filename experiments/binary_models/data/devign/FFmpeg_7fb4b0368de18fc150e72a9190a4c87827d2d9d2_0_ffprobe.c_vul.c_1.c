static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    int VAR4 = 0;
    char *VAR5, *VAR6, *VAR7 = FUN2(VAR1);
    if (!VAR7)
        return FUN3(VAR8);
    if (!*VAR7)
    {
        FUN4(NULL, VAR9, "");
        VAR4 = FUN3(VAR10);
        goto VAR11;
    }
    VAR6 = VAR7;
    VAR5 = strchr(VAR7, '');
    if (VAR5)
        *VAR5++ = 0;
    if (*VAR6)
    {
        VAR3->VAR12 = 1;
        if (*VAR6 == '')
        {
            VAR3->VAR13 = 1;
            VAR6++;
        }
        else
        {
            VAR3->VAR13 = 0;
        }
        VAR4 = FUN5(&VAR3->VAR14, VAR6, 1);
        if (VAR4 < 0)
        {
            FUN4(NULL, VAR9, "", VAR6);
            goto VAR11;
        }
    }
    else
    {
        VAR3->VAR12 = 0;
    }
    VAR6 = VAR5;
    if (VAR6 && *VAR6)
    {
        int64_t VAR15;
        VAR3->VAR16 = 1;
        if (*VAR6 == '')
        {
            VAR3->VAR17 = 1;
            VAR6++;
        }
        else
        {
            VAR3->VAR17 = 0;
        }
        if (VAR3->VAR17 && *VAR6 == '')
        {
            long long int VAR18;
            char *VAR19;
            VAR3->VAR20 = 1;
            VAR6++;
            VAR18 = FUN6(VAR6, &VAR19, 10);
            if (*VAR19 || VAR18 < 0)
            {
                FUN4(NULL, VAR9, "", VAR6);
                goto VAR11;
            }
            VAR3->VAR11 = VAR18;
        }
        else
        {
            VAR4 = FUN5(&VAR15, VAR6, 1);
            if (VAR4 < 0)
            {
                FUN4(NULL, VAR9, "", VAR6);
                goto VAR11;
            }
            VAR3->VAR11 = VAR15;
        }
    }
    else
    {
        VAR3->VAR16 = 0;
    }
VAR11:
    FUN7(VAR7);
    return VAR4;