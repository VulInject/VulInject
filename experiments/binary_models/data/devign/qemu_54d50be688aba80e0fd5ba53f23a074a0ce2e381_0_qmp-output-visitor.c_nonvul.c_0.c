static void FUN1(VAR1 *VAR2, int *VAR3, const char *VAR4[], const char *VAR5, const char *VAR6, VAR7 **VAR8)
{
    int VAR9 = 0;
    int VAR10 = *VAR3;
    char *VAR11;
    assert(VAR4);
    while (VAR4[VAR9++] != NULL)
        ;
    if (VAR10 < 0 || VAR10 >= VAR9 - 1)
    {
        FUN2(VAR8, VAR12, VAR6 ? VAR6 : "");
        return;
    }
    VAR11 = (char *)VAR4[VAR10];
    FUN3(VAR2, &VAR11, VAR6, VAR8);
}