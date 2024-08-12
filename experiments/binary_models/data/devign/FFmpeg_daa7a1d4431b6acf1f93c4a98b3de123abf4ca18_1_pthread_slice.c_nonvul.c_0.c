int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    int VAR6 = VAR2->VAR6;
    FUN2();
    if (!VAR6)
    {
        int VAR7 = FUN3();
        FUN4(VAR2, VAR8, "", VAR7);
        if (VAR7 > 1)
            VAR6 = VAR2->VAR6 = FUN5(VAR7 + 1, VAR9);
        else
            VAR6 = VAR2->VAR6 = 1;
    }
    if (VAR6 <= 1)
    {
        VAR2->VAR10 = 0;
        return 0;
    }
    VAR5 = FUN6(sizeof(VAR4));
    if (!VAR5)
        return -1;
    VAR5->VAR11 = FUN6(sizeof(VAR12) * VAR6);
    if (!VAR5->VAR11)
    {
        FUN7(VAR5);
        return -1;
    }
    VAR2->VAR13 = VAR5;
    VAR5->VAR14 = 0;
    VAR5->VAR15 = 0;
    VAR5->VAR16 = 0;
    VAR5->VAR17 = 0;
    pthread_cond_init(&VAR5->VAR18, NULL);
    pthread_cond_init(&VAR5->VAR19, NULL);
    pthread_mutex_init(&VAR5->VAR20, NULL);
    pthread_mutex_lock(&VAR5->VAR20);
    for (VAR3 = 0; VAR3 < VAR6; VAR3++)
    {
        if (FUN8(&VAR5->VAR11[VAR3], NULL, VAR21, VAR2))
        {
            VAR2->VAR6 = VAR3;
            pthread_mutex_unlock(&VAR5->VAR20);
            FUN9(VAR2);
            return -1;
        }
    }
    FUN10(VAR5, VAR6);
    VAR2->VAR22 = VAR23;
    VAR2->VAR24 = VAR25;
    return 0;
}