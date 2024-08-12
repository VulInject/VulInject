static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7, int VAR8)
{
    int VAR9 = (VAR2->VAR10 & VAR11) == VAR12;
    int VAR13 = (VAR2->VAR10 & VAR11) == VAR14;
    int VAR15 = !VAR9 && !VAR13;
    int VAR16 = (VAR2->VAR17 & (1 << VAR18)) != 0;
    int VAR19 = (VAR2->VAR17 & (1 << VAR20)) != 0;
    int VAR21 = (VAR2->VAR17 & (1 << VAR22)) != 0;
    int VAR23 = VAR24;
    if (VAR25)
    {
        fprintf(VAR25, "", VAR9, VAR2->VAR10);
    }
    if (VAR6 <= (VAR26)0x7FFFFFFFUL)
    {
        if (VAR2->VAR17 & (1 << VAR27))
        {
            *VAR4 = VAR6 & 0xFFFFFFFF;
            *VAR5 = VAR28 | VAR29;
        }
        else
        {
            VAR23 = VAR2->VAR30->FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
    }
    else if (VAR6 < 0x4000000000000000ULL)
    {
        if (VAR16 && VAR6 < (0x3FFFFFFFFFFFFFFFULL & VAR2->VAR31))
        {
            VAR23 = VAR2->VAR30->FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR23 = VAR32;
        }
    }
    else if (VAR6 < 0x8000000000000000ULL)
    {
        if ((VAR13 || VAR15) && VAR19 && VAR6 < (0x7FFFFFFFFFFFFFFFULL & VAR2->VAR31))
        {
            VAR23 = VAR2->VAR30->FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR23 = VAR32;
        }
    }
    else if (VAR6 < 0xC000000000000000ULL)
    {
        if (VAR15 && VAR21 && (VAR6 & 0x07FFFFFFFFFFFFFFULL) < 0x0000000FFFFFFFFFULL)
        {
            *VAR4 = VAR6 & 0x0000000FFFFFFFFFULL;
            *VAR5 = VAR28 | VAR29;
        }
        else
        {
            VAR23 = VAR32;
        }
    }
    else if (VAR6 < 0xFFFFFFFF80000000ULL)
    {
        if (VAR15 && VAR21 && VAR6 < (0xFFFFFFFF7FFFFFFFULL & VAR2->VAR31))
        {
            VAR23 = VAR2->VAR30->FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR23 = VAR32;
        }
    }
    else if (VAR6 < (VAR26)0xA0000000UL)
    {
        if (VAR15)
        {
            *VAR4 = VAR6 - (VAR26)0x80000000UL;
            *VAR5 = VAR28 | VAR29;
        }
        else
        {
            VAR23 = VAR32;
        }
    }
    else if (VAR6 < (VAR26)0xC0000000UL)
    {
        if (VAR15)
        {
            *VAR4 = VAR6 - (VAR26)0xA0000000UL;
            *VAR5 = VAR28 | VAR29;
        }
        else
        {
            VAR23 = VAR32;
        }
    }
    else if (VAR6 < (VAR26)0xE0000000UL)
    {
        if (VAR13 || VAR15)
        {
            VAR23 = VAR2->VAR30->FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR23 = VAR32;
        }
    }
    else
    {
        if (VAR15)
        {
            VAR23 = VAR2->VAR30->FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR23 = VAR32;
        }
    }
    if (VAR25)
    {
        fprintf(VAR25, VAR33 "" VAR33 "", VAR6, VAR7, VAR8, *VAR4, *VAR5, VAR23);
    }
    return VAR23;
}