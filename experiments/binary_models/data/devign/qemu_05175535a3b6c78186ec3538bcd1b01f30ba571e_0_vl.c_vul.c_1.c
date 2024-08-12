static VAR1 FUN1(const char *VAR2)
{
    const char *VAR3;
    DisplayType VAR4 = VAR5;
    if (FUN2(VAR2, "", &VAR3))
    {
        VAR4 = VAR6;
        while (*VAR3)
        {
            const char *VAR7;
            if (FUN2(VAR3, "", &VAR7))
            {
                VAR3 = VAR7;
                if (FUN2(VAR3, "", &VAR7))
                {
                    VAR8 = 0;
                }
                else if (FUN2(VAR3, "", &VAR7))
                {
                    VAR8 = 1;
                }
                else
                {
                    goto VAR9;
                }
            }
            else if (FUN2(VAR3, "", &VAR7))
            {
                VAR3 = VAR7;
                if (FUN2(VAR3, "", &VAR7))
                {
                    VAR10 = 1;
                }
                else if (FUN2(VAR3, "", &VAR7))
                {
                    VAR10 = 0;
                }
                else
                {
                    goto VAR9;
                }
            }
            else if (FUN2(VAR3, "", &VAR7))
            {
                VAR3 = VAR7;
                if (FUN2(VAR3, "", &VAR7))
                {
                    VAR11 = 1;
                }
                else if (FUN2(VAR3, "", &VAR7))
                {
                    VAR11 = 0;
                }
                else
                {
                    goto VAR9;
                }
            }
            else if (FUN2(VAR3, "", &VAR7))
            {
                VAR3 = VAR7;
                if (FUN2(VAR3, "", &VAR7))
                {
                    VAR12 = 0;
                }
                else if (FUN2(VAR3, "", &VAR7))
                {
                    VAR12 = 1;
                }
                else
                {
                    goto VAR9;
                }
            }
            else
            {
                goto VAR9;
            }
            VAR3 = VAR7;
        }
        fprintf(VAR13, "");
        FUN3(1);
    }
    else if (FUN2(VAR2, "", &VAR3))
    {
        VAR14++;
        if (*VAR3)
        {
            const char *VAR7;
            if (FUN2(VAR3, "", &VAR7))
            {
                VAR15 = VAR7;
            }
        }
        if (!VAR15)
        {
            fprintf(VAR13, "");
            FUN3(1);
        }
        fprintf(VAR13, "");
        FUN3(1);
    }
    else if (FUN2(VAR2, "", &VAR3))
    {
        VAR4 = VAR16;
        fprintf(VAR13, "");
        FUN3(1);
    }
    else if (FUN2(VAR2, "", &VAR3))
    {
        VAR4 = VAR17;
    }
    else
    {
    VAR9:
        fprintf(VAR13, "", VAR2);
        FUN3(1);
    }
    return VAR4;
}