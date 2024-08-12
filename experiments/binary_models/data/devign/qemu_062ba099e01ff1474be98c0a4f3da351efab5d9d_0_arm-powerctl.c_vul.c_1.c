int FUN1(uint64_t VAR1, uint64_t VAR2, uint64_t VAR3, uint32_t VAR4, bool VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    FUN2("" VAR10 "" VAR11 "" VAR11 "", VAR1, VAR4, VAR5 ? "" : "", VAR2, VAR3);
    assert((VAR4 > 0) && (VAR4 < 4));
    if (VAR5 && (VAR2 & 3))
    {
        return VAR12;
    }
    VAR7 = FUN3(VAR1);
    if (!VAR7)
    {
        return VAR12;
    }
    VAR9 = FUN4(VAR7);
    if (!VAR9->VAR13)
    {
        FUN5(VAR14, "" VAR10 "", VAR15, VAR1);
        return VAR16;
    }
    if (((VAR4 == 3) && !FUN6(&VAR9->VAR17, VAR18)) || ((VAR4 == 2) && !FUN6(&VAR9->VAR17, VAR19)))
    {
        return VAR12;
    }
    if (!VAR5 && FUN6(&VAR9->VAR17, VAR20))
    {
        FUN5(VAR21, "" VAR10 "", VAR15, VAR1);
        return VAR12;
    }
    FUN7(VAR7);
    VAR9->VAR13 = false;
    VAR7->VAR22 = 0;
    if (VAR5)
    {
        if ((VAR4 < 3) && FUN6(&VAR9->VAR17, VAR18))
        {
            VAR9->VAR17.VAR23.VAR24 |= VAR25;
        }
        if ((VAR4 < 2) && FUN6(&VAR9->VAR17, VAR19))
        {
            VAR9->VAR17.VAR23.VAR26 |= VAR27;
        }
        VAR9->VAR17.VAR28 = FUN8(VAR4, true);
    }
    else
    {
        static uint32_t VAR29[] = {0, VAR30, VAR31, VAR30};
        FUN9(&VAR9->VAR17, VAR29[VAR4], VAR32, VAR33);
    }
    if (VAR4 == 3)
    {
        VAR9->VAR17.VAR23.VAR24 &= ~VAR34;
    }
    else
    {
        VAR9->VAR17.VAR23.VAR24 |= VAR34;
    }
    assert(VAR4 == FUN10(&VAR9->VAR17));
    if (VAR5)
    {
        VAR9->VAR17.VAR35[0] = VAR3;
        VAR9->VAR17.VAR36 = false;
    }
    else
    {
        VAR9->VAR17.VAR37[0] = VAR3;
        VAR9->VAR17.VAR36 = VAR2 & 1;
        VAR2 &= 0xfffffffe;
    }
    FUN11(VAR7, VAR2);
    FUN12(VAR7);
    return VAR38;
}