static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10 = VAR9 == VAR11;
    int VAR12 = VAR9 == VAR13;
    int VAR14 = !VAR10 && !VAR12;
    int VAR15 = (VAR2->VAR16 & (1 << VAR17)) != 0;
    int VAR18 = (VAR2->VAR16 & (1 << VAR19)) != 0;
    int VAR20 = (VAR2->VAR16 & (1 << VAR21)) != 0;
    int VAR22 = VAR23;
    target_ulong VAR24 = VAR6;
    if (FUN2())
    {
        if (VAR6 >= VAR25)
        {
            if (VAR6 < VAR26)
            {
                VAR24 += VAR27 - VAR25;
            }
            else if (VAR6 <= VAR28)
            {
                VAR24 += VAR29 - VAR26;
            }
        }
    }
    if (VAR24 <= VAR28)
    {
        uint16_t VAR30;
        if (VAR24 >= 0x40000000UL)
        {
            VAR30 = VAR2->VAR31;
        }
        else
        {
            VAR30 = VAR2->VAR31 >> 16;
        }
        VAR22 = FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR30, 0x3FFFFFFF);
    }
    else if (VAR24 < 0x4000000000000000ULL)
    {
        if (VAR15 && VAR24 <= (0x3FFFFFFFFFFFFFFFULL & VAR2->VAR32))
        {
            VAR22 = VAR2->VAR33->FUN4(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR22 = VAR34;
        }
    }
    else if (VAR24 < 0x8000000000000000ULL)
    {
        if ((VAR12 || VAR14) && VAR18 && VAR24 <= (0x7FFFFFFFFFFFFFFFULL & VAR2->VAR32))
        {
            VAR22 = VAR2->VAR33->FUN4(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR22 = VAR34;
        }
    }
    else if (VAR24 < 0xC000000000000000ULL)
    {
        if ((VAR24 & 0x07FFFFFFFFFFFFFFULL) <= VAR2->VAR35)
        {
            static const uint8_t VAR36[8] = {
                [VAR37] = (1u << VAR21),
                [VAR38] = (1u << VAR21),
                [VAR39] = (1u << VAR19),
                [VAR40] = (1u << VAR17),
                [VAR41] = (1u << VAR17),
                [VAR42] = (1u << VAR19),
                [6] = (1u << VAR21),
                [VAR43] = (1u << VAR17),
            };
            unsigned int VAR44 = VAR37;
            unsigned int VAR45 = (VAR2->VAR31 & VAR46) >> VAR47;
            if (VAR45 & (1 << ((VAR24 >> 59) & 0x7)))
            {
                VAR44 = (VAR2->VAR48 & VAR49) >> VAR50;
            }
            if (VAR2->VAR16 & VAR36[VAR44])
            {
                VAR22 = FUN5(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR44, false, VAR2->VAR35, 0);
            }
            else
            {
                VAR22 = VAR34;
            }
        }
        else
        {
            VAR22 = VAR34;
        }
    }
    else if (VAR24 < 0xFFFFFFFF80000000ULL)
    {
        if (VAR14 && VAR20 && VAR24 <= (0xFFFFFFFF7FFFFFFFULL & VAR2->VAR32))
        {
            VAR22 = VAR2->VAR33->FUN4(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        }
        else
        {
            VAR22 = VAR34;
        }
    }
    else if (VAR24 < (VAR51)VAR52)
    {
        VAR22 = FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR2->VAR48 >> 16, 0x1FFFFFFF);
    }
    else if (VAR24 < (VAR51)VAR29)
    {
        VAR22 = FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR2->VAR48, 0x1FFFFFFF);
    }
    else if (VAR24 < (VAR51)VAR53)
    {
        VAR22 = FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR2->VAR54 >> 16, 0x1FFFFFFF);
    }
    else
    {
        VAR22 = FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR2->VAR54, 0x1FFFFFFF);
    }
    return VAR22;
}