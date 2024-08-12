static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, VAR6 *VAR7, uint32_t VAR8, VAR9 *VAR10)
{
    int VAR11, VAR12;
    bool VAR13;
    bool VAR14 = (VAR4 != NULL);
    uint8_t VAR15 = VAR7->VAR16 & 0xff;
    VAR17 *VAR18;
    switch (VAR15)
    {
    case VAR19:
    case VAR20:
    case VAR21:
        break;
    default:
        VAR2->VAR22 |= VAR23;
        VAR2->VAR24 &= ~VAR25;
        FUN2(VAR2);
        return VAR26;
    }
    VAR18 = FUN3(VAR2, VAR8);
    if (VAR18)
    {
        if (FUN4(VAR18->VAR27, VAR5, VAR7, VAR8, VAR14))
        {
            assert(VAR4 == NULL || VAR4 == VAR18->VAR27);
            VAR4 = VAR18->VAR27;
        }
        else
        {
            FUN5(VAR18->VAR27, "");
            VAR18 = NULL;
        }
    }
    if (VAR4 == NULL)
    {
        VAR4 = FUN6(VAR2, VAR7);
        if (VAR4 && !FUN4(VAR4, VAR5, VAR7, VAR8, VAR14))
        {
            FUN5(VAR4, "");
            VAR4 = NULL;
        }
    }
    if (VAR4)
    {
        VAR4->VAR28 = VAR29;
    }
    if (!(VAR7->VAR30 & VAR31))
    {
        if (VAR18)
        {
            FUN5(VAR18->VAR27, "");
        }
        if (VAR7->VAR30 & VAR32)
        {
            *VAR10 |= 0x01;
        }
        return VAR33;
    }
    if (VAR18)
    {
        if (VAR14)
        {
            return VAR34;
        }
        if (!VAR18->VAR35)
        {
            UHCI_TD VAR36;
            VAR17 *VAR37 = FUN7(&VAR18->VAR27->VAR38, VAR39);
            FUN8(VAR2, &VAR36, VAR37->VAR8);
            FUN9(VAR18->VAR27, &VAR36);
            return VAR34;
        }
        FUN10(VAR18);
        goto VAR35;
    }
    if (VAR2->VAR40)
    {
        return VAR34;
    }
    if (VAR4 == NULL)
    {
        VAR41 *VAR42 = FUN11(VAR2, (VAR7->VAR16 >> 8) & 0x7f);
        VAR43 *VAR44 = FUN12(VAR42, VAR15, (VAR7->VAR16 >> 15) & 0xf);
        if (VAR44 == NULL)
        {
            return FUN13(VAR2, VAR7, VAR8, VAR45, VAR10);
        }
        VAR4 = FUN14(VAR2, VAR5, VAR7, VAR44);
    }
    VAR18 = FUN15(VAR4, VAR8);
    VAR12 = ((VAR7->VAR16 >> 21) + 1) & 0x7ff;
    VAR13 = (VAR15 == VAR21 && (VAR7->VAR30 & VAR46) != 0);
    FUN16(&VAR18->VAR47, VAR15, VAR4->VAR44, 0, VAR8, VAR13, (VAR7->VAR30 & VAR32) != 0);
    if (VAR12 <= sizeof(VAR18->VAR48))
    {
        VAR18->VAR49 = VAR18->VAR48;
    }
    else
    {
        VAR18->VAR49 = FUN17(VAR12);
    }
    FUN18(&VAR18->VAR47, VAR18->VAR49, VAR12);
    switch (VAR15)
    {
    case VAR19:
    case VAR20:
        FUN19(&VAR2->VAR42, VAR7->VAR50, VAR18->VAR49, VAR12);
        FUN20(VAR4->VAR44->VAR42, &VAR18->VAR47);
        if (VAR18->VAR47.VAR22 == VAR51)
        {
            VAR18->VAR47.VAR52 = VAR12;
        }
        break;
    case VAR21:
        FUN20(VAR4->VAR44->VAR42, &VAR18->VAR47);
        break;
    default:
        FUN21();
    }
    if (VAR18->VAR47.VAR22 == VAR53)
    {
        FUN22(VAR18);
        if (!VAR14)
        {
            FUN9(VAR4, VAR7);
        }
        return VAR54;
    }
VAR35:
    VAR11 = FUN23(VAR2, VAR7, VAR18, VAR10);
    FUN24(VAR18);
    return VAR11;
}