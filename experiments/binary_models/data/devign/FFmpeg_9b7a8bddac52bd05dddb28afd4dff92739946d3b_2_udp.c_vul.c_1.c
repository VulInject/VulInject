static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    if (VAR7->VAR10)
    {
        uint8_t VAR11[4];
        pthread_mutex_lock(&VAR7->mutex);
        if (VAR7->VAR12 < 0)
        {
            int VAR13 = VAR7->VAR12;
            VAR7->VAR12 = 0;
            pthread_mutex_unlock(&VAR7->mutex);
            return VAR13;
        }
        if (FUN2(VAR7->VAR10) < VAR5 + 4)
        {
            pthread_mutex_unlock(&VAR7->mutex);
            return FUN3(VAR14);
        }
        FUN4(VAR11, VAR5);
        FUN5(VAR7->VAR10, VAR11, 4, NULL);
        FUN5(VAR7->VAR10, (VAR3 *)VAR4, VAR5, NULL);
        FUN6(&VAR7->VAR15);
        pthread_mutex_unlock(&VAR7->mutex);
        return VAR5;
    }
    if (!(VAR2->VAR16 & VAR17))
    {
        VAR9 = FUN7(VAR7->VAR18, 1);
        if (VAR9 < 0)
            return VAR9;
    }
    if (!VAR7->VAR19)
    {
        VAR9 = sendto(VAR7->VAR18, VAR4, VAR5, 0, (struct VAR20 *)&VAR7->VAR21, VAR7->VAR22);
    }
    else
        VAR9 = send(VAR7->VAR18, VAR4, VAR5, 0);
    return VAR9 < 0 ? FUN8() : VAR9;
}