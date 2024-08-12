static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    char *VAR4, *VAR5;
    int VAR6;
    if (VAR3[0] == '')
        return;
    VAR5 = NULL;
    if (VAR2->VAR4 != -1)
    {
        VAR4 = VAR2->VAR7[VAR2->VAR4];
        VAR6 = VAR2->VAR4;
        if (strcmp(VAR4, VAR3) == 0)
        {
            goto VAR8;
        }
    }
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        VAR4 = VAR2->VAR7[VAR6];
        if (VAR4 == NULL)
            break;
        if (strcmp(VAR4, VAR3) == 0)
        {
        VAR8:
            VAR5 = VAR4;
            memmove(&VAR2->VAR7[VAR6], &VAR2->VAR7[VAR6 + 1], (VAR9 - VAR6 + 1) * sizeof(char *));
            VAR2->VAR7[VAR9 - 1] = NULL;
            for (; VAR6 < VAR9; VAR6++)
            {
                if (VAR2->VAR7[VAR6] == NULL)
                    break;
            }
            break;
        }
    }
    if (VAR6 == VAR9)
    {
        free(VAR2->VAR7[0]);
        memcpy(VAR2->VAR7, &VAR2->VAR7[1], (VAR9 - 1) * sizeof(char *));
        VAR2->VAR7[VAR9 - 1] = NULL;
        VAR6 = VAR9 - 1;
    }
    if (VAR5 == NULL)
        VAR5 = strdup(VAR3);
    VAR2->VAR7[VAR6] = VAR5;
    VAR2->VAR4 = -1;
}