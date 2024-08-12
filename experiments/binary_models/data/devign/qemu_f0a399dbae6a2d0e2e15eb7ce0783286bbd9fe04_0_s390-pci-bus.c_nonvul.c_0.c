static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, bool VAR5)
{
    uint64_t VAR6;
    uint32_t VAR7;
    VAR8 *VAR9 = FUN2(VAR3, VAR8, VAR10);
    VAR11 *VAR12;
    IOMMUTLBEntry VAR13 = {
        .VAR14 = &VAR15,
        .VAR16 = 0,
        .VAR17 = 0,
        .VAR18 = ~(VAR19)0,
        .VAR20 = VAR21,
    };
    if (!VAR9->VAR22 || !VAR9->VAR23)
    {
        return VAR13;
    }
    FUN3("" VAR24 "", VAR4);
    VAR12 = FUN4(FUN5(VAR9->VAR23)->VAR25.VAR26);
    if (VAR4 == VAR27)
    {
        VAR13.VAR14 = &VAR12->VAR28;
        VAR13.VAR16 = VAR4;
        VAR13.VAR17 = VAR4;
        VAR13.VAR18 = 0xfff;
        VAR13.VAR20 = VAR29;
        return VAR13;
    }
    if (!VAR9->VAR30)
    {
        VAR9->VAR31 = true;
        VAR9->VAR32 = true;
        FUN6(VAR33, VAR9->VAR34, VAR9->VAR35, VAR4, 0);
        return VAR13;
    }
    if (VAR4 < VAR9->VAR36 || VAR4 > VAR9->VAR37)
    {
        VAR9->VAR31 = true;
        VAR9->VAR32 = true;
        FUN6(VAR38, VAR9->VAR34, VAR9->VAR35, VAR4, 0);
        return VAR13;
    }
    VAR6 = FUN7(FUN8(VAR9->VAR30), VAR4);
    if (!VAR6)
    {
        VAR9->VAR31 = true;
        VAR9->VAR32 = true;
        FUN6(VAR39, VAR9->VAR34, VAR9->VAR35, VAR4, VAR40);
        return VAR13;
    }
    VAR7 = VAR6 & VAR41;
    VAR13.VAR16 = VAR4;
    VAR13.VAR17 = VAR6 & VAR42;
    VAR13.VAR18 = 0xfff;
    if (VAR7 & VAR43)
    {
        VAR13.VAR20 = VAR21;
    }
    else
    {
        VAR13.VAR20 = VAR29;
    }
    return VAR13;
}