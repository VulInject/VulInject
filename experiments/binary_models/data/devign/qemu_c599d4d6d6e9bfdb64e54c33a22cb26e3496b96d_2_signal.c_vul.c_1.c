static void FUN1(VAR1 *VAR2, int VAR3, struct VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    abi_ulong VAR8;
    sigset_t VAR9;
    target_sigset_t VAR10;
    struct VAR11 *VAR12;
    VAR13 *VAR14 = VAR7->VAR15;
    FUN3(VAR2, VAR3);
    VAR5->VAR16 = 0;
    VAR3 = FUN4(VAR7, VAR3);
    if (!VAR3)
    {
        VAR12 = NULL;
        VAR8 = VAR17;
    }
    else
    {
        VAR12 = &VAR18[VAR3 - 1];
        VAR8 = VAR12->VAR19;
    }
    if (VAR20)
    {
        FUN5(VAR3, &VAR5->VAR21);
    }
    if (VAR8 == VAR22)
    {
        if (VAR3 == VAR23 || VAR3 == VAR24 || VAR3 == VAR25)
        {
            FUN6(FUN7(), VAR26);
        }
        else if (VAR3 != VAR27 && VAR3 != VAR28 && VAR3 != VAR29 && VAR3 != VAR30)
        {
            FUN8(VAR3);
        }
    }
    else if (VAR8 == VAR17)
    {
    }
    else if (VAR8 == VAR31)
    {
        FUN8(VAR3);
    }
    else
    {
        VAR32 *VAR33;
        FUN9(&VAR9, &VAR12->VAR34);
        if (!(VAR12->VAR35 & VAR36))
            FUN10(&VAR9, FUN11(VAR3));
        FUN12(&VAR10, &VAR14->VAR37);
        VAR33 = VAR14->VAR38 ? &VAR14->VAR39 : &VAR14->VAR37;
        FUN13(&VAR14->VAR37, VAR33, &VAR9);
        VAR14->VAR38 = 0;
        {
            VAR40 *VAR41 = VAR2;
            if (VAR41->VAR42 & VAR43)
                FUN14(VAR41);
        }
        || FUN15(VAR44) || FUN15(VAR45) FUN16(VAR3, VAR12, &VAR5->VAR21, &VAR10, VAR2);
        if (VAR12->VAR35 & VAR46)
            FUN16(VAR3, VAR12, &VAR5->VAR21, &VAR10, VAR2);
        else
            FUN17(VAR3, VAR12, &VAR10, VAR2);
        if (VAR12->VAR35 & VAR47)
        {
            VAR12->VAR19 = VAR22;
        }
    }
}