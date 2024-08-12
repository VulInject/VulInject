int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10->VAR11;
    Task VAR12;
    int VAR13;
    FUN2(!*VAR7);
    if (VAR6)
    {
        if (!(VAR2->VAR14 & VAR15))
        {
            VAR5 *new = FUN3();
            if (!new)
                return FUN4(VAR16);
            pthread_mutex_lock(&VAR9->VAR17);
            VAR13 = VAR9->VAR18->FUN5(VAR9->VAR18, new);
            pthread_mutex_unlock(&VAR9->VAR17);
            if (VAR13 < 0)
                return VAR13;
            new->VAR19 = VAR6->VAR19;
            new->VAR20 = VAR6->VAR20;
            new->VAR21 = VAR6->VAR21;
            FUN6(new->VAR22, new->VAR23, (const VAR24 **)VAR6->VAR22, VAR6->VAR23, VAR2->VAR25, VAR2->VAR26, VAR2->VAR27);
            VAR6 = new;
        }
        VAR12.VAR28 = VAR9->VAR29;
        VAR12.VAR30 = (void *)VAR6;
        pthread_mutex_lock(&VAR9->VAR31);
        FUN7(VAR9->VAR32, &VAR12, sizeof(VAR12), NULL);
        FUN8(&VAR9->VAR33);
        pthread_mutex_unlock(&VAR9->VAR31);
        VAR9->VAR29 = (VAR9->VAR29 + 1) % VAR34;
        if (!VAR9->VAR35[VAR9->VAR36].VAR37 && (VAR9->VAR29 - VAR9->VAR36) % VAR34 <= VAR2->VAR38)
            return 0;
    }
    if (VAR9->VAR29 == VAR9->VAR36)
        return 0;
    pthread_mutex_lock(&VAR9->VAR39);
    while (!VAR9->VAR35[VAR9->VAR36].VAR37)
    {
        FUN9(&VAR9->VAR40, &VAR9->VAR39);
    }
    VAR12 = VAR9->VAR35[VAR9->VAR36];
    *VAR4 = *(VAR3 *)(VAR12.VAR37);
    FUN10(&VAR9->VAR35[VAR9->VAR36].VAR37);
    VAR9->VAR36 = (VAR9->VAR36 + 1) % VAR34;
    pthread_mutex_unlock(&VAR9->VAR39);
    *VAR7 = 1;
    return VAR12.VAR41;
}