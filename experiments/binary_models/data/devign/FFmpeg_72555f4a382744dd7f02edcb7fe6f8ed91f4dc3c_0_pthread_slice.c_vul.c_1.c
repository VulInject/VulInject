int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    if (VAR2->VAR5 & VAR6)
    {
        VAR7 *VAR8 = VAR2->VAR9->VAR10;
        VAR8->VAR11 = VAR2->VAR11;
        VAR8->VAR12 = FUN2(VAR3, sizeof(int));
        if (!VAR8->VAR12)
        {
            return FUN3(VAR13);
        }
        VAR8->VAR14 = VAR3;
        VAR8->VAR15 = FUN4(VAR8->VAR11, sizeof(VAR16));
        VAR8->VAR17 = FUN4(VAR8->VAR11, sizeof(VAR18));
        for (VAR4 = 0; VAR4 < VAR8->VAR11; VAR4++)
        {
            pthread_mutex_init(&VAR8->VAR15[VAR4], NULL);
            pthread_cond_init(&VAR8->VAR17[VAR4], NULL);
        }
    }
    return 0;
}