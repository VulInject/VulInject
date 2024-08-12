static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR6;
    int VAR7;
    FUN2(VAR8, &VAR7);
    for (;;)
    {
        int VAR9;
        uint8_t VAR10[4];
        FUN2(VAR11, &VAR7);
        FUN3(VAR5->VAR12);
        FUN2(VAR8, &VAR7);
        pthread_mutex_lock(&VAR5->mutex);
        VAR9 = FUN4(VAR5->VAR13);
        while (VAR9 < 4)
        {
            if (FUN5(&VAR5->VAR14, &VAR5->mutex) < 0)
            {
                goto VAR15;
            }
            VAR9 = FUN4(VAR5->VAR13);
        }
        FUN6(VAR5->VAR13, VAR10, 4, NULL);
        VAR9 = FUN7(VAR10);
        if (VAR9 > 0 && FUN4(VAR5->VAR13) >= VAR9 + 4)
        {
            FUN8(VAR5->VAR13, 4);
            FUN9(VAR5->VAR13, VAR3, VAR9, VAR16);
            if (VAR5->VAR17 == VAR9)
            {
                VAR5->VAR17 = 0;
            }
        }
        pthread_mutex_unlock(&VAR5->mutex);
    }
VAR15:
    pthread_mutex_unlock(&VAR5->mutex);
    return NULL;
}