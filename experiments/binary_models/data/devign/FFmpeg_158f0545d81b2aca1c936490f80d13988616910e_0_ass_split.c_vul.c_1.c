VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR5 *VAR6 = &VAR3->VAR6;
    int VAR7;
    if (!VAR4 || !*VAR4)
        VAR4 = "";
    for (VAR7 = 0; VAR7 < VAR6->VAR8; VAR7++)
        if (!strcmp(VAR6->VAR9[VAR7].VAR10, VAR4))
            return VAR6->VAR9 + VAR7;
    return NULL;
}