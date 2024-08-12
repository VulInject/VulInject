static void FUN1(VAR1 *VAR2)
{
    uint8_t VAR3 = VAR4;
    if ((VAR2->VAR5 & VAR6) && (VAR2->VAR7 & VAR8))
    {
        VAR3 = VAR9;
    }
    else if ((VAR2->VAR5 & VAR10) && VAR2->VAR11)
    {
        VAR3 = VAR12;
    }
    else if ((VAR2->VAR5 & VAR10) && (VAR2->VAR7 & VAR13) && (!(VAR2->VAR14 & VAR15) || VAR2->VAR16.VAR17 >= VAR2->VAR16.VAR18))
    {
        VAR3 = VAR19;
    }
    else if ((VAR2->VAR5 & VAR20) && VAR2->VAR21)
    {
        VAR3 = VAR22;
    }
    else if ((VAR2->VAR5 & VAR23) && (VAR2->VAR24 & VAR25))
    {
        VAR3 = VAR26;
    }
    VAR2->VAR27 = VAR3 | (VAR2->VAR27 & 0xF0);
    if (VAR3 != VAR4)
    {
        FUN2(VAR2->VAR28);
    }
    else
    {
        FUN3(VAR2->VAR28);
    }
}