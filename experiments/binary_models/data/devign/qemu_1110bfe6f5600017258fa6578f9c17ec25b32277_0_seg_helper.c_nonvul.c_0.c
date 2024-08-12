static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, unsigned int VAR6, int VAR7)
{
    VAR8 *VAR9;
    target_ulong VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19;
    uint32_t VAR20, VAR21, VAR22, VAR23 = 0, VAR24, VAR25 = 0, VAR26 = 0;
    uint32_t VAR27, VAR28;
    int VAR29 = VAR2->VAR30 & VAR31;
    VAR17 = 0;
    if (!VAR4 && !VAR7)
    {
        VAR17 = FUN2(VAR3);
    }
    if (VAR4)
    {
        VAR27 = VAR6;
    }
    else
    {
        VAR27 = VAR2->VAR32;
    }
    VAR9 = &VAR2->VAR33;
    if (VAR3 * 8 + 7 > VAR9->VAR34)
    {
        FUN3(VAR2, VAR35, VAR3 * 8 + 2);
    }
    VAR10 = VAR9->VAR36 + VAR3 * 8;
    VAR20 = FUN4(VAR2, VAR10);
    VAR21 = FUN4(VAR2, VAR10 + 4);
    VAR12 = (VAR21 >> VAR37) & 0x1f;
    switch (VAR12)
    {
    case 5:
        if (!(VAR21 & VAR38))
        {
            FUN3(VAR2, VAR39, VAR3 * 8 + 2);
        }
        FUN5(VAR2, VAR3 * 8, VAR20, VAR21, VAR40, VAR27);
        if (VAR17)
        {
            int VAR12;
            uint32_t VAR41;
            VAR12 = (VAR2->VAR42.VAR43 >> VAR37) & 0xf;
            VAR19 = VAR12 >> 3;
            if (VAR2->VAR44[VAR45].VAR43 & VAR46)
            {
                VAR41 = 0xffffffff;
            }
            else
            {
                VAR41 = 0xffff;
            }
            VAR24 = (VAR2->VAR47[VAR48] - (2 << VAR19)) & VAR41;
            VAR11 = VAR2->VAR44[VAR45].VAR36 + VAR24;
            if (VAR19)
            {
                FUN6(VAR2, VAR11, VAR5);
            }
            else
            {
                FUN7(VAR2, VAR11, VAR5);
            }
            FUN8(VAR24, VAR41);
        }
        return;
    case 6:
    case 7:
    case 14:
    case 15:
        break;
    default:
        FUN3(VAR2, VAR35, VAR3 * 8 + 2);
        break;
    }
    VAR13 = (VAR21 >> VAR49) & 3;
    VAR16 = VAR2->VAR50 & VAR51;
    if (VAR4 && VAR13 < VAR16)
    {
        FUN3(VAR2, VAR35, VAR3 * 8 + 2);
    }
    if (!(VAR21 & VAR38))
    {
        FUN3(VAR2, VAR39, VAR3 * 8 + 2);
    }
    VAR14 = VAR20 >> 16;
    VAR22 = (VAR21 & 0xffff0000) | (VAR20 & 0x0000ffff);
    if ((VAR14 & 0xfffc) == 0)
    {
        FUN3(VAR2, VAR35, 0);
    }
    if (FUN9(VAR2, &VAR20, &VAR21, VAR14) != 0)
    {
        FUN3(VAR2, VAR35, VAR14 & 0xfffc);
    }
    if (!(VAR21 & VAR52) || !(VAR21 & (VAR53)))
    {
        FUN3(VAR2, VAR35, VAR14 & 0xfffc);
    }
    VAR13 = (VAR21 >> VAR49) & 3;
    if (VAR13 > VAR16)
    {
        FUN3(VAR2, VAR35, VAR14 & 0xfffc);
    }
    if (!(VAR21 & VAR38))
    {
        FUN3(VAR2, VAR39, VAR14 & 0xfffc);
    }
    if (VAR21 & VAR54)
    {
        VAR13 = VAR16;
    }
    if (VAR13 < VAR16)
    {
        FUN10(VAR2, &VAR23, &VAR24, VAR13, 0);
        if ((VAR23 & 0xfffc) == 0)
        {
            FUN3(VAR2, VAR55, VAR23 & 0xfffc);
        }
        if ((VAR23 & 3) != VAR13)
        {
            FUN3(VAR2, VAR55, VAR23 & 0xfffc);
        }
        if (FUN9(VAR2, &VAR25, &VAR26, VAR23) != 0)
        {
            FUN3(VAR2, VAR55, VAR23 & 0xfffc);
        }
        VAR15 = (VAR26 >> VAR49) & 3;
        if (VAR15 != VAR13)
        {
            FUN3(VAR2, VAR55, VAR23 & 0xfffc);
        }
        if (!(VAR26 & VAR52) || (VAR26 & VAR53) || !(VAR26 & VAR56))
        {
            FUN3(VAR2, VAR55, VAR23 & 0xfffc);
        }
        if (!(VAR26 & VAR38))
        {
            FUN3(VAR2, VAR55, VAR23 & 0xfffc);
        }
        VAR18 = 1;
        VAR28 = FUN11(VAR26);
        VAR11 = FUN12(VAR25, VAR26);
    }
    else
    {
        if (VAR29)
        {
            FUN3(VAR2, VAR35, VAR14 & 0xfffc);
        }
        VAR18 = 0;
        VAR28 = FUN11(VAR2->VAR44[VAR45].VAR43);
        VAR11 = VAR2->VAR44[VAR45].VAR36;
        VAR24 = VAR2->VAR47[VAR48];
    }
    VAR19 = VAR12 >> 3;
    VAR57 = 6 + (VAR18 << 2) + (VAR17 << 1);
    if (VAR29)
    {
        VAR57 += 8;
    }
    VAR57 <<= VAR19;
    if (VAR19 == 1)
    {
        if (VAR18)
        {
            if (VAR29)
            {
                FUN13(VAR11, VAR24, VAR28, VAR2->VAR44[VAR58].VAR14);
                FUN13(VAR11, VAR24, VAR28, VAR2->VAR44[VAR59].VAR14);
                FUN13(VAR11, VAR24, VAR28, VAR2->VAR44[VAR60].VAR14);
                FUN13(VAR11, VAR24, VAR28, VAR2->VAR44[VAR61].VAR14);
            }
            FUN13(VAR11, VAR24, VAR28, VAR2->VAR44[VAR45].VAR14);
            FUN13(VAR11, VAR24, VAR28, VAR2->VAR47[VAR48]);
        }
        FUN13(VAR11, VAR24, VAR28, FUN14(VAR2));
        FUN13(VAR11, VAR24, VAR28, VAR2->VAR44[VAR62].VAR14);
        FUN13(VAR11, VAR24, VAR28, VAR27);
        if (VAR17)
        {
            FUN13(VAR11, VAR24, VAR28, VAR5);
        }
    }
    else
    {
        if (VAR18)
        {
            if (VAR29)
            {
                FUN15(VAR11, VAR24, VAR28, VAR2->VAR44[VAR58].VAR14);
                FUN15(VAR11, VAR24, VAR28, VAR2->VAR44[VAR59].VAR14);
                FUN15(VAR11, VAR24, VAR28, VAR2->VAR44[VAR60].VAR14);
                FUN15(VAR11, VAR24, VAR28, VAR2->VAR44[VAR61].VAR14);
            }
            FUN15(VAR11, VAR24, VAR28, VAR2->VAR44[VAR45].VAR14);
            FUN15(VAR11, VAR24, VAR28, VAR2->VAR47[VAR48]);
        }
        FUN15(VAR11, VAR24, VAR28, FUN14(VAR2));
        FUN15(VAR11, VAR24, VAR28, VAR2->VAR44[VAR62].VAR14);
        FUN15(VAR11, VAR24, VAR28, VAR27);
        if (VAR17)
        {
            FUN15(VAR11, VAR24, VAR28, VAR5);
        }
    }
    if ((VAR12 & 1) == 0)
    {
        VAR2->VAR30 &= ~VAR63;
    }
    VAR2->VAR30 &= ~(VAR64 | VAR31 | VAR65 | VAR66);
    if (VAR18)
    {
        if (VAR29)
        {
            FUN16(VAR2, VAR61, 0, 0, 0, 0);
            FUN16(VAR2, VAR60, 0, 0, 0, 0);
            FUN16(VAR2, VAR59, 0, 0, 0, 0);
            FUN16(VAR2, VAR58, 0, 0, 0, 0);
        }
        VAR23 = (VAR23 & ~3) | VAR13;
        FUN16(VAR2, VAR45, VAR23, VAR11, FUN17(VAR25, VAR26), VAR26);
    }
    FUN8(VAR24, VAR28);
    VAR14 = (VAR14 & ~3) | VAR13;
    FUN16(VAR2, VAR62, VAR14, FUN12(VAR20, VAR21), FUN17(VAR20, VAR21), VAR21);
    VAR2->VAR32 = VAR22;
}