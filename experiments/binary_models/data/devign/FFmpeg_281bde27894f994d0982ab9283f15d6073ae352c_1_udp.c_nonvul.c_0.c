static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    if (VAR4->VAR7 && (VAR2->VAR8 & VAR9))
        FUN2(VAR4->VAR10, (struct VAR11 *)&VAR4->VAR12);
    FUN3(VAR4->VAR10);
    FUN4(VAR4->VAR13);
    if (VAR4->VAR14)
    {
        FUN5(VAR4->VAR15);
        VAR6 = FUN6(VAR4->VAR15, NULL);
        if (VAR6 != 0)
            FUN7(VAR2, VAR16, "", strerror(VAR6));
    }
    pthread_mutex_destroy(&VAR4->mutex);
    pthread_cond_destroy(&VAR4->VAR17);
    return 0;
}