static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR6;
    int VAR7;
    FUN2(VAR8, &VAR7);
    FUN3(VAR5->VAR9, 0);
    while (1)
    {
        int VAR10;
        FUN2(VAR11, &VAR7);
        VAR10 = recv(VAR5->VAR9, VAR5->VAR12 + 4, sizeof(VAR5->VAR12) - 4, 0);
        FUN2(VAR8, &VAR7);
        if (VAR10 < 0)
        {
            if (FUN4() != FUN5(VAR13) && FUN4() != FUN5(VAR14))
            {
                VAR5->VAR15 = FUN5(VAR16);
                goto VAR17;
            }
            continue;
        }
        FUN6(VAR5->VAR12, VAR10);
        if (FUN7(VAR5->VAR18) < VAR10 + 4)
        {
            if (VAR5->VAR19)
            {
                FUN8(VAR3, VAR20, ""
                                          "");
                continue;
            }
            else
            {
                FUN8(VAR3, VAR21, ""
                                        ""
                                        "");
                VAR5->VAR15 = FUN5(VAR16);
                goto VAR17;
            }
        }
        pthread_mutex_lock(&VAR5->mutex);
        FUN9(VAR5->VAR18, VAR5->VAR12, VAR10 + 4, NULL);
        FUN10(&VAR5->VAR22);
        pthread_mutex_unlock(&VAR5->mutex);
    }
VAR17:
    pthread_mutex_lock(&VAR5->mutex);
    FUN10(&VAR5->VAR22);
    pthread_mutex_unlock(&VAR5->mutex);
    return NULL;
}