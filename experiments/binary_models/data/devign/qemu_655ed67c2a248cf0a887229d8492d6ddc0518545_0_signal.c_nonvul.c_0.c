static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    abi_ulong VAR6;
    sigset_t VAR7;
    target_sigset_t VAR8;
    struct VAR9 *VAR10;
    VAR11 *VAR12 = VAR5->VAR13;
    struct VAR14 *VAR15 = &VAR12->VAR16[VAR3 - 1];
    FUN3(VAR2, VAR3);
    VAR15->VAR17 = 0;
    VAR3 = FUN4(VAR5, VAR3);
    if (!VAR3)
    {
        VAR10 = NULL;
        VAR6 = VAR18;
    }
    else
    {
        VAR10 = &VAR19[VAR3 - 1];
        VAR6 = VAR10->VAR20;
    }
    if (VAR6 == VAR21)
    {
        if (VAR3 == VAR22 || VAR3 == VAR23 || VAR3 == VAR24)
        {
            FUN5(FUN6(), VAR25);
        }
        else if (VAR3 != VAR26 && VAR3 != VAR27 && VAR3 != VAR28 && VAR3 != VAR29)
        {
            FUN7(VAR3);
        }
    }
    else if (VAR6 == VAR18)
    {
    }
    else if (VAR6 == VAR30)
    {
        FUN7(VAR3);
    }
    else
    {
        VAR31 *VAR32;
        FUN8(&VAR7, &VAR10->VAR33);
        if (!(VAR10->VAR34 & VAR35))
            FUN9(&VAR7, FUN10(VAR3));
        FUN11(&VAR8, &VAR12->VAR36);
        VAR32 = VAR12->VAR37 ? &VAR12->VAR38 : &VAR12->VAR36;
        FUN12(&VAR12->VAR36, VAR32, &VAR7);
        VAR12->VAR37 = 0;
        {
            VAR39 *VAR40 = VAR2;
            if (VAR40->VAR41 & VAR42)
                FUN13(VAR40);
        }
        || FUN14(VAR43) || FUN14(VAR44) FUN15(VAR3, VAR10, &VAR15->VAR45, &VAR8, VAR2);
        if (VAR10->VAR34 & VAR46)
            FUN15(VAR3, VAR10, &VAR15->VAR45, &VAR8, VAR2);
        else
            FUN16(VAR3, VAR10, &VAR8, VAR2);
        if (VAR10->VAR34 & VAR47)
        {
            VAR10->VAR20 = VAR21;
        }
    }
}