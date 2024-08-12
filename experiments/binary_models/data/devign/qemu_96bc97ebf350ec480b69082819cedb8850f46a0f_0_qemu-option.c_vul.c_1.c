VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR1 *VAR5;
    FUN2(VAR5, &VAR3->VAR6, VAR7)
    {
        if (!VAR5->VAR4)
        {
            if (!VAR4)
            {
                return VAR5;
            }
            continue;
        }
        if (strcmp(VAR5->VAR4, VAR4) != 0)
        {
            continue;
        }
        return VAR5;
    }
    return NULL;
}