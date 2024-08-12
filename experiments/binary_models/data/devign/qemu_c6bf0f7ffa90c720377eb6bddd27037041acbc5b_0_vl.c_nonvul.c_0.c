static VAR1 FUN1(const char *VAR2)
{
    VAR3 *VAR4 = NULL;
    const char *VAR5;
    DisplayType VAR6 = VAR7;
    if (FUN2(VAR2, "", &VAR5))
    {
        VAR6 = VAR8;
        while (*VAR5)
        {
            const char *VAR9;
            if (FUN2(VAR5, "", &VAR9))
            {
                VAR5 = VAR9;
                if (FUN2(VAR5, "", &VAR9))
                {
                    VAR10 = 0;
                }
                else if (FUN2(VAR5, "", &VAR9))
                {
                    VAR10 = 1;
                }
                else
                {
                    goto VAR11;
                }
            }
            else if (FUN2(VAR5, "", &VAR9))
            {
                VAR5 = VAR9;
                if (FUN2(VAR5, "", &VAR9))
                {
                    VAR12 = 1;
                }
                else if (FUN2(VAR5, "", &VAR9))
                {
                    VAR12 = 0;
                }
                else
                {
                    goto VAR11;
                }
            }
            else if (FUN2(VAR5, "", &VAR9))
            {
                VAR5 = VAR9;
                if (FUN2(VAR5, "", &VAR9))
                {
                    VAR13 = 1;
                }
                else if (FUN2(VAR5, "", &VAR9))
                {
                    VAR13 = 0;
                }
                else
                {
                    goto VAR11;
                }
            }
            else if (FUN2(VAR5, "", &VAR9))
            {
                VAR5 = VAR9;
                if (FUN2(VAR5, "", &VAR9))
                {
                    VAR14 = 0;
                }
                else if (FUN2(VAR5, "", &VAR9))
                {
                    VAR14 = 1;
                }
                else
                {
                    goto VAR11;
                }
            }
            else if (FUN2(VAR5, "", &VAR9))
            {
                VAR5 = VAR9;
                if (FUN2(VAR5, "", &VAR9))
                {
                    VAR15 = 1;
                }
                else if (FUN2(VAR5, "", &VAR9))
                {
                    VAR15 = 0;
                }
                else
                {
                    goto VAR11;
                }
            }
            else
            {
            VAR11:
                FUN3("");
                FUN4(1);
            }
            VAR5 = VAR9;
        }
        FUN3("");
        FUN4(1);
    }
    else if (FUN2(VAR2, "", &VAR5))
    {
        if (*VAR5 == '')
        {
            if (FUN5(VAR5 + 1, &VAR4) == NULL)
            {
                FUN6(VAR4);
                FUN4(1);
            }
        }
        else
        {
            FUN3("");
            FUN4(1);
        }
        FUN3("");
        FUN4(1);
    }
    else if (FUN2(VAR2, "", &VAR5))
    {
        VAR6 = VAR16;
        FUN3("");
        FUN4(1);
    }
    else if (FUN2(VAR2, "", &VAR5))
    {
        VAR6 = VAR17;
        while (*VAR5)
        {
            const char *VAR9;
            if (FUN2(VAR5, "", &VAR9))
            {
                VAR5 = VAR9;
                if (FUN2(VAR5, "", &VAR9))
                {
                    VAR18 = true;
                }
                else if (FUN2(VAR5, "", &VAR9))
                {
                    VAR18 = false;
                }
                else
                {
                    goto VAR19;
                }
            }
            else if (FUN2(VAR5, "", &VAR9))
            {
                VAR5 = VAR9;
                if (FUN2(VAR5, "", &VAR9))
                {
                    VAR15 = 1;
                }
                else if (FUN2(VAR5, "", &VAR9))
                {
                    VAR15 = 0;
                }
                else
                {
                    goto VAR19;
                }
            }
            else
            {
            VAR19:
                FUN3("");
                FUN4(1);
            }
            VAR5 = VAR9;
        }
        FUN3("");
        FUN4(1);
    }
    else if (FUN2(VAR2, "", &VAR5))
    {
        VAR6 = VAR20;
    }
    else
    {
        FUN3("");
        FUN4(1);
    }
    return VAR6;
}