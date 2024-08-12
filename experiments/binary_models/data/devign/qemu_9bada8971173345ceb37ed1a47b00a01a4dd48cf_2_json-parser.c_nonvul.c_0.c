static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    if (VAR5 == NULL)
    {
        return NULL;
    }
    VAR7 = FUN2(VAR3);
    assert(VAR7 && VAR7->VAR8 == VAR9);
    if (!strcmp(VAR7->VAR10, ""))
    {
        return FUN3(*VAR5, VAR1 *);
    }
    else if (!strcmp(VAR7->VAR10, ""))
    {
        return FUN4(FUN5(FUN3(*VAR5, int)));
    }
    else if (!strcmp(VAR7->VAR10, ""))
    {
        return FUN4(FUN6(FUN3(*VAR5, int)));
    }
    else if (!strcmp(VAR7->VAR10, ""))
    {
        return FUN4(FUN6(FUN3(*VAR5, long)));
    }
    else if (!strcmp(VAR7->VAR10, "") || !strcmp(VAR7->VAR10, ""))
    {
        return FUN4(FUN6(FUN3(*VAR5, long long)));
    }
    else if (!strcmp(VAR7->VAR10, ""))
    {
        return FUN4(FUN7(FUN3(*VAR5, const char *)));
    }
    else if (!strcmp(VAR7->VAR10, ""))
    {
        return FUN4(FUN8(FUN3(*VAR5, double)));
    }
    return NULL;
}