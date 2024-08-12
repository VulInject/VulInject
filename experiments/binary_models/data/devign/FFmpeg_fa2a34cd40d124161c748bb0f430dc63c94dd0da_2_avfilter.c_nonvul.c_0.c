VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3 = NULL;
    while ((VAR3 = FUN2(VAR3)))
        if (!strcmp(VAR3->VAR2, VAR2))
            return VAR3;
    return NULL;
}