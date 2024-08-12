static void *FUN1(void *VAR1)
{
    sigset_t VAR2;
    FUN2(&VAR2);
    FUN3(VAR3, &VAR2, NULL);
    while (1)
    {
        struct VAR4 *VAR5;
        size_t VAR6;
        int VAR7 = 0;
        pthread_mutex_lock(&VAR8);
        while (FUN4(&VAR9) && !(VAR7 == VAR10))
        {
            struct timespec VAR11 = {0};
            qemu_timeval VAR12;
            FUN5(&VAR12);
            VAR11.VAR13 = VAR12.VAR13 + 10;
            VAR7 = FUN6(&VAR14, &VAR8, &VAR11);
        }
        if (VAR7 == VAR10)
            break;
        VAR5 = FUN7(&VAR9);
        FUN8(&VAR9, VAR5, VAR15);
        VAR6 = 0;
        VAR5->VAR16 = 1;
        VAR17--;
        pthread_mutex_unlock(&VAR8);
        while (VAR6 < VAR5->VAR18)
        {
            ssize_t VAR19;
            if (VAR5->VAR20)
                VAR19 = FUN9(VAR5->VAR21, (const char *)VAR5->VAR22 + VAR6, VAR5->VAR18 - VAR6, VAR5->VAR23 + VAR6);
            else
                VAR19 = pread(VAR5->VAR21, (char *)VAR5->VAR22 + VAR6, VAR5->VAR18 - VAR6, VAR5->VAR23 + VAR6);
            if (VAR19 == -1 && VAR24 == VAR25)
                continue;
            else if (VAR19 == -1)
            {
                pthread_mutex_lock(&VAR8);
                VAR5->VAR7 = -VAR24;
                pthread_mutex_unlock(&VAR8);
                break;
            }
            else if (VAR19 == 0)
                break;
            VAR6 += VAR19;
            pthread_mutex_lock(&VAR8);
            VAR5->VAR7 = VAR6;
            pthread_mutex_unlock(&VAR8);
        }
        pthread_mutex_lock(&VAR8);
        VAR17++;
        pthread_mutex_unlock(&VAR8);
        FUN10(FUN11(), VAR5->VAR26.VAR27, VAR5->VAR26.VAR28);
    }
    VAR17--;
    VAR29--;
    pthread_mutex_unlock(&VAR8);
    return NULL;
}