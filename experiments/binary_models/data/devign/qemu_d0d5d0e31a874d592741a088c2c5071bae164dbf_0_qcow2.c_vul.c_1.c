FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    QEMUIOVector VAR10;
    struct iovec VAR11;
    z_stream VAR12;
    int VAR13, VAR14;
    VAR15 *VAR16, *VAR17;
    uint64_t VAR18;
    if (VAR4 == 0)
    {
        VAR18 = FUN2(VAR2->VAR19->VAR2);
        return FUN3(VAR2->VAR19, VAR18, VAR20, NULL);
    }
    VAR16 = FUN4(VAR2, VAR8->VAR21);
    if (VAR4 != VAR8->VAR21)
    {
        if (VAR4 > VAR8->VAR21 || VAR3 + VAR4 != VAR2->VAR22 << VAR23)
        {
            FUN5(VAR16);
            return -VAR24;
        }
        memset(VAR16 + VAR4, 0, VAR8->VAR21 - VAR4);
    }
    FUN6(VAR6, 0, VAR16, VAR4);
    VAR17 = FUN7(VAR8->VAR21);
    memset(&VAR12, 0, sizeof(VAR12));
    VAR13 = FUN8(&VAR12, VAR25, VAR26, -12, 9, VAR27);
    if (VAR13 != 0)
    {
        VAR13 = -VAR24;
        goto VAR28;
    }
    VAR12.VAR29 = VAR8->VAR21;
    VAR12.VAR30 = (VAR15 *)VAR16;
    VAR12.VAR31 = VAR8->VAR21;
    VAR12.VAR32 = VAR17;
    VAR13 = FUN9(&VAR12, VAR33);
    if (VAR13 != VAR34 && VAR13 != VAR35)
    {
        FUN10(&VAR12);
        VAR13 = -VAR24;
        goto VAR28;
    }
    VAR14 = VAR12.VAR32 - VAR17;
    FUN10(&VAR12);
    if (VAR13 != VAR34 || VAR14 >= VAR8->VAR21)
    {
        VAR13 = FUN11(VAR2, VAR3, VAR4, VAR6, 0);
        if (VAR13 < 0)
        {
            goto VAR28;
        }
        goto VAR36;
    }
    FUN12(&VAR8->VAR37);
    VAR18 = FUN13(VAR2, VAR3, VAR14);
    if (!VAR18)
    {
        FUN14(&VAR8->VAR37);
        VAR13 = -VAR38;
        goto VAR28;
    }
    VAR18 &= VAR8->VAR39;
    VAR13 = FUN15(VAR2, 0, VAR18, VAR14);
    FUN14(&VAR8->VAR37);
    if (VAR13 < 0)
    {
        goto VAR28;
    }
    VAR11 = (struct VAR40){
        .VAR41 = VAR17,
        .VAR42 = VAR14,
    };
    FUN16(&VAR10, &VAR11, 1);
    FUN17(VAR2->VAR19, VAR43);
    VAR13 = FUN18(VAR2->VAR19, VAR18, VAR14, &VAR10, 0);
    if (VAR13 < 0)
    {
        goto VAR28;
    }
VAR36:
    VAR13 = 0;
VAR28:
    FUN5(VAR16);
    FUN19(VAR17);
    return VAR13;
}