static VAR1 *FUN1(const char *VAR2, const char *VAR3)
{
    VAR1 *VAR4;
    char VAR5[1024];
    const char *VAR6;
    char VAR7[1024];
    int VAR8;
    VAR4 = FUN2(VAR3);
    if (!VAR4)
        return NULL;
    FUN3(NULL, 0, NULL, 0, NULL, 0, NULL, VAR5, sizeof(VAR5), VAR2);
    VAR6 = VAR5;
    if (*VAR6 == '')
        VAR6++;
    if (!strcmp(VAR6, VAR4->VAR9->VAR10))
        return VAR4;
    for (VAR8 = 0; VAR8 < VAR4->VAR9->VAR11; ++VAR8)
    {
        snprintf(VAR7, sizeof(VAR7), "", VAR4->VAR9->VAR10, VAR8);
        if (!FUN4(VAR6, VAR7, sizeof(VAR7)))
        {
            return VAR4;
        }
    }
    return NULL;
}