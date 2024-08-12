void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6->VAR7;
    const VAR8 *VAR9 = VAR2->VAR9;
    int VAR10;
    FUN2(VAR5, VAR3);
    if (VAR5->VAR11 && VAR5->VAR11 != VAR5->VAR12)
        if (FUN3(VAR5->VAR12->VAR2, VAR5->VAR11->VAR2, 0) < 0)
        {
            FUN4(VAR2, VAR13, "");
            VAR5->VAR11->VAR2->VAR6->VAR14 = VAR5->VAR12->VAR2->VAR6->VAR14;
            VAR5->VAR12->VAR2->VAR6->VAR14 = 1;
        }
    VAR5->VAR15 = 1;
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        VAR16 *VAR17 = &VAR5->VAR12[VAR10];
        pthread_mutex_lock(&VAR17->mutex);
        FUN5(&VAR17->VAR18);
        pthread_mutex_unlock(&VAR17->mutex);
        if (VAR17->VAR19)
            FUN6(VAR17->VAR20, NULL);
        VAR17->VAR19 = 0;
        if (VAR9->close)
            VAR9->close(VAR17->VAR2);
        FUN7(VAR17);
        FUN8(&VAR17->VAR21);
    }
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        VAR16 *VAR17 = &VAR5->VAR12[VAR10];
        pthread_mutex_destroy(&VAR17->mutex);
        pthread_mutex_destroy(&VAR17->VAR22);
        pthread_cond_destroy(&VAR17->VAR18);
        pthread_cond_destroy(&VAR17->VAR23);
        pthread_cond_destroy(&VAR17->VAR24);
        FUN9(&VAR17->VAR25);
        FUN10(&VAR17->VAR26);
        if (VAR10)
        {
            FUN10(&VAR17->VAR2->VAR27);
            FUN10(&VAR17->VAR2->VAR28);
        }
        FUN10(&VAR17->VAR2->VAR6);
        FUN10(&VAR17->VAR2);
    }
    FUN10(&VAR5->VAR12);
    pthread_mutex_destroy(&VAR5->VAR29);
    FUN10(&VAR2->VAR6->VAR7);
    if (VAR2->VAR27 && VAR2->VAR9 && VAR2->VAR9->VAR30)
        FUN11(VAR2->VAR27);
    VAR2->VAR9 = NULL;
}