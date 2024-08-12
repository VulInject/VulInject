static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    VAR13 *VAR14 = &VAR11->VAR15;
    uint32_t VAR16;
    VAR17 *VAR18;
    NV_ENC_LOCK_BITSTREAM VAR19 = {0};
    NVENCSTATUS VAR20;
    int VAR21 = 0;
    enum AVPictureType VAR22;
    switch (VAR2->VAR23->VAR24)
    {
    case VAR25:
        VAR16 = VAR8->VAR26.VAR27.VAR28.VAR29;
        break;
    case VAR30:
        VAR16 = VAR8->VAR26.VAR27.VAR31.VAR29;
        break;
    default:
        FUN2(VAR2, VAR32, "");
        VAR21 = FUN3(VAR33);
        goto VAR34;
    }
    VAR18 = FUN4(VAR16 * sizeof(*VAR18));
    if (!VAR18)
        goto VAR34;
    VAR19.VAR35 = VAR36;
    VAR19.VAR37 = 0;
    VAR19.VAR38 = VAR6->VAR39;
    VAR19.VAR40 = VAR18;
    VAR20 = VAR14->FUN5(VAR8->VAR41, &VAR19);
    if (VAR20 != VAR42)
    {
        VAR21 = FUN6(VAR2, VAR20, "");
        goto VAR34;
    }
    if (VAR21 = FUN7(VAR2, VAR4, VAR19.VAR43, 0))
    {
        VAR14->FUN8(VAR8->VAR41, VAR6->VAR39);
        goto VAR34;
    }
    memcpy(VAR4->VAR44, VAR19.VAR45, VAR19.VAR43);
    VAR20 = VAR14->FUN8(VAR8->VAR41, VAR6->VAR39);
    if (VAR20 != VAR42)
        FUN6(VAR2, VAR20, "");
    if (VAR2->VAR46 == VAR47)
    {
        VAR14->FUN9(VAR8->VAR41, VAR6->VAR48.VAR49);
        FUN10(VAR6->VAR50);
        VAR8->VAR51[VAR6->VAR52].VAR53 = 0;
        VAR6->VAR54 = NULL;
    }
    switch (VAR19.VAR55)
    {
    case VAR56:
        VAR4->VAR57 |= VAR58;
    case VAR59:
        VAR22 = VAR60;
        break;
    case VAR61:
        VAR22 = VAR62;
        break;
    case VAR63:
        VAR22 = VAR64;
        break;
    case VAR65:
        VAR22 = VAR66;
        break;
    default:
        FUN2(VAR2, VAR32, "");
        FUN2(VAR2, VAR32, "");
        VAR21 = VAR67;
        goto VAR34;
    }
    FF_DISABLE_DEPRECATION_WARNINGS VAR2->VAR68->VAR22 = VAR22;
    VAR69 FUN11(VAR4, (VAR19.VAR70 - 1) * VAR71, NULL, 0, VAR22);
    VAR21 = FUN12(VAR2, &VAR19, VAR4);
    if (VAR21 < 0)
        goto VAR72;
    FUN13(VAR18);
    return 0;
VAR34:
    FUN14(VAR8->VAR73);
VAR72:
    FUN13(VAR18);
    return VAR21;
}