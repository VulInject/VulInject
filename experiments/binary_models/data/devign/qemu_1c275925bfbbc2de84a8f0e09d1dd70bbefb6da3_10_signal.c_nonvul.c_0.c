void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    abi_ulong VAR6;
    sigset_t VAR7, VAR8;
    target_sigset_t VAR9;
    struct VAR10 *VAR11;
    struct VAR12 *VAR13;
    struct VAR14 *VAR15;
    VAR16 *VAR17 = VAR4->VAR18;
    if (!VAR17->VAR19)
        return;
    VAR11 = VAR17->VAR20;
    for (VAR5 = 1; VAR5 <= VAR21; VAR5++)
    {
        if (VAR11->VAR22)
            goto VAR23;
        VAR11++;
    }
    VAR17->VAR19 = 0;
    return;
VAR23:
    fprintf(VAR24, "", VAR5);
    VAR15 = VAR11->VAR25;
    VAR11->VAR25 = VAR15->VAR26;
    if (!VAR11->VAR25)
        VAR11->VAR22 = 0;
    VAR5 = FUN3(VAR4, VAR5);
    if (!VAR5)
    {
        VAR13 = NULL;
        VAR6 = VAR27;
    }
    else
    {
        VAR13 = &VAR28[VAR5 - 1];
        VAR6 = VAR13->VAR29;
    }
    if (VAR6 == VAR30)
    {
        if (VAR5 == VAR31 || VAR5 == VAR32 || VAR5 == VAR33)
        {
            FUN4(FUN5(), VAR34);
        }
        else if (VAR5 != VAR35 && VAR5 != VAR36 && VAR5 != VAR37 && VAR5 != VAR38)
        {
            FUN6(VAR5);
        }
    }
    else if (VAR6 == VAR27)
    {
    }
    else if (VAR6 == VAR39)
    {
        FUN6(VAR5);
    }
    else
    {
        FUN7(&VAR7, &VAR13->VAR40);
        if (!(VAR13->VAR41 & VAR42))
            FUN8(&VAR7, FUN9(VAR5));
        FUN10(VAR43, &VAR7, &VAR8);
        FUN11(&VAR9, &VAR8);
        {
            VAR44 *VAR45 = VAR2;
            if (VAR45->VAR46 & VAR47)
                FUN12(VAR45);
        }
        FUN13(VAR5, VAR13, &VAR15->VAR48, &VAR9, VAR2);
        if (VAR13->VAR41 & VAR49)
            FUN13(VAR5, VAR13, &VAR15->VAR48, &VAR9, VAR2);
        else
            FUN14(VAR5, VAR13, &VAR9, VAR2);
        if (VAR13->VAR41 & VAR50)
            VAR13->VAR29 = VAR30;
    }
    if (VAR15 != &VAR11->VAR48)
        FUN15(VAR2, VAR15);
}