int FUN1(const char *VAR1, int VAR2, int VAR3, VAR4 *VAR5, VAR6 *VAR7, void *VAR8)
{
    VAR9 *VAR10, **VAR11;
    VAR10 = FUN2(sizeof(VAR9));
    if (!VAR10)
        return -1;
    FUN3(VAR10->VAR1, sizeof(VAR10->VAR1), VAR1);
    VAR10->VAR2 = (VAR2 == -1) ? 0 : VAR2;
    VAR10->VAR3 = VAR3;
    VAR10->VAR5 = VAR5;
    VAR10->VAR7 = VAR7;
    VAR10->VAR8 = VAR8;
    VAR10->VAR12 = NULL;
    VAR11 = &VAR13;
    while (*VAR11 != NULL)
    {
        if (VAR2 == -1 && strcmp(VAR10->VAR1, (*VAR11)->VAR1) == 0 && VAR10->VAR2 <= (*VAR11)->VAR2)
            VAR10->VAR2 = (*VAR11)->VAR2 + 1;
        VAR11 = &(*VAR11)->VAR12;
    }
    *VAR11 = VAR10;
    return 0;
}