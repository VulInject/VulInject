VAR1 *FUN1(int *VAR2, void *VAR3)
{
    int VAR4 = 0;
    VAR1 *VAR5 = NULL;
    *VAR2 = 0;
    pthread_mutex_lock(&VAR6);
    if (VAR7 == NULL)
    {
        VAR7 = FUN2(VAR3);
    }
    pthread_mutex_unlock(&VAR6);
    if (!VAR7)
    {
        FUN3(VAR3, VAR8, "");
        return NULL;
    }
    VAR4 = (*VAR7)->FUN4(VAR7, (void **)&VAR5, VAR9);
    switch (VAR4)
    {
    case VAR10:
        if ((*VAR7)->FUN5(VAR7, &VAR5, NULL) != 0)
        {
            FUN3(VAR3, VAR8, "");
            VAR5 = NULL;
        }
        else
        {
            *VAR2 = 1;
        }
        break;
    case VAR11:
        break;
    case VAR12:
        FUN3(VAR3, VAR8, "");
        break;
    default:
        FUN3(VAR3, VAR8, "");
        break;
    }
    return VAR5;
}