void *FUN1(VAR1 *VAR2, const char *VAR3, void *VAR4, size_t VAR5)
{
    int VAR6, VAR7;
    void *VAR8 = NULL;
    assert(VAR2->VAR9);
    VAR7 = FUN2(VAR2->VAR9->VAR10);
    assert(VAR7 < FUN3(VAR2));
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        if (strcmp(VAR3, VAR2->VAR9->VAR11[VAR6].VAR12) == 0)
        {
            VAR8 = FUN4(VAR2, VAR13 + VAR6, VAR4, VAR5);
            VAR2->VAR9->VAR11[VAR6].VAR14 = FUN5(VAR5);
            return VAR8;
        }
    }
    FUN6(VAR2, VAR3, NULL, NULL, NULL, VAR4, VAR5, true);
    return NULL;
}