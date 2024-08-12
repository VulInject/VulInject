int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    int VAR6 = VAR2->VAR6;
    FUN2();
    if (FUN3(VAR2->VAR7) && VAR2->VAR8 == VAR9 && VAR2->VAR10 > 2800)
        VAR6 = VAR2->VAR6 = 1;
    if (!VAR6)
    {
        int VAR11 = FUN4();
        if (VAR2->VAR10)
            VAR11 = FUN5(VAR11, (VAR2->VAR10 + 15) / 16);
        if (VAR11 > 1)
            VAR6 = VAR2->VAR6 = FUN5(VAR11 + 1, VAR12);
        else
            VAR6 = VAR2->VAR6 = 1;
    }
    if (VAR6 <= 1)
    {
        VAR2->VAR13 = 0;
        return 0;
    }
    VAR5 = FUN6(sizeof(VAR4));
    if (!VAR5)
        return -1;
    VAR5->VAR14 = FUN7(VAR6, sizeof(VAR15));
    if (!VAR5->VAR14)
    {
        FUN8(VAR5);
        return -1;
    }
    VAR2->VAR16->VAR17 = VAR5;
    VAR5->VAR18 = 0;
    VAR5->VAR19 = 0;
    VAR5->VAR20 = 0;
    VAR5->VAR21 = 0;
    pthread_cond_init(&VAR5->VAR22, NULL);
    pthread_cond_init(&VAR5->VAR23, NULL);
    pthread_mutex_init(&VAR5->VAR24, NULL);
    pthread_mutex_lock(&VAR5->VAR24);
    for (VAR3 = 0; VAR3 < VAR6; VAR3++)
    {
        if (FUN9(&VAR5->VAR14[VAR3], NULL, VAR25, VAR2))
        {
            VAR2->VAR6 = VAR3;
            pthread_mutex_unlock(&VAR5->VAR24);
            FUN10(VAR2);
            return -1;
        }
    }
    FUN11(VAR5, VAR6);
    VAR2->VAR26 = VAR27;
    VAR2->VAR28 = VAR29;
    return 0;
}