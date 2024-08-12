void FUN1(VAR1 *VAR2, int *VAR3, const char *VAR4[], const char *VAR5, const char *VAR6, VAR7 **VAR8)
{
    int64_t VAR9 = 0;
    char *VAR10;
    assert(VAR4);
    FUN2(VAR2, &VAR10, VAR6, VAR8);
    if (FUN3(VAR8))
    {
        return;
    }
    while (VAR4[VAR9] != NULL)
    {
        if (strcmp(VAR4[VAR9], VAR10) == 0)
        {
            break;
        }
        VAR9++;
    }
    if (VAR4[VAR9] == NULL)
    {
        FUN4(VAR8, VAR11, VAR10);
        FUN5(VAR10);
        return;
    }
    FUN5(VAR10);
    *VAR3 = VAR9;
}