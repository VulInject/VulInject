static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    VAR4->VAR10 = VAR2;
    FUN2(VAR2, VAR4->VAR4);
    if (!(VAR2->VAR11 & VAR12))
        return FUN3(VAR2, VAR4->VAR4, VAR5);
    if (VAR7->VAR13 != VAR14 && (VAR2->VAR15->VAR16 || (!VAR2->VAR17 && (VAR2->VAR18 || VAR2->VAR19 != VAR20))))
    {
        FUN4(VAR2, VAR21, "");
        return -1;
    }
    if (VAR2->VAR22->VAR23)
    {
        int *VAR24;
        VAR4->VAR24 = FUN5(2 * sizeof(int));
        if (!VAR4->VAR24)
        {
            return FUN6(VAR25);
        }
        VAR24 = (int *)VAR4->VAR24->VAR26;
        VAR24[0] = VAR24[1] = -1;
    }
    pthread_mutex_lock(&VAR7->VAR27->VAR28);
    if (VAR2->VAR17 || (!VAR2->VAR18 && VAR2->VAR19 == VAR20))
    {
        VAR9 = FUN3(VAR2, VAR4->VAR4, VAR5);
    }
    else
    {
        pthread_mutex_lock(&VAR7->VAR29);
        VAR7->VAR30 = VAR4->VAR4;
        VAR7->VAR31 = VAR5;
        VAR7->VAR13 = VAR32;
        FUN7(&VAR7->VAR33);
        while (VAR7->VAR13 != VAR14)
            FUN8(&VAR7->VAR33, &VAR7->VAR29);
        VAR9 = VAR7->VAR34;
        pthread_mutex_unlock(&VAR7->VAR29);
        if (!VAR2->VAR15->VAR16)
            FUN9(VAR2);
    }
    if (VAR9)
        FUN10(&VAR4->VAR24);
    pthread_mutex_unlock(&VAR7->VAR27->VAR28);
    return VAR9;
}