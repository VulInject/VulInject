static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR1 *VAR5;
    struct VAR6 *VAR7;
    VAR8 *VAR9;
    const char *VAR10 = "";
    if (*VAR4)
    {
        VAR9 = FUN2(VAR4);
    }
    else
    {
        VAR9 = FUN3(FUN4(0));
    }
    if (!VAR9)
        return NULL;
    VAR5 = FUN5(VAR3, VAR10);
    VAR7 = FUN6(struct VAR6, VAR5, VAR5);
    VAR7->VAR9 = VAR9;
    if (FUN7(&VAR5->VAR11) < 0)
    {
        FUN8("", VAR10);
        return NULL;
    }
    return VAR5;
}