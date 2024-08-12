static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 0;
    VAR6 *VAR7;
    int VAR8 = 0;
    uint32_t VAR9 = 0;
    VHDXMetadataTableEntry VAR10;
    VAR7 = FUN2(VAR2, VAR11);
    VAR5 = FUN3(VAR2->VAR12, VAR4->VAR13.VAR14, VAR7, VAR11);
    if (VAR5 < 0)
    {
        goto VAR15;
    }
    memcpy(&VAR4->VAR16, VAR7, sizeof(VAR4->VAR16));
    VAR8 += sizeof(VAR4->VAR16);
    FUN4(&VAR4->VAR16);
    if (memcmp(&VAR4->VAR16.VAR17, "", 8))
    {
        VAR5 = -VAR18;
        goto VAR15;
    }
    VAR4->VAR19.VAR20 = 0;
    if ((VAR4->VAR16.VAR21 * sizeof(VAR10)) > (VAR11 - VAR8))
    {
        VAR5 = -VAR18;
        goto VAR15;
    }
    for (VAR9 = 0; VAR9 < VAR4->VAR16.VAR21; VAR9++)
    {
        memcpy(&VAR10, VAR7 + VAR8, sizeof(VAR10));
        VAR8 += sizeof(VAR10);
        FUN5(&VAR10);
        if (FUN6(VAR10.VAR22, VAR23))
        {
            if (VAR4->VAR19.VAR20 & VAR24)
            {
                VAR5 = -VAR18;
                goto VAR15;
            }
            VAR4->VAR19.VAR25 = VAR10;
            VAR4->VAR19.VAR20 |= VAR24;
            continue;
        }
        if (FUN6(VAR10.VAR22, VAR26))
        {
            if (VAR4->VAR19.VAR20 & VAR27)
            {
                VAR5 = -VAR18;
                goto VAR15;
            }
            VAR4->VAR19.VAR28 = VAR10;
            VAR4->VAR19.VAR20 |= VAR27;
            continue;
        }
        if (FUN6(VAR10.VAR22, VAR29))
        {
            if (VAR4->VAR19.VAR20 & VAR30)
            {
                VAR5 = -VAR18;
                goto VAR15;
            }
            VAR4->VAR19.VAR31 = VAR10;
            VAR4->VAR19.VAR20 |= VAR30;
            continue;
        }
        if (FUN6(VAR10.VAR22, VAR32))
        {
            if (VAR4->VAR19.VAR20 & VAR33)
            {
                VAR5 = -VAR18;
                goto VAR15;
            }
            VAR4->VAR19.VAR34 = VAR10;
            VAR4->VAR19.VAR20 |= VAR33;
            continue;
        }
        if (FUN6(VAR10.VAR22, VAR35))
        {
            if (VAR4->VAR19.VAR20 & VAR36)
            {
                VAR5 = -VAR18;
                goto VAR15;
            }
            VAR4->VAR19.VAR37 = VAR10;
            VAR4->VAR19.VAR20 |= VAR36;
            continue;
        }
        if (FUN6(VAR10.VAR22, VAR38))
        {
            if (VAR4->VAR19.VAR20 & VAR39)
            {
                VAR5 = -VAR18;
                goto VAR15;
            }
            VAR4->VAR19.VAR40 = VAR10;
            VAR4->VAR19.VAR20 |= VAR39;
            continue;
        }
        if (VAR10.VAR41 & VAR42)
        {
            VAR5 = -VAR43;
            goto VAR15;
        }
    }
    if (VAR4->VAR19.VAR20 != VAR44)
    {
        VAR5 = -VAR43;
        goto VAR15;
    }
    VAR5 = FUN3(VAR2->VAR12, VAR4->VAR19.VAR25.VAR8 + VAR4->VAR13.VAR14, &VAR4->VAR45, sizeof(VAR4->VAR45));
    if (VAR5 < 0)
    {
        goto VAR15;
    }
    FUN7(&VAR4->VAR45.VAR46);
    FUN7(&VAR4->VAR45.VAR41);
    if (VAR4->VAR45.VAR41 & VAR47)
    {
        if (VAR4->VAR19.VAR20 & VAR39)
        {
            VAR5 = -VAR43;
            goto VAR15;
        }
        else
        {
            VAR5 = -VAR18;
            goto VAR15;
        }
    }
    VAR5 = FUN3(VAR2->VAR12, VAR4->VAR19.VAR28.VAR8 + VAR4->VAR13.VAR14, &VAR4->VAR48, sizeof(VAR49));
    if (VAR5 < 0)
    {
        goto VAR15;
    }
    VAR5 = FUN3(VAR2->VAR12, VAR4->VAR19.VAR34.VAR8 + VAR4->VAR13.VAR14, &VAR4->VAR50, sizeof(VAR51));
    if (VAR5 < 0)
    {
        goto VAR15;
    }
    VAR5 = FUN3(VAR2->VAR12, VAR4->VAR19.VAR37.VAR8 + VAR4->VAR13.VAR14, &VAR4->VAR52, sizeof(VAR51));
    if (VAR5 < 0)
    {
        goto VAR15;
    }
    FUN8(&VAR4->VAR48);
    FUN7(&VAR4->VAR50);
    FUN7(&VAR4->VAR52);
    if (VAR4->VAR50 == 0 || VAR4->VAR45.VAR46 == 0)
    {
        VAR5 = -VAR18;
        goto VAR15;
    }
    VAR4->VAR53 = VAR4->VAR45.VAR46 / VAR4->VAR50;
    VAR4->VAR54 = (VAR55) * (VAR49)VAR4->VAR50 / (VAR49)VAR4->VAR45.VAR46;
    if (VAR4->VAR50 & (VAR4->VAR50 - 1))
    {
        VAR5 = -VAR18;
        goto VAR15;
    }
    if (VAR4->VAR53 & (VAR4->VAR53 - 1))
    {
        VAR5 = -VAR18;
        goto VAR15;
    }
    if (VAR4->VAR54 & (VAR4->VAR54 - 1))
    {
        VAR5 = -VAR18;
        goto VAR15;
    }
    VAR4->VAR46 = VAR4->VAR45.VAR46;
    if (VAR4->VAR46 & (VAR4->VAR46 - 1))
    {
        VAR5 = -VAR18;
        goto VAR15;
    }
    FUN9(VAR4);
    VAR5 = 0;
VAR15:
    FUN10(VAR7);
    return VAR5;
}