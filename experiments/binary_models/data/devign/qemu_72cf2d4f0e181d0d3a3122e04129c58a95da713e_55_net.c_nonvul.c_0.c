static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5)
{
    VAR6 *VAR7;
    if (VAR4)
    {
        VAR7 = FUN2(VAR3, FUN3(VAR4, NULL, 0), VAR5);
        if (!VAR7)
        {
            return NULL;
        }
        if (strcmp(VAR7->VAR8, ""))
        {
            FUN4(VAR3, "");
            return NULL;
        }
        return VAR7->VAR9;
    }
    else
    {
        if (FUN5(&VAR10))
        {
            FUN4(VAR3, "");
            return NULL;
        }
        return FUN6(&VAR10);
    }
}