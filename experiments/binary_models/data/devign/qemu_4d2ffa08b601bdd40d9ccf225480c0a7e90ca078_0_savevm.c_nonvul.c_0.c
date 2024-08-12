static VAR1 *FUN1(const char *VAR2, int VAR3)
{
    VAR1 *VAR4;
    FUN2(VAR4, &VAR5, VAR6)
    {
        if (!strcmp(VAR4->VAR2, VAR2) && (VAR3 == VAR4->VAR3 || VAR3 == VAR4->VAR7))
            return VAR4;
    }
    return NULL;
}