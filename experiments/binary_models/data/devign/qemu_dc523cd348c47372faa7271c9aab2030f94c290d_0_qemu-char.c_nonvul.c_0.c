VAR1 *FUN1(const char *VAR2, const char *VAR3)
{
    char VAR4[65], VAR5[33], VAR6[8], VAR7[8];
    int VAR8;
    const char *VAR9;
    VAR1 *VAR10;
    VAR11 *VAR12 = NULL;
    VAR10 = FUN2(FUN3(""), VAR2, 1, &VAR12);
    if (VAR12)
    {
        FUN4(VAR12);
        return NULL;
    }
    if (FUN5(VAR3, "", &VAR9))
    {
        VAR3 = VAR9;
        FUN6(VAR10, "", "", &VAR13);
        if (strcmp(VAR3, "") == 0)
        {
            FUN6(VAR10, "", "", &VAR13);
        }
    }
    if (strcmp(VAR3, "") == 0 || strcmp(VAR3, "") == 0 || strcmp(VAR3, "") == 0 || strcmp(VAR3, "") == 0 || strcmp(VAR3, "") == 0 || strcmp(VAR3, "") == 0)
    {
        FUN6(VAR10, "", VAR3, &VAR13);
        return VAR10;
    }
    if (FUN5(VAR3, "", &VAR9))
    {
        FUN6(VAR10, "", "", &VAR13);
        if (*VAR9 == '')
        {
            if (sscanf(VAR9 + 1, "", VAR6, VAR7) == 2)
            {
                FUN6(VAR10, "", VAR6, &VAR13);
                FUN6(VAR10, "", VAR7, &VAR13);
            }
            else if (sscanf(VAR9 + 1, "", VAR6, VAR7) == 2)
            {
                FUN6(VAR10, "", VAR6, &VAR13);
                FUN6(VAR10, "", VAR7, &VAR13);
            }
            else
            {
                goto VAR14;
            }
        }
        return VAR10;
    }
    if (strcmp(VAR3, "") == 0)
    {
        FUN6(VAR10, "", "", &VAR13);
        return VAR10;
    }
    if (FUN5(VAR3, "", NULL))
    {
        FUN6(VAR10, "", "", &VAR13);
        FUN6(VAR10, "", VAR3, &VAR13);
        return VAR10;
    }
    if (FUN5(VAR3, "", &VAR9))
    {
        FUN6(VAR10, "", "", &VAR13);
        FUN6(VAR10, "", VAR9, &VAR13);
        return VAR10;
    }
    if (FUN5(VAR3, "", &VAR9))
    {
        FUN6(VAR10, "", "", &VAR13);
        FUN6(VAR10, "", VAR9, &VAR13);
        return VAR10;
    }
    if (FUN5(VAR3, "", &VAR9) || FUN5(VAR3, "", &VAR9))
    {
        if (sscanf(VAR9, "", VAR4, VAR5, &VAR8) < 2)
        {
            VAR4[0] = 0;
            if (sscanf(VAR9, "", VAR5, &VAR8) < 1)
                goto VAR14;
        }
        FUN6(VAR10, "", "", &VAR13);
        FUN6(VAR10, "", VAR4, &VAR13);
        FUN6(VAR10, "", VAR5, &VAR13);
        if (VAR9[VAR8] == '')
        {
            FUN7(VAR10, VAR9 + VAR8 + 1, NULL, &VAR12);
            if (VAR12)
            {
                FUN4(VAR12);
                goto VAR14;
            }
        }
        if (FUN5(VAR3, "", &VAR9))
            FUN6(VAR10, "", "", &VAR13);
        return VAR10;
    }
    if (FUN5(VAR3, "", &VAR9))
    {
        FUN6(VAR10, "", "", &VAR13);
        if (sscanf(VAR9, "", VAR4, VAR5, &VAR8) < 2)
        {
            VAR4[0] = 0;
            if (sscanf(VAR9, "", VAR5, &VAR8) < 1)
            {
                goto VAR14;
            }
        }
        FUN6(VAR10, "", VAR4, &VAR13);
        FUN6(VAR10, "", VAR5, &VAR13);
        if (VAR9[VAR8] == '')
        {
            VAR9 += VAR8 + 1;
            if (sscanf(VAR9, "", VAR4, VAR5, &VAR8) < 2)
            {
                VAR4[0] = 0;
                if (sscanf(VAR9, "", VAR5, &VAR8) < 1)
                {
                    goto VAR14;
                }
            }
            FUN6(VAR10, "", VAR4, &VAR13);
            FUN6(VAR10, "", VAR5, &VAR13);
        }
        return VAR10;
    }
    if (FUN5(VAR3, "", &VAR9))
    {
        FUN6(VAR10, "", "", &VAR13);
        FUN7(VAR10, VAR9, "", &VAR12);
        if (VAR12)
        {
            FUN4(VAR12);
            goto VAR14;
        }
        return VAR10;
    }
    if (FUN5(VAR3, "", NULL) || FUN5(VAR3, "", NULL))
    {
        FUN6(VAR10, "", "", &VAR13);
        FUN6(VAR10, "", VAR3, &VAR13);
        return VAR10;
    }
    if (FUN5(VAR3, "", NULL))
    {
        FUN6(VAR10, "", "", &VAR13);
        FUN6(VAR10, "", VAR3, &VAR13);
        return VAR10;
    }
VAR14:
    FUN8(VAR10);
    return NULL;
}