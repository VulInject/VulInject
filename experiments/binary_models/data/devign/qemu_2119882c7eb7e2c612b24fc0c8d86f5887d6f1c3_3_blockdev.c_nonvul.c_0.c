static VAR1 *FUN1(const char *VAR2, const char *VAR3, VAR4 **VAR5, VAR6 **VAR7)
{
    VAR4 *VAR8;
    VAR1 *VAR9;
    if (!VAR2)
    {
        FUN2(VAR7, "");
        return NULL;
    }
    if (!VAR3)
    {
        FUN2(VAR7, "");
        return NULL;
    }
    VAR8 = FUN3(VAR2, VAR2, NULL);
    if (!VAR8)
    {
        FUN2(VAR7, "", VAR2);
        return NULL;
    }
    VAR9 = FUN4(VAR8, VAR3);
    if (!VAR9)
    {
        FUN2(VAR7, "", VAR3);
        return NULL;
    }
    if (VAR5)
    {
        *VAR5 = VAR8;
    }
    return VAR9;
}