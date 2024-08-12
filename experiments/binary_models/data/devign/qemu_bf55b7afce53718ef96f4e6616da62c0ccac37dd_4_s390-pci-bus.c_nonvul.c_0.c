static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, IOMMUAccessFlags VAR5)
{
    uint64_t VAR6;
    uint32_t VAR7;
    VAR8 *VAR9 = FUN2(VAR3, VAR8, VAR10);
    IOMMUTLBEntry VAR11 = {
        .VAR12 = &VAR13,
        .VAR14 = 0,
        .VAR15 = 0,
        .VAR16 = ~(VAR17)0,
        .VAR18 = VAR19,
    };
    switch (VAR9->VAR20->VAR21)
    {
    case VAR22:
    case VAR23:
        if (!VAR9->VAR24)
        {
            return VAR11;
        }
        break;
    default:
        return VAR11;
    }
    FUN3("" VAR25 "", VAR4);
    if (VAR4 < VAR9->VAR26 || VAR4 > VAR9->VAR27)
    {
        return VAR11;
    }
    VAR6 = FUN4(FUN5(VAR9->VAR28), VAR4);
    if (!VAR6)
    {
        return VAR11;
    }
    VAR7 = VAR6 & VAR29;
    VAR11.VAR14 = VAR4;
    VAR11.VAR15 = VAR6 & VAR30;
    VAR11.VAR16 = 0xfff;
    if (VAR7 & VAR31)
    {
        VAR11.VAR18 = VAR19;
    }
    else
    {
        VAR11.VAR18 = VAR32;
    }
    return VAR11;
}