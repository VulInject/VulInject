int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint64_t VAR5, uint8_t VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    int VAR13;
    uint32_t VAR14;
    uint8_t VAR15;
    uint8_t VAR16;
    uint8_t VAR17[128];
    if (VAR8->VAR18.VAR19 & VAR20)
    {
        FUN2(VAR8, VAR21, 6);
        return 0;
    }
    VAR14 = VAR8->VAR22[VAR3] >> 32;
    VAR15 = (VAR8->VAR22[VAR3] >> 16) & 0xf;
    VAR16 = VAR8->VAR22[VAR3] & 0xff;
    if (VAR15 > 5)
    {
        FUN3("");
        FUN4(VAR2, VAR23);
        FUN5(VAR8, VAR3, VAR24);
        return 0;
    }
    switch (VAR16)
    {
    case 16:
    case 32:
    case 64:
    case 128:
        break;
    default:
        FUN2(VAR8, VAR25, 6);
        return 0;
    }
    VAR10 = FUN6(VAR14);
    if (!VAR10)
    {
        FUN3("", VAR14);
        FUN4(VAR2, VAR26);
        return 0;
    }
    switch (VAR10->VAR27)
    {
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
        FUN4(VAR2, VAR26);
        return 0;
    case VAR32:
        FUN4(VAR2, VAR23);
        FUN5(VAR8, VAR3, VAR33);
        return 0;
    default:
        break;
    }
    VAR12 = VAR10->VAR34->VAR35[VAR15].VAR36;
    if (!FUN7(VAR12, VAR8->VAR22[VAR4], VAR16, true))
    {
        FUN2(VAR8, VAR37, 6);
        return 0;
    }
    if (FUN8(VAR2, VAR5, VAR6, VAR17, VAR16))
    {
        return 0;
    }
    for (VAR13 = 0; VAR13 < VAR16 / 8; VAR13++)
    {
        FUN9(VAR12, VAR8->VAR22[VAR4] + VAR13 * 8, FUN10(VAR17 + VAR13 * 8), 8, VAR38);
    }
    FUN4(VAR2, VAR39);
    return 0;
}