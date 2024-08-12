const VAR1 *FUN1(void *VAR2, const char *VAR3, const char *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = *(VAR7 **)VAR2;
    const VAR1 *VAR9 = NULL;
    if (VAR8->VAR10 && VAR6 & VAR11 && (VAR9 = VAR8->FUN2(VAR2, VAR3, VAR4, VAR5, VAR6)))
        return VAR9;
    while (VAR9 = FUN3(VAR2, VAR9))
    {
        if (!strcmp(VAR9->VAR3, VAR3) && (VAR9->VAR12 & VAR5) == VAR5 && ((!VAR4 && VAR9->VAR13 != VAR14) || (VAR4 && VAR9->VAR4 && !strcmp(VAR9->VAR4, VAR4))))
            return VAR9;
    }
    return NULL;
}