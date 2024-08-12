int FUN1(VAR1 *VAR2[4], const ptrdiff_t VAR3[4], enum AVPixelFormat VAR4, enum AVColorRange VAR5, int VAR6, int VAR7)
{
    const VAR8 *VAR9 = FUN2(VAR4);
    int VAR10 = FUN3(VAR4);
    uint8_t VAR11[4][VAR12] = {0};
    int VAR13[4] = {0};
    ptrdiff_t VAR14[4] = {0};
    int VAR15, VAR16;
    int VAR17, VAR18;
    if (!VAR9 || VAR10 < 1 || VAR10 > 4 || VAR9->VAR19 & VAR20)
        return FUN4(VAR21);
    VAR15 = !!(VAR9->VAR19 & VAR22);
    VAR16 = !VAR15 && VAR5 != VAR23;
    if (VAR9->VAR19 & VAR24)
    {
        ptrdiff_t VAR25 = FUN5(VAR4, VAR6, 0);
        VAR1 *VAR26;
        int VAR27 = VAR4 == VAR28 || VAR4 == VAR29;
        int VAR30 = VAR4 == VAR28 ? 0xFF : 0;
        if (VAR10 != 1 || !(VAR15 || VAR27) || VAR25 < 1)
            return FUN4(VAR21);
        if (!VAR2)
            return 0;
        VAR26 = VAR2[0];
        for (; VAR7 > 0; VAR7--)
        {
            memset(VAR26, VAR30, VAR25);
            VAR26 += VAR3[0];
        }
        return 0;
    }
    for (VAR18 = 0; VAR18 < VAR9->VAR31; VAR18++)
    {
        const AVComponentDescriptor VAR32 = VAR9->VAR32[VAR18];
        VAR13[VAR32.VAR17] = FUN6(VAR13[VAR32.VAR17], VAR32.VAR33);
        if (VAR13[VAR32.VAR17] > VAR12)
            return FUN4(VAR21);
    }
    for (VAR18 = 0; VAR18 < VAR9->VAR31; VAR18++)
    {
        const AVComponentDescriptor VAR32 = VAR9->VAR32[VAR18];
        int VAR34 = VAR13[VAR32.VAR17] / VAR32.VAR33;
        VAR1 *VAR35[4];
        const int VAR36[4] = {0};
        uint16_t VAR37[VAR12];
        uint16_t VAR38 = 0;
        int VAR39;
        if (VAR32.VAR40 > 16)
            return FUN4(VAR21);
        if (!VAR15 && VAR32.VAR40 < 8)
            return FUN4(VAR21);
        if (VAR34 < 1)
            return FUN4(VAR21);
        if (VAR18 == 0 && VAR16)
        {
            VAR38 = 16 << (VAR32.VAR40 - 8);
        }
        else if ((VAR18 == 1 || VAR18 == 2) && !VAR15)
        {
            VAR38 = 128 << (VAR32.VAR40 - 8);
        }
        else if (VAR18 == 3)
        {
            VAR38 = (1 << VAR32.VAR40) - 1;
        }
        for (VAR39 = 0; VAR39 < VAR34; VAR39++)
            VAR37[VAR39] = VAR38;
        for (VAR39 = 0; VAR39 < 4; VAR39++)
            VAR35[VAR39] = &VAR11[VAR39][0];
        FUN7(VAR37, VAR35, VAR36, VAR9, 0, 0, VAR18, VAR34);
    }
    for (VAR17 = 0; VAR17 < VAR10; VAR17++)
    {
        VAR14[VAR17] = FUN5(VAR4, VAR6, VAR17);
        if (VAR14[VAR17] < 0)
            return FUN4(VAR21);
    }
    if (!VAR2)
        return 0;
    for (VAR17 = 0; VAR17 < VAR10; VAR17++)
    {
        size_t VAR25 = VAR14[VAR17];
        VAR1 *VAR26 = VAR2[VAR17];
        int VAR41 = VAR17 == 1 || VAR17 == 2 ? VAR9->VAR42 : 0;
        int VAR43 = ((VAR7 + (1 << VAR41) - 1)) >> VAR41;
        for (; VAR43 > 0; VAR43--)
        {
            FUN8(VAR26, VAR25, &VAR11[VAR17][0], VAR13[VAR17]);
            VAR26 += VAR3[VAR17];
        }
    }
    return 0;
}