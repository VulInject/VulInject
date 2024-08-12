void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    if (VAR5)
    {
        for (VAR4 = 0; VAR4 < VAR6; VAR4++)
        {
            VAR7[VAR4] = NULL;
        }
        VAR5 = 0;
    }
    for (VAR4 = 0; VAR4 < VAR6; VAR4++)
    {
        if (VAR7[VAR4] == NULL)
        {
            VAR7[VAR4] = VAR2;
            break;
        }
    }
    VAR8 = !VAR3;
    FUN2(VAR2, VAR9, VAR10, VAR11, NULL);