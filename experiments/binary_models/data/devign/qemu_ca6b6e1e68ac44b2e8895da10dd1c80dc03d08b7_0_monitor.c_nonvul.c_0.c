static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    const VAR6 *VAR7;
    int VAR8 = 0;
    VAR1 *VAR9;
    VAR9 = FUN2(VAR3);
    if (!VAR9)
    {
        FUN3(VAR5, VAR10, "");
        return NULL;
    }
    for (VAR7 = FUN4(VAR9); VAR7; VAR7 = FUN5(VAR9, VAR7))
    {
        const char *VAR11 = FUN6(VAR7);
        const VAR2 *VAR12 = FUN7(VAR7);
        if (!strcmp(VAR11, ""))
        {
            if (FUN8(VAR12) != VAR13)
            {
                FUN3(VAR5, VAR14, "", "");
                return NULL;
            }
            VAR8 = 1;
        }
        else if (!strcmp(VAR11, ""))
        {
            if (FUN8(VAR12) != VAR15)
            {
                FUN3(VAR5, VAR14, "", "");
                return NULL;
            }
        }
        else if (!strcmp(VAR11, ""))
        {
        }
        else
        {
            FUN3(VAR5, VAR16, VAR11);
            return NULL;
        }
    }
    if (!VAR8)
    {
        FUN3(VAR5, VAR10, "");
        return NULL;
    }
    return VAR9;
}