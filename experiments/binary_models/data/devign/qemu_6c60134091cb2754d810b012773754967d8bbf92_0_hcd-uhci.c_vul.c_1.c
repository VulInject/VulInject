static int FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    int VAR10 = 0, VAR11;
    uint8_t VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    if (!(VAR5->VAR17 & VAR18))
        return VAR19;
    VAR9 = FUN2(VAR2, VAR3, VAR5);
    if (VAR9)
    {
        VAR9->VAR20->VAR21 = 32;
        if (!VAR9->VAR22)
            return VAR23;
        FUN3(VAR9);
        goto VAR22;
    }
    VAR9 = FUN4(FUN5(VAR2, VAR5), VAR3);
    if (!VAR9)
        return VAR19;
    VAR9->VAR20->VAR21 = 32;
    VAR9->VAR24 = VAR5->VAR17 & VAR25;
    VAR11 = ((VAR5->VAR26 >> 21) + 1) & 0x7ff;
    VAR12 = VAR5->VAR26 & 0xff;
    VAR14 = FUN6(VAR2, (VAR5->VAR26 >> 8) & 0x7f);
    VAR16 = FUN7(VAR14, VAR12, (VAR5->VAR26 >> 15) & 0xf);
    FUN8(&VAR9->VAR27, VAR12, VAR16);
    FUN9(&VAR9->VAR28, VAR5->VAR29, VAR11);
    FUN10(&VAR9->VAR27, &VAR9->VAR28);
    switch (VAR12)
    {
    case VAR30:
    case VAR31:
        VAR10 = FUN11(VAR14, &VAR9->VAR27);
        if (VAR10 >= 0)
            VAR10 = VAR11;
        break;
    case VAR32:
        VAR10 = FUN11(VAR14, &VAR9->VAR27);
        break;
    default:
        FUN12(VAR9);
        VAR2->VAR33 |= VAR34;
        FUN13(VAR2);
        return VAR35;
    }
    if (VAR10 == VAR36)
    {
        FUN14(VAR9);
        return VAR37;
    }
    VAR9->VAR27.VAR38 = VAR10;
VAR22:
    VAR10 = FUN15(VAR2, VAR5, VAR9, VAR7);
    FUN16(&VAR9->VAR27);
    FUN12(VAR9);
    return VAR10;
}