static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    int VAR9;
    FUN2(VAR5, VAR3);
    if (VAR5->VAR10 && VAR5->VAR10 != VAR5->VAR11)
        FUN3(VAR5->VAR11->VAR2, VAR5->VAR10->VAR2, 0);
    VAR5->VAR12 = 1;
    for (VAR9 = 0; VAR9 < VAR3; VAR9++)
    {
        VAR13 *VAR14 = &VAR5->VAR11[VAR9];
        pthread_mutex_lock(&VAR14->mutex);
        FUN4(&VAR14->VAR15);
        pthread_mutex_unlock(&VAR14->mutex);
        FUN5(VAR14->VAR16, NULL);
        if (VAR8->close)
            VAR8->close(VAR14->VAR2);
        VAR2->VAR8 = NULL;
        FUN6(VAR14);
    }
    for (VAR9 = 0; VAR9 < VAR3; VAR9++)
    {
        VAR13 *VAR14 = &VAR5->VAR11[VAR9];
        FUN7(VAR14->VAR2);
        pthread_mutex_destroy(&VAR14->mutex);
        pthread_mutex_destroy(&VAR14->VAR17);
        pthread_cond_destroy(&VAR14->VAR15);
        pthread_cond_destroy(&VAR14->VAR18);
        pthread_cond_destroy(&VAR14->VAR19);
        FUN8(&VAR14->VAR20.VAR21);
        if (VAR9)
            FUN8(&VAR14->VAR2->VAR22);
        FUN8(&VAR14->VAR2);
    }
    FUN8(&VAR5->VAR11);
    pthread_mutex_destroy(&VAR5->VAR23);
    FUN8(&VAR2->VAR6);
}