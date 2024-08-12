static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    const VAR6 *VAR7;
    int VAR8 = 0;
    VAR1 *VAR9;
    if (FUN2(VAR3) != VAR10)
    {
        FUN3(VAR5, VAR11, "");
        return NULL;
    }
    VAR9 = FUN4(VAR3);
    for (VAR7 = FUN5(VAR9); VAR7; VAR7 = FUN6(VAR9, VAR7))
    {
        const char *VAR12 = FUN7(VAR7);
        const VAR2 *VAR13 = FUN8(VAR7);
        if (!strcmp(VAR12, ""))
        {
            if (FUN2(VAR13) != VAR14)
            {
                FUN3(VAR5, VAR15, "", "");
                return NULL;
            }
            VAR8 = 1;
        }
        else if (!strcmp(VAR12, ""))
        {
            if (FUN2(VAR13) != VAR10)
            {
                FUN3(VAR5, VAR15, "", "");
                return NULL;
            }
        }
        else
        {
            FUN3(VAR5, VAR16, VAR12);
            return NULL;
        }
    }
    if (!VAR8)
    {
        FUN3(VAR5, VAR11, "");
        return NULL;
    }
    return VAR9;