FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    QEMUIOVector VAR10;
    struct iovec VAR11;
    z_stream VAR12;
    int VAR13, VAR14;
    VAR15 *VAR16, *VAR17;
    uint64_t VAR18;
    VAR16 = FUN2(VAR2, VAR8->VAR19);
    if (VAR4 != VAR8->VAR19)
    {
        if (VAR4 > VAR8->VAR19 || VAR3 + VAR4 != VAR2->VAR20 << VAR21)
        {
            FUN3(VAR16);
            return -VAR22;
        }
        memset(VAR16 + VAR4, 0, VAR8->VAR19 - VAR4);
    }
    FUN4(VAR6, 0, VAR16, VAR6->VAR23);
    VAR17 = FUN5(VAR8->VAR19);
    memset(&VAR12, 0, sizeof(VAR12));
    VAR13 = FUN6(&VAR12, VAR24, VAR25, -12, 9, VAR26);
    if (VAR13 != 0)
    {
        VAR13 = -VAR22;
        goto VAR27;
    }
    VAR12.VAR28 = VAR8->VAR19;
    VAR12.VAR29 = (VAR15 *)VAR16;
    VAR12.VAR30 = VAR8->VAR19;
    VAR12.VAR31 = VAR17;
    VAR13 = FUN7(&VAR12, VAR32);
    if (VAR13 != VAR33 && VAR13 != VAR34)
    {
        FUN8(&VAR12);
        VAR13 = -VAR22;
        goto VAR27;
    }
    VAR14 = VAR12.VAR31 - VAR17;
    FUN8(&VAR12);
    if (VAR13 != VAR33 || VAR14 >= VAR8->VAR19)
    {
        VAR13 = FUN9(VAR2, VAR3 >> VAR21, VAR4 >> VAR21, VAR6);
        if (VAR13 < 0)
        {
            goto VAR27;
        }
        goto VAR35;
    }
    FUN10(&VAR8->VAR36);
    VAR18 = FUN11(VAR2, VAR3, 2, VAR14, 0, 0);
    FUN12(&VAR8->VAR36);
    if (VAR18 == 0)
    {
        VAR13 = -VAR37;
        goto VAR27;
    }
    VAR18 &= VAR8->VAR38;
    VAR11 = (struct VAR39){
        .VAR40 = VAR17,
        .VAR41 = VAR14,
    };
    FUN13(&VAR10, &VAR11, 1);
    VAR13 = FUN14(VAR2->VAR42, VAR18, VAR14, &VAR10, 0);
    if (VAR13 < 0)
    {
        goto VAR27;
    }
VAR35:
    VAR13 = 0;
VAR27:
    FUN3(VAR16);
    FUN15(VAR17);
    return VAR13;
}