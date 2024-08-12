int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    struct timespec VAR5;
    FUN2(&VAR5, VAR3);
    pthread_mutex_lock(&VAR2->VAR6);
    --VAR2->VAR7;
    while (VAR2->VAR7 < 0)
    {
        VAR4 = FUN3(&VAR2->VAR8, &VAR2->VAR6, &VAR5);
        if (VAR4 == VAR9)
        {
            break;
        }
        if (VAR4 != 0)
        {
            FUN4(VAR4, VAR10);
        }
    }
    pthread_mutex_unlock(&VAR2->VAR6);
    return (VAR4 == VAR9 ? -1 : 0);
    if (VAR3 <= 0)
    {
        do
        {
            VAR4 = FUN5(&VAR2->VAR2);
        } while (VAR4 == -1 && VAR11 == VAR12);
        if (VAR4 == -1 && VAR11 == VAR13)
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
        } while (VAR4 == -1 && VAR11 == VAR12);
        if (VAR4 == -1 && VAR11 == VAR9)
        {
            return -1;
        }
    }
    if (VAR4 < 0)
    {
        FUN4(VAR11, VAR10);
    }
    return 0;