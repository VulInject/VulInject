static int FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5, VAR6 *VAR7, bool VAR8)
{
    VAR9 *VAR10;
    int VAR11 = 0, VAR12;
    uint8_t VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    if (!(VAR5->VAR18 & VAR19))
    {
        if (VAR5->VAR18 & VAR20)
        {
            *VAR7 |= 0x01;
        }
        return VAR21;
    }
    VAR10 = FUN2(VAR2, VAR3, VAR5);
    if (VAR10)
    {
        VAR10->VAR22->VAR23 = 32;
        if (!VAR10->VAR24)
            return VAR25;
        if (VAR8)
        {
            return VAR25;
        }
        FUN3(VAR10);
        goto VAR24;
    }
    VAR10 = FUN4(FUN5(VAR2, VAR5), VAR3);
    VAR10->VAR22->VAR23 = 32;
    VAR10->VAR26 = VAR5->VAR18 & VAR27;
    VAR12 = ((VAR5->VAR28 >> 21) + 1) & 0x7ff;
    VAR13 = VAR5->VAR28 & 0xff;
    VAR15 = FUN6(VAR2, (VAR5->VAR28 >> 8) & 0x7f);
    VAR17 = FUN7(VAR15, VAR13, (VAR5->VAR28 >> 15) & 0xf);
    FUN8(&VAR10->VAR29, VAR13, VAR17, VAR3);
    FUN9(&VAR10->VAR30, VAR5->VAR31, VAR12);
    FUN10(&VAR10->VAR29, &VAR10->VAR30);
    switch (VAR13)
    {
    case VAR32:
    case VAR33:
        VAR11 = FUN11(VAR15, &VAR10->VAR29);
        if (VAR11 >= 0)
            VAR11 = VAR12;
        break;
    case VAR34:
        VAR11 = FUN11(VAR15, &VAR10->VAR29);
        break;
    default:
        FUN12(VAR10);
        VAR2->VAR35 |= VAR36;
        FUN13(VAR2);
        return VAR37;
    }
    if (VAR11 == VAR38)
    {
        FUN14(VAR10);
        return VAR39;
    }
    VAR10->VAR29.VAR40 = VAR11;
VAR24:
    VAR11 = FUN15(VAR2, VAR5, VAR10, VAR7);
    FUN16(&VAR10->VAR29, &VAR10->VAR30);
    FUN12(VAR10);
    return VAR11;
}