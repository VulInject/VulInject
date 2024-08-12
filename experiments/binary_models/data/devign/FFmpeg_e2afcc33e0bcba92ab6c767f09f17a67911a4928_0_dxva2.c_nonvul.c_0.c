int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = NULL;
    int VAR7 = 0;
    if (VAR2->VAR8)
        return 0;
    VAR4->VAR9 = VAR2->VAR10->VAR9;
    if (!VAR2->VAR11 && !VAR2->VAR12)
    {
        FUN3(VAR2, VAR13, "");
        return FUN4(VAR14);
    }
    if (VAR2->VAR11)
    {
        VAR6 = (VAR5 *)VAR2->VAR11->VAR15;
    }
    else
    {
        VAR2->VAR11 = FUN5(VAR2->VAR12);
        if (!VAR2->VAR11)
            return FUN4(VAR16);
        VAR6 = (VAR5 *)VAR2->VAR11->VAR15;
        FUN6(VAR2, VAR6);
        VAR7 = FUN7(VAR2->VAR11);
        if (VAR7 < 0)
            goto VAR17;
    }
    VAR4->VAR18 = VAR6->VAR18;
    if (VAR6->VAR19 != VAR4->VAR9 || !((VAR4->VAR9 == VAR20 && VAR21) || (VAR4->VAR9 == VAR22 && VAR23)))
    {
        FUN3(VAR2, VAR13, "");
        VAR7 = FUN4(VAR14);
        goto VAR17;
    }
    if (VAR4->VAR9 == VAR20)
    {
        VAR24 *VAR25 = VAR6->VAR18->VAR26;
        VAR27 *VAR28 = &VAR4->VAR29.VAR30;
        HRESULT VAR31;
        FUN8(VAR2);
        VAR7 = FUN9(VAR2);
        FUN10(VAR2);
        if (VAR7 < 0)
            goto VAR17;
        VAR28->VAR32 = VAR4->VAR33;
        VAR28->VAR34 = VAR25->VAR34;
        VAR28->VAR35 = &VAR4->VAR36;
        VAR28->VAR37 = VAR4->VAR38;
        VAR28->VAR39 = VAR4->VAR40;
        VAR28->VAR41 = VAR4->VAR41;
        VAR28->VAR42 = VAR43;
    }
    if (VAR4->VAR9 == VAR22)
    {
        VAR44 *VAR45 = VAR6->VAR26;
        struct VAR46 *VAR47 = &VAR4->VAR29.VAR48;
        FUN8(VAR2);
        VAR7 = FUN11(VAR2);
        FUN10(VAR2);
        if (VAR7 < 0)
            goto VAR17;
        VAR47->VAR32 = VAR4->VAR49;
        VAR47->VAR35 = &VAR4->VAR50;
        VAR47->VAR39 = VAR45->VAR51;
        VAR47->VAR37 = VAR45->VAR52;
        VAR47->VAR41 = VAR4->VAR41;
    }
    return 0;
VAR17:
    FUN12(VAR2);
    return VAR7;
}