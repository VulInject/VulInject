static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    mcf_fec_bd VAR4;
    int VAR5;
    int VAR6, VAR7 = 0;
    uint8_t VAR8[VAR9];
    VAR10 *VAR11;
    FUN2("");
    VAR11 = VAR8;
    VAR5 = 0;
    VAR3 = VAR2->VAR12;
    while (VAR7++ < VAR13)
    {
        FUN3(&VAR4, VAR3);
        FUN2("", VAR3, VAR4.VAR14, VAR4.VAR15, VAR4.VAR16);
        if ((VAR4.VAR14 & VAR17) == 0)
        {
            break;
        }
        VAR6 = VAR4.VAR15;
        if (VAR5 + VAR6 > VAR9)
        {
            VAR6 = VAR9 - VAR5;
            VAR2->VAR18 |= VAR19;
        }
        FUN4(VAR4.VAR16, VAR11, VAR6);
        VAR11 += VAR6;
        VAR5 += VAR6;
        if (VAR4.VAR14 & VAR20)
        {
            FUN2("");
            FUN5(FUN6(VAR2->VAR21), VAR8, VAR6);
            VAR11 = VAR8;
            VAR5 = 0;
            VAR2->VAR18 |= VAR22;
        }
        VAR2->VAR18 |= VAR23;
        VAR4.VAR14 &= ~VAR17;
        FUN7(&VAR4, VAR3);
        if ((VAR4.VAR14 & VAR24) != 0)
        {
            VAR3 = VAR2->VAR25;
        }
        else
        {
            VAR3 += 8;
        }
    }
    VAR2->VAR12 = VAR3;
}