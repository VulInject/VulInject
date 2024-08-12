static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    abi_ulong VAR6;
    sigset_t VAR7, VAR8;
    target_sigset_t VAR9;
    struct VAR10 *VAR11;
    struct VAR12 *VAR13;
    VAR14 *VAR15 = VAR5->VAR16;
    struct VAR17 *VAR18 = &VAR15->VAR19[VAR3 - 1];
    FUN3(VAR2, VAR3);
    VAR13 = VAR18->VAR20;
    VAR18->VAR20 = VAR13->VAR21;
    if (!VAR18->VAR20)
        VAR18->VAR22 = 0;
    VAR3 = FUN4(VAR5, VAR3);
    if (!VAR3)
    {
        VAR11 = NULL;
        VAR6 = VAR23;
    }
    else
    {
        VAR11 = &VAR24[VAR3 - 1];
        VAR6 = VAR11->VAR25;
    }
    if (VAR15->VAR26 && VAR3 == VAR27)
    {
        VAR6 = VAR28;
    }
    if (VAR6 == VAR28)
    {
        if (VAR3 == VAR29 || VAR3 == VAR30 || VAR3 == VAR31)
        {
            FUN5(FUN6(), VAR32);
        }
        else if (VAR3 != VAR33 && VAR3 != VAR34 && VAR3 != VAR35 && VAR3 != VAR36)
        {
            FUN7(VAR3);
        }
    }
    else if (VAR6 == VAR23)
    {
    }
    else if (VAR6 == VAR37)
    {
        FUN7(VAR3);
    }
    else
    {
        FUN8(&VAR7, &VAR11->VAR38);
        if (!(VAR11->VAR39 & VAR40))
            FUN9(&VAR7, FUN10(VAR3));
        FUN11(VAR41, &VAR7, &VAR8);
        FUN12(&VAR9, &VAR8);
        {
            VAR42 *VAR43 = VAR2;
            if (VAR43->VAR44 & VAR45)
                FUN13(VAR43);
        }
        || FUN14(VAR46) || FUN14(VAR47) FUN15(VAR3, VAR11, &VAR13->VAR48, &VAR9, VAR2);
        if (VAR11->VAR39 & VAR49)
            FUN15(VAR3, VAR11, &VAR13->VAR48, &VAR9, VAR2);
        else
            FUN16(VAR3, VAR11, &VAR9, VAR2);
        if (VAR11->VAR39 & VAR50)
        {
            VAR11->VAR25 = VAR28;
        }
    }
    if (VAR13 != &VAR18->VAR48)
        FUN17(VAR2, VAR13);
}