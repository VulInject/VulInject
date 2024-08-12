VAR1 *FUN1(const char *VAR2, const char *VAR3)
{
    char VAR4[65], VAR5[33], VAR6[8], VAR7[8];
    int VAR8;
    const char *VAR9;
    VAR1 *VAR10;
    VAR11 *VAR12 = NULL;
    VAR10 = FUN2(FUN3(""), VAR2, 1, &VAR12);
    if (FUN4(&VAR12))
    {
        FUN5(VAR12);
        FUN6(VAR12);
        return NULL;
    }
    if (FUN7(VAR3, "", &VAR9))
    {
        VAR3 = VAR9;
        FUN8(VAR10, "", "");
        if (strcmp(VAR3, "") == 0)
        {
            FUN8(VAR10, "", "");
        }
    }
    if (strcmp(VAR3, "") == 0 || strcmp(VAR3, "") == 0 || strcmp(VAR3, "") == 0 || strcmp(VAR3, "") == 0 || strcmp(VAR3, "") == 0)
    {
        FUN8(VAR10, "", VAR3);
        return VAR10;
    }
    if (FUN7(VAR3, "", &VAR9))
    {
        FUN8(VAR10, "", "");
        if (*VAR9 == '')
        {
            if (sscanf(VAR9 + 1, "", VAR6, VAR7) == 2)
            {
                FUN8(VAR10, "", VAR6);
                FUN8(VAR10, "", VAR7);
            }
            else if (sscanf(VAR9 + 1, "", VAR6, VAR7) == 2)
            {
                FUN8(VAR10, "", VAR6);
                FUN8(VAR10, "", VAR7);
            }
            else
            {
                goto VAR13;
            }
        }
        return VAR10;
    }
    if (strcmp(VAR3, "") == 0)
    {
        FUN8(VAR10, "", "");
        return VAR10;
    }
    if (FUN7(VAR3, "", NULL))
    {
        FUN8(VAR10, "", "");
        FUN8(VAR10, "", VAR3);
        return VAR10;
    }
    if (FUN7(VAR3, "", &VAR9))
    {
        FUN8(VAR10, "", "");
        FUN8(VAR10, "", VAR9);
        return VAR10;
    }
    if (FUN7(VAR3, "", &VAR9))
    {
        FUN8(VAR10, "", "");
        FUN8(VAR10, "", VAR9);
        return VAR10;
    }
    if (FUN7(VAR3, "", &VAR9) || FUN7(VAR3, "", &VAR9))
    {
        if (sscanf(VAR9, "", VAR4, VAR5, &VAR8) < 2)
        {
            VAR4[0] = 0;
            if (sscanf(VAR9, "", VAR5, &VAR8) < 1)
                goto VAR13;
        }
        FUN8(VAR10, "", "");
        FUN8(VAR10, "", VAR4);
        FUN8(VAR10, "", VAR5);
        if (VAR9[VAR8] == '')
        {
            if (FUN9(VAR10, VAR9 + VAR8 + 1, NULL) != 0)
                goto VAR13;
        }
        if (FUN7(VAR3, "", &VAR9))
            FUN8(VAR10, "", "");
        return VAR10;
    }
    if (FUN7(VAR3, "", &VAR9))
    {
        FUN8(VAR10, "", "");
        if (sscanf(VAR9, "", VAR4, VAR5, &VAR8) < 2)
        {
            VAR4[0] = 0;
            if (sscanf(VAR9, "", VAR5, &VAR8) < 1)
            {
                goto VAR13;
            }
        }
        FUN8(VAR10, "", VAR4);
        FUN8(VAR10, "", VAR5);
        if (VAR9[VAR8] == '')
        {
            VAR9 += VAR8 + 1;
            if (sscanf(VAR9, "", VAR4, VAR5, &VAR8) < 2)
            {
                VAR4[0] = 0;
                if (sscanf(VAR9, "", VAR5, &VAR8) < 1)
                {
                    goto VAR13;
                }
            }
            FUN8(VAR10, "", VAR4);
            FUN8(VAR10, "", VAR5);
        }
        return VAR10;
    }
    if (FUN7(VAR3, "", &VAR9))
    {
        FUN8(VAR10, "", "");
        if (FUN9(VAR10, VAR9, "") != 0)
            goto VAR13;
        return VAR10;
    }
    if (FUN7(VAR3, "", NULL) || FUN7(VAR3, "", NULL))
    {
        FUN8(VAR10, "", "");
        FUN8(VAR10, "", VAR3);
        return VAR10;
    }
    if (FUN7(VAR3, "", NULL))
    {
        FUN8(VAR10, "", "");
        FUN8(VAR10, "", VAR3);
        return VAR10;
    }
VAR13:
    FUN10(VAR10);
    return NULL;
}