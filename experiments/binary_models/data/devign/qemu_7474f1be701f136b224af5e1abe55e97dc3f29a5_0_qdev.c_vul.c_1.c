VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR1 *VAR5;
    if (FUN2(VAR4) == NULL)
    {
        return NULL;
    }
    VAR5 = FUN3(FUN4(VAR4));
    if (!VAR5)
    {
        return NULL;
    }
    if (!VAR3)
    {
        VAR3 = FUN5();
    }
    FUN6(VAR5, VAR3);
    FUN7(FUN8(VAR5));
    return VAR5;