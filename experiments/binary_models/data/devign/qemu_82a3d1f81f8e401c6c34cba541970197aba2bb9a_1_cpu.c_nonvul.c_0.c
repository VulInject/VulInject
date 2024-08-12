static VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3 = NULL;
    char *typename;
    int VAR4;
    if (VAR2 == NULL)
    {
        return NULL;
    }
    VAR3 = FUN2(VAR2);
    if (VAR3 != NULL && FUN3(VAR3, VAR5) != NULL && !FUN4(VAR3))
    {
        return VAR3;
    }
    for (VAR4 = 0; VAR4 < FUN5(VAR6); VAR4++)
    {
        if (strcmp(VAR2, VAR6[VAR4].VAR7) == 0)
        {
            VAR3 = FUN2(VAR6[VAR4].typename);
            assert(VAR3 != NULL && !FUN4(VAR3));
            return VAR3;
        }
    }
    typename = FUN6("" VAR5, VAR2);
    VAR3 = FUN2(typename);
    FUN7(typename);
    if (VAR3 != NULL && FUN4(VAR3))
    {
        VAR3 = NULL;
    }
    if (!VAR3)
    {
        VAR3 = FUN2(FUN8(""));
    }
    return VAR3;
}