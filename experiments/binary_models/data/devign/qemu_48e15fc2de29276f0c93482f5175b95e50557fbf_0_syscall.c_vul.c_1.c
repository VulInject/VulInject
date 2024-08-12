static int FUN1(VAR1 *VAR2, unsigned int VAR3, abi_ulong VAR4, abi_ulong VAR5, target_ulong VAR6, abi_ulong VAR7)
{
    int VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR1 *VAR13;
    unsigned int VAR14;
    sigset_t VAR15;
    if (VAR3 & VAR16)
        VAR3 &= ~(VAR16 | VAR17);
    if (VAR3 & VAR17)
    {
        VAR9 *VAR18 = (VAR9 *)VAR2->VAR19;
        new_thread_info VAR20;
        pthread_attr_t VAR21;
        VAR10 = FUN2(sizeof(VAR9) + VAR22);
        FUN3(VAR10);
        VAR12 = VAR10->VAR23;
        VAR13 = FUN4(VAR2);
        FUN5(VAR13);
        FUN6(VAR13, VAR4);
        VAR13->VAR19 = VAR10;
        VAR10->VAR24 = VAR18->VAR24;
        VAR10->VAR20 = VAR18->VAR20;
        VAR14 = VAR3;
        VAR3 &= ~VAR25;
        if (VAR14 & VAR26)
        {
            VAR10->VAR7 = VAR7;
        }
        if (VAR14 & VAR27)
            FUN7(VAR13, VAR6);
        pthread_mutex_lock(&VAR28);
        memset(&VAR20, 0, sizeof(VAR20));
        pthread_mutex_init(&VAR20.mutex, NULL);
        pthread_mutex_lock(&VAR20.mutex);
        pthread_cond_init(&VAR20.VAR29, NULL);
        VAR20.VAR2 = VAR13;
        if (VAR14 & VAR30)
            VAR20.VAR7 = VAR7;
        if (VAR14 & VAR31)
            VAR20.VAR5 = VAR5;
        VAR8 = pthread_attr_init(&VAR21);
        VAR8 = FUN8(&VAR21, VAR12, VAR22);
        FUN9(&VAR15);
        FUN10(VAR32, &VAR15, &VAR20.VAR15);
        VAR8 = FUN11(&VAR20.VAR33, &VAR21, VAR34, &VAR20);
        FUN10(VAR35, &VAR20.VAR15, NULL);
        pthread_attr_destroy(&VAR21);
        if (VAR8 == 0)
        {
            FUN12(&VAR20.VAR29, &VAR20.mutex);
            VAR8 = VAR20.VAR36;
            if (VAR3 & VAR31)
                FUN13(VAR8, VAR5);
        }
        else
        {
            VAR8 = -1;
        }
        pthread_mutex_unlock(&VAR20.mutex);
        pthread_cond_destroy(&VAR20.VAR29);
        pthread_mutex_destroy(&VAR20.mutex);
        pthread_mutex_unlock(&VAR28);
        if (VAR3 & VAR25)
            return -VAR37;
        VAR8 = FUN14(VAR34, VAR12, VAR22, VAR3, VAR13);
        VAR8 = FUN15(VAR34, VAR12 + VAR22, VAR3, VAR13);
    }
    else
    {
        if ((VAR3 & ~(VAR38 | VAR25)) != 0)
            return -VAR37;
        FUN16();
        VAR8 = FUN17();
        if (VAR8 == 0)
        {
            FUN6(VAR2, VAR4);
            FUN18(1);
            if (VAR3 & VAR30)
                FUN13(FUN19(), VAR7);
            if (VAR3 & VAR31)
                FUN13(FUN19(), VAR5);
            VAR10 = (VAR9 *)VAR2->VAR19;
            if (VAR3 & VAR27)
                FUN7(VAR2, VAR6);
            if (VAR3 & VAR26)
                VAR10->VAR7 = VAR7;
        }
        else
        {
            FUN18(0);
        }
    }
    return VAR8;
}