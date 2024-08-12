static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR10.VAR11;
    NV_ENC_LOCK_BITSTREAM VAR12 = {0};
    VAR13 *VAR14 = NULL;
    int VAR15;
    VAR15 = FUN2(VAR6->VAR16, &VAR14);
    if (VAR15)
        return VAR15;
    VAR12.VAR17 = VAR18;
    VAR12.VAR19 = VAR14->VAR14;
    VAR15 = VAR9->FUN3(VAR6->VAR20, &VAR12);
    if (VAR15 < 0)
        return FUN4(VAR2, VAR15, "");
    VAR15 = FUN5(VAR4, VAR12.VAR21);
    if (VAR15 < 0)
        return VAR15;
    memcpy(VAR4->VAR22, VAR12.VAR23, VAR4->VAR24);
    VAR15 = VAR9->FUN6(VAR6->VAR20, VAR14->VAR14);
    if (VAR15 < 0)
        return FUN4(VAR2, VAR15, "");
    VAR14->VAR25 = VAR14->VAR26->VAR27 = 0;
    VAR15 = FUN7(VAR6, &VAR12, VAR4);
    if (VAR15 < 0)
        return VAR15;
    switch (VAR12.VAR28)
    {
    case VAR29:
        VAR4->VAR30 |= VAR31;
        FF_DISABLE_DEPRECATION_WARNINGS case VAR32 : case VAR33 : VAR2->VAR34->VAR35 = VAR36;
        break;
    case VAR37:
        VAR2->VAR34->VAR35 = VAR38;
        break;
    case VAR39:
        VAR2->VAR34->VAR35 = VAR40;
        break;
    case VAR41:
        VAR2->VAR34->VAR35 = VAR42;
        break;
        VAR43
    }
    return 0;
}