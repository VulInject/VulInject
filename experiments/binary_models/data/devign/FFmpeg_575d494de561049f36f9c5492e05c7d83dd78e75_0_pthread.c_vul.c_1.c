static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    for (VAR4 = 0; VAR4 < VAR3; VAR4++)
    {
        VAR5 *VAR6 = &VAR2->VAR7[VAR4];
        if (VAR6->VAR8 != VAR9)
        {
            pthread_mutex_lock(&VAR6->VAR10);
            while (VAR6->VAR8 != VAR9)
                FUN2(&VAR6->VAR11, &VAR6->VAR10);
            pthread_mutex_unlock(&VAR6->VAR10);
        }
    }