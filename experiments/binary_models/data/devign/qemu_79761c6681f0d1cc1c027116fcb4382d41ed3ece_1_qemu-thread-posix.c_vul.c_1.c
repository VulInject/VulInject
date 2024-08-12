void FUN1(VAR1 *VAR2)
{
    int VAR3;
    pthread_mutex_lock(&VAR2->VAR4);
    if (VAR2->VAR5 == VAR6)
    {
        VAR3 = VAR7;
    }
    else if (VAR2->VAR5++ < 0)
    {
        VAR3 = FUN2(&VAR2->VAR8);
    }
    else
    {
        VAR3 = 0;
    }
    pthread_mutex_unlock(&VAR2->VAR4);
    if (VAR3 != 0)
    {
        FUN3(VAR3, VAR9);
    }
    VAR3 = FUN4(&VAR2->VAR2);
    if (VAR3 < 0)
    {
        FUN3(VAR10, VAR9);
    }
}