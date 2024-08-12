VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, void *VAR6)
{
    VAR1 *VAR7, **VAR8;
    VAR7 = FUN2(sizeof(VAR1));
    if (!VAR7)
        return NULL;
    VAR7->VAR5 = VAR5;
    VAR7->VAR6 = VAR6;
    VAR7->VAR3 = VAR3;
    VAR7->VAR9 = NULL;
    VAR8 = &VAR3->VAR10;
    while (*VAR8 != NULL)
        VAR8 = &(*VAR8)->VAR9;
    *VAR8 = VAR7;
    return VAR7;
}