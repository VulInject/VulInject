static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7, int VAR8)
{
    int VAR9 = (VAR2->VAR10 & VAR11) == VAR12;
    int VAR13 = (VAR2->VAR10 & VAR11) == VAR14;
    int VAR15 = !VAR9 && !VAR13;
    int VAR16 = (VAR2->VAR17 & (1 << VAR18)) != 0;
    int VAR19 = (VAR2->VAR17 & (1 << VAR20)) != 0;
    int VAR21 = (VAR2->VAR17 & (1 << VAR22)) != 0;
    int VAR23 = VAR24;
    target_ulong VAR25 = VAR6;
    if (FUN2())
    {
        if (VAR6 >= VAR26)
        {
            if (VAR6 < VAR27)
            {
                VAR25 += VAR28 - VAR26;
            }
            else if (VAR6 <= VAR29)
            {
                VAR25 += VAR30 - VAR27;
            }
        }
    }
    if (VAR25 <= VAR29)
    {
        if (VAR2->VAR17 & (1 << VAR31))
        {
            *VAR4 = VAR25 & 0xFFFFFFFF;
            *VAR5 = VAR32 | VAR33;
        }
        else
        {
            VAR23 = VAR2->VAR34->FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
    }
    else if (VAR25 < 0x4000000000000000ULL)
    {
        if (VAR16 && VAR25 <= (0x3FFFFFFFFFFFFFFFULL & VAR2->VAR35))
        {
            VAR23 = VAR2->VAR34->FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR23 = VAR36;
        }
    }
    else if (VAR25 < 0x8000000000000000ULL)
    {
        if ((VAR13 || VAR15) && VAR19 && VAR25 <= (0x7FFFFFFFFFFFFFFFULL & VAR2->VAR35))
        {
            VAR23 = VAR2->VAR34->FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR23 = VAR36;
        }
    }
    else if (VAR25 < 0xC000000000000000ULL)
    {
        if (VAR15 && VAR21 && (VAR25 & 0x07FFFFFFFFFFFFFFULL) <= VAR2->VAR37)
        {
            *VAR4 = VAR25 & VAR2->VAR37;
            *VAR5 = VAR32 | VAR33;
        }
        else
        {
            VAR23 = VAR36;
        }
    }
    else if (VAR25 < 0xFFFFFFFF80000000ULL)
    {
        if (VAR15 && VAR21 && VAR25 <= (0xFFFFFFFF7FFFFFFFULL & VAR2->VAR35))
        {
            VAR23 = VAR2->VAR34->FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR23 = VAR36;
        }
    }
    else if (VAR25 < (VAR38)VAR39)
    {
        if (VAR15)
        {
            *VAR4 = VAR25 - (VAR38)VAR28;
            *VAR5 = VAR32 | VAR33;
        }
        else
        {
            VAR23 = VAR36;
        }
    }
    else if (VAR25 < (VAR38)VAR30)
    {
        if (VAR15)
        {
            *VAR4 = VAR25 - (VAR38)VAR39;
            *VAR5 = VAR32 | VAR33;
        }
        else
        {
            VAR23 = VAR36;
        }
    }
    else if (VAR25 < (VAR38)VAR40)
    {
        if (VAR13 || VAR15)
        {
            VAR23 = VAR2->VAR34->FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR23 = VAR36;
        }
    }
    else
    {
        if (VAR15)
        {
            VAR23 = VAR2->VAR34->FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR23 = VAR36;
        }
    }
    return VAR23;
}