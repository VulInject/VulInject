static VAR1 *FUN1(VAR2 *VAR3)
{
    const VAR4 *VAR5;
    int VAR6 = 0;
    VAR1 *VAR7;
    if (FUN2(VAR3) != VAR8)
    {
        FUN3(VAR9, "");
        return NULL;
    }
    VAR7 = FUN4(VAR3);
    for (VAR5 = FUN5(VAR7); VAR5; VAR5 = FUN6(VAR7, VAR5))
    {
        const char *VAR10 = FUN7(VAR5);
        const VAR2 *VAR11 = FUN8(VAR5);
        if (!strcmp(VAR10, ""))
        {
            if (FUN2(VAR11) != VAR12)
            {
                FUN3(VAR13, "", "");
                return NULL;
            }
            VAR6 = 1;
        }
        else if (!strcmp(VAR10, ""))
        {
            if (FUN2(VAR11) != VAR8)
            {
                FUN3(VAR13, "", "");
                return NULL;
            }
        }
        else if (!strcmp(VAR10, ""))
        {
        }
        else
        {
            FUN3(VAR14, VAR10);
            return NULL;
        }
    }
    if (!VAR6)
    {
        FUN3(VAR9, "");
        return NULL;
    }
    return VAR7;
}