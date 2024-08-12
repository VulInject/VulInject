VAR1 *FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR1 *VAR4, *VAR5;
    VAR6 **VAR7;
    int VAR8;
    VAR7 = FUN2(VAR3, "", 0);
    assert(VAR7 != NULL && VAR7[0] != NULL && !VAR7[0][0]);
    VAR4 = VAR2;
    for (VAR8 = 1; VAR7[VAR8] != NULL; VAR8++, VAR4 = VAR5)
    {
        VAR5 = FUN3(VAR4, VAR7[VAR8]);
        if (!VAR5)
        {
            VAR5 = FUN4("");
            FUN5(VAR4, VAR7[VAR8], VAR5, NULL);
        }
    }
    FUN6(VAR7);
    return VAR4;