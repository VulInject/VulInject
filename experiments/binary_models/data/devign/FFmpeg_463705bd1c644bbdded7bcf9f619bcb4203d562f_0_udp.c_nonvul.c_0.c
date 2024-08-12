static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    int VAR10, VAR11 = VAR2->VAR12 & VAR13;
    if (VAR7->VAR14)
    {
        pthread_mutex_lock(&VAR7->mutex);
        do
        {
            VAR10 = FUN2(VAR7->VAR14);
            if (VAR10)
            {
                uint8_t VAR15[4];
                pthread_mutex_unlock(&VAR7->mutex);
                FUN3(VAR7->VAR14, VAR15, 4, NULL);
                VAR10 = FUN4(VAR15);
                if (VAR10 > VAR5)
                {
                    FUN5(VAR2, VAR16, "");
                    VAR10 = VAR5;
                }
                FUN3(VAR7->VAR14, VAR4, VAR10, NULL);
                FUN6(VAR7->VAR14, FUN4(VAR15) - VAR10);
                return VAR10;
            }
            else if (VAR7->VAR17)
            {
                pthread_mutex_unlock(&VAR7->mutex);
                return VAR7->VAR17;
            }
            else if (VAR11)
            {
                pthread_mutex_unlock(&VAR7->mutex);
                return FUN7(VAR18);
            }
            else
            {
                int64_t VAR19 = FUN8() + 100000;
                struct timespec VAR20 = {.VAR21 = VAR19 / 1000000, .VAR22 = (VAR19 % 1000000) * 1000};
                if (FUN9(&VAR7->VAR23, &VAR7->mutex, &VAR20) < 0)
                    return FUN7(VAR24 == VAR25 ? VAR18 : VAR24);
                VAR11 = 1;
            }
        } while (1);
    }
    if (!(VAR2->VAR12 & VAR13))
    {
        VAR9 = FUN10(VAR7->VAR26, 0);
        if (VAR9 < 0)
            return VAR9;
    }
    VAR9 = recv(VAR7->VAR26, VAR4, VAR5, 0);
    return VAR9 < 0 ? FUN11() : VAR9;
}
static int FUN12(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    if (!(VAR2->VAR12 & VAR13))
    {
        VAR9 = FUN10(VAR7->VAR26, 1);
        if (VAR9 < 0)
            return VAR9;
    }
    if (!VAR7->VAR27)
    {
        VAR9 = sendto(VAR7->VAR26, VAR4, VAR5, 0, (struct VAR28 *)&VAR7->VAR29, VAR7->VAR30);
    }
    else
        VAR9 = send(VAR7->VAR26, VAR4, VAR5, 0);
    return VAR9 < 0 ? FUN11() : VAR9;
}
static int FUN13(VAR1 *VAR2)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    if (VAR7->VAR31 && (VAR2->VAR12 & VAR32))
        FUN14(VAR7->VAR26, (struct VAR28 *)&VAR7->VAR29);
    FUN15(VAR7->VAR26);
    FUN16(VAR7->VAR14);
    if (VAR7->VAR33)
    {
        VAR7->VAR34 = 1;
        VAR9 = FUN17(VAR7->VAR35, NULL);
        if (VAR9 != 0)
            FUN5(VAR2, VAR36, "", strerror(VAR9));
    }
    pthread_mutex_destroy(&VAR7->mutex);
    pthread_cond_destroy(&VAR7->VAR23);
    return 0;
}
URLProtocol VAR37 = {
    .VAR38 = "",
    .VAR39 = VAR40,
    .VAR41 = VAR42,
    .VAR43 = VAR44,
    .VAR45 = VAR46,
    .VAR47 = VAR48,
    .VAR49 = sizeof(VAR6),
    .VAR12 = VAR50,
};