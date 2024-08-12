static VAR1 *FUN1(const VAR2 *VAR3, VAR4 **VAR5)
{
    const VAR6 *VAR7;
    const char *VAR8;
    const VAR2 *VAR9;
    bool VAR10 = false;
    VAR1 *VAR11 = NULL;
    VAR11 = FUN2(VAR3);
    if (!VAR11)
    {
        FUN3(VAR5, VAR12, "");
        return NULL;
    }
    for (VAR7 = FUN4(VAR11); VAR7; VAR7 = FUN5(VAR11, VAR7))
    {
        VAR8 = FUN6(VAR7);
        VAR9 = FUN7(VAR7);
        if (!strcmp(VAR8, ""))
        {
            if (FUN8(VAR9) != VAR13)
            {
                FUN3(VAR5, VAR14, "", "");
                return NULL;
            }
            VAR10 = true;
        }
        else if (!strcmp(VAR8, ""))
        {
            if (FUN8(VAR9) != VAR15)
            {
                FUN3(VAR5, VAR14, "", "");
                return NULL;
            }
        }
        else
        {
            FUN3(VAR5, VAR16, VAR8);
            return NULL;
        }
    }
    if (!VAR10)
    {
        FUN3(VAR5, VAR12, "");
        return NULL;
    }
    return VAR11;
}