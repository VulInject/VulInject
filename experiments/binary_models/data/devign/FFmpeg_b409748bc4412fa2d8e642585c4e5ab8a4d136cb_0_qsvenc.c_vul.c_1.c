int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const VAR7 *VAR8, int *VAR9)
{
    mfxBitstream VAR10 = {{{0}}};
    VAR11 *VAR12 = NULL;
    mfxSyncPoint VAR13 = NULL;
    int VAR14;
    if (VAR8)
    {
        VAR14 = FUN2(VAR4, VAR8, &VAR12);
        if (VAR14 < 0)
        {
            FUN3(VAR2, VAR15, "");
            return VAR14;
        }
    }
    VAR14 = FUN4(VAR6, VAR4->VAR16);
    if (VAR14 < 0)
    {
        FUN3(VAR2, VAR15, "");
        return VAR14;
    }
    VAR10.VAR17 = VAR6->VAR18;
    VAR10.VAR19 = VAR6->VAR20;
    do
    {
        VAR14 = FUN5(VAR4->VAR21, NULL, VAR12, &VAR10, &VAR13);
        if (VAR14 == VAR22)
            FUN6(1);
    } while (VAR14 > 0);
    if (VAR14 < 0)
        return (VAR14 == VAR23) ? 0 : FUN7(VAR14);
    if (VAR14 == VAR24 && VAR8->VAR25)
        FUN8(VAR2, VAR4);
    if (VAR13)
    {
        FUN9(VAR4->VAR21, VAR13, 60000);
        if (VAR10.VAR26 & VAR27 || VAR10.VAR26 & VAR28)
            VAR2->VAR29->VAR30 = VAR31;
        else if (VAR10.VAR26 & VAR32 || VAR10.VAR26 & VAR33)
            VAR2->VAR29->VAR30 = VAR34;
        else if (VAR10.VAR26 & VAR35 || VAR10.VAR26 & VAR36)
            VAR2->VAR29->VAR30 = VAR37;
        VAR6->VAR38 = FUN10(VAR10.VAR39, (VAR40){1, 90000}, VAR2->VAR41);
        VAR6->VAR42 = FUN10(VAR10.VAR43, (VAR40){1, 90000}, VAR2->VAR41);
        VAR6->VAR20 = VAR10.VAR44;
        if (VAR10.VAR26 & VAR45 || VAR10.VAR26 & VAR46)
            VAR6->VAR47 |= VAR48;
        *VAR9 = 1;
    }
    return 0;
}