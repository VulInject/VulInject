static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    VAR14 *VAR15;
    int64_t VAR16;
    int VAR17;
    FUN2(VAR2, &VAR8->VAR18);
    FUN3(VAR19, VAR8->VAR20, VAR8->VAR18);
    VAR15 = VAR8->VAR20.VAR21;
    FUN4(&VAR8->VAR22, VAR11, VAR12);
    VAR16 = FUN5(&VAR8->VAR22);
    if (VAR16 != VAR23 && VAR16 != VAR24)
    {
        FUN6(VAR2, VAR25, "" VAR26 "", VAR16);
        return VAR27;
    }
    VAR8->VAR28 = VAR8->VAR29 = 0;
    VAR8->VAR30 = 0;
    VAR8->VAR31 = 0;
    VAR8->VAR32.VAR33 = VAR34;
    VAR8->VAR32.VAR35 = VAR36;
    VAR8->VAR32.VAR37 = NULL;
    VAR17 = FUN7(&VAR8->VAR32);
    if (VAR17 != VAR38)
    {
        FUN6(VAR2, VAR25, "", VAR17);
        return VAR39;
    }
    if ((VAR17 = FUN8(VAR2, VAR8, VAR15, VAR6)) < 0)
        goto VAR40;
    if (VAR2->VAR41 == VAR42)
    {
        *VAR4 = 0;
        VAR17 = FUN9(&VAR8->VAR22);
        goto VAR40;
    }
    if ((VAR17 = FUN10(VAR3, VAR8->VAR20.VAR21)) < 0)
        return VAR17;
    *VAR4 = 1;
    VAR17 = FUN9(&VAR8->VAR22);
VAR40:
    FUN11(&VAR8->VAR32);
    VAR8->VAR43 = NULL;
    return VAR17;
}