static VAR1 *FUN1(const char **VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR1 *VAR7;
    const char *VAR8 = *VAR2;
    VAR6 = FUN2(*VAR2);
    if (!VAR6)
    {
        const char *typename = FUN3(*VAR2);
        if (typename)
        {
            *VAR2 = typename;
            VAR6 = FUN2(*VAR2);
        }
    }
    if (!FUN4(VAR6, VAR9))
    {
        if (*VAR2 != VAR8)
        {
            FUN5(VAR4, ""
                             "",
                       VAR8, *VAR2);
        }
        else
        {
            FUN5(VAR4, "", *VAR2);
        }
        return NULL;
    }
    if (FUN6(VAR6))
    {
        FUN5(VAR4, VAR10, "", "");
        return NULL;
    }
    VAR7 = FUN7(VAR6);
    if (VAR7->VAR11 || (VAR12 && !VAR7->VAR13))
    {
        FUN5(VAR4, VAR10, "", "");
        return NULL;
    }
    return VAR7;
}