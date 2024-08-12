static int FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    int VAR10 = 0, VAR11;
    uint8_t VAR12, VAR13;
    uint32_t VAR14;
    if (!(VAR5->VAR15 & VAR16))
        return 1;
    if (VAR5->VAR15 & VAR17)
    {
        VAR14 = VAR5->VAR18;
        VAR13 = 1;
    }
    else
    {
        VAR14 = VAR5->VAR14;
        VAR13 = 0;
    }
    VAR9 = FUN2(VAR2, VAR3, VAR14);
    if (VAR9)
    {
        VAR9->VAR19 = 32;
        if (!VAR9->VAR20)
            return 1;
        FUN3(VAR2, VAR9);
        goto VAR20;
    }
    VAR9 = FUN4(VAR2);
    if (!VAR9)
        return 1;
    VAR9->VAR19 = 32;
    VAR9->VAR5 = VAR3;
    VAR9->VAR14 = VAR14;
    VAR9->VAR13 = VAR13;
    VAR11 = ((VAR5->VAR14 >> 21) + 1) & 0x7ff;
    VAR12 = VAR5->VAR14 & 0xff;
    VAR9->VAR21.VAR12 = VAR12;
    VAR9->VAR21.VAR22 = (VAR5->VAR14 >> 8) & 0x7f;
    VAR9->VAR21.VAR23 = (VAR5->VAR14 >> 15) & 0xf;
    VAR9->VAR21.VAR24 = VAR9->VAR18;
    VAR9->VAR21.VAR10 = VAR11;
    VAR9->VAR21.VAR25 = VAR26;
    VAR9->VAR21.VAR27 = VAR2;
    switch (VAR12)
    {
    case VAR28:
    case VAR29:
        FUN5(VAR5->VAR18, VAR9->VAR18, VAR11);
        VAR10 = FUN6(VAR2, &VAR9->VAR21);
        if (VAR10 >= 0)
            VAR10 = VAR11;
        break;
    case VAR30:
        VAR10 = FUN6(VAR2, &VAR9->VAR21);
        break;
    default:
        FUN7(VAR2, VAR9);
        VAR2->VAR31 |= VAR32;
        FUN8(VAR2);
        return -1;
    }
    if (VAR10 == VAR33)
    {
        FUN9(VAR2, VAR9);
        return 2;
    }
    VAR9->VAR21.VAR10 = VAR10;
VAR20:
    VAR10 = FUN10(VAR2, VAR5, VAR9, VAR7);
    FUN7(VAR2, VAR9);
    return VAR10;
}