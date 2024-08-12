static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    uint32_t VAR6, VAR7, VAR8;
    uint32_t VAR9, VAR10, VAR11, VAR12;
    uint32_t VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21;
    target_ulong VAR22, VAR23, VAR24, VAR25, VAR26;
    if (VAR3 == 2)
    {
        VAR26 = -1;
    }
    else
    {
        VAR26 = FUN2(VAR2->VAR27[VAR28].VAR29);
    }
    VAR23 = VAR2->VAR30[VAR31];
    VAR22 = VAR2->VAR27[VAR28].VAR32;
    VAR7 = 0;
    if (VAR3 == 2)
    {
        FUN3(VAR23, VAR24);
        FUN3(VAR23, VAR6);
        VAR6 &= 0xffff;
        if (VAR4)
        {
            FUN3(VAR23, VAR7);
        }
    }
    else
    {
        if (VAR3 == 1)
        {
            FUN4(VAR22, VAR23, VAR26, VAR24);
            FUN4(VAR22, VAR23, VAR26, VAR6);
            VAR6 &= 0xffff;
            if (VAR4)
            {
                FUN4(VAR22, VAR23, VAR26, VAR7);
                if (VAR7 & VAR33)
                {
                    goto VAR34;
                }
            }
        }
        else
        {
            FUN5(VAR22, VAR23, VAR26, VAR24);
            FUN5(VAR22, VAR23, VAR26, VAR6);
            if (VAR4)
            {
                FUN5(VAR22, VAR23, VAR26, VAR7);
            }
        }
    }
    FUN6("" VAR35 "", VAR6, VAR24, VAR3, VAR5);
    FUN7(FUN8(FUN9(VAR2)));
    if ((VAR6 & 0xfffc) == 0)
    {
        FUN10(VAR2, VAR36, VAR6 & 0xfffc);
    }
    if (FUN11(VAR2, &VAR13, &VAR14, VAR6) != 0)
    {
        FUN10(VAR2, VAR36, VAR6 & 0xfffc);
    }
    if (!(VAR14 & VAR37) || !(VAR14 & VAR38))
    {
        FUN10(VAR2, VAR36, VAR6 & 0xfffc);
    }
    VAR17 = VAR2->VAR39 & VAR40;
    VAR19 = VAR6 & 3;
    if (VAR19 < VAR17)
    {
        FUN10(VAR2, VAR36, VAR6 & 0xfffc);
    }
    VAR18 = (VAR14 >> VAR41) & 3;
    if (VAR14 & VAR42)
    {
        if (VAR18 > VAR19)
        {
            FUN10(VAR2, VAR36, VAR6 & 0xfffc);
        }
    }
    else
    {
        if (VAR18 != VAR19)
        {
            FUN10(VAR2, VAR36, VAR6 & 0xfffc);
        }
    }
    if (!(VAR14 & VAR43))
    {
        FUN10(VAR2, VAR44, VAR6 & 0xfffc);
    }
    VAR23 += VAR5;
    if (VAR19 == VAR17 && (!(VAR2->VAR39 & VAR45) || ((VAR2->VAR39 & VAR45) && !VAR4)))
    {
        FUN12(VAR2, VAR46, VAR6, FUN13(VAR13, VAR14), FUN14(VAR13, VAR14), VAR14);
    }
    else
    {
        if (VAR3 == 2)
        {
            FUN3(VAR23, VAR25);
            FUN3(VAR23, VAR8);
            VAR8 &= 0xffff;
        }
        else
        {
            if (VAR3 == 1)
            {
                FUN4(VAR22, VAR23, VAR26, VAR25);
                FUN4(VAR22, VAR23, VAR26, VAR8);
                VAR8 &= 0xffff;
            }
            else
            {
                FUN5(VAR22, VAR23, VAR26, VAR25);
                FUN5(VAR22, VAR23, VAR26, VAR8);
            }
        }
        FUN6("" VAR35 "", VAR8, VAR25);
        if ((VAR8 & 0xfffc) == 0)
        {
            if ((VAR2->VAR39 & VAR47) && VAR19 != 3)
            {
                FUN12(VAR2, VAR28, VAR8, 0, 0xffffffff, VAR48 | VAR49 | VAR43 | VAR37 | (VAR19 << VAR41) | VAR50 | VAR51);
                VAR16 = VAR49;
            }
            else
            {
                FUN10(VAR2, VAR36, 0);
            }
        }
        else
        {
            if ((VAR8 & 3) != VAR19)
            {
                FUN10(VAR2, VAR36, VAR8 & 0xfffc);
            }
            if (FUN11(VAR2, &VAR15, &VAR16, VAR8) != 0)
            {
                FUN10(VAR2, VAR36, VAR8 & 0xfffc);
            }
            if (!(VAR16 & VAR37) || (VAR16 & VAR38) || !(VAR16 & VAR50))
            {
                FUN10(VAR2, VAR36, VAR8 & 0xfffc);
            }
            VAR18 = (VAR16 >> VAR41) & 3;
            if (VAR18 != VAR19)
            {
                FUN10(VAR2, VAR36, VAR8 & 0xfffc);
            }
            if (!(VAR16 & VAR43))
            {
                FUN10(VAR2, VAR44, VAR8 & 0xfffc);
            }
            FUN12(VAR2, VAR28, VAR8, FUN13(VAR15, VAR16), FUN14(VAR15, VAR16), VAR16);
        }
        FUN12(VAR2, VAR46, VAR6, FUN13(VAR13, VAR14), FUN14(VAR13, VAR14), VAR14);
        VAR23 = VAR25;
        if (VAR2->VAR39 & VAR45)
        {
            VAR26 = -1;
        }
        else
        {
            VAR26 = FUN2(VAR16);
        }
        FUN15(VAR2, VAR52, VAR19);
        FUN15(VAR2, VAR53, VAR19);
        FUN15(VAR2, VAR54, VAR19);
        FUN15(VAR2, VAR55, VAR19);
        VAR23 += VAR5;
    }
    FUN16(VAR23, VAR26);
    VAR2->VAR56 = VAR24;
    if (VAR4)
    {
        VAR20 = VAR57 | VAR58 | VAR59 | VAR60 | VAR61;
        if (VAR17 == 0)
        {
            VAR20 |= VAR62;
        }
        VAR21 = (VAR2->VAR63 >> VAR64) & 3;
        if (VAR17 <= VAR21)
        {
            VAR20 |= VAR65;
        }
        if (VAR3 == 0)
        {
            VAR20 &= 0xffff;
        }
        FUN17(VAR2, VAR7, VAR20);
    }
    return;
VAR34:
    FUN4(VAR22, VAR23, VAR26, VAR25);
    FUN4(VAR22, VAR23, VAR26, VAR8);
    FUN4(VAR22, VAR23, VAR26, VAR9);
    FUN4(VAR22, VAR23, VAR26, VAR10);
    FUN4(VAR22, VAR23, VAR26, VAR11);
    FUN4(VAR22, VAR23, VAR26, VAR12);
    FUN17(VAR2, VAR7, VAR57 | VAR58 | VAR59 | VAR65 | VAR62 | VAR33 | VAR61 | VAR66 | VAR67);
    FUN18(VAR2, VAR46, VAR6 & 0xffff);
    FUN18(VAR2, VAR28, VAR8 & 0xffff);
    FUN18(VAR2, VAR52, VAR9 & 0xffff);
    FUN18(VAR2, VAR53, VAR10 & 0xffff);
    FUN18(VAR2, VAR54, VAR11 & 0xffff);
    FUN18(VAR2, VAR55, VAR12 & 0xffff);
    VAR2->VAR56 = VAR24 & 0xffff;
    VAR2->VAR30[VAR31] = VAR25;
}