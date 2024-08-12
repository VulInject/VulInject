static void FUN1(const char *VAR1)
{
    char *VAR2, *VAR3;
    int VAR4;
    if (VAR1[0] == '')
        return;
    VAR3 = NULL;
    if (VAR5 != -1)
    {
        VAR2 = VAR6[VAR5];
        VAR4 = VAR5;
        if (strcmp(VAR2, VAR1) == 0)
        {
            goto VAR7;
        }
    }
    for (VAR4 = 0; VAR4 < VAR8; VAR4++)
    {
        VAR2 = VAR6[VAR4];
        if (VAR2 == NULL)
            break;
        if (strcmp(VAR2, VAR1) == 0)
        {
        VAR7:
            VAR3 = VAR2;
            memmove(&VAR6[VAR4], &VAR6[VAR4 + 1], &VAR6[VAR8] - &VAR6[VAR4 + 1]);
            VAR6[VAR8 - 1] = NULL;
            for (; VAR4 < VAR8; VAR4++)
            {
                if (VAR6[VAR4] == NULL)
                    break;
            }
            break;
        }
    }
    if (VAR4 == VAR8)
    {
        free(VAR6[0]);
        memcpy(VAR6, &VAR6[1], &VAR6[VAR8] - &VAR6[1]);
        VAR6[VAR8 - 1] = NULL;
        VAR4 = VAR8 - 1;
    }
    if (VAR3 == NULL)
        VAR3 = strdup(VAR1);
    VAR6[VAR4] = VAR3;
    VAR5 = -1;
}