static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    FUN2();
    VAR5 = VAR3->VAR5;
    VAR7 = FUN3(VAR5);
    VAR10 = VAR7;
    VAR9 = (VAR8 *)VAR7->VAR11;
    VAR3->VAR12 = FUN4();
    VAR7->VAR13 = VAR3->VAR12;
    FUN5(VAR9);
    if (VAR3->VAR14)
        FUN6(VAR3->VAR12, VAR3->VAR14);
    if (VAR3->VAR15)
        FUN6(VAR3->VAR12, VAR3->VAR15);
    FUN7(VAR16, &VAR3->VAR17, NULL);
    pthread_mutex_lock(&VAR3->mutex);
    FUN8(&VAR3->VAR18);
    pthread_mutex_unlock(&VAR3->mutex);
    pthread_mutex_lock(&VAR19);
    pthread_mutex_unlock(&VAR19);
    FUN9(VAR5);
    return NULL;
}