void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    void *VAR5 = VAR2->VAR5;
    pthread_mutex_lock(&VAR2->VAR6);
    VAR3 = FUN2(VAR2->VAR7);
    if (VAR5)
        for (VAR4 = 0; VAR4 < VAR3; VAR4 += VAR2->VAR8)
            FUN3(VAR2->VAR7, VAR2, VAR4, VAR2->VAR8, VAR9);
    FUN4(VAR2->VAR7, VAR3);
    FUN5(&VAR2->VAR10);
    pthread_mutex_unlock(&VAR2->VAR6);
}