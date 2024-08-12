static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR4->VAR6 && (VAR2->VAR7 & VAR8))
        FUN2(VAR4->VAR9, (struct VAR10 *)&VAR4->VAR11, (struct VAR10 *)&VAR4->VAR12);
    FUN3(VAR4->VAR9);
    if (VAR4->VAR13)
    {
        int VAR14;
        FUN4(VAR4->VAR15);
        VAR14 = FUN5(VAR4->VAR15, NULL);
        if (VAR14 != 0)
            FUN6(VAR2, VAR16, "", strerror(VAR14));
        pthread_mutex_destroy(&VAR4->mutex);
        pthread_cond_destroy(&VAR4->VAR17);
    }
    FUN7(&VAR4->VAR18);
    return 0;
}