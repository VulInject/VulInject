static VAR1 FUN1(VAR2 *VAR3, int VAR4, uint8_t VAR5, pcibus_t VAR6)
{
    pcibus_t VAR7, VAR8;
    int VAR9 = FUN2(VAR3, VAR4);
    uint16_t VAR10 = FUN3(VAR3->VAR11 + VAR12);
    VAR13 *VAR14 = FUN4();
    VAR15 *VAR16 = FUN5(VAR14);
    VAR17 *VAR18 = FUN6(VAR16);
    bool VAR19 = VAR18->VAR20;
    if (VAR5 & VAR21)
    {
        if (!(VAR10 & VAR22))
        {
            return VAR23;
        }
        VAR7 = FUN7(VAR3->VAR11 + VAR9) & ~(VAR6 - 1);
        VAR8 = VAR7 + VAR6 - 1;
        if (VAR8 <= VAR7 || VAR8 >= VAR24 || (!VAR19 && VAR7 == 0))
        {
            return VAR23;
        }
        return VAR7;
    }
    if (!(VAR10 & VAR25))
    {
        return VAR23;
    }
    if (VAR5 & VAR26)
    {
        VAR7 = FUN8(VAR3->VAR11 + VAR9);
    }
    else
    {
        VAR7 = FUN7(VAR3->VAR11 + VAR9);
    }
    if (VAR4 == VAR27 && !(VAR7 & VAR28))
    {
        return VAR23;
    }
    VAR7 &= ~(VAR6 - 1);
    VAR8 = VAR7 + VAR6 - 1;
    if (VAR8 <= VAR7 || VAR8 == VAR23 || (!VAR19 && VAR7 == 0))
    {
        return VAR23;
    }
    if (!(VAR5 & VAR26) && VAR8 >= VAR24)
    {
        return VAR23;
    }
    if (VAR8 >= VAR29)
    {
        return VAR23;
    }
    return VAR7;
}