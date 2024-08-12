void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, CPSRWriteType VAR5)
{
    uint32_t VAR6;
    if (VAR4 & VAR7)
    {
        VAR2->VAR8 = (~VAR3) & VAR9;
        VAR2->VAR10 = VAR3;
        VAR2->VAR11 = (VAR3 >> 29) & 1;
        VAR2->VAR12 = (VAR3 << 3) & 0x80000000;
    }
    if (VAR4 & VAR13)
        VAR2->VAR14 = ((VAR3 & VAR13) != 0);
    if (VAR4 & VAR15)
        VAR2->VAR16 = ((VAR3 & VAR15) != 0);
    if (VAR4 & VAR17)
    {
        VAR2->VAR18 &= ~3;
        VAR2->VAR18 |= (VAR3 >> 25) & 3;
    }
    if (VAR4 & VAR19)
    {
        VAR2->VAR18 &= 3;
        VAR2->VAR18 |= (VAR3 >> 8) & 0xfc;
    }
    if (VAR4 & VAR20)
    {
        VAR2->VAR21 = (VAR3 >> 16) & 0xf;
    }
    if (VAR5 != VAR22 && !FUN2(VAR2, VAR23) && FUN2(VAR2, VAR24) && !FUN2(VAR2, VAR25) && !FUN3(VAR2))
    {
        VAR6 = (VAR2->VAR26 ^ VAR3) & VAR4;
        if (VAR6 & VAR27)
        {
            if (!(VAR2->VAR28.VAR29 & VAR30))
            {
                FUN4(VAR31, ""
                                               "");
                VAR4 &= ~VAR27;
            }
        }
        if (VAR6 & VAR32)
        {
            if (!(VAR2->VAR28.VAR29 & VAR33))
            {
                FUN4(VAR31, ""
                                               "");
                VAR4 &= ~VAR32;
            }
            if ((FUN5(VAR2, VAR34) & VAR35) && (VAR3 & VAR32))
            {
                FUN4(VAR31, ""
                                               "");
                VAR4 &= ~VAR32;
            }
        }
    }
    VAR2->VAR26 &= ~(VAR36 & VAR4);
    VAR2->VAR26 |= VAR3 & VAR36 & VAR4;
    if (VAR5 != VAR22 && (VAR2->VAR37 & VAR38) != VAR39 && ((VAR2->VAR37 ^ VAR3) & VAR4 & VAR38))
    {
        if (FUN6(VAR2, VAR3 & VAR38))
        {
            VAR4 &= ~VAR38;
        }
        else
        {
            FUN7(VAR2, VAR3 & VAR38);
        }
    }
    VAR4 &= ~VAR40;
    VAR2->VAR37 = (VAR2->VAR37 & ~VAR4) | (VAR3 & VAR4);
}