int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9;
    int VAR10;
    VAR4->VAR11 = VAR2;
    if (!(VAR2->VAR12 & VAR13))
        return FUN2(VAR2, VAR4->VAR4, VAR5);
    if (FUN3(&VAR7->VAR14) != VAR15 && (VAR2->VAR16->VAR17 || !VAR2->VAR18))
    {
        FUN4(VAR2, VAR19, "");
        return -1;
    }
    if (VAR2->VAR8->VAR20)
    {
        VAR21 *VAR22;
        VAR4->VAR22 = FUN5(2 * sizeof(*VAR22));
        if (!VAR4->VAR22)
        {
            return FUN6(VAR23);
        }
        VAR22 = (VAR21 *)VAR4->VAR22->VAR24;
        FUN7(&VAR22[0], -1);
        FUN7(&VAR22[1], -1);
    }
    pthread_mutex_lock(&VAR7->VAR25->VAR26);
    if (VAR2->VAR18 || VAR2->VAR27 == VAR28)
    {
        VAR10 = FUN2(VAR2, VAR4->VAR4, VAR5);
    }
    else
    {
        VAR7->VAR29 = VAR4->VAR4;
        VAR7->VAR30 = VAR5;
        FUN8(&VAR7->VAR14, VAR31, VAR32);
        pthread_mutex_lock(&VAR7->VAR33);
        FUN9(&VAR7->VAR34);
        while (FUN3(&VAR7->VAR14) != VAR15)
            FUN10(&VAR7->VAR34, &VAR7->VAR33);
        VAR10 = VAR7->VAR35;
        pthread_mutex_unlock(&VAR7->VAR33);
    }
    if (!VAR2->VAR18 && !VAR2->VAR16->VAR17)
        FUN11(VAR2);
    if (VAR10)
        FUN12(&VAR4->VAR22);
    pthread_mutex_unlock(&VAR7->VAR25->VAR26);
    return VAR10;
}