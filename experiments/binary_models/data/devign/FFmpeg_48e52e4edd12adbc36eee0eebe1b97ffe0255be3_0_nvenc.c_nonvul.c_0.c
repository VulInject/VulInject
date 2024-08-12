static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    VAR13 *VAR14 = &VAR11->VAR15;
    uint32_t VAR16;
    VAR17 *VAR18 = NULL;
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
    {
        VAR21 = FUN3(VAR35);
        goto VAR34;
    }
    VAR19.VAR36 = VAR37;
    VAR19.VAR38 = 0;
    VAR19.VAR39 = VAR6->VAR40;
    VAR19.VAR41 = VAR18;
    VAR20 = VAR14->FUN5(VAR8->VAR42, &VAR19);
    if (VAR20 != VAR43)
    {
        VAR21 = FUN6(VAR2, VAR20, "");
        goto VAR34;
    }
    if (VAR21 = FUN7(VAR2, VAR4, VAR19.VAR44, 0))
    {
        VAR14->FUN8(VAR8->VAR42, VAR6->VAR40);
        goto VAR34;
    }
    memcpy(VAR4->VAR45, VAR19.VAR46, VAR19.VAR44);
    VAR20 = VAR14->FUN8(VAR8->VAR42, VAR6->VAR40);
    if (VAR20 != VAR43)
    {
        VAR21 = FUN6(VAR2, VAR20, "");
        goto VAR34;
    }
    if (VAR2->VAR47 == VAR48 || VAR2->VAR47 == VAR49)
    {
        VAR8->VAR50[VAR6->VAR51].VAR52 -= 1;
        if (VAR8->VAR50[VAR6->VAR51].VAR52 == 0)
        {
            VAR20 = VAR14->FUN9(VAR8->VAR42, VAR8->VAR50[VAR6->VAR51].VAR53.VAR54);
            if (VAR20 != VAR43)
            {
                VAR21 = FUN6(VAR2, VAR20, "");
                goto VAR34;
            }
            VAR20 = VAR14->FUN10(VAR8->VAR42, VAR8->VAR50[VAR6->VAR51].VAR55);
            if (VAR20 != VAR43)
            {
                VAR21 = FUN6(VAR2, VAR20, "");
                goto VAR34;
            }
            VAR8->VAR50[VAR6->VAR51].VAR55 = NULL;
        }
        else if (VAR8->VAR50[VAR6->VAR51].VAR52 < 0)
        {
            VAR21 = VAR56;
            goto VAR34;
        }
        FUN11(VAR6->VAR57);
        VAR6->VAR58 = NULL;
    }
    switch (VAR19.VAR59)
    {
    case VAR60:
        VAR4->VAR61 |= VAR62;
    case VAR63:
        VAR22 = VAR64;
        break;
    case VAR65:
        VAR22 = VAR66;
        break;
    case VAR67:
        VAR22 = VAR68;
        break;
    case VAR69:
        VAR22 = VAR70;
        break;
    default:
        FUN2(VAR2, VAR32, "");
        FUN2(VAR2, VAR32, "");
        VAR21 = VAR71;
        goto VAR34;
    }
    FF_DISABLE_DEPRECATION_WARNINGS VAR2->VAR72->VAR22 = VAR22;
    VAR73 FUN12(VAR4, (VAR19.VAR74 - 1) * VAR75, NULL, 0, VAR22);
    VAR21 = FUN13(VAR2, &VAR19, VAR4);
    if (VAR21 < 0)
        goto VAR76;
    FUN14(VAR18);
    return 0;
VAR34:
    FUN15(VAR8->VAR77);
VAR76:
    FUN14(VAR18);
    return VAR21;
}