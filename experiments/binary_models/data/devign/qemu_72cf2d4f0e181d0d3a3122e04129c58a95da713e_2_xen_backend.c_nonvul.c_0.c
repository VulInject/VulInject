struct VAR1 *FUN1(const char *VAR2, int VAR3, int VAR4)
{
    struct VAR1 *VAR5;
    FUN2(VAR5, &VAR6, VAR7)
    {
        if (VAR5->VAR3 != VAR3)
            continue;
        if (VAR5->VAR4 != VAR4)
            continue;
        if (strcmp(VAR5->VAR2, VAR2) != 0)
            continue;
        return VAR5;
    }
    return NULL;
}