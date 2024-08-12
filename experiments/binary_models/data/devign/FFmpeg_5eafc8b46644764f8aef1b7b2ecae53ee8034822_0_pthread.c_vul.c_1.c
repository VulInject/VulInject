static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    while (VAR2->VAR6 > 0)
    {
        VAR7 *VAR8 = &VAR2->VAR9[--VAR2->VAR6];
        pthread_mutex_lock(&VAR4->VAR10);
        FUN2(VAR8);
        VAR8->VAR11 = NULL;
        VAR8->VAR12->FUN3(VAR8->VAR12, VAR8);
        pthread_mutex_unlock(&VAR4->VAR10);
    }
}