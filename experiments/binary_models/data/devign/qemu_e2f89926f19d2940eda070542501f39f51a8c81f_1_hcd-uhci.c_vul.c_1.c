static int FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5, VAR6 *VAR7, bool VAR8)
{
    VAR9 *VAR10;
    int VAR11 = 0, VAR12;
    uint8_t VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    if (!(VAR5->VAR18 & VAR19))
        return VAR20;
    VAR10 = FUN2(VAR2, VAR3, VAR5);
    if (VAR10)
    {
        VAR10->VAR21->VAR22 = 32;
        if (!VAR10->VAR23)
            return VAR24;
        if (VAR8)
        {
            return VAR24;
        }
        FUN3(VAR10);
        goto VAR23;
    }
    VAR10 = FUN4(FUN5(VAR2, VAR5), VAR3);
    VAR10->VAR21->VAR22 = 32;
    VAR10->VAR25 = VAR5->VAR18 & VAR26;
    VAR12 = ((VAR5->VAR27 >> 21) + 1) & 0x7ff;
    VAR13 = VAR5->VAR27 & 0xff;
    VAR15 = FUN6(VAR2, (VAR5->VAR27 >> 8) & 0x7f);
    VAR17 = FUN7(VAR15, VAR13, (VAR5->VAR27 >> 15) & 0xf);
    FUN8(&VAR10->VAR28, VAR13, VAR17);
    FUN9(&VAR10->VAR29, VAR5->VAR30, VAR12);
    FUN10(&VAR10->VAR28, &VAR10->VAR29);
    switch (VAR13)
    {
    case VAR31:
    case VAR32:
        VAR11 = FUN11(VAR15, &VAR10->VAR28);
        if (VAR11 >= 0)
            VAR11 = VAR12;
        break;
    case VAR33:
        VAR11 = FUN11(VAR15, &VAR10->VAR28);
        break;
    default:
        FUN12(VAR10);
        VAR2->VAR34 |= VAR35;
        FUN13(VAR2);
        return VAR36;
    }
    if (VAR11 == VAR37)
    {
        FUN14(VAR10);
        return VAR38;
    }
    VAR10->VAR28.VAR39 = VAR11;
VAR23:
    VAR11 = FUN15(VAR2, VAR5, VAR10, VAR7);
    FUN16(&VAR10->VAR28);
    FUN12(VAR10);
    return VAR11;
}