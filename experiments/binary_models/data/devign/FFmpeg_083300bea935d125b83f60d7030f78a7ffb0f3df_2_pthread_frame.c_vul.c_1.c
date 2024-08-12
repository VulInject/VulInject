static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9;
    int VAR10;
    VAR4->VAR11 = VAR2;
    FUN2(VAR2, VAR4->VAR4);
    if (!(VAR2->VAR12 & VAR13))
        return FUN3(VAR2, VAR4->VAR4, VAR5);
    if (FUN4(&VAR7->VAR14) != VAR15 && (VAR2->VAR16->VAR17 || !FUN5(VAR2)))
    {
        FUN6(VAR2, VAR18, "");
        return -1;
    }
    if (VAR2->VAR8->VAR19)
    {
        VAR20 *VAR21;
        VAR4->VAR21 = FUN7(2 * sizeof(*VAR21));
        if (!VAR4->VAR21)
        {
            return FUN8(VAR22);
        }
        VAR21 = (VAR20 *)VAR4->VAR21->VAR23;
        FUN9(&VAR21[0], -1);
        FUN9(&VAR21[1], -1);
    }
    pthread_mutex_lock(&VAR7->VAR24->VAR25);
    if (VAR2->VAR26 || VAR2->VAR27 == VAR28)
    {
        VAR10 = FUN3(VAR2, VAR4->VAR4, VAR5);
    }
    else
    {
        pthread_mutex_lock(&VAR7->VAR29);
        VAR7->VAR30 = VAR4->VAR4;
        VAR7->VAR31 = VAR5;
        FUN10(&VAR7->VAR14, VAR32, VAR33);
        FUN11(&VAR7->VAR34);
        while (FUN4(&VAR7->VAR14) != VAR15)
            FUN12(&VAR7->VAR34, &VAR7->VAR29);
        VAR10 = VAR7->VAR35;
        pthread_mutex_unlock(&VAR7->VAR29);
    }
    if (!FUN5(VAR2) && !VAR2->VAR16->VAR17)
        FUN13(VAR2);
    if (VAR10)
        FUN14(&VAR4->VAR21);
    pthread_mutex_unlock(&VAR7->VAR24->VAR25);
    return VAR10;
}