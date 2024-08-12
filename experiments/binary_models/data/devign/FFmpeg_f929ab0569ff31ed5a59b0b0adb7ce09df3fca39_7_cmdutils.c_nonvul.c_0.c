static void FUN1(int *VAR1, char ***VAR2)
{
    char *VAR3;
    wchar_t **VAR4;
    int VAR5, VAR6 = 0, VAR7 = 0;
    if (VAR8)
    {
        *VAR1 = VAR9;
        *VAR2 = VAR8;
        return;
    }
    VAR9 = 0;
    VAR4 = FUN2(FUN3(), &VAR9);
    if (VAR9 <= 0 || !VAR4)
        return;
    for (VAR5 = 0; VAR5 < VAR9; VAR5++)
        VAR6 += FUN4(VAR10, 0, VAR4[VAR5], -1, NULL, 0, NULL, NULL);
    VAR8 = FUN5(sizeof(char *) * (VAR9 + 1) + VAR6);
    VAR3 = (char *)VAR8 + sizeof(char *) * (VAR9 + 1);
    if (!VAR8)
    {
        FUN6(VAR4);
        return;
    }
    for (VAR5 = 0; VAR5 < VAR9; VAR5++)
    {
        VAR8[VAR5] = &VAR3[VAR7];
        VAR7 += FUN4(VAR10, 0, VAR4[VAR5], -1, &VAR3[VAR7], VAR6 - VAR7, NULL, NULL);
    }
    VAR8[VAR5] = NULL;
    FUN6(VAR4);
    *VAR1 = VAR9;
    *VAR2 = VAR8;
}