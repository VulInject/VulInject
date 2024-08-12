static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR6;
    fd_set VAR7;
    struct timeval VAR8;
    while (!VAR5->VAR9)
    {
        int VAR10;
        int VAR11;
        int VAR12;
        if (FUN2(&VAR3->VAR13))
        {
            VAR5->VAR14 = FUN3(VAR15);
            goto VAR16;
        }
        FUN4(&VAR7);
        FUN5(VAR5->VAR17, &VAR7);
        VAR8.VAR18 = 1;
        VAR8.VAR19 = 0;
        VAR11 = FUN6(VAR5->VAR17 + 1, &VAR7, NULL, NULL, &VAR8);
        if (VAR11 < 0)
        {
            if (FUN7() == FUN3(VAR15))
                continue;
            VAR5->VAR14 = FUN3(VAR20);
            goto VAR16;
        }
        if (!(VAR11 > 0 && FUN8(VAR5->VAR17, &VAR7)))
            continue;
        VAR10 = FUN9(VAR5->VAR21);
        if (VAR10 < VAR22 + 4)
        {
            FUN10(VAR3, VAR23, "");
            VAR5->VAR14 = FUN3(VAR20);
            goto VAR16;
        }
        VAR12 = recv(VAR5->VAR17, VAR5->VAR24 + 4, sizeof(VAR5->VAR24) - 4, 0);
        if (VAR12 < 0)
        {
            if (FUN7() != FUN3(VAR25) && FUN7() != FUN3(VAR15))
            {
                VAR5->VAR14 = FUN3(VAR20);
                goto VAR16;
            }
            continue;
        }
        FUN11(VAR5->VAR24, VAR12);
        pthread_mutex_lock(&VAR5->mutex);
        FUN12(VAR5->VAR21, VAR5->VAR24, VAR12 + 4, NULL);
        FUN13(&VAR5->VAR26);
        pthread_mutex_unlock(&VAR5->mutex);
    }
VAR16:
    pthread_mutex_lock(&VAR5->mutex);
    FUN13(&VAR5->VAR26);
    pthread_mutex_unlock(&VAR5->mutex);
    return NULL;
}