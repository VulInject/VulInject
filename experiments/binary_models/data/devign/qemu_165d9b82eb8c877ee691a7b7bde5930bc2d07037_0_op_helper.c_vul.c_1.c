void FUN1(void)
{
    uint64_t VAR1;
    FUN2(VAR2, 1);
    VAR1 = ((VAR3)VAR4) | ((VAR5)((VAR3)VAR6) << 32);
    switch ((VAR3)VAR7)
    {
    case VAR8:
        VAR9->VAR10 = VAR1 & 0xffff;
    case VAR11:
        VAR9->VAR12 = VAR1;
    case VAR13:
        VAR9->VAR14 = VAR1;
    case VAR15:
        FUN3(VAR9, VAR1);
    case VAR16:
    {
        uint64_t VAR17;
        VAR17 = 0;
        if (VAR9->VAR18 & VAR19)
            VAR17 |= VAR20;
        if (VAR9->VAR18 & VAR21)
            VAR17 |= VAR22;
        if (VAR9->VAR18 & VAR23)
            VAR17 |= VAR24;
        if (VAR9->VAR18 & VAR25)
            VAR17 |= VAR26;
        if (VAR9->VAR27 & VAR28)
            VAR17 |= VAR29;
        FUN4(VAR9, (VAR9->VAR30 & ~VAR17) | (VAR1 & VAR17));
    }
    case VAR31:
        VAR9->VAR32 = VAR1;
    case VAR33:
        VAR9->VAR34 = VAR1;
    case VAR35:
        VAR9->VAR36 = VAR1;
    case VAR37:
        VAR9->VAR38 = VAR1;
    case VAR39:
        VAR9->VAR40 = VAR1;
    case VAR41:
        VAR9->VAR42 = VAR1;
    case VAR43:
        VAR9->VAR44[VAR45].VAR46 = VAR1;
    case VAR47:
        VAR9->VAR44[VAR48].VAR46 = VAR1;
    case VAR49:
        VAR9->VAR50 = VAR1;
    default:
    }