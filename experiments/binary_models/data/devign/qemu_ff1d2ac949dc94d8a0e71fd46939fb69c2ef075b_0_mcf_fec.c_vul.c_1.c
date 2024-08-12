static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    mcf_fec_bd VAR9;
    uint32_t VAR10 = 0;
    uint32_t VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    VAR4 *VAR14;
    unsigned int VAR15;
    size_t VAR16;
    FUN3("", VAR6);
    if (!VAR8->VAR17)
    {
        return -1;
    }
    VAR6 += 4;
    VAR12 = FUN4(FUN5(~0, VAR5, VAR6));
    VAR14 = (VAR4 *)&VAR12;
    if (VAR6 > VAR18)
    {
        VAR6 = VAR18;
        VAR10 |= VAR19 | VAR20;
    }
    if (VAR6 > (VAR8->VAR21 >> 16))
    {
        VAR10 |= VAR20;
    }
    VAR11 = VAR8->VAR22;
    VAR16 = VAR6;
    while (VAR6 > 0)
    {
        FUN6(&VAR9, VAR11);
        if ((VAR9.VAR10 & VAR23) == 0)
        {
            fprintf(VAR24, "");
            break;
        }
        VAR15 = (VAR6 <= VAR8->VAR25) ? VAR6 : VAR8->VAR25;
        VAR9.VAR26 = VAR15;
        VAR6 -= VAR15;
        FUN3("", VAR11, VAR9.VAR26);
        if (VAR6 < 4)
            VAR15 += VAR6 - 4;
        VAR13 = VAR9.VAR27;
        FUN7(VAR13, VAR5, VAR15);
        VAR5 += VAR15;
        if (VAR6 < 4)
        {
            FUN7(VAR13 + VAR15, VAR14, 4 - VAR6);
            VAR14 += 4 - VAR6;
        }
        VAR9.VAR10 &= ~VAR23;
        if (VAR6 == 0)
        {
            VAR9.VAR10 |= VAR10 | VAR28;
            FUN3("", VAR9.VAR10);
            VAR8->VAR29 |= VAR30;
        }
        else
        {
            VAR8->VAR29 |= VAR31;
        }
        FUN8(&VAR9, VAR11);
        if ((VAR9.VAR10 & VAR32) != 0)
        {
            VAR11 = VAR8->VAR33;
        }
        else
        {
            VAR11 += 8;
        }
    }
    VAR8->VAR22 = VAR11;
    FUN9(VAR8);
    FUN10(VAR8);
    return VAR16;
}