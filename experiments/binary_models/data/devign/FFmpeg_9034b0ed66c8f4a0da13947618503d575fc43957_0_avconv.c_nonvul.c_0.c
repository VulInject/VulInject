static void FUN1(void)
{
    int VAR1;
    if (VAR2 == 1)
        return;
    VAR3 = 1;
    for (VAR1 = 0; VAR1 < VAR2; VAR1++)
    {
        VAR4 *VAR5 = VAR6[VAR1];
        AVPacket VAR7;
        if (!VAR5->VAR8 || VAR5->VAR9)
            continue;
        pthread_mutex_lock(&VAR5->VAR10);
        while (FUN2(VAR5->VAR8))
        {
            FUN3(VAR5->VAR8, &VAR7, sizeof(VAR7), NULL);
            FUN4(&VAR7);
        }
        FUN5(&VAR5->VAR11);
        pthread_mutex_unlock(&VAR5->VAR10);
        FUN6(VAR5->VAR12, NULL);
        VAR5->VAR9 = 1;
        while (FUN2(VAR5->VAR8))
        {
            FUN3(VAR5->VAR8, &VAR7, sizeof(VAR7), NULL);
            FUN4(&VAR7);
        }
        FUN7(VAR5->VAR8);
    }
}