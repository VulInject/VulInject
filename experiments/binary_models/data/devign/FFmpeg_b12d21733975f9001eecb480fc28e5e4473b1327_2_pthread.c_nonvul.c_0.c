static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    int VAR6 = VAR2->VAR6;
    if (!VAR6)
    {
        int VAR7 = FUN2(VAR2);
        if (VAR7 > 1)
            VAR6 = VAR2->VAR6 = FUN3(VAR7 + 1, VAR8);
        else
            VAR6 = VAR2->VAR6 = 1;
    }
    if (VAR6 <= 1)
    {
        VAR2->VAR9 = 0;
        return 0;
    }
    VAR5 = FUN4(sizeof(VAR4));
    if (!VAR5)
        return -1;
    VAR5->VAR10 = FUN4(sizeof(VAR11) * VAR6);
    if (!VAR5->VAR10)
    {
        FUN5(VAR5);
        return -1;
    }
    VAR2->VAR12 = VAR5;
    VAR5->VAR13 = 0;
    VAR5->VAR14 = 0;
    VAR5->VAR15 = 0;
    VAR5->VAR16 = 0;
    pthread_cond_init(&VAR5->VAR17, NULL);
    pthread_cond_init(&VAR5->VAR18, NULL);
    pthread_mutex_init(&VAR5->VAR19, NULL);
    pthread_mutex_lock(&VAR5->VAR19);
    for (VAR3 = 0; VAR3 < VAR6; VAR3++)
    {
        if (FUN6(&VAR5->VAR10[VAR3], NULL, VAR20, VAR2))
        {
            VAR2->VAR6 = VAR3;
            pthread_mutex_unlock(&VAR5->VAR19);
            FUN7(VAR2);
            return -1;
        }
    }
    FUN8(VAR5, VAR6);
    VAR2->VAR21 = VAR22;
    VAR2->VAR23 = VAR24;
    return 0;
}