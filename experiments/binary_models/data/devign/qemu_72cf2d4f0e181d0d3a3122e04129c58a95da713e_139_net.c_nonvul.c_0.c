VAR1 *FUN1(int VAR2, int VAR3)
{
    VAR1 **VAR4, *VAR5;
    for (VAR5 = VAR6; VAR5 != NULL; VAR5 = VAR5->VAR7)
    {
        if (VAR5->VAR2 == VAR2)
            return VAR5;
    }
    if (!VAR3)
    {
        return NULL;
    }
    VAR5 = FUN2(sizeof(VAR1));
    VAR5->VAR2 = VAR2;
    FUN3(&VAR5->VAR8);
    VAR5->VAR7 = NULL;
    VAR4 = &VAR6;
    while (*VAR4 != NULL)
        VAR4 = &(*VAR4)->VAR7;
    *VAR4 = VAR5;
    return VAR5;
}