static int FUN1(VAR1 *VAR2, unsigned int VAR3, abi_ulong VAR4, abi_ulong VAR5, target_ulong VAR6, abi_ulong VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    int VAR10;
    VAR11 *VAR12;
    VAR8 *VAR13;
    VAR1 *VAR14;
    sigset_t VAR15;
    if (VAR3 & VAR16)
        VAR3 &= ~(VAR16 | VAR17);
    if (VAR3 & VAR17)
    {
        VAR11 *VAR18 = (VAR11 *)VAR9->VAR19;
        new_thread_info VAR20;
        pthread_attr_t VAR21;
        VAR12 = FUN3(VAR11, 1);
        FUN4(VAR12);
        VAR14 = FUN5(VAR2);
        FUN6(VAR14, VAR4);
        VAR13 = FUN2(VAR14);
        VAR13->VAR19 = VAR12;
        VAR12->VAR22 = VAR18->VAR22;
        VAR12->VAR20 = VAR18->VAR20;
        VAR12->VAR23 = VAR18->VAR23;
        if (VAR3 & VAR24)
        {
            VAR12->VAR7 = VAR7;
        }
        if (VAR3 & VAR25)
        {
            FUN7(VAR14, VAR6);
        }
        pthread_mutex_lock(&VAR26);
        memset(&VAR20, 0, sizeof(VAR20));
        pthread_mutex_init(&VAR20.mutex, NULL);
        pthread_mutex_lock(&VAR20.mutex);
        pthread_cond_init(&VAR20.VAR27, NULL);
        VAR20.VAR2 = VAR14;
        if (VAR3 & VAR28)
        {
            VAR20.VAR7 = VAR7;
        }
        if (VAR3 & VAR29)
        {
            VAR20.VAR5 = VAR5;
        }
        VAR10 = pthread_attr_init(&VAR21);
        VAR10 = FUN8(&VAR21, VAR30);
        VAR10 = FUN9(&VAR21, VAR31);
        FUN10(&VAR15);
        FUN11(VAR32, &VAR15, &VAR20.VAR15);
        VAR10 = FUN12(&VAR20.VAR33, &VAR21, VAR34, &VAR20);
        FUN11(VAR35, &VAR20.VAR15, NULL);
        pthread_attr_destroy(&VAR21);
        if (VAR10 == 0)
        {
            FUN13(&VAR20.VAR27, &VAR20.mutex);
            VAR10 = VAR20.VAR36;
        }
        else
        {
            VAR10 = -1;
        }
        pthread_mutex_unlock(&VAR20.mutex);
        pthread_cond_destroy(&VAR20.VAR27);
        pthread_mutex_destroy(&VAR20.mutex);
        pthread_mutex_unlock(&VAR26);
    }
    else
    {
        if ((VAR3 & ~(VAR37 | VAR38)) != 0)
        {
            return -VAR39;
        }
        if (FUN14())
        {
            return -VAR40;
        }
        FUN15();
        VAR10 = FUN16();
        if (VAR10 == 0)
        {
            FUN17();
            FUN6(VAR2, VAR4);
            FUN18(1);
            if (VAR3 & VAR28)
                FUN19(FUN20(), VAR7);
            if (VAR3 & VAR29)
                FUN19(FUN20(), VAR5);
            VAR12 = (VAR11 *)VAR9->VAR19;
            if (VAR3 & VAR25)
                FUN7(VAR2, VAR6);
            if (VAR3 & VAR24)
                VAR12->VAR7 = VAR7;
        }
        else
        {
            FUN18(0);
        }
    }
    return VAR10;
}