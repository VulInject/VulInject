static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR3));
    IMXENETBufDesc VAR9;
    uint32_t VAR10 = 0;
    uint32_t VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    VAR4 *VAR14;
    unsigned int VAR15;
    size_t VAR16 = VAR6;
    FUN4("", (int)VAR16);
    if (!VAR8->VAR17[VAR18])
    {
        FUN5(VAR19, "", VAR20, VAR21);
        return 0;
    }
    VAR16 += 4;
    VAR12 = FUN6(FUN7(~0, VAR5, VAR16));
    VAR14 = (VAR4 *)&VAR12;
    if (VAR16 > VAR22)
    {
        VAR16 = VAR22;
        VAR10 |= VAR23 | VAR24;
    }
    if (VAR16 > (VAR8->VAR17[VAR25] >> 16))
    {
        VAR10 |= VAR24;
    }
    VAR11 = VAR8->VAR26;
    while (VAR16 > 0)
    {
        FUN8(&VAR9, VAR11);
        if ((VAR9.VAR10 & VAR27) == 0)
        {
            FUN5(VAR19, "", VAR20, VAR21);
            break;
        }
        VAR15 = (VAR16 <= VAR8->VAR17[VAR28]) ? VAR16 : VAR8->VAR17[VAR28];
        VAR9.VAR29 = VAR15;
        VAR16 -= VAR15;
        FUN4("", VAR11, VAR9.VAR29);
        if (VAR16 < 4)
        {
            VAR15 += VAR16 - 4;
        }
        VAR13 = VAR9.VAR30;
        FUN9(&VAR31, VAR13, VAR5, VAR15);
        VAR5 += VAR15;
        if (VAR16 < 4)
        {
            FUN9(&VAR31, VAR13 + VAR15, VAR14, 4 - VAR16);
            VAR14 += 4 - VAR16;
        }
        VAR9.VAR10 &= ~VAR27;
        if (VAR16 == 0)
        {
            VAR9.VAR10 |= VAR10 | VAR32;
            FUN4("", VAR9.VAR10);
            if (VAR9.VAR33 & VAR34)
            {
                VAR8->VAR17[VAR35] |= VAR36;
            }
        }
        else
        {
            if (VAR9.VAR33 & VAR34)
            {
                VAR8->VAR17[VAR35] |= VAR37;
            }
        }
        FUN10(&VAR9, VAR11);
        if ((VAR9.VAR10 & VAR38) != 0)
        {
            VAR11 = VAR8->VAR17[VAR39];
        }
        else
        {
            VAR11 += sizeof(VAR9);
        }
    }
    VAR8->VAR26 = VAR11;
    FUN11(VAR8);
    FUN12(VAR8);
    return VAR6;
}