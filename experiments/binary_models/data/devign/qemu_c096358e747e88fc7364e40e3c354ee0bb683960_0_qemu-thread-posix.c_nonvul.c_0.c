int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    struct timespec VAR5;
    assert(VAR2->VAR6);
    VAR4 = 0;
    FUN2(&VAR5, VAR3);
    pthread_mutex_lock(&VAR2->VAR7);
    while (VAR2->VAR8 == 0)
    {
        VAR4 = FUN3(&VAR2->VAR9, &VAR2->VAR7, &VAR5);
        if (VAR4 == VAR10)
        {
            break;
        }
        if (VAR4 != 0)
        {
            FUN4(VAR4, VAR11);
        }
    }
    if (VAR4 != VAR10)
    {
        --VAR2->VAR8;
    }
    pthread_mutex_unlock(&VAR2->VAR7);
    return (VAR4 == VAR10 ? -1 : 0);
    if (VAR3 <= 0)
    {
        do
        {
            VAR4 = FUN5(&VAR2->VAR2);
        } while (VAR4 == -1 && VAR12 == VAR13);
        if (VAR4 == -1 && VAR12 == VAR14)
        {
            return -1;
        }
    }
    else
    {
        FUN2(&VAR5, VAR3);
        do
        {
            VAR4 = FUN6(&VAR2->VAR2, &VAR5);
        } while (VAR4 == -1 && VAR12 == VAR13);
        if (VAR4 == -1 && VAR12 == VAR10)
        {
            return -1;
        }
    }
    if (VAR4 < 0)
    {
        FUN4(VAR12, VAR11);
    }
    return 0;
}