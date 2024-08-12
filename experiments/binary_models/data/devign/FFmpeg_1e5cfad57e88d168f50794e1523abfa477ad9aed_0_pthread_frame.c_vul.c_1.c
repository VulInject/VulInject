static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR8;
    const VAR9 *VAR10 = VAR2->VAR11->VAR10;
    if (!VAR4->VAR12 && !(VAR10->VAR13 & VAR14))
        return 0;
    pthread_mutex_lock(&VAR2->mutex);
    FUN2(VAR2);
    if (VAR8)
    {
        int VAR15;
        if (VAR8->VAR16 == VAR17)
        {
            pthread_mutex_lock(&VAR8->VAR18);
            while (VAR8->VAR16 == VAR17)
                FUN3(&VAR8->VAR19, &VAR8->VAR18);
            pthread_mutex_unlock(&VAR8->VAR18);
        }
        VAR15 = FUN4(VAR2->VAR11, VAR8->VAR11, 0);
        if (VAR15)
        {
            pthread_mutex_unlock(&VAR2->mutex);
            return VAR15;
        }
    }
    FUN5(&VAR2->VAR4);
    FUN6(&VAR2->VAR4, VAR4);
    VAR2->VAR16 = VAR17;
    FUN7(&VAR2->VAR20);
    pthread_mutex_unlock(&VAR2->mutex);
    if (!VAR2->VAR11->VAR21 && (VAR2->VAR11->VAR22 != VAR23 || VAR2->VAR11->VAR24 != VAR25))
    {
        while (VAR2->VAR16 != VAR26 && VAR2->VAR16 != VAR27)
        {
            int VAR28 = 1;
            pthread_mutex_lock(&VAR2->VAR18);
            while (VAR2->VAR16 == VAR17)
                FUN3(&VAR2->VAR19, &VAR2->VAR18);
            switch (VAR2->VAR16)
            {
            case VAR29:
                VAR2->VAR30 = FUN8(VAR2->VAR11, VAR2->VAR31, VAR2->VAR32);
                break;
            case VAR33:
                VAR2->VAR34 = FUN9(VAR2->VAR11, VAR2->VAR35);
                break;
            default:
                VAR28 = 0;
                break;
            }
            if (VAR28)
            {
                VAR2->VAR16 = VAR17;
                FUN7(&VAR2->VAR19);
            }
            pthread_mutex_unlock(&VAR2->VAR18);
        }
    }
    VAR6->VAR8 = VAR2;
    VAR6->VAR36++;
    return 0;
}