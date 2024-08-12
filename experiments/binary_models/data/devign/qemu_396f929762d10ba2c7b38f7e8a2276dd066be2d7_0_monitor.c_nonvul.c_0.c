void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    if (VAR5)
    {
        VAR6 = FUN2(VAR7, VAR8, NULL);
        if (!VAR6)
            return;
        for (VAR4 = 0; VAR4 < VAR9; VAR4++)
        {
            VAR10[VAR4] = NULL;
        }
        VAR5 = 0;
    }
    for (VAR4 = 0; VAR4 < VAR9; VAR4++)
    {
        if (VAR10[VAR4] == NULL)
        {
            VAR10[VAR4] = VAR2;
            break;
        }
    }
    VAR11 = !VAR3;
    FUN3(VAR2, VAR12, VAR13, VAR14, NULL);
}