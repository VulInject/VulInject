int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint64_t VAR5, uint8_t VAR6, uintptr_t VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    MemTxResult VAR14;
    uint64_t VAR15;
    int VAR16;
    uint32_t VAR17;
    uint8_t VAR18;
    uint8_t VAR19;
    uint8_t VAR20[128];
    if (VAR9->VAR21.VAR22 & VAR23)
    {
        FUN2(VAR9, VAR24, 6, VAR7);
        return 0;
    }
    VAR17 = VAR9->VAR25[VAR3] >> 32;
    VAR18 = (VAR9->VAR25[VAR3] >> 16) & 0xf;
    VAR19 = VAR9->VAR25[VAR3] & 0xff;
    VAR15 = VAR9->VAR25[VAR4];
    if (!(VAR17 & VAR26))
    {
        FUN3(VAR2, VAR27);
        return 0;
    }
    VAR11 = FUN4(FUN5(), VAR17);
    if (!VAR11)
    {
        FUN6("", VAR17);
        FUN3(VAR2, VAR27);
        return 0;
    }
    switch (VAR11->VAR28)
    {
    case VAR29:
    case VAR30:
        FUN3(VAR2, VAR31);
        FUN7(VAR9, VAR3, VAR32);
        return 0;
    default:
        break;
    }
    if (VAR18 > VAR33)
    {
        FUN6("");
        FUN3(VAR2, VAR31);
        FUN7(VAR9, VAR3, VAR34);
        return 0;
    }
    if (VAR15 % 8)
    {
        goto VAR35;
    }
    if ((VAR19 <= 8) || (VAR19 % 8) || (VAR19 > VAR11->VAR36))
    {
        goto VAR35;
    }
    if (((VAR15 & 0xfff) + VAR19) > 0x1000)
    {
        goto VAR35;
    }
    if (VAR5 & 0x07UL)
    {
        goto VAR35;
    }
    VAR13 = VAR11->VAR37->VAR38[VAR18].VAR39;
    if (!FUN8(VAR13, VAR15, VAR19, true))
    {
        FUN2(VAR9, VAR40, 6, VAR7);
        return 0;
    }
    if (FUN9(VAR2, VAR5, VAR6, VAR20, VAR19))
    {
        FUN10(VAR2, VAR7);
        return 0;
    }
    for (VAR16 = 0; VAR16 < VAR19 / 8; VAR16++)
    {
        VAR14 = FUN11(VAR13, VAR15 + VAR16 * 8, FUN12(VAR20 + VAR16 * 8), 8, VAR41);
        if (VAR14 != VAR42)
        {
            FUN2(VAR9, VAR40, 6, VAR7);
            return 0;
        }
    }
    FUN3(VAR2, VAR43);
    return 0;
VAR35:
    FUN2(VAR9, VAR44, 6, VAR7);
    return 0;
}