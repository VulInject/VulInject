int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int *VAR8, VAR9;
    VAR4->VAR10 = VAR2;
    FUN2(VAR2, VAR4);
    if (!(VAR2->VAR11 & VAR12))
    {
        VAR4->VAR7 = NULL;
        return VAR2->FUN3(VAR2, VAR4);
    }
    if (VAR6->VAR13 != VAR14 && (VAR2->VAR15->VAR16 || (!VAR2->VAR17 && VAR2->VAR18 != VAR19)))
    {
        FUN4(VAR2, VAR20, "");
        return -1;
    }
    pthread_mutex_lock(&VAR6->VAR21->VAR22);
    VAR4->VAR7 = VAR8 = FUN5(VAR6);
    if (!VAR8)
    {
        pthread_mutex_unlock(&VAR6->VAR21->VAR22);
        return -1;
    }
    VAR8[0] = VAR8[1] = -1;
    if (VAR2->VAR17 || VAR2->VAR18 == VAR19)
    {
        VAR9 = VAR2->FUN3(VAR2, VAR4);
    }
    else
    {
        VAR6->VAR23 = VAR4;
        VAR6->VAR13 = VAR24;
        pthread_mutex_lock(&VAR6->VAR25);
        FUN6(&VAR6->VAR26);
        while (VAR6->VAR13 != VAR14)
            FUN7(&VAR6->VAR26, &VAR6->VAR25);
        VAR9 = VAR6->VAR27;
        pthread_mutex_unlock(&VAR6->VAR25);
        if (!VAR2->VAR15->VAR16)
            FUN8(VAR2);
    }
    pthread_mutex_unlock(&VAR6->VAR21->VAR22);
    return VAR9;
}