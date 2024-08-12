const char *FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    if (VAR2 == NULL)
    {
        return NULL;
    }
    VAR5 = FUN2(VAR2, VAR3);
    if (!VAR5)
    {
        const VAR6 *VAR7 = FUN3(VAR2->VAR8->VAR7, VAR3);
        if (VAR7 && VAR7->VAR9)
        {
            return VAR7->VAR9;
        }
    }
    return VAR5 ? VAR5->VAR10 : NULL;
}